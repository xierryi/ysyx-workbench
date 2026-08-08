#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <math.h>

int pmem[655350]; 

// #define EBREAK_ADDR 0x224 //sum.bin
#define EBREAK_ADDR 0x1218 //mem.bin

void Load_Memory()
{
    FILE *file = fopen("bin/mem.bin", "rb");
    if(file == NULL)
    {
        printf("Error opening memory initialization file.\n");
        exit(1);
    }

    uint32_t address = 0;
    int32_t value;
    size_t bytes_read;

    // 假设文件包含连续的32位值
    while(fread(&value, sizeof(int32_t), 1, file) == 1 && address < sizeof(pmem))
    {
        pmem[address/4] = value;
        address += 4;  // 每次读取4字节，地址增加4
    }
    fclose(file);
   //在内存中设置EBREAK指令 
    pmem[EBREAK_ADDR/4] = 0x100073; // 在内存中设置EBREAK指令
}

// npc trap supported by DPI-C 
void npc_trap(int pc) { 
  printf("[DPI-C] ebreak encountered at PC: 0x%x\n", pc);
  Verilated::gotFinish(true);
}


int pmem_read(int raddr) {
  // Address alignment
  // return pmem[raddr & ~0x3];
  return pmem[raddr >> 2]; // avoid any shift in RTL
}

void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  unsigned wmask_buf = wmask;
  unsigned char wmask_byte[4];
  /* hex to binary */
  wmask_byte[3] = (wmask_buf / 8) * 0xFF; wmask_buf = wmask_buf % 8;
  wmask_byte[2] = (wmask_buf / 4) * 0xFF; wmask_buf = wmask_buf % 4;
  wmask_byte[1] = (wmask_buf / 2) * 0xFF; wmask_buf = wmask_buf % 2;
  wmask_byte[0] = (wmask_buf)     * 0xFF;

  /* get bit mask */
  int wmask_4byte = (wmask_byte[3] << 24) + (wmask_byte[2] << 16) + (wmask_byte[1] << 8) + wmask_byte[0]; 
  char one_pos = log2(wmask & -wmask);
  pmem[waddr >> 2] = (pmem[waddr >> 2] & ~wmask_4byte) | ((wdata << one_pos * 8) & wmask_4byte);
  
  // printf("one_pos: %d\n", one_pos);
  // printf("pmem[%d]:%x\n",waddr, pmem[waddr >> 2]);
  // printf("wmask: %x, wmask_4byte:%x\n",wmask,wmask_4byte);
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

  Load_Memory();

  top->wen_pc = 1;

  while(!contextp->gotFinish())
  {
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;
  return 0;
}
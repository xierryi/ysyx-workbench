#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <math.h>

// npc trap supported by DPI-C 
void npc_trap(int pc) { 
  printf("[DPI-C] ebreak encountered at PC: 0x%x\n", pc);
  Verilated::gotFinish(true);
}

__uint32_t pmem[65535] = {
  // 0x01400513, // addi	a0,zero,20
  // 0x010000e7, // jalr	ra,16(zero) # 10 <fun>
  // 0x00c000e7, // jalr	ra,12(zero) # c <halt>
  // 0x00100073, // ebreak jalr	zero,12(zero) # c <halt>
  // 0x00a50533, // add a0, a0, a0
  // 0xfff50513, // addi a0, a0, -1
  // 0x00002537, // lui a0, 2 << 12
  // 0xfff50513, // addi a0, a0, -1
  // 0x00008067, // jalr	zero,0(ra)
  0x04402083, // lw x1, 0x44(x0)
  0x04404103, // lbu x2, 0x44(x0) 
  0x04504183, // lbu x3, 0x45(x0)
  0x04604203, // lbu x4, 0x46(x0)
  0x04704283, // lbu x5, 0x47(x0)
  0x00008013, // addi x0, 0(x1)
  0x00010013, // addi x0, 0(x2)
  0x00018013, // addi x0, 0(x3)
  0x00020013, // addi x0, 0(x4)
  0x00028013, // addi x0, 0(x5)
  0x00002023, // sw x0,  0(x0)
  0x00102023, // sw x1,  0(x0)
  0x00200223, // sb x2,  4(x0)
  0x003002a3, // sb x3,  5(x0) 
  0x00400323, // sb x4,  6(x0)
  0x005003a3, // sb x5,  7(x0)
  0x00100073, // ebreak
  0x12345678,
};

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
  
  printf("one_pos: %d\n", one_pos);
  printf("pmem[%d]:%x\n",waddr, pmem[waddr >> 2]);
  printf("wmask: %x, wmask_4byte:%x\n",wmask,wmask_4byte);
}

// int pmem_read(int raddr) {
//   // Address alignment
//   return pmem[raddr];
// }
// int main() {
//   while(1) {
//     ysyx_20260173_top->inst = pmem_read(ysyx_20260173_top->pc);
//     ysyx_20260173_top->eval();
//   }
//   printf("Hello, ysyx!\n");
//   return 0;
// }

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

  top->wen_pc = 1;
  // while(!contextp->gotFinish()) {
  //   top->inst = pmem_read(top->pc / 4);
  //   top->clk = ~top->clk;
  //   top->eval();
  // }

  while(!contextp->gotFinish())
  // for (int i = 0; i < 20; i++)
  {
    // top->inst = pmem_read(top->pc / 4);
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;
  return 0;
}
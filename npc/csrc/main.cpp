#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <math.h>

#define CONFIG_MBASE 0x80000000
#define RESET_VECTOR 0x80000000

uint32_t pmem[655350];
// {
//   0x00000413,
//   0x80009137,
//   0x00010113,
//   0x800000b7,
//   0x02008093,
//   0x000080e7,
//   0x00000513,
//   0x00008067,
//   0x80000537,
//   0x04850513,
//   0x00112423,
//   0x800000b7,
//   0x01808093,
//   0x000080e7,
//   0x80000237,
//   0x03c20213,
//   0x00020067,
// }; 
// {
//    0x04402083, // lw x1, 0x44(x0)
//   0x04404103, // lbu x2, 0x44(x0) 
//   0x04504183, // lbu x3, 0x45(x0)
//   0x04604203, // lbu x4, 0x46(x0)
//   0x04704283, // lbu x5, 0x47(x0)
//   0x00008013, // addi x0, 0(x1)
//   0x00010013, // addi x0, 0(x2)
//   0x00018013, // addi x0, 0(x3)
//   0x00020013, // addi x0, 0(x4)
//   0x00028013, // addi x0, 0(x5)
//   0x00002023, // sw x0,  0(x0)
//   0x00102023, // sw x1,  0(x0)
//   0x00200223, // sb x2,  4(x0)
//   0x003002a3, // sb x3,  5(x0) 
//   0x00400323, // sb x4,  6(x0)
//   0x005003a3, // sb x5,  7(x0)
//   0x00100073, // ebreak
//   0x12345678,
// };

static char *img_file = NULL;

void load_img(int argc, char** argv) {
  img_file = argv[1];
  if(img_file == NULL) {
    printf("Error loading img 1.\n");
  }
  FILE *fp = fopen(img_file, "rb");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  
  if(fp) printf("The image is %s, size = %ld", img_file, size);
  else printf("Error loading img.\n");

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 4, fp);

  fclose(fp);
}

/* DPI-C module */
// ebreak implement
#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define RESET "\033[0m"
void npc_trap(int pc, int halt_ret) { 
  printf("\n" BOLD BLUE "npc: " RESET);
  switch (halt_ret)
  {
    case 0: printf(BOLD GREEN "HIT GOOD TRAP" RESET); break;
    case 1: printf(BOLD RED "HIT BAD TRAP" RESET); break;
  }
  printf(" at pc = 0x%.8x\n", pc);
  Verilated::gotFinish(true);
}

// load inst api
int pmem_read(int raddr) {
  // Address alignment
  // return pmem[raddr & ~0x3];
  // printf("raddr:%x, (raddr - CONFIG_MBASE) >> 2:%x\n",raddr,(raddr - CONFIG_MBASE) >> 2);
  return pmem[(raddr - CONFIG_MBASE) >> 2]; // avoid any shift in RTL
}

// store inst api
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
  // printf("waddr:%x\twaddr - CONFIG_MBASE:%x\n", waddr, waddr - CONFIG_MBASE);
  pmem[(waddr - CONFIG_MBASE) >> 2] = (pmem[(waddr - CONFIG_MBASE) >> 2] & ~wmask_4byte) | ((wdata << one_pos * 8) & wmask_4byte);
  
  // printf("one_pos: %d\n", one_pos);
  // printf("pmem[%d]:%x\n",waddr, pmem[waddr >> 2]);
  // printf("wmask: %x, wmask_4byte:%x\n",wmask,wmask_4byte);
}

void system_init(Vtop* top){
  top->clk = 0;
  top->rst_pc = 0;
  top->d_init_pc = CONFIG_MBASE;
  top->eval();
  top->rst_pc = 1;
  top->eval();
  top->rst_pc = 0;
  top->wen_pc = 1;
  top->eval();
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

  printf("file_img:%s\n",argv[1]);

  load_img(argc, argv);

  system_init(top);
  while(!contextp->gotFinish())
  // for(int i=0; i < 40; i ++)
  {
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;



  return 0;
}
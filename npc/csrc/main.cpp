#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include <math.h>
#include <sys/time.h>

#define CONFIG_MBASE 0x80000000
#define RESET_VECTOR 0x80000000

#define SERIAL_ADDR 0x10000000U
#define RTC_ADDR    0x10000048U

uint32_t pmem[6553500];

static char *img_file = NULL;

void load_img(int argc, char** argv) {
  img_file = argv[1];
  if(img_file == NULL) {
    printf("Error loading img 1.\n");
  }
  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) {
    printf("Error: Cannot open file %s\n", img_file);
    return;
  }
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

  /* us Get */
  if(raddr == RTC_ADDR || raddr == (RTC_ADDR + 4)) {
    struct timeval now;
    gettimeofday(&now, NULL); 

    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
    if(raddr == RTC_ADDR) return (uint32_t)us;
    if(raddr == RTC_ADDR + 4) return  (uint32_t)(us >> 32);
  }
  return pmem[(raddr - CONFIG_MBASE) >> 2]; // avoid any shift in RTL
}
// store inst api
void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变

  /* SERIAL PART */
  static int call_count_2 = 0; // call_count_2 is strange!! TO FIX ME
  if(waddr == SERIAL_ADDR) 
  { 
    if(call_count_2 > 1) call_count_2 = 0; 
    else call_count_2 ++;
    // printf("call_count:%d\n",call_count);
    if(!call_count_2)
    putchar(wdata);   
    return;
  }

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
#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"

// npc trap supported by DPI-C 
void npc_trap(int pc) { 
  printf("[DPI-C] ebreak encountered at PC: 0x%x\n", pc);
  Verilated::gotFinish(true);
}

__uint32_t pmem[] = {
  0x01400513,
  0x010000e7,
  0x00c000e7,
  0x00100073, // ebreak
  0x00a50513,
  0x00008067,
};

__uint32_t pmem_read(int pc) {
  return pmem[pc];
}
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
    top->inst = pmem_read(top->pc / 4);
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;
  return 0;
}
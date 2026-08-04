#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"

__uint32_t pmem[] = {
  0x01400513,
  0x010000e7,
  0x00c000e7,
  0x00c00067,
  0x00a50513,
  0x00008067,
};

__uint32_t pmem_read(__uint32_t pc) {
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
  for (int i = 0; i < 40; i++)
  {
    top->inst = pmem_read(top->pc / 4);
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;
  return 0;
}
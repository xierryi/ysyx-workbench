#include <stdio.h>
#include "Vtop.h"
#include "verilated.h"

__uint32_t pmem[] = {
  0x00100093, // ADDI x1, x0, 1
  0x00208113, // ADDI x2, x1, 2
  0x00310193, // ADDI x3, x2, 3
  0xfff18213, // ADDI x4, x3, -1
  0xffe20213, // ADDI x4, x4, -2
  0x00120013, // ADDI x0, x4, 1
  0x00100093, // ADDI x1, x0, 1
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
  for (int i = 0; i < 20; i++)
  {
    top->inst = pmem_read(top->pc / 4);
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;
  return 0;
}
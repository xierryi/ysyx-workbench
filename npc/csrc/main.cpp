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
  0x01400513, // addi	a0,zero,20
  0x010000e7, // jalr	ra,16(zero) # 10 <fun>
  0x00c000e7, // jalr	ra,12(zero) # c <halt>
  0x00100073, // ebreak jalr	zero,12(zero) # c <halt>
  0x00a50533, // add a0, a0, a0
  0xfff50513, // addi a0, a0, -1
  0x00002537, // lui a0, 2 << 12
  0xfff50513, // addi a0, a0, -1
  0x00008067, // jalr	zero,0(ra)
};

int pmem_read(int raddr) {
  // Address alignment
  return pmem[raddr & ~0x3];
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
    top->inst = pmem_read(top->pc / 4);
    top->clk = ~top->clk;
    top->eval();
  }
  delete top;
  delete contextp;
  return 0;
}
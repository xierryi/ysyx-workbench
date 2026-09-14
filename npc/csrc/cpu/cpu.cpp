#include <stdio.h>
#include "verilated.h"
#include "Vtop.h"
#include "svdpi.h"
#include "Vtop__Dpi.h"
#include "cpu.h"
#include "../memory/mem.h"

#define BOLD  "\033[1m"
#define RED   "\033[31m"
#define GREEN "\033[32m"
#define BLUE  "\033[34m"
#define RESET "\033[0m"


VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};

NPCState npc_state = {.state = NPC_STOP};
CPU cpu;

void system_init(int argc, char **argv) {
    contextp->commandArgs(argc, argv);
}

extern "C" void npc_trap(int pc, int halt_ret) { 
  npc_state.halt_ret = halt_ret;
  npc_state.state = NPC_END;
  npc_state.halt_pc = pc;
  Verilated::gotFinish(true);
}

extern "C" void cpu_get_pc(int pc) {
  cpu.pc = pc;
}

void cpu_init(){
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

void exec_once() {
  top->clk = ~top->clk;
  top->eval();
  top->clk = ~top->clk;
  top->eval();
}

bool g_print_step = false;

void cpu_exec(int n) {
  unsigned int n_U = (unsigned int) n;
  g_print_step = (n_U < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END:
      printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
      return;
    default: npc_state.state = NPC_RUNNING;
  }
  for (int i = 0; i < n_U; i++)
  {
    exec_once();
    if(npc_state.state != NPC_RUNNING) break;
  }

  switch (npc_state.state) {
    case NPC_RUNNING: npc_state.state = NPC_STOP; break;

    case NPC_END: 
      printf("\n" BOLD BLUE "npc: " RESET);
      switch (npc_state.halt_ret)
      {
        case 0: printf(BOLD GREEN "HIT GOOD TRAP" RESET); break;
        case 1: printf(BOLD RED "HIT BAD TRAP" RESET); break;
      }
      printf(" at pc = 0x%.8x\n", npc_state.halt_pc);
  }
}

void system_free() {
  delete top;
  delete contextp;
}

int system_isGoodret() {
  return (npc_state.halt_ret == 0) ? 0 : 1;
}
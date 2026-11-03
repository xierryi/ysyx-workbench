#include <stdio.h>
#include "verilated.h"
#include "verilated_fst_c.h"
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
// static Vtop* top; 

#ifdef CONFIG_WAVEFORM
  VerilatedFstC* tfp = new VerilatedFstC;
#endif 

NPCState npc_state = {.state = NPC_STOP};
CPU_state cpu;

void system_init(int argc, char **argv) {
  contextp->commandArgs(argc, argv);

#ifdef CONFIG_WAVEFORM
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	Verilated::mkdir("tracing_logs");
	tfp->open("tracing_logs/dump.fst");
#endif
}

extern "C" void npc_trap(int pc, int halt_ret) { 
  npc_state.halt_ret = halt_ret;
  npc_state.state = NPC_END;
  npc_state.halt_pc = pc;
  Verilated::gotFinish(true);
}

extern "C" void cpu_get_pc(int pc) {
  // printf("pcpc:0x%08x\n",pc);
  cpu.pc = pc;
}

void step() {
  top->eval();
  #ifdef CONFIG_WAVEFORM
  contextp->timeInc(1);
	tfp->dump(contextp->time());
  #endif
}

void cpu_init(){
  top->clk = 0;
  top->rst_pc = 0;
  top->d_init_pc = CONFIG_MBASE;
  step();

  top->rst_pc = 1;
  step();

  top->rst_pc = 0;
  step();
}

void exec_once() {
  top->clk = 1;
  step();
  top->clk = 0;
  step();
}

bool g_print_step = false;

void cpu_exec(int n) {
  unsigned int n_U = (unsigned int) n;
  g_print_step = (n_U < MAX_INST_TO_PRINT);
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT:
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
      break;
    case NPC_ABORT:
      printf(BOLD BLUE "npc: " RESET);
      printf(BOLD RED "HIT BAD TRAP" RESET); 
      printf(" at pc = 0x%.8x\n", npc_state.halt_pc);
      break;
  }
}

void system_free() {
#ifdef CONFIG_WAVEFORM
	tfp->close();
  delete tfp;
#endif
  delete top;
  delete contextp;
}

int system_isGoodret() {
  return (npc_state.state == NPC_END && npc_state.halt_ret == 0) ? 0 : 1;
}
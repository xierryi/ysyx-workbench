#ifndef __CPU_H__
#define __CPU_H__

#include "Vtop.h"

#define MAX_INST_TO_PRINT 10

enum {
  NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT
};

typedef struct
{
    int state;
    int halt_ret;
    int halt_pc;
} NPCState;

extern NPCState npc_state;

typedef struct
{
    int pc;
    int gpr[16];

} CPU_state;

extern CPU_state cpu;

void cpu_exec(int n);
extern "C" void npc_trap(int pc, int halt_ret);  
extern "C" void cpu_get_pc(int pc); 
void system_init(int argc, char **argv);
void cpu_init();
void system_free();
int system_isGoodret(); 

extern bool g_print_step;

#ifdef __cplusplus
extern "C" {
#endif
void npc_trap(int pc, int halt_ret); 
#ifdef __cplusplus
}
#endif

#endif

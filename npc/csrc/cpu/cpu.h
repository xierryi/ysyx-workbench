#ifndef __CPU_H__
#define __CPU_H__

#include "Vtop.h"

#define MAX_INST_TO_PRINT 10

enum {
  NPC_RUNNING, NPC_STOP, NPC_END
};

typedef struct
{
    int state;
    int halt_ret;
    int halt_pc;
} NPCState;

void cpu_exec(int n);
extern "C" void npc_trap(int pc, int halt_ret);  
void system_init(int argc, char **argv);
void cpu_init();
void system_free();
int system_isGoodret(); 

#ifdef __cplusplus
extern "C" {
#endif
void npc_trap(int pc, int halt_ret); 
#ifdef __cplusplus
}
#endif

#endif

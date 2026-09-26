// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_IFU.v:26:30
    extern void cpu_get_pc(int pc);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_PCRegister.v:11:34
    extern void difftest_step(int pc, int npc);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_IDU.v:91:30
    extern void ftrace_get_addr(int inst_addr, int func_addr, char rs1, char rd, int imm);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_EXU.v:141:30
    extern void npc_trap(int pc, int halt_ret);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_RegisterFile.v:31:30
    extern void reg_get_val(int idx, int val);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_IFU.v:21:29
    extern int vaddr_ifetch(int raddr, int len);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_LSU.v:36:29
    extern int vaddr_read(int raddr, int len);
    // DPI import at /home/xierry/ysyx-workbench/npc/vsrc/ysyx_26060173_LSU.v:37:30
    extern void vaddr_write(int waddr, int wdata, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard

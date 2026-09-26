// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" void reg_get_val(int idx, int val);

void Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP(IData/*31:0*/ idx, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP\n"); );
    // Body
    int idx__Vcvt;
    idx__Vcvt = idx;
    int val__Vcvt;
    val__Vcvt = val;
    reg_get_val(idx__Vcvt, val__Vcvt);
}

extern "C" int vaddr_ifetch(int raddr, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__vaddr_ifetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &vaddr_ifetch__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__vaddr_ifetch_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int len__Vcvt;
    len__Vcvt = len;
    int vaddr_ifetch__Vfuncrtn__Vcvt;
    vaddr_ifetch__Vfuncrtn__Vcvt = vaddr_ifetch(raddr__Vcvt, len__Vcvt);
    vaddr_ifetch__Vfuncrtn = (vaddr_ifetch__Vfuncrtn__Vcvt);
}

extern "C" void cpu_get_pc(int pc);

void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__cpu_get_pc_TOP(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__cpu_get_pc_TOP\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    cpu_get_pc(pc__Vcvt);
}

extern "C" void difftest_step(int pc, int npc);

void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__u0__DOT__difftest_step_TOP(IData/*31:0*/ pc, IData/*31:0*/ npc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__u0__DOT__difftest_step_TOP\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int npc__Vcvt;
    npc__Vcvt = npc;
    difftest_step(pc__Vcvt, npc__Vcvt);
}

extern "C" void ftrace_get_addr(int inst_addr, int func_addr, char rs1, char rd, int imm);

void Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP(IData/*31:0*/ inst_addr, IData/*31:0*/ func_addr, CData/*7:0*/ rs1, CData/*7:0*/ rd, IData/*31:0*/ imm) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP\n"); );
    // Body
    int inst_addr__Vcvt;
    inst_addr__Vcvt = inst_addr;
    int func_addr__Vcvt;
    func_addr__Vcvt = func_addr;
    char rs1__Vcvt;
    rs1__Vcvt = rs1;
    char rd__Vcvt;
    rd__Vcvt = rd;
    int imm__Vcvt;
    imm__Vcvt = imm;
    ftrace_get_addr(inst_addr__Vcvt, func_addr__Vcvt, rs1__Vcvt, rd__Vcvt, imm__Vcvt);
}

extern "C" void npc_trap(int pc, int halt_ret);

void Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int halt_ret__Vcvt;
    halt_ret__Vcvt = halt_ret;
    npc_trap(pc__Vcvt, halt_ret__Vcvt);
}

extern "C" int vaddr_read(int raddr, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &vaddr_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int len__Vcvt;
    len__Vcvt = len;
    int vaddr_read__Vfuncrtn__Vcvt;
    vaddr_read__Vfuncrtn__Vcvt = vaddr_read(raddr__Vcvt, len__Vcvt);
    vaddr_read__Vfuncrtn = (vaddr_read__Vfuncrtn__Vcvt);
}

extern "C" void vaddr_write(int waddr, int wdata, int len);

void Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    int len__Vcvt;
    len__Vcvt = len;
    vaddr_write(waddr__Vcvt, wdata__Vcvt, len__Vcvt);
}

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.wen_pc) {
        Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__vaddr_ifetch_TOP(vlSelfRef.top__DOT__pc, 4U, vlSelfRef.top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch);
        vlSelfRef.top__DOT__u1__DOT____VlemCond_1 = vlSelfRef.top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch;
    } else {
        vlSelfRef.top__DOT__u1__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.top__DOT__inst = vlSelfRef.top__DOT__u1__DOT____VlemCond_1;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[1U] 
        = (0x0000001fU & (vlSelfRef.top__DOT__inst 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit 
        = ((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit) 
           | ((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (0x0000000100000000ULL 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0x00000014U))])));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__R_wen = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__RegIn = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_rlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out 
        = (((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICfunct3 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__isB_type = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit) 
                                    && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__M_ren = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__M_wen = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__ALUIn2Sel = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit) 
                                     && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1U] 
        = (0x0000001fU & (vlSelfRef.top__DOT__inst 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__ALUIn1Sel = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit) 
                                     && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__EandCSR = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit) 
                                            && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = (0x00000033U | (0xffffff80U & (((- (IData)(
                                                     (vlSelfRef.top__DOT__inst 
                                                      >> 0x0000001fU))) 
                                          << 0x00000013U) 
                                         | (0x0007ff80U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000dU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xffffff80U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0x0000007fU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                         >> 0x0000001fU))) 
                             >> 0x0000000dU)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xfc00007fU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0xffffff80U & (0x00000980U | (((0x0007f000U 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0x0000000dU)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.top__DOT__inst)) 
                                            << 7U))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x03ffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x0000001aU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffe00000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0x03ffffffU & (0x0008c000U | (0x00003fffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 6U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0xffe00000U & (vlSelfRef.top__DOT__inst 
                             << 1U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0xffe00000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0x001fffffU & ((0x001ffffeU & ((- (IData)(
                                                        (vlSelfRef.top__DOT__inst 
                                                         >> 0x0000001fU))) 
                                             << 1U)) 
                             | (vlSelfRef.top__DOT__inst 
                                >> 0x0000001fU))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0xffe00000U & (0x00600000U | (0xe0000000U 
                                            & (vlSelfRef.top__DOT__inst 
                                               << 0x00000015U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | (0x001fffffU & ((0x001ffffeU & (((0x00000040U 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 1U)) 
                                              | (0x0000003fU 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 0x00000019U))) 
                                             << 1U)) 
                             | (1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000000bU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0xf00000ffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | (((0x000ffffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              << 8U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0x0fffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | ((IData)((0x0000000000000063ULL | ((QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelfRef.top__DOT__inst 
                                                                              >> 0x0000001fU))) 
                                                                  << 0x0000000cU) 
                                                                 | (vlSelfRef.top__DOT__inst 
                                                                    >> 0x00000014U)))) 
                                                << 7U))) 
              << 0x0000001cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U] 
        = (((IData)((0x0000000000000063ULL | ((QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelfRef.top__DOT__inst 
                                                                            >> 0x0000001fU))) 
                                                                << 0x0000000cU) 
                                                               | (vlSelfRef.top__DOT__inst 
                                                                  >> 0x00000014U)))) 
                                              << 7U))) 
            >> 4U) | ((IData)(((0x0000000000000063ULL 
                                | ((QData)((IData)(
                                                   (((- (IData)(
                                                                (vlSelfRef.top__DOT__inst 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000cU) 
                                                    | (vlSelfRef.top__DOT__inst 
                                                       >> 0x00000014U)))) 
                                   << 7U)) >> 0x00000020U)) 
                      << 0x0000001cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | ((IData)(((0x0000000000000063ULL | ((QData)((IData)(
                                                                 (((- (IData)(
                                                                              (vlSelfRef.top__DOT__inst 
                                                                               >> 0x0000001fU))) 
                                                                   << 0x0000000cU) 
                                                                  | (vlSelfRef.top__DOT__inst 
                                                                     >> 0x00000014U)))) 
                                                 << 7U)) 
                       >> 0x00000020U)) >> 4U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0xffe00007U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | (0xfffffff8U & (0x00000338U | (0x001ff800U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000aU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0x801fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | (((0x00000200U & (vlSelfRef.top__DOT__inst 
                               >> 0x00000016U)) | (
                                                   (0x000001feU 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 0x00000014U)))) 
              << 0x00000015U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0x7fffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x0000001fU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
        = ((0xe0000000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U]) 
           | (0x7fffffffU & (0x0001bc00U | (0x000003ffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 1U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
        = ((0x1fffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U]) 
           | ((IData)((0x0000000001700000ULL | (QData)((IData)(
                                                               (vlSelfRef.top__DOT__inst 
                                                                >> 0x0000000cU))))) 
              << 0x0000001dU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
        = (((IData)((0x0000000001700000ULL | (QData)((IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x0000000cU))))) 
            >> 3U) | (((0xffffff80U & (0xb8000000U 
                                       | (0x07ffff80U 
                                          & (vlSelfRef.top__DOT__inst 
                                             >> 5U)))) 
                       | (IData)(((0x0000000001700000ULL 
                                   | (QData)((IData)(
                                                     (vlSelfRef.top__DOT__inst 
                                                      >> 0x0000000cU)))) 
                                  >> 0x00000020U))) 
                      << 0x0000001dU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U] 
        = (0x7fffffffU & (0x20000000U | (((0xffffff80U 
                                           & (0xb8000000U 
                                              | (0x07ffff80U 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 5U)))) 
                                          | (IData)(
                                                    ((0x0000000001700000ULL 
                                                      | (QData)((IData)(
                                                                        (vlSelfRef.top__DOT__inst 
                                                                         >> 0x0000000cU)))) 
                                                     >> 0x00000020U))) 
                                         >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                       == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__rlen_num = vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                       == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__wlen_num = vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (1U | ((IData)(vlSelfRef.top__DOT__isB_type) 
                 << 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__isB_type;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM = ((IData)(vlSelfRef.top__DOT__M_wen) 
                                                  | (IData)(vlSelfRef.top__DOT__M_ren));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
              == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben 
        = ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) & 
           (vlSelfRef.top__DOT__inst >> 0x0000001eU));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
              == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__ALUIn1Sel;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (0x00004000U | (IData)(vlSelfRef.top__DOT__u2__DOT__EandCSR));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u2__DOT__EandCSR;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000019U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 7U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000012U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 0x0000000eU)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 0x0000000bU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                       >> 0x00000015U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000024U) 
                                    | (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U])) 
                                        << 4U) | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                                  >> 0x0000001cU))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[5U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[6U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000016U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U])) 
                                       >> 0x0000000aU)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[7U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U])) 
                                     << 0x0000000fU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U])) 
                                       >> 0x00000011U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[8U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x00000019U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 7U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
            << 0x00000012U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
                               >> 0x0000000eU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
            << 0x0000000bU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
                               >> 0x00000015U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
            << 4U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
                      >> 0x0000001cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
            << 0x0000001dU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U] 
                               >> 3U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
            << 0x00000016U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
                               >> 0x0000000aU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
            << 0x0000000fU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
                               >> 0x00000011U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U] 
            << 8U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
                      >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = (((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__ebreak = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
                                  && (IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ebreak) == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ebreak) == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = (((~ (IData)(vlSelfRef.top__DOT__isB_type)) 
                                                  & (~ (IData)(vlSelfRef.top__DOT__ebreak))) 
                                                 & (0U 
                                                    == 
                                                    (0x00007000U 
                                                     & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top__DOT__ebreak) 
                                                     | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                                                        | (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ebreak) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ebreak) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__rs1 = vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__imm));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (vlSelfRef.top__DOT__pc 
                                                + vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                 << 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut 
        = (0x00000015U | ((((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM) 
                            << 5U) | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                                      << 3U)) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                 << 1U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((~ (IData)(vlSelfRef.top__DOT__isB_type)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                                                 & (0x00002000U 
                                                    == 
                                                    (0x00006000U 
                                                     & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                          [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))];
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5;
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
                       == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
                          == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2 = vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut) 
                 >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[2U] 
        = (3U & ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut) 
                 >> 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U] 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U] 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U] 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB = 
        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
         && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT = 
        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC = 
        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICfunct3) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
                 << 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29;
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                       == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                          == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1 = vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(
                                                   (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn2));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0U] 
        = (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0U] 
        = (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUIn2;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 1U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & vlSelfRef.top__DOT__u3__DOT__ALUIn2));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U] 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U] 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit) 
                                                   && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (2U | (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                 >> 0x0000001fU));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                | vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                & vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                ^ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUIn1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUIn1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 >> 0x0000001fU);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = (QData)((IData)(
                                                                ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB) 
                                                                    & (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben)))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000700000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000700000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
            << 3U) | (IData)(((0x0000000700000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U] 
        = (0x00000030U | ((0xffffffc0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                             >> 0x0000001dU)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U] 
        = ((0x0000003fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
              << 6U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[3U] 
        = (0x000001ffU & (((IData)((0x0000000400000000ULL 
                                    | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((0x0000000400000000ULL 
                                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                       >> 0x00000020U)) 
                                              << 6U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out 
        = (((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[1U] 
        = (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[1U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[1U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[2U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001aU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U])) 
                                       >> 6U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit)
            ? vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                    >> 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALUIn1 << 3U) 
           | (IData)(((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                          >> 0x0000001dU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow 
        = (1U & (IData)((1ULL & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 
                                  + ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2)) 
                                     + (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1)))) 
                                 >> 0x00000020U))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 + (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2 
                                                  + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000eU | (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[7U] 
        = (0U == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6U] 
        = (0U != vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7U] 
        = (0U == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                    >> 0x0000001fU)
                                                    ? 
                                                   ((vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                     >> 0x0000001fU) 
                                                    > 
                                                    (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                                                     >> 0x0000001fU))
                                                    : 
                                                   (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult 
                                                    >> 0x0000001fU)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
        = (0x02468aceU | ((((((0U == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult) 
                              << 0x0000000cU) | ((0U 
                                                  != vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult) 
                                                 << 8U)) 
                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                << 4U) | (1U & (~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow))))) 
                           << 0x00000010U) | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                << 0x0000000cU) 
                                               | (0x00000100U 
                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                     << 8U))) 
                                              | ((0x00000010U 
                                                  & ((~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)) 
                                                     << 4U)) 
                                                 | (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                                    >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[2U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 8U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[3U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x0000000cU));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[4U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[5U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000014U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[6U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
            << 4U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | (0x0000000fU & (4U | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                         >> 0x0000001cU)))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                                    >> 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
            << 6U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                          >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                                    >> 8U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
            << 0x0000000aU) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                          >> 0x00000016U))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                                    >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
            << 0x00000012U) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                          >> 0x0000000eU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult 
            << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U]) 
           | (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out) 
               << 2U) | (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT) 
                          << 1U) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult 
                                    >> 0x0000001fU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U] 
        = ((7U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                           << 0x0000001fU))))) 
              << 3U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                         << 0x0000001fU))))) 
            >> 0x0000001dU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                            << 0x0000001fU)))) 
                                        >> 0x00000020U)) 
                               << 3U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[4U] 
        = (0x0000000fU & (((IData)(((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                        << 0x0000001fU)))) 
                                    >> 0x00000020U)) 
                           >> 0x0000001dU) | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB) 
                                              << 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[1U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[1U])) 
                                       >> 1U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[2U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[3U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[4U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U]);
    vlSelfRef.top__DOT__u3__DOT__ALUResult = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit)
                                               ? vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out
                                               : 0U);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[0U] 
        = (0x0000018cU | (1U & vlSelfRef.top__DOT__u3__DOT__ALUResult));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUResult)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUResult));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUResult;
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUResult;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelfRef.top__DOT__u3__DOT__ALUResult);
    if (vlSelfRef.top__DOT__M_ren) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP(vlSelfRef.top__DOT__u3__DOT__ALUResult, vlSelfRef.top__DOT__u5__DOT__rlen_num, vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout);
        vlSelfRef.top__DOT__M_rdata = vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout;
    } else {
        vlSelfRef.top__DOT__M_rdata = 0U;
    }
    if (vlSelfRef.top__DOT__M_wen) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP(vlSelfRef.top__DOT__u3__DOT__ALUResult, vlSelfRef.top__DOT__u0__DOT__rf
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (vlSelfRef.top__DOT__inst 
                                                                            >> 0x00000014U))], vlSelfRef.top__DOT__u5__DOT__wlen_num);
    }
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__Branch = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__M_rdata 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.top__DOT__M_rdata));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__M_rdata 
                                                                 >> 0x0000000fU)))) 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & vlSelfRef.top__DOT__M_rdata));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                       == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                          == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                          == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__dnpc = vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31));
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31;
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)));
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32;
    if ((2U == (IData)(vlSelfRef.top__DOT__Branch))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__dnpc, (IData)(vlSelfRef.top__DOT__u2__DOT__rs1), 
                                                                            (0x0000001fU 
                                                                             & (vlSelfRef.top__DOT__inst 
                                                                                >> 7U)), vlSelfRef.top__DOT__imm);
    }
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit)
                                                  ? vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out
                                                  : vlSelfRef.top__DOT__M_rdata);
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm))));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[1U] 
        = ((((IData)(4U) + vlSelfRef.top__DOT__pc) 
            << 2U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.top__DOT__imm))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U] 
        = (8U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U]) 
                 | (((IData)(4U) + vlSelfRef.top__DOT__pc) 
                    >> 0x0000001eU)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALUResult 
                                << 6U) | ((IData)((
                                                   (0x0000000100000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALUResult 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000100000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALUResult 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                       == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__dst = vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.rst_pc) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_pc__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_pc__0 = vlSelfRef.rst_pc;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__top__DOT__u0__DOT__rf__v0;
    __VdlyVal__top__DOT__u0__DOT__rf__v0 = 0;
    CData/*3:0*/ __VdlyDim0__top__DOT__u0__DOT__rf__v0;
    __VdlyDim0__top__DOT__u0__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__u0__DOT__rf__v0;
    __VdlySet__top__DOT__u0__DOT__rf__v0 = 0;
    // Body
    if (vlSelfRef.top__DOT__ebreak) {
        Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__u0__DOT__rf
                                                                     [
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    }
    __VdlySet__top__DOT__u0__DOT__rf__v0 = 0U;
    if (vlSelfRef.top__DOT__R_wen) {
        if ((0U != (0x0000000fU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)))) {
            __VdlyVal__top__DOT__u0__DOT__rf__v0 = vlSelfRef.top__DOT__dst;
            __VdlyDim0__top__DOT__u0__DOT__rf__v0 = 
                (0x0000000fU & (vlSelfRef.top__DOT__inst 
                                >> 7U));
            __VdlySet__top__DOT__u0__DOT__rf__v0 = 1U;
        }
    }
    if (__VdlySet__top__DOT__u0__DOT__rf__v0) {
        vlSelfRef.top__DOT__u0__DOT__rf[__VdlyDim0__top__DOT__u0__DOT__rf__v0] 
            = __VdlyVal__top__DOT__u0__DOT__rf__v0;
    }
    vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i)) {
        Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP(vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i, vlSelfRef.top__DOT__u0__DOT__rf
                                                                        [
                                                                        (0x0000000fU 
                                                                         & vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i)]);
        vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i);
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__top__DOT__pc;
    __Vdly__top__DOT__pc = 0;
    // Body
    __Vdly__top__DOT__pc = vlSelfRef.top__DOT__pc;
    if (vlSelfRef.rst_pc) {
        __Vdly__top__DOT__pc = vlSelfRef.d_init_pc;
    } else if (vlSelfRef.wen_pc) {
        Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__u0__DOT__difftest_step_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__dnpc);
        __Vdly__top__DOT__pc = vlSelfRef.top__DOT__dnpc;
    }
    vlSelfRef.top__DOT__pc = __Vdly__top__DOT__pc;
    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__cpu_get_pc_TOP(vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__pc)));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(((IData)(4U) + vlSelfRef.top__DOT__pc)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__pc;
    if (vlSelfRef.wen_pc) {
        Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__vaddr_ifetch_TOP(vlSelfRef.top__DOT__pc, 4U, vlSelfRef.top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch);
        vlSelfRef.top__DOT__u1__DOT____VlemCond_1 = vlSelfRef.top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch;
    } else {
        vlSelfRef.top__DOT__u1__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.top__DOT__inst = vlSelfRef.top__DOT__u1__DOT____VlemCond_1;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[1U] 
        = (0x0000001fU & (vlSelfRef.top__DOT__inst 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit 
        = ((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit) 
           | ((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__R_wen = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__RegIn = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_rlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out 
        = (((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICfunct3 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__isB_type = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit) 
                                    && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__M_ren = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__M_wen = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__ALUIn2Sel = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit) 
                                     && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1U] 
        = (0x0000001fU & (vlSelfRef.top__DOT__inst 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__ALUIn1Sel = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit) 
                                     && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__EandCSR = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit) 
                                            && (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = (0x00000033U | (0xffffff80U & (((- (IData)(
                                                     (vlSelfRef.top__DOT__inst 
                                                      >> 0x0000001fU))) 
                                          << 0x00000013U) 
                                         | (0x0007ff80U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000dU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xffffff80U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0x0000007fU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                         >> 0x0000001fU))) 
                             >> 0x0000000dU)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xfc00007fU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0xffffff80U & (0x00000980U | (((0x0007f000U 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0x0000000dU)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.top__DOT__inst)) 
                                            << 7U))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x03ffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x0000001aU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffe00000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0x03ffffffU & (0x0008c000U | (0x00003fffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 6U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0xffe00000U & (vlSelfRef.top__DOT__inst 
                             << 1U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0xffe00000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0x001fffffU & ((0x001ffffeU & ((- (IData)(
                                                        (vlSelfRef.top__DOT__inst 
                                                         >> 0x0000001fU))) 
                                             << 1U)) 
                             | (vlSelfRef.top__DOT__inst 
                                >> 0x0000001fU))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0xffe00000U & (0x00600000U | (0xe0000000U 
                                            & (vlSelfRef.top__DOT__inst 
                                               << 0x00000015U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | (0x001fffffU & ((0x001ffffeU & (((0x00000040U 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 1U)) 
                                              | (0x0000003fU 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 0x00000019U))) 
                                             << 1U)) 
                             | (1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000000bU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0xf00000ffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | (((0x000ffffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              << 8U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0x0fffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | ((IData)((0x0000000000000063ULL | ((QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelfRef.top__DOT__inst 
                                                                              >> 0x0000001fU))) 
                                                                  << 0x0000000cU) 
                                                                 | (vlSelfRef.top__DOT__inst 
                                                                    >> 0x00000014U)))) 
                                                << 7U))) 
              << 0x0000001cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U] 
        = (((IData)((0x0000000000000063ULL | ((QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelfRef.top__DOT__inst 
                                                                            >> 0x0000001fU))) 
                                                                << 0x0000000cU) 
                                                               | (vlSelfRef.top__DOT__inst 
                                                                  >> 0x00000014U)))) 
                                              << 7U))) 
            >> 4U) | ((IData)(((0x0000000000000063ULL 
                                | ((QData)((IData)(
                                                   (((- (IData)(
                                                                (vlSelfRef.top__DOT__inst 
                                                                 >> 0x0000001fU))) 
                                                     << 0x0000000cU) 
                                                    | (vlSelfRef.top__DOT__inst 
                                                       >> 0x00000014U)))) 
                                   << 7U)) >> 0x00000020U)) 
                      << 0x0000001cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | ((IData)(((0x0000000000000063ULL | ((QData)((IData)(
                                                                 (((- (IData)(
                                                                              (vlSelfRef.top__DOT__inst 
                                                                               >> 0x0000001fU))) 
                                                                   << 0x0000000cU) 
                                                                  | (vlSelfRef.top__DOT__inst 
                                                                     >> 0x00000014U)))) 
                                                 << 7U)) 
                       >> 0x00000020U)) >> 4U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0xffe00007U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | (0xfffffff8U & (0x00000338U | (0x001ff800U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000aU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0x801fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | (((0x00000200U & (vlSelfRef.top__DOT__inst 
                               >> 0x00000016U)) | (
                                                   (0x000001feU 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 0x00000014U)))) 
              << 0x00000015U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0x7fffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x0000001fU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
        = ((0xe0000000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U]) 
           | (0x7fffffffU & (0x0001bc00U | (0x000003ffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 1U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
        = ((0x1fffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U]) 
           | ((IData)((0x0000000001700000ULL | (QData)((IData)(
                                                               (vlSelfRef.top__DOT__inst 
                                                                >> 0x0000000cU))))) 
              << 0x0000001dU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
        = (((IData)((0x0000000001700000ULL | (QData)((IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x0000000cU))))) 
            >> 3U) | (((0xffffff80U & (0xb8000000U 
                                       | (0x07ffff80U 
                                          & (vlSelfRef.top__DOT__inst 
                                             >> 5U)))) 
                       | (IData)(((0x0000000001700000ULL 
                                   | (QData)((IData)(
                                                     (vlSelfRef.top__DOT__inst 
                                                      >> 0x0000000cU)))) 
                                  >> 0x00000020U))) 
                      << 0x0000001dU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U] 
        = (0x7fffffffU & (0x20000000U | (((0xffffff80U 
                                           & (0xb8000000U 
                                              | (0x07ffff80U 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 5U)))) 
                                          | (IData)(
                                                    ((0x0000000001700000ULL 
                                                      | (QData)((IData)(
                                                                        (vlSelfRef.top__DOT__inst 
                                                                         >> 0x0000000cU)))) 
                                                     >> 0x00000020U))) 
                                         >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                       == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__rlen_num = vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                       == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                          == vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u5__DOT__wlen_num = vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (1U | ((IData)(vlSelfRef.top__DOT__isB_type) 
                 << 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__isB_type;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM = ((IData)(vlSelfRef.top__DOT__M_wen) 
                                                  | (IData)(vlSelfRef.top__DOT__M_ren));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
              == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben 
        = ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) & 
           (vlSelfRef.top__DOT__inst >> 0x0000001eU));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
              == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__ALUIn1Sel;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (0x00004000U | (IData)(vlSelfRef.top__DOT__u2__DOT__EandCSR));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u2__DOT__EandCSR;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000019U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 7U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000012U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 0x0000000eU)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 0x0000000bU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                       >> 0x00000015U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000024U) 
                                    | (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U])) 
                                        << 4U) | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                                  >> 0x0000001cU))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[5U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[6U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000016U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U])) 
                                       >> 0x0000000aU)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[7U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U])) 
                                     << 0x0000000fU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U])) 
                                       >> 0x00000011U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[8U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x00000019U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 7U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
            << 0x00000012U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
                               >> 0x0000000eU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
            << 0x0000000bU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
                               >> 0x00000015U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
            << 4U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
                      >> 0x0000001cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
            << 0x0000001dU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U] 
                               >> 3U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
            << 0x00000016U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
                               >> 0x0000000aU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
            << 0x0000000fU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
                               >> 0x00000011U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U] 
            << 8U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
                      >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = (((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__ebreak = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
                                  && (IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ebreak) == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ebreak) == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 = (((~ (IData)(vlSelfRef.top__DOT__isB_type)) 
                                                  & (~ (IData)(vlSelfRef.top__DOT__ebreak))) 
                                                 & (0U 
                                                    == 
                                                    (0x00007000U 
                                                     & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top__DOT__ebreak) 
                                                     | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                                                        | (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ebreak) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ebreak) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__rs1 = vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__imm));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (vlSelfRef.top__DOT__pc 
                                                + vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                 << 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut 
        = (0x00000015U | ((((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM) 
                            << 5U) | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                                      << 3U)) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30) 
                                                 << 1U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((~ (IData)(vlSelfRef.top__DOT__isB_type)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) 
                                                 & (0x00002000U 
                                                    == 
                                                    (0x00006000U 
                                                     & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut) 
                 >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[2U] 
        = (3U & ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut) 
                 >> 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U] 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U] 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U] 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB = 
        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
         && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT = 
        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC = 
        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICfunct3) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
                 << 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U] 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U] 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit) 
                                                   && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = (QData)((IData)(
                                                                ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB) 
                                                                    & (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben)))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U]);
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (0x0000000100000000ULL 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0x00000014U))])));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                          [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))];
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
                       == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
                          == vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALUIn2 = vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                       == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                          == vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALUIn1 = vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(
                                                   (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn2));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0U] 
        = (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0U] 
        = (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUIn2;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                    >> 1U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & vlSelfRef.top__DOT__u3__DOT__ALUIn2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (2U | (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                 >> 0x0000001fU));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                | vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                & vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                ^ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUIn1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUIn1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 >> 0x0000001fU);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000700000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000700000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
            << 3U) | (IData)(((0x0000000700000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U] 
        = (0x00000030U | ((0xffffffc0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 
                             >> 0x0000001dU)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U] 
        = ((0x0000003fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
              << 6U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[3U] 
        = (0x000001ffU & (((IData)((0x0000000400000000ULL 
                                    | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((0x0000000400000000ULL 
                                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                       >> 0x00000020U)) 
                                              << 6U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out 
        = (((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[1U] 
        = (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[1U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[1U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[2U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001aU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U])) 
                                       >> 6U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit)
            ? vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                    >> 1U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALUIn1 << 3U) 
           | (IData)(((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17))) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                          >> 0x0000001dU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow 
        = (1U & (IData)((1ULL & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 
                                  + ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2)) 
                                     + (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn1)))) 
                                 >> 0x00000020U))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult 
        = (vlSelfRef.top__DOT__u3__DOT__ALUIn1 + (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2 
                                                  + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000eU | (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[7U] 
        = (0U == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6U] 
        = (0U != vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7U] 
        = (0U == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                    >> 0x0000001fU)
                                                    ? 
                                                   ((vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                                     >> 0x0000001fU) 
                                                    > 
                                                    (vlSelfRef.top__DOT__u3__DOT__ALUIn2 
                                                     >> 0x0000001fU))
                                                    : 
                                                   (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult 
                                                    >> 0x0000001fU)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
        = (0x02468aceU | ((((((0U == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult) 
                              << 0x0000000cU) | ((0U 
                                                  != vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult) 
                                                 << 8U)) 
                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                << 4U) | (1U & (~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow))))) 
                           << 0x00000010U) | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                << 0x0000000cU) 
                                               | (0x00000100U 
                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                     << 8U))) 
                                              | ((0x00000010U 
                                                  & ((~ (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)) 
                                                     << 4U)) 
                                                 | (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow)))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                                    >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[2U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 8U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[3U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x0000000cU));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[4U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[5U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000014U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[6U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U]) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
            << 4U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | (0x0000000fU & (4U | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                         >> 0x0000001cU)))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                                    >> 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
            << 6U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                          >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                                    >> 8U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
            << 0x0000000aU) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                          >> 0x00000016U))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                                    >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
            << 0x00000012U) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                          >> 0x0000000eU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult 
            << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U]) 
           | (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out) 
               << 2U) | (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT) 
                          << 1U) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult 
                                    >> 0x0000001fU))));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U] 
        = ((7U & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                           << 0x0000001fU))))) 
              << 3U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                         << 0x0000001fU))))) 
            >> 0x0000001dU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                            << 0x0000001fU)))) 
                                        >> 0x00000020U)) 
                               << 3U));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[4U] 
        = (0x0000000fU & (((IData)(((((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP) 
                                                        << 0x0000001fU)))) 
                                    >> 0x00000020U)) 
                           >> 0x0000001dU) | ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB) 
                                              << 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[1U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[1U])) 
                                       >> 1U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[2U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[3U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[4U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U])) 
              & vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U]);
    vlSelfRef.top__DOT__u3__DOT__ALUResult = ((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit)
                                               ? vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out
                                               : 0U);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[0U] 
        = (0x0000018cU | (1U & vlSelfRef.top__DOT__u3__DOT__ALUResult));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUResult)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUResult));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUResult;
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__ALUResult;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelfRef.top__DOT__u3__DOT__ALUResult);
    if (vlSelfRef.top__DOT__M_ren) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP(vlSelfRef.top__DOT__u3__DOT__ALUResult, vlSelfRef.top__DOT__u5__DOT__rlen_num, vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout);
        vlSelfRef.top__DOT__M_rdata = vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout;
    } else {
        vlSelfRef.top__DOT__M_rdata = 0U;
    }
    if (vlSelfRef.top__DOT__M_wen) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP(vlSelfRef.top__DOT__u3__DOT__ALUResult, vlSelfRef.top__DOT__u0__DOT__rf
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (vlSelfRef.top__DOT__inst 
                                                                            >> 0x00000014U))], vlSelfRef.top__DOT__u5__DOT__wlen_num);
    }
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__Branch = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__M_rdata 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.top__DOT__M_rdata));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__M_rdata 
                                                                 >> 0x0000000fU)))) 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & vlSelfRef.top__DOT__M_rdata));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                       == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                          == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                          == vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__dnpc = vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31));
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31;
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)));
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32;
    if ((2U == (IData)(vlSelfRef.top__DOT__Branch))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__dnpc, (IData)(vlSelfRef.top__DOT__u2__DOT__rs1), 
                                                                            (0x0000001fU 
                                                                             & (vlSelfRef.top__DOT__inst 
                                                                                >> 7U)), vlSelfRef.top__DOT__imm);
    }
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg = ((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit)
                                                  ? vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out
                                                  : vlSelfRef.top__DOT__M_rdata);
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm))));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[1U] 
        = ((((IData)(4U) + vlSelfRef.top__DOT__pc) 
            << 2U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.top__DOT__imm))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U] 
        = (8U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U]) 
                 | (((IData)(4U) + vlSelfRef.top__DOT__pc) 
                    >> 0x0000001eU)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__ALUResult 
                                << 6U) | ((IData)((
                                                   (0x0000000100000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__ALUResult 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000100000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__ALUResult 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                       == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__dst = vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/xierry/ysyx-workbench/npc/vsrc/top.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/xierry/ysyx-workbench/npc/vsrc/top.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/xierry/ysyx-workbench/npc/vsrc/top.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_pc & 0xfeU)))) {
        Verilated::overWidthError("rst_pc");
    }
    if (VL_UNLIKELY(((vlSelfRef.wen_pc & 0xfeU)))) {
        Verilated::overWidthError("wen_pc");
    }
}
#endif  // VL_DEBUG

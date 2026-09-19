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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = (0x0000001300000000ULL 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0x00000014U))])));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))] 
                                                 >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (0x0000001fU 
                                                & vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = (((- (IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.top__DOT__inst 
                                                    >> 0x00000014U));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U] 
        = (0x00100073U == vlSelfRef.top__DOT__inst);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[17U] 
        = (0x6fU == (0x0000007fU & vlSelfRef.top__DOT__inst));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[21U] 
        = (0x37U == (0x0000007fU & vlSelfRef.top__DOT__inst));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[22U] 
        = (0x17U == (0x0000007fU & vlSelfRef.top__DOT__inst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (IData)(
                                                       (3U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (IData)(
                                                       (0x00000013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       (0x00002013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (IData)(
                                                        (0x00004013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (IData)(
                                                        (0x00000067U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (IData)(
                                                        (0x00000023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = (IData)(
                                                        (0x00001023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = (IData)(
                                                        (0x00002023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (IData)(
                                                        (0x00000063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (IData)(
                                                        (0x00001063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (IData)(
                                                        (0x00004063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (IData)(
                                                        (0x00005063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (IData)(
                                                        (0x00006063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (IData)(
                                                        (0x00007063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = (IData)(
                                                        (0x00007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = (IData)(
                                                        (0x00006033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61 = (IData)(
                                                        (0x00004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (IData)(
                                                        (0x00003033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63 = (IData)(
                                                        (0x00002033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68 = (IData)(
                                                        (0x00007013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69 = (IData)(
                                                        (0x00006013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = (IData)(
                                                        (0x00003013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = (IData)(
                                                        (0x00002003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = (IData)(
                                                        (0x00005003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = (IData)(
                                                        (0x00001003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = (IData)(
                                                        (0x00004003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65 = (IData)(
                                                        (0x00000033U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71 = (IData)(
                                                        (0x40005000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73 = (IData)(
                                                        (0x00005000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76 = (IData)(
                                                        (0x00001000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                             & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000014U))] 
            << 8U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | (vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 0x00000014U))] 
              >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000000000014ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                [
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.top__DOT__inst 
                                                                    >> 0x00000014U))])) 
                                                << 8U))) 
              << 8U));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U] 
        = ((0x00ff0000U & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U]) 
           | (0x00ffffffU & (((IData)((0x0000000000000014ULL 
                                       | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                          [
                                                          (0x0000000fU 
                                                           & (vlSelfRef.top__DOT__inst 
                                                              >> 0x00000014U))])) 
                                          << 8U))) 
                              >> 0x00000018U) | ((IData)(
                                                         ((0x0000000000000014ULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                              [
                                                                              (0x0000000fU 
                                                                               & (vlSelfRef.top__DOT__inst 
                                                                                >> 0x00000014U))])) 
                                                              << 8U)) 
                                                          >> 0x00000020U)) 
                                                 << 8U))));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (0x00120000U | (0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000540U | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = (1U | ((0xffff0000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U]) 
                 | ((((0x00000080U & (vlSelfRef.top__DOT__inst 
                                      >> 0x00000018U)) 
                      | ((0x00000040U & (vlSelfRef.top__DOT__inst 
                                         >> 1U)) | 
                         (0x0000003fU & (vlSelfRef.top__DOT__inst 
                                         >> 0x00000019U)))) 
                     << 8U) | (0x000000f0U & (vlSelfRef.top__DOT__inst 
                                              >> 4U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x00000010U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xffffff80U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0x0000ffffU & (0x00000020U | (7U & ((- (IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x0000001fU))) 
                                                  >> 0x00000010U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xfc00007fU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (((0x0007f800U & (vlSelfRef.top__DOT__inst 
                               >> 1U)) | ((0x00000400U 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x0000000aU)) 
                                          | (0x000003ffU 
                                             & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000015U)))) 
              << 7U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x03ffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (((0x00000ffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              << 0x0000001aU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffffffc0U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (((0x00000ffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              >> 6U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffe0003fU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0xffffffc0U & (0x000000c0U | (((0x00007f00U 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000011U)) 
                                             | (0x000000f8U 
                                                & (vlSelfRef.top__DOT__inst 
                                                   >> 4U))) 
                                            << 6U))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x00000015U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0xfffff000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0x001fffffU & (0x00000400U | (0x000001ffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 0x0000000bU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0x00000fffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | ((IData)((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))) 
              << 0x0000000cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = (0x00007fffU & (((IData)((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))) 
                           >> 0x00000014U) | ((IData)(
                                                      ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000cU)));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[37U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[32U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[30U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[28U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[23U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[20U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[19U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[18U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[16U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[15U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[14U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[24U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[25U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[29U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[33U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[34U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[35U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[36U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66 = ((0x20U 
                                                  == 
                                                  (vlSelfRef.top__DOT__inst 
                                                   >> 0x00000019U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67 = ((0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__inst 
                                                   >> 0x00000019U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59 = ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70 = ((0x13U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72 = ((0x13U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64 = ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = ((0x13U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001aU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 6U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 0x00000017U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                       >> 9U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001dU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 3U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
            << 0x0000001aU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
                               >> 6U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
            << 0x00000017U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
                               >> 9U));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[10U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[26U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[27U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U] 
        = (0x000040ffU | ((0xfffe0000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U]) 
                          | ((0x00100073U == vlSelfRef.top__DOT__inst) 
                             << 8U)));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U] 
        = ((0x0001ffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U]) 
           | (0xfffe0000U & (0x50840000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                             << 0x0000001aU) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                               << 0x00000011U)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U]) 
           | (0x0001ffffU & (1U | ((0x0001ffffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                                   >> 6U)) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                      >> 0x0000000fU)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U] 
        = ((0xc0000007U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U]) 
           | (0xfffffff8U & (0x07c442b0U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                             << 0x00000015U) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60) 
                                                << 0x0000000cU) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59) 
                                                  << 3U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U] 
        = ((0x3fffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
              << 0x0000001eU));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U] 
        = ((0xfe000000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U]) 
           | (0x3fffffffU & (0x003a1e13U | ((0x3fff0000U 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                                << 0x00000010U)) 
                                            | ((0x3fffff80U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                                   << 7U)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                                  >> 2U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U] 
        = ((0x01ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U]) 
           | (0xfe000000U & (0x70000000U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                            << 0x00000019U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U] 
        = ((0xfff00000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U]) 
           | (0x01ffffffU & (0x0001b0c8U | ((0x01fff800U 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                << 0x0000000bU)) 
                                            | ((0x01fffffcU 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67) 
                                                   << 2U)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                  >> 7U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U] 
        = ((0x000fffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U]) 
           | (0xfff00000U & (0x83000000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                             << 0x0000001dU) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                               << 0x00000014U)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U] 
        = ((0xffffffc0U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U]) 
           | (0x000fffffU & (6U | ((0x000fffffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                                   >> 3U)) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                      >> 0x0000000cU)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U] 
        = ((0xfe00003fU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U]) 
           | (0xffffffc0U & (0x00170b00U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                             << 0x00000018U) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17) 
                                                  << 6U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U] 
        = (0x2a000000U | (0x01ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = (0xfffffffeU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = ((0xfffffc01U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]) 
           | (0xfffffffeU & (0x0000004cU | ((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__inst)) 
                                            << 1U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = ((0xe00003ffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]) 
           | (0xfffffc00U & (0x0120a000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                             << 0x0000001cU) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                << 0x00000013U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                                  << 0x0000000aU))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = (0x20000000U | (0x1fffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U] 
        = (2U | (0xffffffe0U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U] 
        = ((0x0000001fU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U]) 
           | (0xffffffe0U & (0x07018400U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                                             << 0x00000017U) 
                                            | (((0x17U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.top__DOT__inst)) 
                                                << 0x0000000eU) 
                                               | ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.top__DOT__inst)) 
                                                  << 5U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U] 
        = (0x0048181cU | ((0xf8000000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U]) 
                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                              << 0x00000012U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69) 
                                                  << 9U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U] 
        = ((0x07ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U]) 
           | (0xf8000000U & (0x80000000U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                            << 0x0000001bU))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
              >> 5U));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U]) 
           | (0xfffffff0U & (0x0503c0a0U | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                               << 0x0000001bU) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                 << 0x00000012U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                 << 9U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))) 
                                            << 4U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U] 
        = (0x00300802U | ((0xf8000000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U]) 
                          | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                               << 0x0000001aU) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                  << 0x00000011U)) 
                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                << 8U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U] 
        = ((0x07ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U]) 
           | (0xf8000000U & (0x58000000U | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                               << 0x0000001aU) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80) 
                                                 << 0x00000011U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                << 8U)) 
                                            << 0x0000001bU))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[10U] 
        = (0x003fffffU & (0x0001a010U | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                            << 0x0000001aU) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80) 
                                              << 0x00000011U)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                             << 8U)) 
                                         >> 5U)));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[31U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[3U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[4U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[5U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[6U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[7U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[8U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[9U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[10U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[11U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[12U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[13U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[14U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[15U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[16U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[17U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[18U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[19U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[20U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[21U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[22U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[23U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[24U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[25U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[26U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[27U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[28U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[29U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[30U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[31U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[32U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[33U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[34U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[35U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[36U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[37U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[3U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[4U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[5U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[6U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[7U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[8U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[9U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[9U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[10U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[10U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[11U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[11U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[12U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[12U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[13U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[13U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[14U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[14U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[15U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[15U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[16U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[16U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[17U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[17U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[18U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[18U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[19U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[19U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[20U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[20U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[21U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[21U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[22U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[22U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[23U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[23U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[24U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[24U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[25U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[25U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[26U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[26U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[27U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[27U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[28U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[28U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[29U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[29U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[30U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[30U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[31U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[31U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[32U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[32U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[33U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[33U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[34U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[34U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[35U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[35U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[36U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[36U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[37U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[37U]));
    vlSelfRef.top__DOT__op_encoded = vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[9U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[10U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[11U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[12U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[13U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[14U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[15U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[16U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[17U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[18U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[19U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[20U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[21U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.top__DOT__op_encoded) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__M_ren = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.top__DOT__op_encoded) 
            == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wdata = ((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit)
                                    ? vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__M_rlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[9U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[9U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[9U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[10U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[10U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[10U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[11U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[11U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[11U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[12U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[12U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[12U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[13U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[13U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[13U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[14U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[14U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[14U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[15U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[15U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[15U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[16U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[16U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[16U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[17U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[17U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[17U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[18U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[18U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[18U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[19U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[19U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[19U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[20U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[20U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[20U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[21U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[21U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[21U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[22U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[22U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[22U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[23U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[23U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[23U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[24U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[24U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[24U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[25U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[25U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[25U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[26U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[26U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[26U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[27U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[27U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[27U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[28U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[28U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[28U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[29U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[29U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[29U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[30U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[30U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[30U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[31U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[31U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[31U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[32U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[32U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[32U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[33U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[33U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[33U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[34U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[34U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[34U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[35U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[35U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[35U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[36U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[36U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[36U]));
    vlSelfRef.top__DOT__u2__DOT__op_type = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit)
                                             ? (IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out)
                                             : 7U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.top__DOT__op_encoded) 
            == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_en 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__rs1 = (0x0000001fU 
                                        & ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit)
                                            ? (IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out)
                                            : (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000fU)));
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
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | ((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                     >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
           == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 == vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 >= vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 + vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 - vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 | vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 & vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                < vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                ^ vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                >> 0x0000001fU);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__load = (vlSelfRef.top__DOT__u0__DOT__rf
                                                  [
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                  & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_en))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[8U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (0x00ac0540U | ((0x80000000U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U]) 
                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                              << 0x0000001aU) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                  << 0x0000000dU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (0x7fffffffU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((0xfff00000U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U]) 
           | (0x7fffffffU & (0x0000600fU | (0x00000f80U 
                                            & (vlSelfRef.top__DOT__imm 
                                               << 7U)))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((0x000fffffU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U]) 
           | (0xfff00000U & (0x12000000U | (((0x0003e000U 
                                              & (vlSelfRef.top__DOT__imm 
                                                 << 0x0000000dU)) 
                                             | (0x0000001fU 
                                                & vlSelfRef.top__DOT__imm)) 
                                            << 0x00000014U))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (0x00003fffU & (0x00000280U | (((0x0003e000U 
                                           & (vlSelfRef.top__DOT__imm 
                                              << 0x0000000dU)) 
                                          | (0x0000001fU 
                                             & vlSelfRef.top__DOT__imm)) 
                                         >> 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = (vlSelfRef.top__DOT__imm 
                                                 & vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54 = (vlSelfRef.top__DOT__imm 
                                                 | vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (vlSelfRef.top__DOT__imm 
                                                ^ vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 < vlSelfRef.top__DOT__imm);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (vlSelfRef.top__DOT__pc 
                                                + vlSelfRef.top__DOT__imm);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__imm 
                                                + vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = (0x0000001fU & vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[4U] 
        = (0x0000001fU & vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[5U] 
        = (0x0000001fU & vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[0U] 
        = (0x0000002000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[3U] 
        = (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                                  >> 0x0000001fU)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                  > (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (2U | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                 >> 0x0000001fU));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__load;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__load;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
           >> 0x0000001fU);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00001fffU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
                          >> 0x0000000dU));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00001fffU & ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
                           << 6U) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
                                     >> 0x0000001aU)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (0x00001fffU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
                          >> 7U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[4U] 
        = (0x00001fffU & ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[2U] 
                           << 0x0000000cU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
                                              >> 0x00000014U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[5U] 
        = (0x00001fffU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[2U] 
                          >> 1U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[14U] 
        = (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 = (1U 
                                                 & (- (IData)(
                                                              ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                                >> 0x0000001fU)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                                > 
                                                                (vlSelfRef.top__DOT__imm 
                                                                 >> 0x0000001fU))
                                                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = 
            ((IData)(4U) + vlSelfRef.top__DOT__pc);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 
            ((IData)(4U) + vlSelfRef.top__DOT__pc);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                   <= (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34))
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x0000001300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000001300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
            << 8U) | (IData)(((0x0000001300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (0x00001400U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000001200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (0x00ffffffU & (((IData)((0x0000001200000000ULL 
                                    | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000001200000000ULL 
                                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[7U] 
        = (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[16U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
            << 8U) | (IData)(((0x0000000400000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (0x00000c00U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000b00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000b00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
            >> 0x00000010U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                << 0x00000018U) | ((IData)(
                                                           ((0x0000000b00000000ULL 
                                                             | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x01000000U | (((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                           >> 8U)) 
                           | ((IData)(((0x0000000b00000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                       >> 0x00000020U)) 
                              >> 0x00000010U)) | (0x00ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                     >> 8U))));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[5U] 
        = (IData)((0x0000000d00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[6U] 
        = (0x000000ffU & (IData)(((0x0000000d00000000ULL 
                                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                  >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out)
                                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[4U] 
        = (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = (((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                   >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                      >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[15U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[0U] 
        = (0x0000001900000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[5U]))));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_waddr = ((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit)
                                    ? vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__M_raddr = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit)
                                    ? vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 1U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000001900000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 
            << 8U) | (IData)(((0x0000001900000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U] 
        = (0x00001b00U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000001800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000001800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)))) 
            >> 0x00000010U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 
                                << 0x00000018U) | ((IData)(
                                                           ((0x0000001800000000ULL 
                                                             | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[4U] 
        = (0x1a000000U | (((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 
                                           >> 8U)) 
                           | ((IData)(((0x0000001800000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35))) 
                                       >> 0x00000020U)) 
                              >> 0x00000010U)) | (0x00ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 
                                                     >> 8U))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[5U] 
        = (IData)((0x0000001600000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[6U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
            << 8U) | (IData)(((0x0000001600000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U] 
        = (0x00001700U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U]) 
           | ((IData)((0x0000001500000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[8U] 
        = (((IData)((0x0000001500000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
            >> 0x00000010U) | (((0xfffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                << 8U)) 
                                | (IData)(((0x0000001500000000ULL 
                                            | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                           >> 0x00000020U))) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[9U] 
        = (0x03000000U | ((((0xfffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                            << 8U)) 
                            | (IData)(((0x0000001500000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                       >> 0x00000020U))) 
                           >> 0x00000010U) | (0x00ff0000U 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42 = (((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                                    >> 1U));
    if (vlSelfRef.top__DOT__M_ren) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP(vlSelfRef.top__DOT__M_raddr, vlSelfRef.top__DOT__u5__DOT__rlen_num, vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout);
        vlSelfRef.top__DOT__M_rdata = vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout;
    } else {
        vlSelfRef.top__DOT__M_rdata = 0U;
    }
    if (vlSelfRef.top__DOT__M_wen) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP(vlSelfRef.top__DOT__M_waddr, vlSelfRef.top__DOT__M_wdata, vlSelfRef.top__DOT__u5__DOT__wlen_num);
    }
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__dnpc = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit)
                                 ? vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out
                                 : ((IData)(4U) + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[3U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[4U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[3U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[4U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[5U]))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[5U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[6U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[6U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[7U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[9U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[8U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
            << 3U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                          >> 0x0000001dU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[17U] 
        = vlSelfRef.top__DOT__M_rdata;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[18U] 
        = vlSelfRef.top__DOT__M_rdata;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[20U] 
        = vlSelfRef.top__DOT__M_rdata;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000002000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
            << 8U) | (IData)(((0x0000002000000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U] 
        = (0x00002100U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000002200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000002200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
            >> 0x00000010U) | (((0x00000100U & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                << 8U)) 
                                | (IData)(((0x0000002200000000ULL 
                                            | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                           >> 0x00000020U))) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U] 
        = ((0xff000000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U]) 
           | (((0x00000100U & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                               << 8U)) | (IData)(((0x0000002200000000ULL 
                                                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                  >> 0x00000020U))) 
              >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U] 
        = ((0x00ffffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U]) 
           | ((IData)((0x000000000000001fULL | ((QData)((IData)(
                                                                (1U 
                                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                                << 8U))) 
              << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[5U] 
        = (((IData)((0x000000000000001fULL | ((QData)((IData)(
                                                              (1U 
                                                               & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                              << 8U))) 
            >> 8U) | ((IData)(((0x000000000000001fULL 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                   << 8U)) >> 0x00000020U)) 
                      << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[6U] 
        = (IData)((0x00001d0000000026ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)) 
                                            << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[7U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 
            << 0x00000010U) | (IData)(((0x00001d0000000026ULL 
                                        | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)) 
                                           << 8U)) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U] 
        = ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U]) 
           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 
              >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U]) 
           | ((IData)((0x000015000000001cULL | ((QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.top__DOT__pc))) 
                                                << 8U))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[9U] 
        = (((IData)((0x000015000000001cULL | ((QData)((IData)(
                                                              ((IData)(4U) 
                                                               + vlSelfRef.top__DOT__pc))) 
                                              << 8U))) 
            >> 0x00000010U) | ((IData)(((0x000015000000001cULL 
                                         | ((QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelfRef.top__DOT__pc))) 
                                            << 8U)) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[10U] 
        = (IData)((0x0000001100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[11U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
            << 8U) | (IData)(((0x0000001100000000ULL 
                               | (QData)((IData)(vlSelfRef.top__DOT__imm))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U] 
        = (0x00001000U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U]) 
           | ((IData)((0x0000000300000000ULL | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelfRef.top__DOT__pc))))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[13U] 
        = (((IData)((0x0000000300000000ULL | (QData)((IData)(
                                                             ((IData)(4U) 
                                                              + vlSelfRef.top__DOT__pc))))) 
            >> 0x00000010U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                << 0x00000018U) | ((IData)(
                                                           ((0x0000000300000000ULL 
                                                             | (QData)((IData)(
                                                                               ((IData)(4U) 
                                                                                + vlSelfRef.top__DOT__pc)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U] 
        = ((0xff000000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U]) 
           | (((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                               >> 8U)) | ((IData)((
                                                   (0x0000000300000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelfRef.top__DOT__pc)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000010U)) 
              | (0x00ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                >> 8U))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U] 
        = ((0x00ffffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U]) 
           | ((IData)((0x00000e0000000007ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                                << 8U))) 
              << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[15U] 
        = (((IData)((0x00000e0000000007ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                              << 8U))) 
            >> 8U) | ((IData)(((0x00000e0000000007ULL 
                                | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                   << 8U)) >> 0x00000020U)) 
                      << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[16U] 
        = (((0x00ffff00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                            << 8U)) | ((IData)(((0x00000e0000000007ULL 
                                                 | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                                    << 8U)) 
                                                >> 0x00000020U)) 
                                       >> 8U)) | (0xff000000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                     << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U]) 
           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
              >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U] 
        = ((0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U]) 
           | ((IData)((8ULL | ((QData)((IData)((1U 
                                                & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))) 
                               << 8U))) << 8U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U] 
        = ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U]) 
           | (((IData)((8ULL | ((QData)((IData)((1U 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))) 
                                << 8U))) >> 0x00000018U) 
              | ((IData)(((8ULL | ((QData)((IData)(
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))) 
                                   << 8U)) >> 0x00000020U)) 
                 << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U]) 
           | ((IData)((0x00000f0000000005ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                                << 8U))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[19U] 
        = (((IData)((0x00000f0000000005ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                              << 8U))) 
            >> 0x00000010U) | ((IData)(((0x00000f0000000005ULL 
                                         | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                            << 8U)) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[20U] 
        = (((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            | ((IData)(((0x00000f0000000005ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                                  << 8U)) 
                        >> 0x00000020U)) >> 0x00000010U)) 
           | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[21U] 
        = (IData)((0x0000040000000002ULL | ((QData)((IData)(vlSelfRef.top__DOT__M_rdata)) 
                                            << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[22U] 
        = ((vlSelfRef.top__DOT__M_rdata << 0x00000010U) 
           | (IData)(((0x0000040000000002ULL | ((QData)((IData)(vlSelfRef.top__DOT__M_rdata)) 
                                                << 8U)) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U] 
        = ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U]) 
           | (vlSelfRef.top__DOT__M_rdata >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U]) 
           | (0xffff0000U & (0x000c0000U | (vlSelfRef.top__DOT__M_rdata 
                                            << 0x00000018U))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U]) 
           | (0x000000ffU & (vlSelfRef.top__DOT__M_rdata 
                             >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U] 
        = ((0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U]) 
           | (0xffffff00U & (0x0b000000U | (0x00ffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top__DOT__M_rdata 
                                                              >> 0x0000000fU)))) 
                                               << 8U)))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[25U] 
        = (IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__M_rdata))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U] 
        = ((0xffffff00U & (((- (IData)((1U & (vlSelfRef.top__DOT__M_rdata 
                                              >> 7U)))) 
                            << 0x00000010U) | (0x0000ff00U 
                                               & (vlSelfRef.top__DOT__M_rdata 
                                                  << 8U)))) 
           | (IData)(((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__M_rdata))) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U] 
        = ((0x0000ff00U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U]) 
           | (0x000000ffU & ((- (IData)((1U & (vlSelfRef.top__DOT__M_rdata 
                                               >> 7U)))) 
                             >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U] 
        = (0x00000d00U | (0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U]));
    if (((3U == (IData)(vlSelfRef.top__DOT__op_encoded)) 
         | (0x15U == (IData)(vlSelfRef.top__DOT__op_encoded)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__dnpc, (IData)(vlSelfRef.top__DOT__u2__DOT__rs1), 
                                                                            (0x0000001fU 
                                                                             & (vlSelfRef.top__DOT__inst 
                                                                                >> 7U)), vlSelfRef.top__DOT__imm);
    }
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[3U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[3U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[4U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[5U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[5U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[7U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[6U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[6U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[7U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[7U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[9U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[8U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[11U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[10U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[9U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[11U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[10U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[13U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[11U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[13U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[12U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[16U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[15U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[13U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[16U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[14U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[15U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[19U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[16U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[21U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[20U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[17U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[22U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[21U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[18U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[22U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[19U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[20U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[25U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[21U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[19U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U] 
            << 8U) | (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U] 
                      >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[21U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U] 
            << 0x00000018U) | (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U] 
                               >> 8U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[9U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[9U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[10U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[10U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[11U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[11U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[12U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[12U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[13U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[13U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[14U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[14U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[15U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[15U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[16U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[16U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[17U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[17U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[18U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[18U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[19U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[19U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[20U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[20U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[21U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[21U]));
    vlSelfRef.top__DOT__u3__DOT__dst_common = vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                                    >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
            << 4U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | (0x0000000fU & (4U | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                         >> 0x0000001cU)))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                                    >> 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
            << 6U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                          >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                                    >> 8U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
            << 0x0000000aU) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                          >> 0x00000016U))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                                    >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
            << 0x00000012U) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                          >> 0x0000000eU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__dst_shift = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out;
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
    if ((0xffU == (IData)(vlSelfRef.top__DOT__op_encoded))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__u0__DOT__rf
                                                                     [
                                                                     (0x0000000fU 
                                                                      & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    }
    __VdlySet__top__DOT__u0__DOT__rf__v0 = 0U;
    if (((5U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
         | ((0U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
            | ((1U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
               | (3U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)))))) {
        if ((0U != (0x0000000fU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)))) {
            __VdlyVal__top__DOT__u0__DOT__rf__v0 = 
                (vlSelfRef.top__DOT__u3__DOT__dst_shift 
                 | vlSelfRef.top__DOT__u3__DOT__dst_common);
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
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[7U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[10U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    if (vlSelfRef.wen_pc) {
        Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__vaddr_ifetch_TOP(vlSelfRef.top__DOT__pc, 4U, vlSelfRef.top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch);
        vlSelfRef.top__DOT__u1__DOT____VlemCond_1 = vlSelfRef.top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch;
    } else {
        vlSelfRef.top__DOT__u1__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.top__DOT__inst = vlSelfRef.top__DOT__u1__DOT____VlemCond_1;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = (((- (IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | (vlSelfRef.top__DOT__inst 
                                                    >> 0x00000014U));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U] 
        = (0x00100073U == vlSelfRef.top__DOT__inst);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[17U] 
        = (0x6fU == (0x0000007fU & vlSelfRef.top__DOT__inst));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[21U] 
        = (0x37U == (0x0000007fU & vlSelfRef.top__DOT__inst));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[22U] 
        = (0x17U == (0x0000007fU & vlSelfRef.top__DOT__inst));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (IData)(
                                                       (3U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (IData)(
                                                       (0x00000013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       (0x00002013U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = (IData)(
                                                        (0x00004013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (IData)(
                                                        (0x00000067U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (IData)(
                                                        (0x00000023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = (IData)(
                                                        (0x00001023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14 = (IData)(
                                                        (0x00002023U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (IData)(
                                                        (0x00000063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (IData)(
                                                        (0x00001063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17 = (IData)(
                                                        (0x00004063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (IData)(
                                                        (0x00005063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (IData)(
                                                        (0x00006063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (IData)(
                                                        (0x00007063U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57 = (IData)(
                                                        (0x00007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58 = (IData)(
                                                        (0x00006033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61 = (IData)(
                                                        (0x00004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62 = (IData)(
                                                        (0x00003033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63 = (IData)(
                                                        (0x00002033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68 = (IData)(
                                                        (0x00007013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69 = (IData)(
                                                        (0x00006013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74 = (IData)(
                                                        (0x00003013U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = (IData)(
                                                        (0x00002003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = (IData)(
                                                        (0x00005003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79 = (IData)(
                                                        (0x00001003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80 = (IData)(
                                                        (0x00004003U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65 = (IData)(
                                                        (0x00000033U 
                                                         == 
                                                         (0x0000707fU 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71 = (IData)(
                                                        (0x40005000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73 = (IData)(
                                                        (0x00005000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76 = (IData)(
                                                        (0x00001000U 
                                                         == 
                                                         (0xfe007000U 
                                                          & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (0xfffff000U & vlSelfRef.top__DOT__inst);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = (1U | ((0xffff0000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U]) 
                 | ((((0x00000080U & (vlSelfRef.top__DOT__inst 
                                      >> 0x00000018U)) 
                      | ((0x00000040U & (vlSelfRef.top__DOT__inst 
                                         >> 1U)) | 
                         (0x0000003fU & (vlSelfRef.top__DOT__inst 
                                         >> 0x00000019U)))) 
                     << 8U) | (0x000000f0U & (vlSelfRef.top__DOT__inst 
                                              >> 4U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x00000010U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xffffff80U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0x0000ffffU & (0x00000020U | (7U & ((- (IData)(
                                                             (vlSelfRef.top__DOT__inst 
                                                              >> 0x0000001fU))) 
                                                  >> 0x00000010U)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xfc00007fU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (((0x0007f800U & (vlSelfRef.top__DOT__inst 
                               >> 1U)) | ((0x00000400U 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x0000000aU)) 
                                          | (0x000003ffU 
                                             & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000015U)))) 
              << 7U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x03ffffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (((0x00000ffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              << 0x0000001aU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffffffc0U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (((0x00000ffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              >> 6U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffe0003fU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0xffffffc0U & (0x000000c0U | (((0x00007f00U 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000011U)) 
                                             | (0x000000f8U 
                                                & (vlSelfRef.top__DOT__inst 
                                                   >> 4U))) 
                                            << 6U))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x00000015U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0xfffff000U & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0x001fffffU & (0x00000400U | (0x000001ffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 0x0000000bU)))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0x00000fffU & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | ((IData)((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))) 
              << 0x0000000cU));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = (0x00007fffU & (((IData)((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))) 
                           >> 0x00000014U) | ((IData)(
                                                      ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)) 
                                                       >> 0x00000020U)) 
                                              << 0x0000000cU)));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[37U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[32U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[30U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[28U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[23U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[20U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[19U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[18U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[16U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[15U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[14U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[7U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[24U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[25U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[29U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[33U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[34U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[35U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[36U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66 = ((0x20U 
                                                  == 
                                                  (vlSelfRef.top__DOT__inst 
                                                   >> 0x00000019U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67 = ((0U 
                                                  == 
                                                  (vlSelfRef.top__DOT__inst 
                                                   >> 0x00000019U)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59 = ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70 = ((0x13U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_71));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72 = ((0x13U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_73));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64 = ((0x33U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75 = ((0x13U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.top__DOT__inst)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_76));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001aU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 6U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x00000007ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 0x00000017U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                       >> 9U)));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001dU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 3U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
            << 0x0000001aU) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
                               >> 6U));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = ((vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
            << 0x00000017U) | (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
                               >> 9U));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[10U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[26U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[27U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[8U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U] 
        = (0x000040ffU | ((0xfffe0000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U]) 
                          | ((0x00100073U == vlSelfRef.top__DOT__inst) 
                             << 8U)));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U] 
        = ((0x0001ffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[0U]) 
           | (0xfffe0000U & (0x50840000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                             << 0x0000001aU) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                               << 0x00000011U)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U]) 
           | (0x0001ffffU & (1U | ((0x0001ffffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_58) 
                                                   >> 6U)) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_57) 
                                      >> 0x0000000fU)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U] 
        = ((0xc0000007U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U]) 
           | (0xfffffff8U & (0x07c442b0U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_61) 
                                             << 0x00000015U) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60) 
                                                << 0x0000000cU) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_59) 
                                                  << 3U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U] 
        = ((0x3fffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[1U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
              << 0x0000001eU));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U] 
        = ((0xfe000000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U]) 
           | (0x3fffffffU & (0x003a1e13U | ((0x3fff0000U 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_64) 
                                                << 0x00000010U)) 
                                            | ((0x3fffff80U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_63) 
                                                   << 7U)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_62) 
                                                  >> 2U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U] 
        = ((0x01ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[2U]) 
           | (0xfe000000U & (0x70000000U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                            << 0x00000019U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U] 
        = ((0xfff00000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U]) 
           | (0x01ffffffU & (0x0001b0c8U | ((0x01fff800U 
                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                << 0x0000000bU)) 
                                            | ((0x01fffffcU 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_67) 
                                                   << 2U)) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_66) 
                                                  >> 7U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U] 
        = ((0x000fffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[3U]) 
           | (0xfff00000U & (0x83000000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                             << 0x0000001dU) 
                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                               << 0x00000014U)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U] 
        = ((0xffffffc0U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U]) 
           | (0x000fffffU & (6U | ((0x000fffffU & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
                                                   >> 3U)) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                      >> 0x0000000cU)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U] 
        = ((0xfe00003fU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U]) 
           | (0xffffffc0U & (0x00170b00U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                             << 0x00000018U) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                                                << 0x0000000fU) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17) 
                                                  << 6U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U] 
        = (0x2a000000U | (0x01ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = (0xfffffffeU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = ((0xfffffc01U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]) 
           | (0xfffffffeU & (0x0000004cU | ((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSelfRef.top__DOT__inst)) 
                                            << 1U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = ((0xe00003ffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]) 
           | (0xfffffc00U & (0x0120a000U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                             << 0x0000001cU) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                << 0x00000013U) 
                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                                  << 0x0000000aU))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U] 
        = (0x20000000U | (0x1fffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U] 
        = (2U | (0xffffffe0U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U] 
        = ((0x0000001fU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[6U]) 
           | (0xffffffe0U & (0x07018400U | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                                             << 0x00000017U) 
                                            | (((0x17U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.top__DOT__inst)) 
                                                << 0x0000000eU) 
                                               | ((0x37U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.top__DOT__inst)) 
                                                  << 5U))))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U] 
        = (0x0048181cU | ((0xf8000000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U]) 
                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                              << 0x00000012U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_69) 
                                                  << 9U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_68)))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U] 
        = ((0x07ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[7U]) 
           | (0xf8000000U & (0x80000000U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
                                            << 0x0000001bU))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U]) 
           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_72) 
              >> 5U));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[8U]) 
           | (0xfffffff0U & (0x0503c0a0U | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75) 
                                               << 0x0000001bU) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                 << 0x00000012U)) 
                                             | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_74) 
                                                 << 9U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10))) 
                                            << 4U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U] 
        = (0x00300802U | ((0xf8000000U & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U]) 
                          | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78) 
                               << 0x0000001aU) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                  << 0x00000011U)) 
                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                << 8U))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U] 
        = ((0x07ffffffU & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[9U]) 
           | (0xf8000000U & (0x58000000U | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                               << 0x0000001aU) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80) 
                                                 << 0x00000011U)) 
                                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                                << 8U)) 
                                            << 0x0000001bU))));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut[10U] 
        = (0x003fffffU & (0x0001a010U | (((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7) 
                                            << 0x0000001aU) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_80) 
                                              << 0x00000011U)) 
                                          | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_79) 
                                             << 8U)) 
                                         >> 5U)));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[31U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_75;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[3U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[4U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[5U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[6U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[7U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[8U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[9U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[10U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[11U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[12U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[13U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[14U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[15U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[16U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[17U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[18U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[19U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[20U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[21U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[22U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[23U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[24U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[25U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[26U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[27U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[28U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[29U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[30U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[31U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[32U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[33U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[34U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[35U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[36U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[37U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[3U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[4U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[5U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[6U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[7U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[8U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[9U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[9U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[10U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[10U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[11U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[11U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[12U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[12U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[13U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[13U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[14U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[14U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[15U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[15U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[16U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[16U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[17U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[17U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[18U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[18U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[19U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[19U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[20U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[20U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[21U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[21U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[22U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[22U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[23U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[23U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[24U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[24U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[25U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[25U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[26U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[26U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[27U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[27U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[28U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[28U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[29U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[29U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[30U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[30U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[31U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[31U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[32U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[32U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[33U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[33U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[34U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[34U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[35U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[35U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[36U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[36U]));
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[37U])) 
              & vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[37U]));
    vlSelfRef.top__DOT__op_encoded = vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[9U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[10U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[11U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[12U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[13U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[14U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[15U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[16U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[17U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[18U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[19U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[20U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[21U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.top__DOT__op_encoded) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__M_ren = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.top__DOT__op_encoded) 
            == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__M_rlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wlen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[9U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[9U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[9U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[10U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[10U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[10U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[11U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[11U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[11U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[12U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[12U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[12U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[13U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[13U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[13U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[14U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[14U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[14U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[15U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[15U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[15U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[16U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[16U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[16U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[17U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[17U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[17U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[18U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[18U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[18U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[19U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[19U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[19U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[20U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[20U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[20U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[21U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[21U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[21U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[22U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[22U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[22U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[23U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[23U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[23U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[24U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[24U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[24U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[25U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[25U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[25U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[26U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[26U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[26U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[27U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[27U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[27U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[28U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[28U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[28U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[29U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[29U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[29U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[30U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[30U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[30U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[31U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[31U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[31U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[32U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[32U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[32U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[33U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[33U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[33U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[34U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[34U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[34U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[35U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[35U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[35U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[36U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[36U]));
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[36U]));
    vlSelfRef.top__DOT__u2__DOT__op_type = ((IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit)
                                             ? (IData)(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out)
                                             : 7U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.top__DOT__op_encoded) 
            == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.top__DOT__op_encoded) 
               == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_en 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__rs1 = (0x0000001fU 
                                        & ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit)
                                            ? (IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out)
                                            : (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000fU)));
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
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit) 
           | ((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                     >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
           == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
              == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                       == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u2__DOT__op_type) 
                          == vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[8U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (vlSelfRef.top__DOT__pc 
                                                + vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = (0x0000001fU & vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[4U] 
        = (0x0000001fU & vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[5U] 
        = (0x0000001fU & vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[9U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = (0x0000001300000000ULL 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0x00000014U))])));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))] 
                                                 >> 0x0000001fU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (0x0000001fU 
                                                & vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 == vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 >= vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 + vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 - vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 | vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 & vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                < vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                ^ vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                >> 0x0000001fU);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__load = (vlSelfRef.top__DOT__u0__DOT__rf
                                                  [
                                                  (0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                  & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_en))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = (vlSelfRef.top__DOT__imm 
                                                 & vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54 = (vlSelfRef.top__DOT__imm 
                                                 | vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (vlSelfRef.top__DOT__imm 
                                                ^ vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                 [(0x0000000fU 
                                                   & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                                                 < vlSelfRef.top__DOT__imm);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__imm 
                                                + vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000000fU 
                                                  & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                             & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000014U))] 
            << 8U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | (vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 0x00000014U))] 
              >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000000000014ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                [
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.top__DOT__inst 
                                                                    >> 0x00000014U))])) 
                                                << 8U))) 
              << 8U));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U] 
        = ((0x00ff0000U & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U]) 
           | (0x00ffffffU & (((IData)((0x0000000000000014ULL 
                                       | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                          [
                                                          (0x0000000fU 
                                                           & (vlSelfRef.top__DOT__inst 
                                                              >> 0x00000014U))])) 
                                          << 8U))) 
                              >> 0x00000018U) | ((IData)(
                                                         ((0x0000000000000014ULL 
                                                           | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                              [
                                                                              (0x0000000fU 
                                                                               & (vlSelfRef.top__DOT__inst 
                                                                                >> 0x00000014U))])) 
                                                              << 8U)) 
                                                          >> 0x00000020U)) 
                                                 << 8U))));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (0x00120000U | (0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wdata = ((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit)
                                    ? vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000540U | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (0x00ac0540U | ((0x80000000U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U]) 
                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                              << 0x0000001aU) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                  << 0x0000000dU) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (0x7fffffffU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((0xfff00000U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U]) 
           | (0x7fffffffU & (0x0000600fU | (0x00000f80U 
                                            & (vlSelfRef.top__DOT__imm 
                                               << 7U)))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((0x000fffffU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U]) 
           | (0xfff00000U & (0x12000000U | (((0x0003e000U 
                                              & (vlSelfRef.top__DOT__imm 
                                                 << 0x0000000dU)) 
                                             | (0x0000001fU 
                                                & vlSelfRef.top__DOT__imm)) 
                                            << 0x00000014U))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (0x00003fffU & (0x00000280U | (((0x0003e000U 
                                           & (vlSelfRef.top__DOT__imm 
                                              << 0x0000000dU)) 
                                          | (0x0000001fU 
                                             & vlSelfRef.top__DOT__imm)) 
                                         >> 0x0000000cU)));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = 
            ((IData)(4U) + vlSelfRef.top__DOT__pc);
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = 
            ((IData)(4U) + vlSelfRef.top__DOT__pc);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[0U] 
        = (0x0000002000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[3U] 
        = (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27 = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                                  >> 0x0000001fU)
                                                  ? 
                                                 ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                  > (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                  : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                                   >> 0x0000001fU)
                                                   ? 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                   <= (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))
                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34))
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (2U | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                 >> 0x0000001fU));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__load;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__load;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
           >> 0x0000001fU);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[11U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[12U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[13U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[14U] 
        = (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56 = (1U 
                                                 & (- (IData)(
                                                              ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                                >> 0x0000001fU)
                                                                ? 
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                                > 
                                                                (vlSelfRef.top__DOT__imm 
                                                                 >> 0x0000001fU))
                                                                : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x0000001300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000001300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
            << 8U) | (IData)(((0x0000001300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (0x00001400U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000001200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (0x00ffffffU & (((IData)((0x0000001200000000ULL 
                                    | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
                           >> 0x00000010U) | ((IData)(
                                                      ((0x0000001200000000ULL 
                                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                       >> 0x00000020U)) 
                                              << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[7U] 
        = (0xfffffffeU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
            << 8U) | (IData)(((0x0000000400000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (0x00000c00U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000b00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000b00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))) 
            >> 0x00000010U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                << 0x00000018U) | ((IData)(
                                                           ((0x0000000b00000000ULL 
                                                             | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x01000000U | (((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                           >> 8U)) 
                           | ((IData)(((0x0000000b00000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                       >> 0x00000020U)) 
                              >> 0x00000010U)) | (0x00ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                     >> 8U))));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[5U] 
        = (IData)((0x0000000d00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[6U] 
        = (0x000000ffU & (IData)(((0x0000000d00000000ULL 
                                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                  >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[16U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0;
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit)
                                                    ? (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out)
                                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00001fffU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
                          >> 0x0000000dU));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00001fffU & ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
                           << 6U) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[0U] 
                                     >> 0x0000001aU)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (0x00001fffU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
                          >> 7U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[4U] 
        = (0x00001fffU & ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[2U] 
                           << 0x0000000cU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[1U] 
                                              >> 0x00000014U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[5U] 
        = (0x00001fffU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut[2U] 
                          >> 1U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[0U] 
        = (0x0000001900000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[4U] 
        = (1U & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)
                                                  ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = (((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                   >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                      >> 1U)) == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[15U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut[5U]))));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_waddr = ((IData)(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit)
                                    ? vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__M_raddr = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit)
                                    ? vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out
                                    : 0U);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift) 
                                   >> 1U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key 
        = ((2U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                  << 1U)) | (1U & (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000001900000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 
            << 8U) | (IData)(((0x0000001900000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U] 
        = (0x00001b00U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000001800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000001800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)))) 
            >> 0x00000010U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 
                                << 0x00000018U) | ((IData)(
                                                           ((0x0000001800000000ULL 
                                                             | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[4U] 
        = (0x1a000000U | (((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 
                                           >> 8U)) 
                           | ((IData)(((0x0000001800000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35))) 
                                       >> 0x00000020U)) 
                              >> 0x00000010U)) | (0x00ff0000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 
                                                     >> 8U))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[5U] 
        = (IData)((0x0000001600000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[6U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
            << 8U) | (IData)(((0x0000001600000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U] 
        = (0x00001700U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U]) 
           | ((IData)((0x0000001500000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[8U] 
        = (((IData)((0x0000001500000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))) 
            >> 0x00000010U) | (((0xfffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                << 8U)) 
                                | (IData)(((0x0000001500000000ULL 
                                            | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                           >> 0x00000020U))) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[9U] 
        = (0x03000000U | ((((0xfffffe00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                            << 8U)) 
                            | (IData)(((0x0000001500000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                                       >> 0x00000020U))) 
                           >> 0x00000010U) | (0x00ff0000U 
                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                 >> 8U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42 = (((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                                    >> 1U));
    if (vlSelfRef.top__DOT__M_ren) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP(vlSelfRef.top__DOT__M_raddr, vlSelfRef.top__DOT__u5__DOT__rlen_num, vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout);
        vlSelfRef.top__DOT__M_rdata = vlSelfRef.__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout;
    } else {
        vlSelfRef.top__DOT__M_rdata = 0U;
    }
    if (vlSelfRef.top__DOT__M_wen) {
        Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP(vlSelfRef.top__DOT__M_waddr, vlSelfRef.top__DOT__M_wdata, vlSelfRef.top__DOT__u5__DOT__wlen_num);
    }
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__op_encoded) 
           == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__op_encoded) 
              == vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__dnpc = ((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit)
                                 ? vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out
                                 : ((IData)(4U) + vlSelfRef.top__DOT__pc));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[3U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[4U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[3U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[4U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[5U]))));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[5U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[6U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[6U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[7U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[7U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[9U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut[8U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
            << 3U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_42))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                          >> 0x0000001dU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[17U] 
        = vlSelfRef.top__DOT__M_rdata;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[18U] 
        = vlSelfRef.top__DOT__M_rdata;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[20U] 
        = vlSelfRef.top__DOT__M_rdata;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000002000000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
            << 8U) | (IData)(((0x0000002000000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U] 
        = (0x00002100U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000002200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000002200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
            >> 0x00000010U) | (((0x00000100U & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                << 8U)) 
                                | (IData)(((0x0000002200000000ULL 
                                            | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                           >> 0x00000020U))) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U] 
        = ((0xff000000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U]) 
           | (((0x00000100U & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                               << 8U)) | (IData)(((0x0000002200000000ULL 
                                                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                  >> 0x00000020U))) 
              >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U] 
        = ((0x00ffffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U]) 
           | ((IData)((0x000000000000001fULL | ((QData)((IData)(
                                                                (1U 
                                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                                << 8U))) 
              << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[5U] 
        = (((IData)((0x000000000000001fULL | ((QData)((IData)(
                                                              (1U 
                                                               & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                              << 8U))) 
            >> 8U) | ((IData)(((0x000000000000001fULL 
                                | ((QData)((IData)(
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))) 
                                   << 8U)) >> 0x00000020U)) 
                      << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[6U] 
        = (IData)((0x00001d0000000026ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)) 
                                            << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[7U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 
            << 0x00000010U) | (IData)(((0x00001d0000000026ULL 
                                        | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)) 
                                           << 8U)) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U] 
        = ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U]) 
           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 
              >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U]) 
           | ((IData)((0x000015000000001cULL | ((QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.top__DOT__pc))) 
                                                << 8U))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[9U] 
        = (((IData)((0x000015000000001cULL | ((QData)((IData)(
                                                              ((IData)(4U) 
                                                               + vlSelfRef.top__DOT__pc))) 
                                              << 8U))) 
            >> 0x00000010U) | ((IData)(((0x000015000000001cULL 
                                         | ((QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSelfRef.top__DOT__pc))) 
                                            << 8U)) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[10U] 
        = (IData)((0x0000001100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[11U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
            << 8U) | (IData)(((0x0000001100000000ULL 
                               | (QData)((IData)(vlSelfRef.top__DOT__imm))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U] 
        = (0x00001000U | ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U]) 
                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                             >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U]) 
           | ((IData)((0x0000000300000000ULL | (QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSelfRef.top__DOT__pc))))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[13U] 
        = (((IData)((0x0000000300000000ULL | (QData)((IData)(
                                                             ((IData)(4U) 
                                                              + vlSelfRef.top__DOT__pc))))) 
            >> 0x00000010U) | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                << 0x00000018U) | ((IData)(
                                                           ((0x0000000300000000ULL 
                                                             | (QData)((IData)(
                                                                               ((IData)(4U) 
                                                                                + vlSelfRef.top__DOT__pc)))) 
                                                            >> 0x00000020U)) 
                                                   << 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U] 
        = ((0xff000000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U]) 
           | (((0x0000ffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                               >> 8U)) | ((IData)((
                                                   (0x0000000300000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelfRef.top__DOT__pc)))) 
                                                   >> 0x00000020U)) 
                                          >> 0x00000010U)) 
              | (0x00ff0000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 
                                >> 8U))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U] 
        = ((0x00ffffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U]) 
           | ((IData)((0x00000e0000000007ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                                << 8U))) 
              << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[15U] 
        = (((IData)((0x00000e0000000007ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                              << 8U))) 
            >> 8U) | ((IData)(((0x00000e0000000007ULL 
                                | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                   << 8U)) >> 0x00000020U)) 
                      << 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[16U] 
        = (((0x00ffff00U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                            << 8U)) | ((IData)(((0x00000e0000000007ULL 
                                                 | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54)) 
                                                    << 8U)) 
                                                >> 0x00000020U)) 
                                       >> 8U)) | (0xff000000U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                                     << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U]) 
           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
              >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U] 
        = ((0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U]) 
           | ((IData)((8ULL | ((QData)((IData)((1U 
                                                & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))) 
                               << 8U))) << 8U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U] 
        = ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U]) 
           | (((IData)((8ULL | ((QData)((IData)((1U 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))) 
                                << 8U))) >> 0x00000018U) 
              | ((IData)(((8ULL | ((QData)((IData)(
                                                   (1U 
                                                    & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)))))) 
                                   << 8U)) >> 0x00000020U)) 
                 << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U]) 
           | ((IData)((0x00000f0000000005ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                                << 8U))) 
              << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[19U] 
        = (((IData)((0x00000f0000000005ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                              << 8U))) 
            >> 0x00000010U) | ((IData)(((0x00000f0000000005ULL 
                                         | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                            << 8U)) 
                                        >> 0x00000020U)) 
                               << 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[20U] 
        = (((0x0000ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            | ((IData)(((0x00000f0000000005ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_56)) 
                                                  << 8U)) 
                        >> 0x00000020U)) >> 0x00000010U)) 
           | (0xffff0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[21U] 
        = (IData)((0x0000040000000002ULL | ((QData)((IData)(vlSelfRef.top__DOT__M_rdata)) 
                                            << 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[22U] 
        = ((vlSelfRef.top__DOT__M_rdata << 0x00000010U) 
           | (IData)(((0x0000040000000002ULL | ((QData)((IData)(vlSelfRef.top__DOT__M_rdata)) 
                                                << 8U)) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U] 
        = ((0xffff0000U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U]) 
           | (vlSelfRef.top__DOT__M_rdata >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U] 
        = ((0x0000ffffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U]) 
           | (0xffff0000U & (0x000c0000U | (vlSelfRef.top__DOT__M_rdata 
                                            << 0x00000018U))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U]) 
           | (0x000000ffU & (vlSelfRef.top__DOT__M_rdata 
                             >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U] 
        = ((0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U]) 
           | (0xffffff00U & (0x0b000000U | (0x00ffff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.top__DOT__M_rdata 
                                                              >> 0x0000000fU)))) 
                                               << 8U)))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[25U] 
        = (IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__M_rdata))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U] 
        = ((0xffffff00U & (((- (IData)((1U & (vlSelfRef.top__DOT__M_rdata 
                                              >> 7U)))) 
                            << 0x00000010U) | (0x0000ff00U 
                                               & (vlSelfRef.top__DOT__M_rdata 
                                                  << 8U)))) 
           | (IData)(((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__M_rdata))) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U] 
        = ((0x0000ff00U & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U]) 
           | (0x000000ffU & ((- (IData)((1U & (vlSelfRef.top__DOT__M_rdata 
                                               >> 7U)))) 
                             >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U] 
        = (0x00000d00U | (0x000000ffU & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U]));
    if (((3U == (IData)(vlSelfRef.top__DOT__op_encoded)) 
         | (0x15U == (IData)(vlSelfRef.top__DOT__op_encoded)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.top__DOT__dnpc, (IData)(vlSelfRef.top__DOT__u2__DOT__rs1), 
                                                                            (0x0000001fU 
                                                                             & (vlSelfRef.top__DOT__inst 
                                                                                >> 7U)), vlSelfRef.top__DOT__imm);
    }
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[1U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[1U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[2U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[2U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[3U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[4U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[3U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[4U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[5U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[5U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[7U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[6U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[6U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[7U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[7U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[9U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[8U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[8U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[11U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[10U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[9U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[11U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[10U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[13U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[12U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[11U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[14U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[13U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[12U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[16U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[15U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[13U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[16U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[14U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[17U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[15U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[19U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[18U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[16U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[21U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[20U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[17U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[22U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[21U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[18U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[22U])) 
                                       >> 0x00000010U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[19U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[20U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[25U]))));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[21U] 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U])) 
                                       >> 8U)));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[19U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[24U] 
            << 8U) | (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[23U] 
                      >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[21U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[27U] 
            << 0x00000018U) | (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut[26U] 
                               >> 8U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                       == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[9U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[9U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[10U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[10U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[11U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[11U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[12U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[12U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[13U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[13U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[14U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[14U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[15U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[15U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[16U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[16U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[17U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[17U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[18U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[18U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[19U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[19U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[20U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[20U]));
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__op_encoded) 
                          == vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[21U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[21U]));
    vlSelfRef.top__DOT__u3__DOT__dst_common = vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                                    >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
            << 4U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | (0x0000000fU & (4U | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                         >> 0x0000001cU)))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                                    >> 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
            << 6U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                          >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                                    >> 8U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
            << 0x0000000aU) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                          >> 0x00000016U))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = (((- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit))) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                                    >> 0x00000010U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
            << 0x00000012U) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                          >> 0x0000000eU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4)))) 
              << 4U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__dst_shift = vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out;
}

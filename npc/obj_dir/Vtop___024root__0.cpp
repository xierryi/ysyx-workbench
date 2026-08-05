// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int add(int a, int b);

void Vtop___024root____Vdpiimwrap_top__DOT__add_TOP(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__add_TOP\n"); );
    // Body
    int a__Vcvt;
    a__Vcvt = a;
    int b__Vcvt;
    b__Vcvt = b;
    int add__Vfuncrtn__Vcvt;
    add__Vfuncrtn__Vcvt = add(a__Vcvt, b__Vcvt);
    add__Vfuncrtn = (add__Vfuncrtn__Vcvt);
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
    vlSelfRef.top__DOT__u2__DOT__op_encoded = (1U & 
                                               (- (IData)((IData)(
                                                                  (0x00000067U 
                                                                   == 
                                                                   (0x0000707fU 
                                                                    & vlSelfRef.inst))))));
    vlSelfRef.top__DOT__u2__DOT__operand3 = (((- (IData)(
                                                         (vlSelfRef.inst 
                                                          >> 0x0000001fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.inst 
                                                >> 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000001fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                + vlSelfRef.top__DOT__u2__DOT__operand3);
    vlSelfRef.top__DOT__u3__DOT__result = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                            & (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                           | (((IData)(4U) 
                                               + vlSelfRef.pc) 
                                              & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))));
    vlSelfRef.top__DOT__u3__DOT__dnpc = ((((IData)(4U) 
                                           + vlSelfRef.pc) 
                                          & (- (IData)(
                                                       (1U 
                                                        != (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                         | (0xfffffffeU 
                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                               & (- (IData)(
                                                            (1U 
                                                             == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))));
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
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
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
    CData/*4:0*/ __VdlyDim0__top__DOT__u0__DOT__rf__v0;
    __VdlyDim0__top__DOT__u0__DOT__rf__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__u0__DOT__rf__v0;
    __VdlySet__top__DOT__u0__DOT__rf__v0 = 0;
    // Body
    __VdlySet__top__DOT__u0__DOT__rf__v0 = 0U;
    VL_WRITEF_NX("PC: %x\nrdata1: %x\nraddr1: %x\noperand3: %x\nwaddr: %x\nwdata: %x\n   \n",6
                 , '#',32,vlSelfRef.pc, '#',32,vlSelfRef.top__DOT__u0__DOT__rf
                 [(0x0000001fU & (vlSelfRef.inst >> 0x0000000fU))]
                 , '#',5,(0x0000001fU & (vlSelfRef.inst 
                                         >> 0x0000000fU))
                 , '#',32,vlSelfRef.top__DOT__u2__DOT__operand3
                 , '#',5,(0x0000001fU & (vlSelfRef.inst 
                                         >> 7U)), '#',32,vlSelfRef.top__DOT__u3__DOT__result);
    if ((0U != (0x0000001fU & (vlSelfRef.inst >> 7U)))) {
        __VdlyVal__top__DOT__u0__DOT__rf__v0 = vlSelfRef.top__DOT__u3__DOT__result;
        __VdlyDim0__top__DOT__u0__DOT__rf__v0 = (0x0000001fU 
                                                 & (vlSelfRef.inst 
                                                    >> 7U));
        __VdlySet__top__DOT__u0__DOT__rf__v0 = 1U;
    }
    if (__VdlySet__top__DOT__u0__DOT__rf__v0) {
        vlSelfRef.top__DOT__u0__DOT__rf[__VdlyDim0__top__DOT__u0__DOT__rf__v0] 
            = __VdlyVal__top__DOT__u0__DOT__rf__v0;
    }
    if (vlSelfRef.wen_pc) {
        vlSelfRef.pc = vlSelfRef.top__DOT__u3__DOT__dnpc;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000001fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                + vlSelfRef.top__DOT__u2__DOT__operand3);
    vlSelfRef.top__DOT__u3__DOT__result = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                            & (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                           | (((IData)(4U) 
                                               + vlSelfRef.pc) 
                                              & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))));
    vlSelfRef.top__DOT__u3__DOT__dnpc = ((((IData)(4U) 
                                           + vlSelfRef.pc) 
                                          & (- (IData)(
                                                       (1U 
                                                        != (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                         | (0xfffffffeU 
                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                               & (- (IData)(
                                                            (1U 
                                                             == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))));
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
    if (VL_UNLIKELY(((vlSelfRef.wen_pc & 0xfeU)))) {
        Verilated::overWidthError("wen_pc");
    }
}
#endif  // VL_DEBUG

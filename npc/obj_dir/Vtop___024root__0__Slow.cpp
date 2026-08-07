// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__u0__DOT__rf[0U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/xierry/ysyx-workbench/npc/vsrc/top.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_h8eaafbfe_0;
void Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__pmem_read_TOP(vlSelfRef.top__DOT__pc, vlSelfRef.__Vfunc_top__DOT__u1__DOT__pmem_read__0__Vfuncout);
    vlSelfRef.top__DOT__inst = vlSelfRef.__Vfunc_top__DOT__u1__DOT__pmem_read__0__Vfuncout;
    vlSelfRef.top__DOT__u2__DOT__op_encoded = ((1U 
                                                & (- (IData)((IData)(
                                                                     (0x00000013U 
                                                                      == 
                                                                      (0x0000707fU 
                                                                       & vlSelfRef.top__DOT__inst)))))) 
                                               | ((2U 
                                                   & (- (IData)(
                                                                (0x37U 
                                                                 == 
                                                                 (0x0000007fU 
                                                                  & vlSelfRef.top__DOT__inst))))) 
                                                  | ((3U 
                                                      & (- (IData)((IData)(
                                                                           (0x00002003U 
                                                                            == 
                                                                            (0x0000707fU 
                                                                             & vlSelfRef.top__DOT__inst)))))) 
                                                     | ((4U 
                                                         & (- (IData)((IData)(
                                                                              (0x00004003U 
                                                                               == 
                                                                               (0x0000707fU 
                                                                                & vlSelfRef.top__DOT__inst)))))) 
                                                        | ((5U 
                                                            & (- (IData)((IData)(
                                                                                (0x00002023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.top__DOT__inst)))))) 
                                                           | ((6U 
                                                               & (- (IData)((IData)(
                                                                                (0x00000023U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.top__DOT__inst)))))) 
                                                              | ((7U 
                                                                  & (- (IData)((IData)(
                                                                                (0x00000067U 
                                                                                == 
                                                                                (0x0000707fU 
                                                                                & vlSelfRef.top__DOT__inst)))))) 
                                                                 | (8U 
                                                                    & (- (IData)(
                                                                                (0x00100073U 
                                                                                == vlSelfRef.top__DOT__inst)))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((3U 
                                                 == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)) 
                                                | (4U 
                                                   == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)));
    vlSelfRef.top__DOT__u3__DOT__M_wen = ((5U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)) 
                                          | (6U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)));
    vlSelfRef.__Vtableidx1 = vlSelfRef.top__DOT__u2__DOT__op_encoded;
    vlSelfRef.top__DOT__u2__DOT__op_type = Vtop__ConstPool__TABLE_h8eaafbfe_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.top__DOT__u3__DOT__M_wdata = (vlSelfRef.top__DOT__u0__DOT__rf
                                            [(0x0000001fU 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))] 
                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_wen))));
    vlSelfRef.top__DOT__u2__DOT__operand3 = (((((- (IData)(
                                                           (vlSelfRef.top__DOT__inst 
                                                            >> 0x0000001fU))) 
                                                << 0x0000000cU) 
                                               | (vlSelfRef.top__DOT__inst 
                                                  >> 0x00000014U)) 
                                              & (- (IData)(
                                                           (1U 
                                                            == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type))))) 
                                             | (((((- (IData)(
                                                              (vlSelfRef.top__DOT__inst 
                                                               >> 0x0000001fU))) 
                                                   << 0x0000000cU) 
                                                  | ((0x00000fe0U 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 0x00000014U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.top__DOT__inst 
                                                           >> 7U)))) 
                                                 & (- (IData)(
                                                              (2U 
                                                               == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type))))) 
                                                | (0xfffff000U 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      & (- (IData)(
                                                                   (4U 
                                                                    == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__u0__DOT__rf
                                                [(0x0000001fU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x0000000fU))] 
                                                + vlSelfRef.top__DOT__u2__DOT__operand3);
    vlSelfRef.top__DOT__u3__DOT__dnpc = ((((IData)(4U) 
                                           + vlSelfRef.top__DOT__pc) 
                                          & (- (IData)(
                                                       (7U 
                                                        != (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                         | (0xfffffffeU 
                                            & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                               & (- (IData)(
                                                            (7U 
                                                             == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))));
    vlSelfRef.top__DOT__u3__DOT__M_waddr = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_wen))));
    vlSelfRef.top__DOT__u3__DOT__M_raddr = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                            & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))));
    if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
         | (IData)(vlSelfRef.top__DOT__u3__DOT__M_wen))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__pmem_read_TOP(vlSelfRef.top__DOT__u3__DOT__M_raddr, vlSelfRef.__Vfunc_top__DOT__u5__DOT__pmem_read__2__Vfuncout);
        vlSelfRef.top__DOT__M_rdata = vlSelfRef.__Vfunc_top__DOT__u5__DOT__pmem_read__2__Vfuncout;
        if (vlSelfRef.top__DOT__u3__DOT__M_wen) {
            Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__pmem_write_TOP(vlSelfRef.top__DOT__u3__DOT__M_waddr, vlSelfRef.top__DOT__u3__DOT__M_wdata, 
                                                                           ((0x0fU 
                                                                             & (- (IData)(
                                                                                (5U 
                                                                                == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                                                            | ((- (IData)(
                                                                                (6U 
                                                                                == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))) 
                                                                               & ((1U 
                                                                                & (- (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__u3__DOT__M_waddr))))) 
                                                                                | ((2U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__u3__DOT__M_waddr))))) 
                                                                                | ((4U 
                                                                                & (- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__u3__DOT__M_waddr))))) 
                                                                                | (8U 
                                                                                & (- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (3U 
                                                                                & vlSelfRef.top__DOT__u3__DOT__M_waddr)))))))))));
        }
    } else {
        vlSelfRef.top__DOT__M_rdata = 0U;
    }
    vlSelfRef.top__DOT__u3__DOT__result = (((vlSelfRef.top__DOT__u0__DOT__rf
                                             [(0x0000001fU 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 0x0000000fU))] 
                                             + vlSelfRef.top__DOT__u0__DOT__rf
                                             [(0x0000001fU 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 0x00000014U))]) 
                                            & (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                           | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                               & (- (IData)(
                                                            (1U 
                                                             == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                              | ((((IData)(4U) 
                                                   + vlSelfRef.top__DOT__pc) 
                                                  & (- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                                 | (((- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))) 
                                                     & vlSelfRef.top__DOT__u2__DOT__operand3) 
                                                    | ((vlSelfRef.top__DOT__M_rdata 
                                                        & (- (IData)(
                                                                     (3U 
                                                                      == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                                       | (0x000000ffU 
                                                          & ((vlSelfRef.top__DOT__M_rdata 
                                                              >> 
                                                              (0x00000018U 
                                                               & (vlSelfRef.top__DOT__u3__DOT__M_raddr 
                                                                  << 3U))) 
                                                             & (- (IData)(
                                                                          (4U 
                                                                           == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        Vtop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->wen_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226285444263916044ull);
    vlSelf->top__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4033626345969658743ull);
    vlSelf->top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8764853023528993103ull);
    vlSelf->top__DOT__M_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2089852432179026286ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__u0__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12246715171773537061ull);
    }
    vlSelf->top__DOT__u2__DOT__operand3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17296880236766824348ull);
    vlSelf->top__DOT__u2__DOT__op_encoded = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2249525941459003166ull);
    vlSelf->top__DOT__u2__DOT__op_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13301834075107919186ull);
    vlSelf->top__DOT__u3__DOT__M_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5932320230445147276ull);
    vlSelf->top__DOT__u3__DOT__M_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11188281265537036746ull);
    vlSelf->top__DOT__u3__DOT__M_waddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7724367165059228144ull);
    vlSelf->top__DOT__u3__DOT__M_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1086205936943601278ull);
    vlSelf->top__DOT__u3__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18191861765634538509ull);
    vlSelf->top__DOT__u3__DOT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6483488620404914423ull);
    vlSelf->__Vfunc_top__DOT__u1__DOT__pmem_read__0__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__u5__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int pmem_read(int raddr);

void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void npc_trap(int pc);

void Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    npc_trap(pc__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask);

void Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wmask__Vcvt;
    wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
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

extern const VlUnpacked<CData/*2:0*/, 16> Vtop__ConstPool__TABLE_h8eaafbfe_0;

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
    if ((8U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u3__DOT__npc_trap_TOP(vlSelfRef.top__DOT__pc);
    }
    if (((1U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
         | ((4U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
            | (0U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type))))) {
        if ((0U != (0x0000001fU & (vlSelfRef.top__DOT__inst 
                                   >> 7U)))) {
            __VdlyVal__top__DOT__u0__DOT__rf__v0 = vlSelfRef.top__DOT__u3__DOT__result;
            __VdlyDim0__top__DOT__u0__DOT__rf__v0 = 
                (0x0000001fU & (vlSelfRef.top__DOT__inst 
                                >> 7U));
            __VdlySet__top__DOT__u0__DOT__rf__v0 = 1U;
        }
    }
    if (__VdlySet__top__DOT__u0__DOT__rf__v0) {
        vlSelfRef.top__DOT__u0__DOT__rf[__VdlyDim0__top__DOT__u0__DOT__rf__v0] 
            = __VdlyVal__top__DOT__u0__DOT__rf__v0;
    }
    if (vlSelfRef.wen_pc) {
        vlSelfRef.top__DOT__pc = vlSelfRef.top__DOT__u3__DOT__dnpc;
    }
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
    vlSelfRef.top__DOT__u3__DOT__M_wen = ((5U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)) 
                                          | (6U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((3U 
                                                 == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)) 
                                                | (4U 
                                                   == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)));
    vlSelfRef.__Vtableidx1 = vlSelfRef.top__DOT__u2__DOT__op_encoded;
    vlSelfRef.top__DOT__u2__DOT__op_type = Vtop__ConstPool__TABLE_h8eaafbfe_0
        [vlSelfRef.__Vtableidx1];
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
            Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__pmem_write_TOP(vlSelfRef.top__DOT__u3__DOT__M_waddr, 
                                                                           (vlSelfRef.top__DOT__u0__DOT__rf
                                                                            [
                                                                            (0x0000001fU 
                                                                             & (vlSelfRef.top__DOT__inst 
                                                                                >> 0x00000014U))] 
                                                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_wen)))), 
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
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
    IData/*31:0*/ __VnbaIterCount;
    // Body
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

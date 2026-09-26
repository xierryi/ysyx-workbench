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
    vlSelfRef.__Vtrigprevexpr___TOP__rst_pc__0 = vlSelfRef.rst_pc;
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
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[1U] = 0x019eU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[2U] = 0x01beU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[0U] = 0x2aU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U] = 0x0aU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0U] = 0x0000003300000000ULL;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U] = 0x67U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U] = 0x6fU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U] = 0x00002000U;
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__pair_list[0U] = 0xc7U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[0U] = 0x00dfU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[1U] = 0x019eU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[2U] = 0x01beU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[3U] = 0x000dU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U] = 0x37U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list[0U] = 0xdfU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list[1U] = 0x2fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U] = 0x17U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list[0U] = 0x67U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list[1U] = 0xc7U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U] = 0x63U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[0U] = 0x67U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[1U] = 0x27U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[2U] = 7U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[3U] = 0xcfU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[4U] = 0xdfU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[5U] = 0x2fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[6U] = 0x6fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U] = 0x6fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U] = 0x17U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__pair_list[0U] = 7U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__pair_list[0U] = 0x47U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__pair_list[0U] = 0xe7U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__pair_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[0U] = 0x0fU;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[1U] = 0x0dU;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[2U] = 9U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[0U] = 0x0bU;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[1U] = 5U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[0U] = 0x0bU;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[1U] = 5U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list[0U] = 0x0000000300000004ULL;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list[1U] = 0x0000000100000002ULL;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list[2U] = 1ULL;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list[0U] = 0x0000000300000004ULL;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list[1U] = 0x0000000100000002ULL;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list[2U] = 1ULL;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[2U] = 0U;
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

void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__cpu_get_pc_TOP(IData/*31:0*/ pc);
void Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP(IData/*31:0*/ idx, IData/*31:0*/ val);
void Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__vaddr_ifetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &vaddr_ifetch__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &vaddr_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__u5__DOT__vaddr_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);
void Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__ftrace_get_addr_TOP(IData/*31:0*/ inst_addr, IData/*31:0*/ func_addr, CData/*7:0*/ rs1, CData/*7:0*/ rd, IData/*31:0*/ imm);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u1__DOT__cpu_get_pc_TOP(vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i)) {
        Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP(vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i, vlSelfRef.top__DOT__u0__DOT__rf
                                                                        [
                                                                        (0x0000000fU 
                                                                         & vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i)]);
        vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i);
    }
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

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge rst_pc)\n");
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15359565743569077114ull);
    vlSelf->wen_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226285444263916044ull);
    vlSelf->d_init_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8706697234175321084ull);
    vlSelf->top__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4033626345969658743ull);
    vlSelf->top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8764853023528993103ull);
    vlSelf->top__DOT__M_wlen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10019196659265969935ull);
    vlSelf->top__DOT__M_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2089852432179026286ull);
    vlSelf->top__DOT__M_rlen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13091405235891365904ull);
    vlSelf->top__DOT__Branch = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14285745547357499740ull);
    vlSelf->top__DOT__isB_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12076777690325832071ull);
    vlSelf->top__DOT__RegIn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8904632021881433607ull);
    vlSelf->top__DOT__ALUIn1Sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13002118892663053023ull);
    vlSelf->top__DOT__ALUIn2Sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2204147620257950318ull);
    vlSelf->top__DOT__R_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13957594414427133256ull);
    vlSelf->top__DOT__M_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873058058323851080ull);
    vlSelf->top__DOT__M_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8665034915090363070ull);
    vlSelf->top__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742840385043591541ull);
    vlSelf->top__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18445623346312568628ull);
    vlSelf->top__DOT__dst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4450739016619022941ull);
    vlSelf->top__DOT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3608326066998884506ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__u0__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12246715171773537061ull);
    }
    vlSelf->top__DOT__u0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__u2__DOT__EandCSR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17712463383596660971ull);
    vlSelf->top__DOT__u2__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15170932342451714088ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1041567416637317283ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14433967447813876651ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17419908972428477038ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3723252573705649875ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6125614422764194355ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8689886583231262863ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18065438423515808146ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7506876524139760386ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18204934565112437221ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10844741341513648889ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12799394012973590474ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1533052080494737967ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 204172692690261542ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4421397767128334053ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 181556053278877872ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12103187251163046017ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11812144141751395180ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16047563470094832842ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12783464119180516404ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8955459444254736878ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11898900626097227562ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17467568282956814426ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7064829853333026821ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3821128895506164388ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2307020512732708156ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12242211710952268647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2338683726979702252ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1936916470821804805ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16187840707358486077ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15124040519833804269ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1108636089839769438ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7069654193423255046ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 353232131778742079ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 285366484040733046ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11002834753847018111ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6074277276536061494ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13083031132507284282ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18281752720109849825ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5746845722659038401ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8347777768225171446ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5921216271077511679ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4301157599072359069ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 925484828222674990ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8710865872746050637ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2968664950585302943ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 4091126797699412919ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 12551441618110577526ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7276242798463352105ull);
    }
    vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16839287766874287190ull);
    vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12472488714578010533ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 601779356759299322ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15354465978554728736ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2054328945092643036ull);
    }
    vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4153460652341851544ull);
    vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18006715541174441794ull);
    VL_SCOPED_RAND_RESET_W(351, vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 4072136677523959206ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 6553404872793486637ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4332401535127186374ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 481125972727780147ull);
    }
    vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5518883324943011875ull);
    vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215937922151402132ull);
    vlSelf->top__DOT__u3__DOT__ALUIn1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13774526499685485241ull);
    vlSelf->top__DOT__u3__DOT__ALUIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 204465339812980648ull);
    vlSelf->top__DOT__u3__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16341854972315923602ull);
    vlSelf->top__DOT__u3__DOT__M_rdatatoReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5141829344347681599ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8186702443462292553ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8876995566360838472ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4738346386702926255ull);
    }
    vlSelf->top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2348219799362734441ull);
    vlSelf->top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14041190230848378365ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16760638523907423629ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1983722061146234502ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 51316054225215663ull);
    }
    vlSelf->top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 303509570526735568ull);
    vlSelf->top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5829285069256125086ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__isM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6605547323905530003ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDERIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7061513063692207444ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDSUB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6417182166769194711ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13437096595251419465ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11280484357922700510ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDSUBResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6967814971099140844ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__COMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 965863100291928625ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDEROverflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17006568196519151387ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out = 0;
    vlSelf->top__DOT__u3__DOT__ALU__DOT__SHIFT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7304308912563010992ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__SHIFTResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7353868994442100819ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6814874485320549089ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__LOGIC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16046910092477946082ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__LOGICResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 126299399370356612ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__LOGICfunct3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4347511549632744633ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4994096686351925953ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17748018307703490751ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8900986362549213494ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11863891007781766155ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6236124109038792890ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6445308088361690595ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6568321878650698899ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1564055560088716954ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13178419315482692996ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7148023298402481693ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16832258674523352932ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9429049704015141988ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4347119322829476211ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370809391531384602ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11038216920556387112ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11724221768933112500ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12542387442904361397ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471937229383783737ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6818298862480883830ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8570377511968304557ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10765427258116959420ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14055643847039778177ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2581594274603066651ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5619650296318450546ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10514482123556821422ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17271673940971699307ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15467921840893623222ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4891838052029737379ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5249707493110435933ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18415573299682621011ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4383257544448050720ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15562813032971078359ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12645291324151670201ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13846865851328235110ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10815098483794964243ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14222937084788180840ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4650788117207026190ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4427974457643133895ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14507310031947899393ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4221344545061429243ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12817621966051914938ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12698139543074566707ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11200206748827695851ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 5335362773485133115ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13421046306622798980ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10848049310515057548ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11872144754307429832ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6057061400258226910ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18178783482696081223ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18351760450949764577ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut, __VscopeHash, 760108792929564752ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9271360393125145603ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12742399449255809476ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16679907050862729139ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10159282405375920810ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10574135576211511449ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6562170215849022859ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut, __VscopeHash, 4161713762212049419ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9992321703024173883ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13072964586721926270ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3796853597070689689ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9817128804457438373ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18441127094642508152ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2808372163799229425ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut, __VscopeHash, 18051408073519708969ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15635358851651446167ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17786314666164855008ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10973080872062750185ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8170553502854802500ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5045748787110279374ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3078000333651262717ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut, __VscopeHash, 11437099628592870129ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10236214006315777100ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7448017351682414187ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 832678371799710799ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15702653927115046920ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6976344431988545190ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12411629072938247095ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11826492494148314011ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7158176847866566054ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7362726796086387171ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 123001878213588898ull);
    VL_SCOPED_RAND_RESET_W(105, vlSelf->top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut, __VscopeHash, 7191957221156824608ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 11211587774809993254ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11125065780592659291ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16947640355704845102ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16846045145422630795ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2975384307848065143ull);
    VL_SCOPED_RAND_RESET_W(132, vlSelf->top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut, __VscopeHash, 374011924645424932ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4455815034055011841ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10617882494803830615ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12931313829660048590ull);
    }
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8877906783118617469ull);
    vlSelf->top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11192190753208822247ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7194247691374950934ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 526338101564789553ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7308939803143659644ull);
    }
    vlSelf->top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10980730192306031594ull);
    vlSelf->top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9410623030095510581ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13720254798815985687ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16827031128874624272ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 502744821765130663ull);
    }
    vlSelf->top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9928240348132248537ull);
    vlSelf->top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6851634768060678739ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6365958620945076102ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14944790775187254986ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9662371300172143125ull);
    }
    vlSelf->top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8832507747297073325ull);
    vlSelf->top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2931739969760745748ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut, __VscopeHash, 2734218956417338110ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3779508671546060209ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13729330151817145833ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7355228050459105588ull);
    }
    vlSelf->top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4075626971186385547ull);
    vlSelf->top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9874464662458674623ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 775195864970691882ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8030238159596598928ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18400174494569166158ull);
    }
    vlSelf->top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2144873713717195423ull);
    vlSelf->top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8356571065899232665ull);
    vlSelf->top__DOT__u5__DOT__rlen_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17803552080600937729ull);
    vlSelf->top__DOT__u5__DOT__wlen_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1455636127581211898ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6633326678268225805ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5596918486634410610ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3481029903709847987ull);
    }
    vlSelf->top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 284667746717013656ull);
    vlSelf->top__DOT__u5__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2038302794795665008ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9597079487052720449ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9141549217044001299ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12521524785617899395ull);
    }
    vlSelf->top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10735488522175476491ull);
    vlSelf->top__DOT__u5__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6290093511645351502ull);
    vlSelf->__Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_pc__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

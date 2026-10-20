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
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[1U] = 0x019eU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[2U] = 0x01beU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[0U] = 0x2aU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U] = 0x0aU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0U] = 0x0000003300000000ULL;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U] = 0x67U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U] = 0x6fU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[0U] = 0x0341U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[1U] = 0x0305U;
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__pair_list[1U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U] = 0x00002000U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__key_list[0U] = 0x00604000U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[0U] = 0x7897U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[1U] = 0x788eU;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[2U] = 0x5c05U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[3U] = 0x5804U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[4U] = 0x1a13U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[5U] = 0x1a0aU;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[6U] = 0x1829U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[7U] = 0x1800U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0U] = 7U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1U] = 6U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2U] = 5U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3U] = 4U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[4U] = 3U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[5U] = 2U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U] = 0x0f12U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U] = 0x0f11U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U] = 0x0b80U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U] = 0x0b00U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[4U] = 0x0342U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[5U] = 0x0341U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[6U] = 0x0305U;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[7U] = 0x0300U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__pair_list[0U] = 0xc7U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[0U] = 0x00dfU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[1U] = 0x019eU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[2U] = 0x01beU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[3U] = 0x000dU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U] = 0x37U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U] = 0x67U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U] = 0x6fU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list[0U] = 0xdfU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list[1U] = 0x2fU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U] = 0x6fU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U] = 0x17U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list[0U] = 0x67U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list[1U] = 0xc7U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U] = 0x63U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[0U] = 0x67U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[1U] = 0x27U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[2U] = 7U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[3U] = 0xcfU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[4U] = 0xdfU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[5U] = 0x2fU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[6U] = 0x6fU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U] = 0x6fU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U] = 0x17U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__pair_list[0U] = 7U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__pair_list[0U] = 0x47U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U] = 0x23U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__pair_list[0U] = 0xe7U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__pair_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[0U] = 0x0bU;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[1U] = 5U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[2U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[0U] = 0x0bU;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[1U] = 5U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[2U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__pair_list[0U] = 0x0000000300000004ULL;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__pair_list[1U] = 0x0000000100000002ULL;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__pair_list[2U] = 1ULL;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__pair_list[0U] = 0x0000000300000004ULL;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__pair_list[1U] = 0x0000000100000002ULL;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__pair_list[2U] = 1ULL;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[2U] = 0U;
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

void Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__cpu_get_pc_TOP(IData/*31:0*/ pc);
void Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP(IData/*31:0*/ idx, IData/*31:0*/ val);
void Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__vaddr_ifetch_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &vaddr_ifetch__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__u6__DOT__vaddr_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ len, IData/*31:0*/ &vaddr_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__u6__DOT__vaddr_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ len);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__cpu_get_pc_TOP(vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i)) {
        Vtop___024root____Vdpiimwrap_top__DOT__u0__DOT__reg_get_val_TOP(vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i, vlSelfRef.top__DOT__u0__DOT__rf
                                                                        [
                                                                        (0x0000000fU 
                                                                         & vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i)]);
        vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.top__DOT__u0__DOT__unnamedblk1__DOT__i);
    }
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__pc)));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(((IData)(4U) + vlSelfRef.top__DOT__pc)));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelfRef.top__DOT__pc);
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__pc;
    if (vlSelfRef.wen_pc) {
        Vtop___024root____Vdpiimwrap_top__DOT__u2__DOT__vaddr_ifetch_TOP(vlSelfRef.top__DOT__pc, 4U, vlSelfRef.top__DOT__u2__DOT____VlemCall_0__vaddr_ifetch);
        vlSelfRef.top__DOT__u2__DOT____VlemCond_1 = vlSelfRef.top__DOT__u2__DOT____VlemCall_0__vaddr_ifetch;
    } else {
        vlSelfRef.top__DOT__u2__DOT____VlemCond_1 = 0U;
    }
    vlSelfRef.top__DOT__inst = vlSelfRef.top__DOT__u2__DOT____VlemCond_1;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[1U] 
        = (0x0000001fU & (vlSelfRef.top__DOT__inst 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit 
        = ((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit) 
           | ((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (3U | ((7U == (7U & (vlSelfRef.top__DOT__inst 
                               >> 0x0000000cU))) << 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 = (0x0000000100000000ULL 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                                   [
                                                                   (0x0000000fU 
                                                                    & (vlSelfRef.top__DOT__inst 
                                                                       >> 0x00000014U))])));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__R_wen_main = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit) 
                                               && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__RegIn = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit)
                                  ? (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out)
                                  : 0U);
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_rlen = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((3U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit) 
           | ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__M_wlen = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out 
        = (((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__hit 
        = ((3U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTfunct3 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U] 
        = (7U == (7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U] 
        = (4U == (7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__isB_type = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit) 
                                    && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__M_ren = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__M_wen = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))];
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[2U] 
        = (vlSelfRef.top__DOT__inst >> 0x00000014U);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__ALUIn2Sel = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit) 
                                     && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1U] 
        = (0x0000001fU & (vlSelfRef.top__DOT__inst 
                          >> 0x0000000fU));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out) 
           | (((0x0000007fU & vlSelfRef.top__DOT__inst) 
               == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__ALUIn1Sel = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit) 
                                     && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[0U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
        = (0x00000033U | (0xffffff80U & (((- (IData)(
                                                     (vlSelfRef.top__DOT__inst 
                                                      >> 0x0000001fU))) 
                                          << 0x00000013U) 
                                         | (0x0007ff80U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000dU)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xffffff80U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0x0000007fU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                         >> 0x0000001fU))) 
                             >> 0x0000000dU)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0xfc00007fU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | (0xffffff80U & (0x00000980U | (((0x0007f000U 
                                              & (vlSelfRef.top__DOT__inst 
                                                 >> 0x0000000dU)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.top__DOT__inst)) 
                                            << 7U))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x03ffffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x0000001aU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0xffe00000U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0x03ffffffU & (0x0008c000U | (0x00003fffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 6U)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U]) 
           | (0xffe00000U & (vlSelfRef.top__DOT__inst 
                             << 1U)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0xffe00000U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0x001fffffU & ((0x001ffffeU & ((- (IData)(
                                                        (vlSelfRef.top__DOT__inst 
                                                         >> 0x0000001fU))) 
                                             << 1U)) 
                             | (vlSelfRef.top__DOT__inst 
                                >> 0x0000001fU))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
        = ((0x001fffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U]) 
           | (0xffe00000U & (0x00600000U | (0xe0000000U 
                                            & (vlSelfRef.top__DOT__inst 
                                               << 0x00000015U)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0xffffff00U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | (0x001fffffU & ((0x001ffffeU & (((0x00000040U 
                                               & (vlSelfRef.top__DOT__inst 
                                                  >> 1U)) 
                                              | (0x0000003fU 
                                                 & (vlSelfRef.top__DOT__inst 
                                                    >> 0x00000019U))) 
                                             << 1U)) 
                             | (1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000000bU)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0xf00000ffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | (((0x000ffffeU & ((- (IData)((vlSelfRef.top__DOT__inst 
                                           >> 0x0000001fU))) 
                               << 1U)) | (vlSelfRef.top__DOT__inst 
                                          >> 0x0000001fU)) 
              << 8U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
        = ((0x0fffffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U]) 
           | ((IData)((0x0000000000000063ULL | ((QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelfRef.top__DOT__inst 
                                                                              >> 0x0000001fU))) 
                                                                  << 0x0000000cU) 
                                                                 | (vlSelfRef.top__DOT__inst 
                                                                    >> 0x00000014U)))) 
                                                << 7U))) 
              << 0x0000001cU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U] 
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
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | ((IData)(((0x0000000000000063ULL | ((QData)((IData)(
                                                                 (((- (IData)(
                                                                              (vlSelfRef.top__DOT__inst 
                                                                               >> 0x0000001fU))) 
                                                                   << 0x0000000cU) 
                                                                  | (vlSelfRef.top__DOT__inst 
                                                                     >> 0x00000014U)))) 
                                                 << 7U)) 
                       >> 0x00000020U)) >> 4U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0xffe00007U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | (0xfffffff8U & (0x00000338U | (0x001ff800U 
                                            & (vlSelfRef.top__DOT__inst 
                                               >> 0x0000000aU)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0x801fffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | (((0x00000200U & (vlSelfRef.top__DOT__inst 
                               >> 0x00000016U)) | (
                                                   (0x000001feU 
                                                    & (vlSelfRef.top__DOT__inst 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.top__DOT__inst 
                                                         >> 0x00000014U)))) 
              << 0x00000015U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
        = ((0x7fffffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U]) 
           | ((- (IData)((vlSelfRef.top__DOT__inst 
                          >> 0x0000001fU))) << 0x0000001fU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
        = ((0xe0000000U & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U]) 
           | (0x7fffffffU & (0x0001bc00U | (0x000003ffU 
                                            & ((- (IData)(
                                                          (vlSelfRef.top__DOT__inst 
                                                           >> 0x0000001fU))) 
                                               >> 1U)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
        = ((0x1fffffffU & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U]) 
           | ((IData)((0x0000000001700000ULL | (QData)((IData)(
                                                               (vlSelfRef.top__DOT__inst 
                                                                >> 0x0000000cU))))) 
              << 0x0000001dU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
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
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U] 
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
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out 
        = (((0x0000007fU & vlSelfRef.top__DOT__inst) 
            == vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__EandCSR = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit) 
                                            && (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__RegIn) == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_rlen) == vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                       == vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                          == vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_rlen) 
                          == vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u6__DOT__rlen_num = vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__M_wlen) == vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                       == vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                          == vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__M_wlen) 
                          == vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u6__DOT__wlen_num = vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (1U | ((IData)(vlSelfRef.top__DOT__isB_type) 
                 << 1U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__isB_type;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__isM = ((IData)(vlSelfRef.top__DOT__M_wen) 
                                                  | (IData)(vlSelfRef.top__DOT__M_ren));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) == vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
              == vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben 
        = ((IData)(vlSelfRef.top__DOT__ALUIn2Sel) & 
           (vlSelfRef.top__DOT__inst >> 0x0000001eU));
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) == vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
              == vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__ALUIn1Sel;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x00000019U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 7U)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x00000012U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 0x0000000eU)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                     << 0x0000000bU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                       >> 0x00000015U)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                     << 0x00000024U) 
                                    | (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U])) 
                                        << 4U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U])) 
                                                  >> 0x0000001cU))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[5U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[6U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U])) 
                                     << 0x00000016U) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U])) 
                                       >> 0x0000000aU)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[7U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U])) 
                                     << 0x0000000fU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U])) 
                                       >> 0x00000011U)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[8U] 
        = (0x0000007fffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U])) 
                                     << 8U) | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U])) 
                                               >> 0x00000018U)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x00000019U) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 7U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
            << 0x00000012U) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[2U] 
                               >> 0x0000000eU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
            << 0x0000000bU) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[3U] 
                               >> 0x00000015U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[5U] 
            << 4U) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[4U] 
                      >> 0x0000001cU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
            << 0x0000001dU) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[6U] 
                               >> 3U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
            << 0x00000016U) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[7U] 
                               >> 0x0000000aU));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
            << 0x0000000fU) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[8U] 
                               >> 0x00000011U));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8U] 
        = ((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[10U] 
            << 8U) | (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut[9U] 
                      >> 0x00000018U));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (0x00004000U | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__EandCSR;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x00c08000U | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (4U | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (2U | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__EandCSR;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__EandCSR;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__EandCSR;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u3__DOT__EandCSR;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u3__DOT__EandCSR;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__isM;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[8U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8U]));
    vlSelfRef.top__DOT__imm = vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__lut_out 
        = (((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__hit 
        = ((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__ecall = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__hit) 
                                 && (IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__lut_out 
        = (((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__hit 
        = ((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__mret = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__hit) 
                                && (IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__csr = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__hit) 
                               && (IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out 
        = (((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__hit 
        = ((vlSelfRef.top__DOT__inst >> 7U) == vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__ebreak = ((IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__hit) 
                                  && (IData)(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__imm));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (vlSelfRef.top__DOT__pc 
                                                + vlSelfRef.top__DOT__imm);
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__imm;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__ecall;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x0341U | ((IData)(vlSelfRef.top__DOT__mret) 
                      << 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.top__DOT__ecall) 
                                                | (IData)(vlSelfRef.top__DOT__mret));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__mret;
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__pair_list[0U] 
        = (4U | (IData)(vlSelfRef.top__DOT__csr));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut 
        = (((QData)((IData)((((IData)(vlSelfRef.top__DOT__csr) 
                              << 0x0000000dU) | ((0x00001ffeU 
                                                  & (vlSelfRef.top__DOT__inst 
                                                     >> 0x00000013U)) 
                                                 | (IData)(vlSelfRef.top__DOT__ecall))))) 
            << 0x00000019U) | (QData)((IData)((0x0060a341U 
                                               | ((IData)(vlSelfRef.top__DOT__mret) 
                                                  << 0x0000000cU)))));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__csr)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__csr;
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__csr;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__ebreak) == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__ebreak) == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38 = (((~ (IData)(vlSelfRef.top__DOT__isB_type)) 
                                                  & (~ (IData)(vlSelfRef.top__DOT__ebreak))) 
                                                 & (0U 
                                                    == 
                                                    (0x00007000U 
                                                     & vlSelfRef.top__DOT__inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.top__DOT__ebreak) 
                                                     | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                                                        | (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__isM)))));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ebreak) 
                       == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ebreak) 
                          == vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__rs1 = vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7;
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
                       == vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn2Sel) 
                          == vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2_main = vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[1U] 
        = (0x00001fffU & (IData)((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut 
                                  >> 0x0000000dU)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[2U] 
        = (0x00001fffU & (IData)((vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut 
                                  >> 0x0000001aU)));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__SR_addr = ((IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit)
                                    ? (IData)(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out)
                                    : 0U);
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__csr_type = vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38) 
                 << 1U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut 
        = (0x00000015U | ((((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__isM) 
                            << 5U) | ((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                                      << 3U)) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38) 
                                                 << 1U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34 = ((~ (IData)(vlSelfRef.top__DOT__isB_type)) 
                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36) 
                                                 & (0x00002000U 
                                                    == 
                                                    (0x00006000U 
                                                     & vlSelfRef.top__DOT__inst)));
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                          [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))]));
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                          [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))]));
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))];
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u0__DOT__rf[(0x0000000fU 
                                           & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))];
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[1U] 
        = (((QData)((IData)((1U & (~ (IData)(vlSelfRef.top__DOT__csr))))) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2_main)));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUIn2_main;
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                       == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__SR_addr) == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[4U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[5U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[6U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__SR_addr) 
                          == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[7U]))) 
              & vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__SR_addr) 
              == vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u1__DOT__addr_enc = ((IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit)
                                              ? (IData)(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out)
                                              : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = ((IData)(vlSelfRef.top__DOT__u4__DOT__csr_type) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.top__DOT__inst 
                                                        >> 0x0000000cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = ((IData)(vlSelfRef.top__DOT__csr) 
                                                & (IData)(vlSelfRef.top__DOT__u4__DOT__csr_type));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut) 
                 >> 2U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[2U] 
        = (3U & ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut) 
                 >> 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U] 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U] 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U] 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB = 
        ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit) 
         && (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFT = 
        ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTfunct3) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                 << 1U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37;
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                       == vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__ALUIn1Sel) 
                          == vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALUIn1 = vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u1__DOT__rf
                                                   [vlSelfRef.top__DOT__u1__DOT__addr_enc])));
    vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__pair_list[0U] 
        = (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__u1__DOT__rf
                                              [vlSelfRef.top__DOT__u1__DOT__addr_enc])));
    vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u1__DOT__rf[vlSelfRef.top__DOT__u1__DOT__addr_enc];
    vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u1__DOT__rf[vlSelfRef.top__DOT__u1__DOT__addr_enc];
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u1__DOT__rf[vlSelfRef.top__DOT__u1__DOT__addr_enc];
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut 
        = (0x0000008bU | ((((4U == (7U & (vlSelfRef.top__DOT__inst 
                                          >> 0x0000000cU))) 
                            << 8U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33) 
                                      << 5U)) | ((7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__inst 
                                                      >> 0x0000000cU))) 
                                                 << 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u1__DOT__rf
                                                                   [vlSelfRef.top__DOT__u1__DOT__addr_enc])));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFT;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U] 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out) 
           | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U] 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__hit) 
                                                   && (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[0U] 
        = (2U | (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                 >> 0x0000001fU));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUIn1;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUIn1;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0U] 
        = (vlSelfRef.top__DOT__u4__DOT__ALUIn1 >> 0x0000001fU);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (7U & ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut) 
                 >> 3U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (7U & ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut) 
                 >> 6U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16;
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALUIn2 = vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (QData)((IData)(
                                                                ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB) 
                                                                    & (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben)))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out 
        = (((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
            == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out) 
           | (((1U & (vlSelfRef.top__DOT__inst >> 0x0000001eU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGIC = 
        (((IData)(vlSelfRef.top__DOT__csr) | (0U != (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc))) 
         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(
                                                   (~ vlSelfRef.top__DOT__u4__DOT__ALUIn2))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   (~ vlSelfRef.top__DOT__u4__DOT__ALUIn2))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u4__DOT__ALUIn2 
                    >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                                 | vlSelfRef.top__DOT__u4__DOT__ALUIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                                 & vlSelfRef.top__DOT__u4__DOT__ALUIn2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                                ^ vlSelfRef.top__DOT__u4__DOT__ALUIn2);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u4__DOT__ALUIn2 
                    >> 3U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0U] 
        = (~ vlSelfRef.top__DOT__u4__DOT__ALUIn2);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0U] 
        = (~ vlSelfRef.top__DOT__u4__DOT__ALUIn2);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUIn2;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u4__DOT__ALUIn2 
                    >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & (vlSelfRef.top__DOT__u4__DOT__ALUIn2 
                    >> 1U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key 
        = ((2U & (vlSelfRef.top__DOT__inst >> 0x0000000dU)) 
           | (1U & vlSelfRef.top__DOT__u4__DOT__ALUIn2));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = (((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit) 
                                                  << 0x0000001fU) 
                                                 | (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                                    >> 1U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGIC;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
            << 2U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U]) 
                 | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
                    >> 0x0000001eU)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[3U] 
        = (0x0000003fU & (((IData)((0x0000000200000000ULL 
                                    | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                           >> 0x0000001cU) | ((IData)(
                                                      ((0x0000000200000000ULL 
                                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                       >> 0x00000020U)) 
                                              << 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALUIn1 << 3U) 
           | (IData)(((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22))) 
                      >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                          >> 0x0000001dU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICResult 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit)
            ? vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[1U] 
        = (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB)) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGIC)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICResult)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICResult;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow 
        = (1U & (IData)((1ULL & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 
                                  + ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2)) 
                                     + (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn1)))) 
                                 >> 0x00000020U))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult 
        = (vlSelfRef.top__DOT__u4__DOT__ALUIn1 + (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2 
                                                  + (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (((- (IData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x0000001eU) 
                                                 | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                                    >> 2U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000eU | (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4U] 
        = (1U & (~ (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[7U] 
        = (0U == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6U] 
        = (0U != vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7U] 
        = (0U == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                                                    >> 0x0000001fU)
                                                    ? 
                                                   ((vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                                     >> 0x0000001fU) 
                                                    > 
                                                    (vlSelfRef.top__DOT__u4__DOT__ALUIn2 
                                                     >> 0x0000001fU))
                                                    : 
                                                   (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult 
                                                    >> 0x0000001fU)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
            << 4U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | (0x0000000fU & (4U | (3U & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                         >> 0x0000001cU)))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
        = (0x02468aceU | ((((((0U == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult) 
                              << 0x0000000cU) | ((0U 
                                                  != vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult) 
                                                 << 8U)) 
                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                << 4U) | (1U & (~ (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow))))) 
                           << 0x00000010U) | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                                << 0x0000000cU) 
                                               | (0x00000100U 
                                                  & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                                     << 8U))) 
                                              | ((0x00000010U 
                                                  & ((~ (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow)) 
                                                     << 4U)) 
                                                 | (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow)))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2U] 
        = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[2U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 8U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[3U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x0000000cU));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[4U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000010U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[5U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000014U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[6U] 
        = (0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut 
                          >> 0x00000018U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
            == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U]) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[4U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[5U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[6U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out) 
           | (((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
               == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U]) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[7U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT____Vcellout__COMPResultMUX__out 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT____Vcellout__COMPResultMUX__out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (((- (IData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x0000001cU) 
                                                 | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                                    >> 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
            << 6U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                          >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = (((- (IData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x00000018U) 
                                                 | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                                    >> 8U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
            << 0x0000000aU) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                          >> 0x00000016U))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = (((- (IData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit))) 
                                                  << 0x00000010U) 
                                                 | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                                    >> 0x00000010U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
            << 0x00000012U) | (IData)(((0x0000000300000000ULL 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))) 
                                       >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
        = (4U | ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U]) 
                 | (3U & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                          >> 0x0000000eU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                << 6U) | ((IData)((
                                                   (0x0000000200000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000200000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[0U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[0U]))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[2U] 
            << 0x0000001eU) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut[1U] 
                               >> 2U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                       == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key) 
                          == vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTResult 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[1U] 
        = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTResult 
            << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U] 
        = ((0xfffffff8U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U]) 
           | (((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT____Vcellout__COMPResultMUX__out) 
               << 2U) | (((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFT) 
                          << 1U) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTResult 
                                    >> 0x0000001fU))));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U] 
        = ((7U & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U]) 
           | ((IData)((((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult)) 
                        << 0x00000020U) | (QData)((IData)(
                                                          ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP) 
                                                           << 0x0000001fU))))) 
              << 3U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U] 
        = (((IData)((((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult)) 
                      << 0x00000020U) | (QData)((IData)(
                                                        ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP) 
                                                         << 0x0000001fU))))) 
            >> 0x0000001dU) | ((IData)(((((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP) 
                                                            << 0x0000001fU)))) 
                                        >> 0x00000020U)) 
                               << 3U));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[4U] 
        = (0x0000000fU & (((IData)(((((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult)) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP) 
                                                        << 0x0000001fU)))) 
                                    >> 0x00000020U)) 
                           >> 0x0000001dU) | ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB) 
                                              << 3U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTResult;
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[1U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[1U])) 
                                       >> 1U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[2U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[2U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[3U] 
        = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[4U])) 
                                     << 0x0000001dU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut[3U])) 
                                       >> 3U)));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2U]);
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out 
           | ((- (IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U])) 
              & vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit) 
           | vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3U]);
    vlSelfRef.top__DOT__u4__DOT__ALUResult = ((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit)
                                               ? vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out
                                               : 0U);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[0U] 
        = (0x0000018cU | (1U & vlSelfRef.top__DOT__u4__DOT__ALUResult));
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUResult)));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000200000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUResult)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUResult));
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUResult;
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUResult;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.top__DOT__u4__DOT__ALUResult;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelfRef.top__DOT__u4__DOT__ALUResult);
    if (vlSelfRef.top__DOT__M_ren) {
        Vtop___024root____Vdpiimwrap_top__DOT__u6__DOT__vaddr_read_TOP(vlSelfRef.top__DOT__u4__DOT__ALUResult, vlSelfRef.top__DOT__u6__DOT__rlen_num, vlSelfRef.__Vfunc_top__DOT__u6__DOT__vaddr_read__4__Vfuncout);
        vlSelfRef.top__DOT__M_rdata = vlSelfRef.__Vfunc_top__DOT__u6__DOT__vaddr_read__4__Vfuncout;
    } else {
        vlSelfRef.top__DOT__M_rdata = 0U;
    }
    if (vlSelfRef.top__DOT__M_wen) {
        Vtop___024root____Vdpiimwrap_top__DOT__u6__DOT__vaddr_write_TOP(vlSelfRef.top__DOT__u4__DOT__ALUResult, vlSelfRef.top__DOT__u0__DOT__rf
                                                                        [
                                                                        (0x0000000fU 
                                                                         & (vlSelfRef.top__DOT__inst 
                                                                            >> 0x00000014U))], vlSelfRef.top__DOT__u6__DOT__wlen_num);
    }
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__csr_type) 
                       == vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__csr_type) 
           == vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__u4__DOT__csr_type) 
                          == vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__u4__DOT__csr_type) 
              == vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__SR_dst = ((IData)(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__hit)
                                   ? vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__lut_out
                                   : 0U);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                       == vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((0x0000007fU & vlSelfRef.top__DOT__inst) 
           == vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x0000007fU & vlSelfRef.top__DOT__inst) 
                          == vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit) 
           | ((0x0000007fU & vlSelfRef.top__DOT__inst) 
              == vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__Branch = ((IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__M_rdata 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0x000000ffU 
                                                    & vlSelfRef.top__DOT__M_rdata));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = (((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.top__DOT__M_rdata 
                                                                 >> 0x0000000fU)))) 
                                                  << 0x00000010U) 
                                                 | (0x0000ffffU 
                                                    & vlSelfRef.top__DOT__M_rdata));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.top__DOT__Branch) == vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                       == vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                          == vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__Branch) 
                          == vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__dnpc_main = vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40));
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40;
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[0U] 
        = (0x0000000100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)));
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
    vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__key_list[0U])) 
           & vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__hit 
        = vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__key_list[0U];
    vlSelfRef.top__DOT__dnpc = ((IData)(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__hit)
                                 ? vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__lut_out
                                 : vlSelfRef.top__DOT__u4__DOT__dnpc_main);
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                              >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
           == vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelfRef.top__DOT__inst 
                                 >> 0x0000000cU)) == vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__hit) 
           | ((7U & (vlSelfRef.top__DOT__inst >> 0x0000000cU)) 
              == vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg = ((IData)(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__hit)
                                                  ? vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__lut_out
                                                  : vlSelfRef.top__DOT__M_rdata);
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[0U] 
        = (IData)((0x0000000300000000ULL | (QData)((IData)(vlSelfRef.top__DOT__imm))));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[1U] 
        = ((((IData)(4U) + vlSelfRef.top__DOT__pc) 
            << 2U) | (IData)(((0x0000000300000000ULL 
                               | (QData)((IData)(vlSelfRef.top__DOT__imm))) 
                              >> 0x00000020U)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[2U] 
        = (8U | ((0xfffffff0U & vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[2U]) 
                 | (((IData)(4U) + vlSelfRef.top__DOT__pc) 
                    >> 0x0000001eU)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[2U] 
        = ((0x0000000fU & vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[2U]) 
           | ((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg)))) 
              << 4U));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[3U] 
        = (((IData)((0x0000000100000000ULL | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg)))) 
            >> 0x0000001cU) | ((vlSelfRef.top__DOT__u4__DOT__ALUResult 
                                << 6U) | ((IData)((
                                                   (0x0000000100000000ULL 
                                                    | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg))) 
                                                   >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[4U] 
        = (0x000000ffU & (((0x0000000fU & (vlSelfRef.top__DOT__u4__DOT__ALUResult 
                                           >> 0x0000001aU)) 
                           | ((IData)(((0x0000000100000000ULL 
                                        | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg))) 
                                       >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.top__DOT__u4__DOT__ALUResult 
                                                     >> 0x0000001aU))));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg;
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[1U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[2U])) 
                                     << 0x0000001eU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[1U])) 
                                       >> 2U)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[2U] 
        = (0x00000003ffffffffULL & (((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[3U])) 
                                     << 0x0000001cU) 
                                    | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut[2U])) 
                                       >> 4U)));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                       == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[1U]))) 
              & vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[1U]));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[2U]))) 
              & vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[2U]));
    vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
        = (vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.top__DOT__RegIn) 
                          == vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[3U]))) 
              & vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[3U]));
    vlSelfRef.top__DOT__u4__DOT__dst_main = vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out;
    vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.top__DOT__csr) 
                       == vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__key_list[0U]))) 
           & vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__data_list[0U]);
    vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.top__DOT__csr) == vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__key_list[0U]);
    vlSelfRef.top__DOT__dst = ((IData)(vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__hit)
                                ? vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__lut_out
                                : vlSelfRef.top__DOT__u4__DOT__dst_main);
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
    vlSelf->top__DOT__M_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873058058323851080ull);
    vlSelf->top__DOT__M_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8665034915090363070ull);
    vlSelf->top__DOT__ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7742840385043591541ull);
    vlSelf->top__DOT__ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1208247828031589958ull);
    vlSelf->top__DOT__mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3500976341014070661ull);
    vlSelf->top__DOT__csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11138599587795307373ull);
    vlSelf->top__DOT__SR_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13737881198610956788ull);
    vlSelf->top__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18445623346312568628ull);
    vlSelf->top__DOT__dst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4450739016619022941ull);
    vlSelf->top__DOT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3608326066998884506ull);
    vlSelf->top__DOT__SR_dst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1380171535266216186ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__u0__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12246715171773537061ull);
    }
    vlSelf->top__DOT__u0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__u1__DOT__addr_enc = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2561381320878363517ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u1__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 888862789416110016ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 9297217334080563953ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9339093495081958504ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10714012387769532157ull);
    }
    vlSelf->top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7002434978736694032ull);
    vlSelf->top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1201742022721468082ull);
    vlSelf->top__DOT__u3__DOT__EandCSR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10319638266685767891ull);
    vlSelf->top__DOT__u3__DOT__R_wen_main = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12804961757929337344ull);
    vlSelf->top__DOT__u3__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1460546619489656960ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 10842232875286454832ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8225966477260922023ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13307568829843484822ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6586247919094209625ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13874019122558211071ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1977524574073983048ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7962683632453853462ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2374621870975530296ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16891373259177397553ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4092508650907187075ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12120687422712773944ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2440985878820421562ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16180203915569073077ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2955212688972871110ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5491169038456513720ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17535587674227804111ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10869234186103020287ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10476486545069743530ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9327627875684669764ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8552981027187152664ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7794865896798793880ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14677744966980149340ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 262584206832831219ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16009664591643352640ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5731277447719947849ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7203730080343335506ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5960443358759939079ull);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14304824844503694854ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 727447791012022049ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7977037296380016207ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15614442153909826912ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6317291234883199492ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14579323753108887650ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4192187120268792289ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7963550824805423136ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17691076726194794339ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13252909082171900970ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14878894039896794387ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13681623818365153341ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14105411562264382953ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6261688079488187644ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3420892057313125830ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15992713180158073166ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12277969168662143919ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12855707731001384110ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 7297421590977723779ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 15016035480661120964ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4054222286269296187ull);
    }
    vlSelf->top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7856151532220996793ull);
    vlSelf->top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3891793380752716921ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 18134458964769952635ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 17564081987319377590ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16459701528716745916ull);
    }
    vlSelf->top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 846828737884647526ull);
    vlSelf->top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11890911274884364150ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(26, __VscopeHash, 5353784719337648838ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 11236727143542122952ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7690167923782546842ull);
    }
    vlSelf->top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13549398738570915011ull);
    vlSelf->top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11038664579049331869ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9621188915489980708ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1380683867169854145ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8938231322160756057ull);
    }
    vlSelf->top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17214849817411260119ull);
    vlSelf->top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8578652051595088646ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12053630258948889550ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16258827639276310091ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11955014527565662496ull);
    }
    vlSelf->top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14275663212502524219ull);
    vlSelf->top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18313254289091028793ull);
    VL_SCOPED_RAND_RESET_W(351, vlSelf->top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 14430114874095408458ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 1487221629280094117ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3515293948086123507ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18291601428586903995ull);
    }
    vlSelf->top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9031568577283456479ull);
    vlSelf->top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 841357241391430021ull);
    vlSelf->top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 18140778376392532318ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11136573354389347371ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9121563721553084371ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4913890519602366719ull);
    }
    vlSelf->top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10868383993872662375ull);
    vlSelf->top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7798973283465962671ull);
    vlSelf->top__DOT__u4__DOT__csr_type = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16087925953281056280ull);
    vlSelf->top__DOT__u4__DOT__ALUIn1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1935613093474408169ull);
    vlSelf->top__DOT__u4__DOT__ALUIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2595871448747210744ull);
    vlSelf->top__DOT__u4__DOT__ALUResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17445865628584651572ull);
    vlSelf->top__DOT__u4__DOT__ALUIn2_main = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11525109956575203792ull);
    vlSelf->top__DOT__u4__DOT__M_rdatatoReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16342937083862184852ull);
    vlSelf->top__DOT__u4__DOT__dst_main = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2905868610057580247ull);
    vlSelf->top__DOT__u4__DOT__dnpc_main = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14384037658105506550ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9924531141658279032ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16873504433223752860ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9941340645512968393ull);
    }
    vlSelf->top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18059548539558301061ull);
    vlSelf->top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2751996451278105811ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2683895091199901362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9957533489318041534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4827922630569277304ull);
    }
    vlSelf->top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2350779386227446384ull);
    vlSelf->top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6049489009920526046ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 9496134343760806805ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1846529663466326175ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6370600112349244932ull);
    }
    vlSelf->top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7625665032676757777ull);
    vlSelf->top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18428079106368644611ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__isM = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17933196549894785333ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDERIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16130121429845397406ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDSUB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12952805559741063458ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 186175691247766260ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8791288716137356508ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDSUBResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17377044204293247519ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__COMP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14514806478123728141ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDEROverflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11826150487356204120ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT____Vcellout__COMPResultMUX__out = 0;
    vlSelf->top__DOT__u4__DOT__ALU__DOT__SHIFT = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12735264681849041310ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__SHIFTResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17094766593147611529ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__SHIFTfunct3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7443653670096830361ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__LOGIC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1846504406394724903ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__LOGICResult = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14260108638898731344ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__LOGICfunc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7223935143511159619ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7928642418119634955ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10947270620421447920ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17634942110463264599ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12284121069219483676ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16102494460670412462ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6634971919614326356ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1526362195649705849ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10092146383903876712ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14949115583853079365ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11805846140747426200ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5451479608193811994ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10211435943893074858ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 485095473727118362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17265684311620636365ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11789918233446097491ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451778637736527180ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15369847841947726986ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3945327512663565973ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9796384839141383667ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7918064466016429360ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6844077111416008368ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11376911956880422342ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8522137300487401695ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5746357493536456881ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2416206759545112794ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12390164385080863450ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13397318063172103633ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14457840893023179382ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2671792084220474578ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4264538078197608835ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17862795274195622345ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13842257707113074468ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11607939222808372348ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3978423715949281178ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7566658688796548990ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4301344427082766277ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5181934536504027928ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1573605521080298728ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6854542127648998310ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16862349774616696946ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8117422437061829490ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1315391308933555481ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 683807188033087436ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 9107565117842964771ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8935207109344484554ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1409747886060277585ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14745028687384538946ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4903304846755693970ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11423267230802145103ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10526808865654517410ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut, __VscopeHash, 11838359536417113464ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2652043145430963111ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6440675468027777014ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5816375665497163215ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16510743114971193743ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 504531446869814091ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 240487456176224925ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut, __VscopeHash, 16149842907853290979ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3798290902136722031ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17600425263235143636ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8707395854074163239ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7968494288223816491ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3333900938489574337ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15832907216675050340ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut, __VscopeHash, 7113617718200458443ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 702412961225937734ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15842121713731692447ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8809459064385848269ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 594618016004212862ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6279112459749767295ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14816249075161621672ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut, __VscopeHash, 7098792742939052399ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3434365036761601286ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8749158196694304346ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13290837528072447512ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5604483508172649671ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6148898123269157293ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6531899737339858456ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7655943081983849553ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5485647684944799714ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 351140009073604733ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17932691596742747020ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17146037797543660544ull);
    VL_SCOPED_RAND_RESET_W(102, vlSelf->top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut, __VscopeHash, 5758660683131875453ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17981212025829119479ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13469876287721483514ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 668888065759167560ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7997871352489461509ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9302473536437740170ull);
    VL_SCOPED_RAND_RESET_W(132, vlSelf->top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut, __VscopeHash, 4000319683292169490ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 12836161529223536532ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6378209956945645928ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10908678013800554184ull);
    }
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11566548535776341520ull);
    vlSelf->top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10395640928860519428ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8942412997288403235ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11090535577561687719ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3155530078885124142ull);
    }
    vlSelf->top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14553680040804907761ull);
    vlSelf->top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10843407851777448573ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6631673390796524047ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5493349958843578580ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1243281392590671788ull);
    }
    vlSelf->top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6520854906764827570ull);
    vlSelf->top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2158908371677015949ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16108687699830938742ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5526037143925364286ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17727970543093849853ull);
    }
    vlSelf->top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4685886031899789801ull);
    vlSelf->top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1842695875756550326ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 8560273691268541059ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3494709784183791551ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1329720895887191715ull);
    }
    vlSelf->top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7970590386570467760ull);
    vlSelf->top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5597274285148959959ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut, __VscopeHash, 2130158911072457325ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9569798745632894641ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13357144190255713213ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3237088805458013505ull);
    }
    vlSelf->top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9250477868166271237ull);
    vlSelf->top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6466707031851194782ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8308962588049327624ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15178183319481392338ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10452118976945152293ull);
    }
    vlSelf->top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13304613392725362168ull);
    vlSelf->top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14932080184175003743ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 2610290355046016442ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8304663829149618367ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15441781857554140438ull);
    }
    vlSelf->top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14115095203884901092ull);
    vlSelf->top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12194517018844678672ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8297044358907895132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16485117263771777799ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7525446438340047737ull);
    }
    vlSelf->top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12518759856914117585ull);
    vlSelf->top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 604455392845216451ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17921019637423113308ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5864415563703778926ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16335952350672860364ull);
    }
    vlSelf->top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8014659204990994949ull);
    vlSelf->top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 572845887502027573ull);
    vlSelf->top__DOT__u6__DOT__rlen_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2648829671840178414ull);
    vlSelf->top__DOT__u6__DOT__wlen_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8282178172017430753ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u6__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17091898982251982068ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 52758396896880262ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 625051937045015349ull);
    }
    vlSelf->top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15617384284957857658ull);
    vlSelf->top__DOT__u6__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830527992295785635ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u6__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 17645861694139810819ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2936309603014015584ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2756765642427998175ull);
    }
    vlSelf->top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9395138687963657395ull);
    vlSelf->top__DOT__u6__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8728741548840765544ull);
    vlSelf->__Vfunc_top__DOT__u6__DOT__vaddr_read__4__Vfuncout = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_22 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_36 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_37 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_40 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_41 = 0;
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

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
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0U] = 0xffU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1U] = 0x20U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[2U] = 0x21U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[3U] = 0x2aU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[4U] = 0x2bU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[5U] = 0x22U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[6U] = 0x1fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[7U] = 0x26U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[8U] = 0x1eU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[9U] = 0x1dU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[10U] = 0x1cU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[11U] = 0x19U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[12U] = 0x1bU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[13U] = 0x18U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[14U] = 0x1aU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[15U] = 0x16U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[16U] = 0x17U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[17U] = 0x15U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[18U] = 0x13U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[19U] = 0x14U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[20U] = 0x12U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[21U] = 0x11U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[22U] = 0x10U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[23U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[24U] = 7U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[25U] = 0x0eU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[26U] = 6U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[27U] = 9U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[28U] = 8U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[29U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[30U] = 0x0fU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[31U] = 0x0aU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[32U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[33U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[34U] = 0x0cU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[35U] = 0x0bU;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[36U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[37U] = 0x0dU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[1U] = 0x0cU;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[2U] = 0x0bU;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[4U] = 0x0dU;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[1U] = 0x14U;
    vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[2U] = 0x12U;
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[1U] = 0x14U;
    vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[2U] = 0x12U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[0U] = 0x2aU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[1U] = 0x2bU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[2U] = 0x1eU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[3U] = 6U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[4U] = 9U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[0U] = 0x20U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[1U] = 0x21U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[2U] = 0x22U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[3U] = 0x1fU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[4U] = 0x26U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[5U] = 0x1dU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[6U] = 0x1cU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[7U] = 0x15U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[8U] = 0x11U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[9U] = 0x10U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[10U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[11U] = 7U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[12U] = 0x0eU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[13U] = 8U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[14U] = 5U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[15U] = 0x0fU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[16U] = 2U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[17U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[18U] = 0x0cU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[19U] = 0x0bU;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[20U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[21U] = 0x0dU;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[0U] = 0x19U;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[1U] = 0x1bU;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[2U] = 0x18U;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[3U] = 0x1aU;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[4U] = 0x16U;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[5U] = 0x17U;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[6U] = 0x15U;
    vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[7U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[1U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[2U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[4U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[5U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[6U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[7U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[8U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[9U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[10U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[11U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[12U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[13U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[14U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[15U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[16U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[17U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[18U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[19U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[20U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[21U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[22U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[23U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[24U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[25U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[26U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[27U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[28U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[29U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[30U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[31U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[32U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[33U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[34U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[35U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[36U] = 0U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[0U] = 0x2bU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[1U] = 0x2aU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[2U] = 0x26U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[3U] = 0x22U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[4U] = 0x21U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[5U] = 0x20U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[6U] = 0x1fU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[7U] = 0x1eU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[8U] = 0x1dU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[9U] = 0x1cU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[10U] = 0x1bU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[11U] = 0x1aU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[12U] = 0x19U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[13U] = 0x18U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[14U] = 0x17U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[15U] = 0x16U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[16U] = 0x15U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[17U] = 0x14U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[18U] = 0x13U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[19U] = 0x12U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[20U] = 0x11U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[21U] = 0x10U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[22U] = 0x0fU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[23U] = 0x0eU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[24U] = 0x0dU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[25U] = 0x0cU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[26U] = 0x0bU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[27U] = 0x0aU;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[28U] = 9U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[29U] = 8U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[30U] = 7U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[31U] = 6U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[32U] = 5U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[33U] = 4U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[34U] = 3U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[35U] = 2U;
    vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[36U] = 1U;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[0U] = 0x1feaU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0U] = 0x0aU;
    vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[0U] = 0xffU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list[0U] = 9U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list[1U] = 0x0019U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list[2U] = 0x0017U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list[3U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list[4U] = 0x001bU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[1U] = 0x0cU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[2U] = 0x0bU;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[4U] = 0x0dU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list[0U] = 0x0013U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list[1U] = 0x0031U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list[2U] = 0x002dU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list[3U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list[4U] = 0x0034U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[1U] = 0x0cU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[2U] = 0x0bU;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[4U] = 0x0dU;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__pair_list[0U] = 0x0027U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__pair_list[1U] = 0x0029U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__pair_list[2U] = 0x0025U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[1U] = 0x14U;
    vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[2U] = 0x12U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__pair_list[0U] = 0x004fU;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__pair_list[1U] = 0x0051U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__pair_list[2U] = 0x0048U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[1U] = 0x14U;
    vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[2U] = 0x12U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[0U] = 0x0055U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[1U] = 0x0057U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[2U] = 0x003dU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[3U] = 0x000dU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[4U] = 0x0013U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[5U] = 0x0015U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[0U] = 0x2aU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[1U] = 0x2bU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[2U] = 0x1eU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[3U] = 6U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[4U] = 9U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[5U] = 0x0aU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[0U] = 0x00abU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[1U] = 0x00adU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[2U] = 0x0078U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[3U] = 0x001bU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[4U] = 0x0025U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[5U] = 0x0028U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[0U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[3U] = 3U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[0U] = 0x2aU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[1U] = 0x2bU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[2U] = 0x1eU;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[3U] = 6U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[4U] = 9U;
    vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[5U] = 0x0aU;
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
    vlSelf->top__DOT__M_ren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8665034915090363070ull);
    vlSelf->top__DOT__M_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12873058058323851080ull);
    vlSelf->top__DOT__M_waddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1761823453572671153ull);
    vlSelf->top__DOT__M_wlen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10019196659265969935ull);
    vlSelf->top__DOT__M_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7671955735370586853ull);
    vlSelf->top__DOT__M_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2089852432179026286ull);
    vlSelf->top__DOT__M_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1805698931675465219ull);
    vlSelf->top__DOT__M_rlen = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13091405235891365904ull);
    vlSelf->top__DOT__op_encoded = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9548398446668340063ull);
    vlSelf->top__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18445623346312568628ull);
    vlSelf->top__DOT__dnpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3608326066998884506ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__u0__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12246715171773537061ull);
    }
    vlSelf->top__DOT__u0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__u2__DOT__op_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13301834075107919186ull);
    vlSelf->top__DOT__u2__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15170932342451714088ull);
    VL_SCOPED_RAND_RESET_W(342, vlSelf->top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut, __VscopeHash, 7956533077766576667ull);
    for (int __Vi0 = 0; __Vi0 < 38; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13351353084267201100ull);
    }
    for (int __Vi0 = 0; __Vi0 < 38; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6947681405415176063ull);
    }
    vlSelf->top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 548032144733802629ull);
    vlSelf->top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4622137370781659152ull);
    for (int __Vi0 = 0; __Vi0 < 37; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12551441618110577526ull);
    }
    for (int __Vi0 = 0; __Vi0 < 37; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7276242798463352105ull);
    }
    vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16839287766874287190ull);
    vlSelf->top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12472488714578010533ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 601779356759299322ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15354465978554728736ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2054328945092643036ull);
    }
    vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4153460652341851544ull);
    vlSelf->top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18006715541174441794ull);
    VL_SCOPED_RAND_RESET_W(175, vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 4072136677523959206ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 6553404872793486637ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4332401535127186374ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 481125972727780147ull);
    }
    vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5518883324943011875ull);
    vlSelf->top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3215937922151402132ull);
    vlSelf->top__DOT__u3__DOT__dst_shift = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15305558168185234502ull);
    vlSelf->top__DOT__u3__DOT__dst_common = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15022814200327138961ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18060484163952649523ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16416171660018903352ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 348567665716795077ull);
    }
    vlSelf->top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14553285438949028772ull);
    vlSelf->top__DOT__u3__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9957161276438811700ull);
    VL_SCOPED_RAND_RESET_W(200, vlSelf->top__DOT__u3__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 4722814185761162211ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12658016625307953343ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6529652564923332463ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5942420244346260077ull);
    }
    vlSelf->top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14155051623254976772ull);
    vlSelf->top__DOT__u3__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16094175194059714760ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17914020053450896808ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 923822734862399361ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7901211872629067662ull);
    }
    vlSelf->top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13536757161697268731ull);
    vlSelf->top__DOT__u3__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10369615061404689888ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3487581601345358585ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13455110303997736892ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1406510734075035471ull);
    }
    vlSelf->top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10158516308893262382ull);
    vlSelf->top__DOT__u3__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 551734064864881094ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->top__DOT__u3__DOT__u4__DOT__i0__DOT__lut, __VscopeHash, 5676572200568980734ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12939519451847312065ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11024180562119871392ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13314165383361866227ull);
    }
    vlSelf->top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 985095580229443130ull);
    vlSelf->top__DOT__u3__DOT__u4__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7009662591197043145ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->top__DOT__u3__DOT__u5__DOT__i0__DOT__lut, __VscopeHash, 13086269256491129241ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16400415970178198196ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1749252686313226149ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5403016372526704645ull);
    }
    vlSelf->top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15660098595685827692ull);
    vlSelf->top__DOT__u3__DOT__u5__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13373799654857050871ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u6__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13533972257988997873ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10241334112064242972ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9251824592439340806ull);
    }
    vlSelf->top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17169265095822822906ull);
    vlSelf->top__DOT__u3__DOT__u6__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13876741946279243660ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__shift_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10776302825821595945ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__shift_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16028399193106519589ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__load = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5946482154469042674ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__shift = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4387809692399061338ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16832416958498820604ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11498998137740847214ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5532908999640614155ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12551520168729809761ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17545529188885997778ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2825886107895504895ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18130064084258927154ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17159699838724950052ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3026387672526090390ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5443906959878110014ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3969421196484897428ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut, __VscopeHash, 2599820074048246613ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11049735085737309989ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15325615925020560779ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2686667963451724958ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9126749050562182868ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14890688042479394721ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6806536809741358739ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut, __VscopeHash, 9786570787847801980ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6088193517531249406ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1673009675546340618ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5842570757953260523ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15697248115470572255ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8979941888742888676ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16669437136936134639ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut, __VscopeHash, 10260887683120111109ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15805576234152660571ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4941788810006443944ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16362796185536126269ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14637833281010169783ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12804684905810418119ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 557858432405779827ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut, __VscopeHash, 10112988187241362153ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 10016116183220508553ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12548085141340093696ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9481360819188900613ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8637477503508816578ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8595207126320938348ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 86566423235213017ull);
    VL_SCOPED_RAND_RESET_W(136, vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut, __VscopeHash, 355865306104477584ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9349476320379839258ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17998419468806075859ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2592417356859312753ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6598177806686762511ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12136292877517610643ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4953248081593963914ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15193668747958575046ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4347897186386109358ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16635145043258478628ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7850443485259298856ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15446730030584768344ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10745569468536014059ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5001116744850081785ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12877914897009406573ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11331611068543371120ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut, __VscopeHash, 11525211135798546748ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3677383614405117611ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12059882953284308721ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13100220723440956817ull);
    }
    vlSelf->top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2881400894591221932ull);
    vlSelf->top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10935799319152567010ull);
    VL_SCOPED_RAND_RESET_W(880, vlSelf->top__DOT__u3__DOT__u8__DOT__i0__DOT__lut, __VscopeHash, 2327956454516652038ull);
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6743239832952973365ull);
    }
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17588477054425081803ull);
    }
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8479083386852376268ull);
    }
    vlSelf->top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6262128515335691540ull);
    vlSelf->top__DOT__u3__DOT__u8__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 755550794489626441ull);
    VL_SCOPED_RAND_RESET_W(320, vlSelf->top__DOT__u3__DOT__u9__DOT__i0__DOT__lut, __VscopeHash, 9873037419434288694ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15346087379992735857ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2402454226713669238ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13465099022301733608ull);
    }
    vlSelf->top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4914430509855903541ull);
    vlSelf->top__DOT__u3__DOT__u9__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13629809459651372498ull);
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
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_15 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_17 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_18 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_22 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_36 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_37 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_41 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_42 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_43 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_44 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_46 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_50 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_54 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_56 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_57 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_58 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_59 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_60 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_61 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_62 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_63 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_64 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_65 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_66 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_67 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_68 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_69 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_71 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_72 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_73 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_74 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_75 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_76 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_77 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_78 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_79 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_80 = 0;
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

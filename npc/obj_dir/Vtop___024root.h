// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(wen_pc,0,0);
    CData/*3:0*/ top__DOT__u2__DOT__op_encoded;
    CData/*2:0*/ top__DOT__u2__DOT__op_type;
    CData/*0:0*/ top__DOT__u3__DOT__M_wen;
    CData/*3:0*/ __Vtableidx1;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ top__DOT__pc;
    IData/*31:0*/ top__DOT__M_rdata;
    IData/*31:0*/ top__DOT__u2__DOT__operand3;
    IData/*31:0*/ top__DOT__u3__DOT__M_raddr;
    IData/*31:0*/ top__DOT__u3__DOT__M_waddr;
    IData/*31:0*/ top__DOT__u3__DOT__M_wdata;
    IData/*31:0*/ top__DOT__u3__DOT__result;
    IData/*31:0*/ top__DOT__u3__DOT__dnpc;
    IData/*31:0*/ __Vfunc_top__DOT__u1__DOT__pmem_read__0__Vfuncout;
    IData/*31:0*/ __Vfunc_top__DOT__u5__DOT__pmem_read__2__Vfuncout;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__u0__DOT__rf;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

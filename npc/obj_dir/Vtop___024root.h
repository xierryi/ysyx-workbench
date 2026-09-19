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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_pc,0,0);
        VL_IN8(wen_pc,0,0);
        CData/*0:0*/ top__DOT__M_ren;
        CData/*0:0*/ top__DOT__M_wen;
        CData/*1:0*/ top__DOT__M_wlen;
        CData/*1:0*/ top__DOT__M_rlen;
        CData/*7:0*/ top__DOT__op_encoded;
        CData/*2:0*/ top__DOT__u2__DOT__op_type;
        CData/*4:0*/ top__DOT__u2__DOT__rs1;
        CData/*7:0*/ top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit;
        CData/*2:0*/ top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit;
        CData/*4:0*/ top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u1__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u3__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u4__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u5__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u6__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__shift_en;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__shift_mode;
        CData/*4:0*/ top__DOT__u3__DOT__u7__DOT__shift;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit;
        CData/*4:0*/ top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u8__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u3__DOT__u9__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u5__DOT__u0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__u5__DOT__u1__DOT__i0__DOT__hit;
        CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    };
    struct {
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_16;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_18;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_19;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_20;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_26;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_31;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_57;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_58;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_59;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_60;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_61;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_62;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_63;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_64;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_65;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_66;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_67;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_68;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_69;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_70;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_71;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_72;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_73;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_74;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_75;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_76;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_77;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_78;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_79;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_80;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_pc__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(d_init_pc,31,0);
        IData/*31:0*/ top__DOT__inst;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__M_waddr;
        IData/*31:0*/ top__DOT__M_wdata;
        IData/*31:0*/ top__DOT__M_rdata;
        IData/*31:0*/ top__DOT__M_raddr;
        IData/*31:0*/ top__DOT__imm;
        IData/*31:0*/ top__DOT__dnpc;
        IData/*31:0*/ top__DOT__u0__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ top__DOT__u1__DOT____VlemCond_1;
        IData/*31:0*/ top__DOT__u1__DOT____VlemCall_0__vaddr_ifetch;
        VlWide<11>/*341:0*/ top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut;
        VlWide<6>/*174:0*/ top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u3__DOT__dst_shift;
        IData/*31:0*/ top__DOT__u3__DOT__dst_common;
        VlWide<7>/*199:0*/ top__DOT__u3__DOT__u1__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out;
        VlWide<4>/*119:0*/ top__DOT__u3__DOT__u4__DOT__i0__DOT__lut;
    };
    struct {
        IData/*31:0*/ top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out;
        VlWide<4>/*119:0*/ top__DOT__u3__DOT__u5__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__load;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4;
        VlWide<5>/*135:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out;
        VlWide<5>/*135:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out;
        VlWide<5>/*135:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out;
        VlWide<5>/*135:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out;
        VlWide<5>/*135:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out;
        VlWide<3>/*77:0*/ top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut;
        VlWide<28>/*879:0*/ top__DOT__u3__DOT__u8__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out;
        VlWide<10>/*319:0*/ top__DOT__u3__DOT__u9__DOT__i0__DOT__lut;
        IData/*31:0*/ top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u5__DOT__rlen_num;
        IData/*31:0*/ top__DOT__u5__DOT__wlen_num;
        IData/*31:0*/ top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ __Vfunc_top__DOT__u5__DOT__vaddr_read__6__Vfuncout;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_22;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_24;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_25;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_28;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_29;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_32;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_33;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_35;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_36;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_37;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_42;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_43;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_44;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_45;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_46;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_50;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_53;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_54;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_56;
        IData/*31:0*/ __VactIterCount;
        QData/*39:0*/ __VdfgRegularize_h6e95ff9d_0_41;
        VlUnpacked<IData/*31:0*/, 16> top__DOT__u0__DOT__rf;
        VlUnpacked<CData/*0:0*/, 38> top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 38> top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*7:0*/, 37> top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 37> top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*12:0*/, 1> top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 1> top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 1> top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*34:0*/, 5> top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list;
    };
    struct {
        VlUnpacked<SData/*8:0*/, 5> top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 5> top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 5> top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 5> top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 5> top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 5> top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 5> top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 5> top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 3> top__DOT__u3__DOT__u3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 3> top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 3> top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 3> top__DOT__u3__DOT__u6__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 3> top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*1:0*/, 2> top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 6> top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 6> top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*9:0*/, 6> top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 6> top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*1:0*/, 6> top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*12:0*/, 6> top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 6> top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 6> top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 22> top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 22> top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 22> top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 8> top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 8> top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*33:0*/, 3> top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

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

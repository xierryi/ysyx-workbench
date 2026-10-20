// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*14:0*/, 8>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*11:0*/, 8>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 8>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____6(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____7(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____8(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____9(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____10(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 7>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____11(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 7>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____12(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 7>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____13(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____14(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____15(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____16(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____17(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____18(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____19(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 9>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____20(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 8>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____21(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____22(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____23(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____24(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____25(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____26(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____27(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____28(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____29(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____30(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____31(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____32(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____33(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____34(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____35(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____36(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____37(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____38(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____39(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*33:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____40(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____41(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 8, vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 16, vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 24, vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 26, vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 28, vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 30, vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 32, vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 34, vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____6(vlSelf, bufp, 36, vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____7(vlSelf, bufp, 39, vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____8(vlSelf, bufp, 40, vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____9(vlSelf, bufp, 41, vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____7(vlSelf, bufp, 42, vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____8(vlSelf, bufp, 43, vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____9(vlSelf, bufp, 44, vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____7(vlSelf, bufp, 45, vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____8(vlSelf, bufp, 46, vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____9(vlSelf, bufp, 47, vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____10(vlSelf, bufp, 48, vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____11(vlSelf, bufp, 55, vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____12(vlSelf, bufp, 62, vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____13(vlSelf, bufp, 69, vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____14(vlSelf, bufp, 73, vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____15(vlSelf, bufp, 77, vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____7(vlSelf, bufp, 81, vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____8(vlSelf, bufp, 82, vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____9(vlSelf, bufp, 83, vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____16(vlSelf, bufp, 84, vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____16(vlSelf, bufp, 85, vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____16(vlSelf, bufp, 86, vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____17(vlSelf, bufp, 87, vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____18(vlSelf, bufp, 89, vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 91, vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 100, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____21(vlSelf, bufp, 108, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____22(vlSelf, bufp, 111, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____23(vlSelf, bufp, 113, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 115, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 119, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 123, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 127, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 131, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____25(vlSelf, bufp, 135, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____26(vlSelf, bufp, 138, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____27(vlSelf, bufp, 140, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____28(vlSelf, bufp, 141, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____29(vlSelf, bufp, 142, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____30(vlSelf, bufp, 143, vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____22(vlSelf, bufp, 146, vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____22(vlSelf, bufp, 148, vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 150, vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____32(vlSelf, bufp, 153, vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____33(vlSelf, bufp, 155, vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____34(vlSelf, bufp, 157, vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____35(vlSelf, bufp, 160, vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____36(vlSelf, bufp, 163, vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____34(vlSelf, bufp, 166, vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____35(vlSelf, bufp, 169, vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____36(vlSelf, bufp, 172, vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 175, vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____37(vlSelf, bufp, 179, vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____38(vlSelf, bufp, 181, vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____39(vlSelf, bufp, 182, vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 188, vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____40(vlSelf, bufp, 191, vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____39(vlSelf, bufp, 194, vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 200, vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____40(vlSelf, bufp, 203, vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__data_list);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+206,(vlSelfRef.top__DOT__inst),32);
        bufp->chgCData(oldp+207,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))),4);
        bufp->chgCData(oldp+208,((0x0000000fU & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))),4);
        bufp->chgCData(oldp+209,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))),4);
        bufp->chgCData(oldp+210,(vlSelfRef.top__DOT__M_wlen),2);
        bufp->chgCData(oldp+211,(vlSelfRef.top__DOT__M_rlen),2);
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__isB_type));
        bufp->chgCData(oldp+213,(vlSelfRef.top__DOT__RegIn),2);
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__ALUIn1Sel));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__ALUIn2Sel));
        bufp->chgBit(oldp+216,(((IData)(vlSelfRef.top__DOT__csr) 
                                | (IData)(vlSelfRef.top__DOT__u3__DOT__R_wen_main))));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__M_wen));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__M_ren));
        bufp->chgBit(oldp+219,(vlSelfRef.top__DOT__ebreak));
        bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__ecall));
        bufp->chgBit(oldp+221,(vlSelfRef.top__DOT__mret));
        bufp->chgBit(oldp+222,(vlSelfRef.top__DOT__csr));
        bufp->chgSData(oldp+223,(vlSelfRef.top__DOT__SR_addr),12);
        bufp->chgCData(oldp+224,((7U & (vlSelfRef.top__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgBit(oldp+225,((1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000001eU))));
        bufp->chgIData(oldp+226,(vlSelfRef.top__DOT__imm),32);
        bufp->chgCData(oldp+227,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+228,(vlSelfRef.top__DOT__u1__DOT__addr_enc),3);
        bufp->chgCData(oldp+229,(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+230,(vlSelfRef.top__DOT__u1__DOT__u0__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+231,((0x0000007fU & vlSelfRef.top__DOT__inst)),7);
        bufp->chgBit(oldp+232,(vlSelfRef.top__DOT__u3__DOT__EandCSR));
        bufp->chgBit(oldp+233,(vlSelfRef.top__DOT__u3__DOT__R_wen_main));
        bufp->chgCData(oldp+234,(vlSelfRef.top__DOT__u3__DOT__rs1),5);
        bufp->chgCData(oldp+235,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+236,(vlSelfRef.top__DOT__ALUIn1Sel));
        bufp->chgBit(oldp+237,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+238,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+239,(vlSelfRef.top__DOT__ALUIn2Sel));
        bufp->chgBit(oldp+240,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+241,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+242,(vlSelfRef.top__DOT__u3__DOT__EandCSR));
        bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+244,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+245,(vlSelfRef.top__DOT__M_ren));
        bufp->chgBit(oldp+246,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+247,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+248,(vlSelfRef.top__DOT__M_wen));
        bufp->chgBit(oldp+249,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__u3__DOT__R_wen_main));
        bufp->chgBit(oldp+252,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+253,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+254,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+255,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+256,(vlSelfRef.top__DOT__isB_type));
        bufp->chgBit(oldp+257,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+258,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+259,((vlSelfRef.top__DOT__inst 
                                  >> 7U)),25);
        bufp->chgBit(oldp+260,(vlSelfRef.top__DOT__ebreak));
        bufp->chgIData(oldp+261,((0x00004000U | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR))),26);
        bufp->chgIData(oldp+262,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[0]),26);
        bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+264,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+265,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__ecall));
        bufp->chgIData(oldp+267,(vlSelfRef.top__DOT__u3__DOT__EandCSR),26);
        bufp->chgIData(oldp+268,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__pair_list[0]),26);
        bufp->chgBit(oldp+269,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+271,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+272,(vlSelfRef.top__DOT__mret));
        bufp->chgIData(oldp+273,((0x00c08000U | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR))),26);
        bufp->chgIData(oldp+274,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__pair_list[0]),26);
        bufp->chgBit(oldp+275,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+276,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+277,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+278,(vlSelfRef.top__DOT__csr));
        bufp->chgCData(oldp+279,((0x00000024U | (((IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.top__DOT__u3__DOT__EandCSR)))),8);
        bufp->chgCData(oldp+280,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+281,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgBit(oldp+282,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+283,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+284,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+285,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+286,((0x2aU | (0x000007c0U 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 9U)))),12);
        bufp->chgCData(oldp+287,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+288,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+289,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+290,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+291,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+292,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+293,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut),351);
        bufp->chgQData(oldp+304,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgQData(oldp+306,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+308,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+310,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+312,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+314,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+316,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+318,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+320,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgIData(oldp+322,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+323,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+324,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+325,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+326,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+327,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+328,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+329,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+330,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+331,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+332,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+333,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut),39);
        bufp->chgSData(oldp+335,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+336,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+337,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgBit(oldp+338,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[2]));
        bufp->chgBit(oldp+339,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+340,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__key_list[0]));
        bufp->chgSData(oldp+341,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[2]),12);
        bufp->chgSData(oldp+342,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[1]),12);
        bufp->chgSData(oldp+343,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__data_list[0]),12);
        bufp->chgSData(oldp+344,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__lut_out),12);
        bufp->chgBit(oldp+345,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+346,(vlSelfRef.top__DOT__u4__DOT__csr_type));
        bufp->chgBit(oldp+347,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__isM));
        bufp->chgBit(oldp+348,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB));
        bufp->chgBit(oldp+349,((0U == (7U & (vlSelfRef.top__DOT__inst 
                                             >> 0x0000000cU)))));
        bufp->chgBit(oldp+350,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben));
        bufp->chgBit(oldp+351,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP));
        bufp->chgBit(oldp+352,((1U == (3U & (vlSelfRef.top__DOT__inst 
                                             >> 0x0000000dU)))));
        bufp->chgBit(oldp+353,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFT));
        bufp->chgBit(oldp+354,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTfunct3));
        bufp->chgBit(oldp+355,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGIC));
        bufp->chgCData(oldp+356,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICfunc),2);
        bufp->chgBit(oldp+357,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+358,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+359,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+360,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3]));
        bufp->chgBit(oldp+361,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2]));
        bufp->chgBit(oldp+362,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+363,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+364,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBSuben));
        bufp->chgBit(oldp+365,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+366,((1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+367,((1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+368,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+369,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB));
        bufp->chgCData(oldp+370,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut),6);
        bufp->chgCData(oldp+371,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[2]),2);
        bufp->chgCData(oldp+372,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+373,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+374,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2]));
        bufp->chgBit(oldp+375,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+376,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+377,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+378,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+379,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMP));
        bufp->chgCData(oldp+380,((5U | (((IData)(vlSelfRef.top__DOT__isB_type) 
                                         << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                   << 1U)))),4);
        bufp->chgCData(oldp+381,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+382,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+383,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+384,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+385,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+386,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+387,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTfunct3));
        bufp->chgCData(oldp+388,((3U & (vlSelfRef.top__DOT__inst 
                                        >> 0x0000000cU))),2);
        bufp->chgBit(oldp+389,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+390,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+391,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut),9);
        bufp->chgCData(oldp+392,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[2]),3);
        bufp->chgCData(oldp+393,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[1]),3);
        bufp->chgCData(oldp+394,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list[0]),3);
        bufp->chgBit(oldp+395,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[2]));
        bufp->chgBit(oldp+396,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+397,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list[0]));
        bufp->chgCData(oldp+398,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+399,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+400,(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+401,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+402,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+403,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+404,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+405,(vlSelfRef.top__DOT__u4__DOT__csr_type));
        bufp->chgCData(oldp+406,((0x00000024U | (IData)(vlSelfRef.top__DOT__csr))),8);
        bufp->chgCData(oldp+407,(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+408,(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgBit(oldp+409,(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+410,(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+411,(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+412,(vlSelfRef.top__DOT__u4__DOT__CSRMUX__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+413,(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+414,(vlSelfRef.top__DOT__u4__DOT__M_rlenMUX__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+415,(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+416,(vlSelfRef.top__DOT__u4__DOT__M_wlenMUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+417,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+418,(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgBit(oldp+420,(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__key_list[0]));
        bufp->chgIData(oldp+421,(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgQData(oldp+422,(vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+424,(vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+425,(vlSelfRef.top__DOT__u6__DOT__rlen_num),32);
        bufp->chgIData(oldp+426,(vlSelfRef.top__DOT__u6__DOT__wlen_num),32);
        bufp->chgIData(oldp+427,(vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+428,(vlSelfRef.top__DOT__u6__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+429,(vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+430,(vlSelfRef.top__DOT__u6__DOT__u1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        __Vtemp_2[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20);
        __Vtemp_2[1U] = ((vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2 
                          << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                            >> 0x00000020U)));
        __Vtemp_2[2U] = (((IData)(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUB) 
                          << 1U) | (vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2 
                                    >> 0x0000001fU));
        bufp->chgWData(oldp+431,(__Vtemp_2),66);
        bufp->chgQData(oldp+434,(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+436,(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+438,(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+439,(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0]),32);
        __Vtemp_4[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16);
        __Vtemp_4[1U] = ((vlSelfRef.top__DOT__u4__DOT__ALUIn2_main 
                          << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 
                                            >> 0x00000020U)));
        __Vtemp_4[2U] = ((2U & ((~ (IData)(vlSelfRef.top__DOT__csr)) 
                                << 1U)) | (vlSelfRef.top__DOT__u4__DOT__ALUIn2_main 
                                           >> 0x0000001fU));
        bufp->chgWData(oldp+440,(__Vtemp_4),66);
        bufp->chgQData(oldp+443,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+445,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+447,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+448,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0]),32);
        __Vtemp_5[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15);
        __Vtemp_5[1U] = (((IData)((QData)((IData)(vlSelfRef.top__DOT__imm))) 
                          << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 
                                            >> 0x00000020U)));
        __Vtemp_5[2U] = (((IData)((QData)((IData)(vlSelfRef.top__DOT__imm))) 
                          >> 0x0000001fU) | ((IData)(
                                                     ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                      >> 0x00000020U)) 
                                             << 1U));
        bufp->chgWData(oldp+449,(__Vtemp_5),66);
        bufp->chgQData(oldp+452,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+454,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+456,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+457,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__data_list[0]),32);
        __Vtemp_8[0U] = (IData)((0x0000000200000000ULL 
                                 | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUResult))));
        __Vtemp_8[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                          << 2U) | (IData)(((0x0000000200000000ULL 
                                             | (QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUResult))) 
                                            >> 0x00000020U)));
        __Vtemp_8[2U] = (4U | (((IData)((QData)((IData)(
                                                        ((IData)(4U) 
                                                         + vlSelfRef.top__DOT__pc)))) 
                                << 4U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                                          >> 0x0000001eU)));
        __Vtemp_8[3U] = (((IData)((QData)((IData)(((IData)(4U) 
                                                   + vlSelfRef.top__DOT__pc)))) 
                          >> 0x0000001cU) | ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelfRef.top__DOT__pc))) 
                                                      >> 0x00000020U)) 
                                             << 4U));
        bufp->chgWData(oldp+458,(__Vtemp_8),102);
        bufp->chgQData(oldp+462,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+464,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+466,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+468,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+469,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+470,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgQData(oldp+471,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+473,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+475,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+477,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+479,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+480,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+481,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+482,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__data_list[0]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+483,(vlSelfRef.top__DOT__dst),32);
        bufp->chgIData(oldp+484,(vlSelfRef.top__DOT__u4__DOT__ALUResult),32);
        bufp->chgIData(oldp+485,(vlSelfRef.top__DOT__M_rdata),32);
        bufp->chgCData(oldp+486,(vlSelfRef.top__DOT__Branch),2);
        bufp->chgBit(oldp+487,((1U & vlSelfRef.top__DOT__u4__DOT__ALUResult)));
        bufp->chgIData(oldp+488,(vlSelfRef.top__DOT__SR_dst),32);
        bufp->chgIData(oldp+489,(vlSelfRef.top__DOT__dnpc),32);
        bufp->chgIData(oldp+490,((0x06fb3d8cU | (1U 
                                                 & vlSelfRef.top__DOT__u4__DOT__ALUResult))),27);
        bufp->chgSData(oldp+491,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+492,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+493,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgCData(oldp+494,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+495,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+496,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+497,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+498,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+499,(vlSelfRef.top__DOT__u4__DOT__ALUIn1),32);
        bufp->chgIData(oldp+500,(vlSelfRef.top__DOT__u4__DOT__ALUIn2),32);
        bufp->chgIData(oldp+501,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_main),32);
        bufp->chgIData(oldp+502,(vlSelfRef.top__DOT__u4__DOT__M_rdatatoReg),32);
        bufp->chgIData(oldp+503,(vlSelfRef.top__DOT__u4__DOT__dst_main),32);
        bufp->chgIData(oldp+504,(vlSelfRef.top__DOT__u4__DOT__dnpc_main),32);
        bufp->chgIData(oldp+505,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2),32);
        bufp->chgIData(oldp+506,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBADDERIn2),32);
        bufp->chgIData(oldp+507,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDSUBResult),32);
        bufp->chgIData(oldp+508,((~ vlSelfRef.top__DOT__u4__DOT__ALUIn2)),32);
        bufp->chgIData(oldp+509,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT____Vcellout__COMPResultMUX__out),32);
        bufp->chgBit(oldp+510,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDEROverflow));
        bufp->chgIData(oldp+511,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SHIFTResult),32);
        bufp->chgIData(oldp+512,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LOGICResult),32);
        bufp->chgQData(oldp+513,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+515,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+517,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+518,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+519,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+520,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT____Vcellout__COMPResultMUX__out));
        bufp->chgIData(oldp+521,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut),32);
        bufp->chgCData(oldp+522,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[7]),4);
        bufp->chgCData(oldp+523,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[6]),4);
        bufp->chgCData(oldp+524,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+525,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+526,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+527,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+528,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+529,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgBit(oldp+530,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7]));
        bufp->chgBit(oldp+531,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+532,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+533,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+534,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+535,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+536,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+537,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+538,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+539,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+540,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut),102);
        bufp->chgQData(oldp+544,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+546,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+548,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+550,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+551,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+552,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+553,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+554,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+555,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut),132);
        bufp->chgQData(oldp+560,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[3]),33);
        bufp->chgQData(oldp+562,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[2]),33);
        bufp->chgQData(oldp+564,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+566,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+568,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+569,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+570,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+571,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+572,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+573,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit));
        __Vtemp_9[0U] = (~ vlSelfRef.top__DOT__u4__DOT__ALUIn2);
        __Vtemp_9[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2)) 
                                         << 1U)));
        __Vtemp_9[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u4__DOT__ALUIn2)) 
                                          << 1U)) >> 0x00000020U));
        bufp->chgWData(oldp+574,(__Vtemp_9),66);
        bufp->chgQData(oldp+577,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+579,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+581,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+582,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+583,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out),32);
        bufp->chgCData(oldp+584,((0x0000001fU & vlSelfRef.top__DOT__u4__DOT__ALUIn2)),5);
        bufp->chgBit(oldp+585,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit));
        bufp->chgIData(oldp+586,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl1),32);
        bufp->chgIData(oldp+587,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl2),32);
        bufp->chgIData(oldp+588,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl3),32);
        bufp->chgIData(oldp+589,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__lvl4),32);
        bufp->chgBit(oldp+590,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit));
        bufp->chgCData(oldp+591,((2U | (vlSelfRef.top__DOT__u4__DOT__ALUIn1 
                                        >> 0x0000001fU))),4);
        bufp->chgCData(oldp+592,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+593,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+594,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+595,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+596,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgCData(oldp+597,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+598,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+603,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+605,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+607,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+609,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+611,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+612,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+613,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+614,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+615,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+616,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+617,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+618,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+623,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+625,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+627,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+629,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+631,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+632,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+633,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+634,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+635,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+636,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+637,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+638,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+643,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+645,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+647,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+649,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+651,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+652,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+653,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+654,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+655,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+656,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+657,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+658,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+663,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+665,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+667,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+669,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+671,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+672,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+673,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+674,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+675,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+676,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+677,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+678,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+683,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+685,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+687,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+689,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+691,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+692,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+693,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+694,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+695,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+696,(vlSelfRef.top__DOT__u4__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+697,(vlSelfRef.top__DOT__u4__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+698,(vlSelfRef.top__DOT__u4__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+699,(vlSelfRef.top__DOT__u4__DOT__ALUIn2_mainMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+700,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+701,(vlSelfRef.top__DOT__u4__DOT__BranchMUX__DOT__i0__DOT__hit));
        __Vtemp_10[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41;
        __Vtemp_10[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)) 
                                          << 3U)));
        __Vtemp_10[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)) 
                                           << 3U)) 
                                  >> 0x00000020U));
        bufp->chgWData(oldp+702,(__Vtemp_10),70);
        bufp->chgQData(oldp+705,(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+707,(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgIData(oldp+709,(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+710,(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+711,(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+712,(vlSelfRef.top__DOT__u4__DOT__M_rdataMUX__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+713,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut),136);
        bufp->chgIData(oldp+718,(vlSelfRef.top__DOT__u4__DOT__RegInMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgQData(oldp+719,(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+721,(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+723,(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+724,(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+725,(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+726,(vlSelfRef.top__DOT__u4__DOT__SR_dstMUX__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+727,(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+728,(vlSelfRef.top__DOT__u4__DOT__dnpcMUX__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+729,(vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+730,(vlSelfRef.top__DOT__u4__DOT__dstMUX__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+731,(vlSelfRef.top__DOT__u0__DOT__rf[15]),32);
        bufp->chgIData(oldp+732,(vlSelfRef.top__DOT__u0__DOT__rf[14]),32);
        bufp->chgIData(oldp+733,(vlSelfRef.top__DOT__u0__DOT__rf[13]),32);
        bufp->chgIData(oldp+734,(vlSelfRef.top__DOT__u0__DOT__rf[12]),32);
        bufp->chgIData(oldp+735,(vlSelfRef.top__DOT__u0__DOT__rf[11]),32);
        bufp->chgIData(oldp+736,(vlSelfRef.top__DOT__u0__DOT__rf[10]),32);
        bufp->chgIData(oldp+737,(vlSelfRef.top__DOT__u0__DOT__rf[9]),32);
        bufp->chgIData(oldp+738,(vlSelfRef.top__DOT__u0__DOT__rf[8]),32);
        bufp->chgIData(oldp+739,(vlSelfRef.top__DOT__u0__DOT__rf[7]),32);
        bufp->chgIData(oldp+740,(vlSelfRef.top__DOT__u0__DOT__rf[6]),32);
        bufp->chgIData(oldp+741,(vlSelfRef.top__DOT__u0__DOT__rf[5]),32);
        bufp->chgIData(oldp+742,(vlSelfRef.top__DOT__u0__DOT__rf[4]),32);
        bufp->chgIData(oldp+743,(vlSelfRef.top__DOT__u0__DOT__rf[3]),32);
        bufp->chgIData(oldp+744,(vlSelfRef.top__DOT__u0__DOT__rf[2]),32);
        bufp->chgIData(oldp+745,(vlSelfRef.top__DOT__u0__DOT__rf[1]),32);
        bufp->chgIData(oldp+746,(vlSelfRef.top__DOT__u0__DOT__rf[0]),32);
    }
    bufp->chgBit(oldp+747,(vlSelfRef.clk));
    bufp->chgBit(oldp+748,(vlSelfRef.rst_pc));
    bufp->chgBit(oldp+749,(vlSelfRef.wen_pc));
    bufp->chgIData(oldp+750,(vlSelfRef.d_init_pc),32);
    bufp->chgIData(oldp+751,(vlSelfRef.top__DOT__pc),32);
    bufp->chgIData(oldp+752,(vlSelfRef.top__DOT__u0__DOT__rf
                             [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))]),32);
    bufp->chgIData(oldp+753,(vlSelfRef.top__DOT__u0__DOT__rf
                             [(0x0000000fU & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))]),32);
    bufp->chgIData(oldp+754,(vlSelfRef.top__DOT__u1__DOT__rf
                             [vlSelfRef.top__DOT__u1__DOT__addr_enc]),32);
    Vtop___024root__trace_chg_dtype____41(vlSelf, bufp, 755, vlSelfRef.top__DOT__u1__DOT__rf);
    __Vtemp_11[0U] = vlSelfRef.top__DOT__pc;
    __Vtemp_11[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                      [
                                                      (0x0000000fU 
                                                       & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))])) 
                                      << 1U)));
    __Vtemp_11[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                       [
                                                       (0x0000000fU 
                                                        & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))])) 
                                       << 1U)) >> 0x00000020U));
    bufp->chgWData(oldp+763,(__Vtemp_11),66);
    __Vtemp_12[0U] = vlSelfRef.top__DOT__u4__DOT__ALUResult;
    __Vtemp_12[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                      [
                                                      (0x0000000fU 
                                                       & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))])) 
                                      << 1U)));
    __Vtemp_12[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                       [
                                                       (0x0000000fU 
                                                        & (IData)(vlSelfRef.top__DOT__u3__DOT__rs1))])) 
                                       << 1U)) >> 0x00000020U));
    bufp->chgWData(oldp+766,(__Vtemp_12),66);
    bufp->chgQData(oldp+769,((((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)) 
                               << 0x00000020U) | (QData)((IData)(vlSelfRef.top__DOT__u1__DOT__rf
                                                                 [vlSelfRef.top__DOT__u1__DOT__addr_enc])))),33);
    bufp->chgQData(oldp+771,((0x0000000100000000ULL 
                              | (QData)((IData)(vlSelfRef.top__DOT__u1__DOT__rf
                                                [vlSelfRef.top__DOT__u1__DOT__addr_enc])))),33);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*14:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[7]),15);
    bufp->chgSData(oldp+1,(__VdtypeVar[6]),15);
    bufp->chgSData(oldp+2,(__VdtypeVar[5]),15);
    bufp->chgSData(oldp+3,(__VdtypeVar[4]),15);
    bufp->chgSData(oldp+4,(__VdtypeVar[3]),15);
    bufp->chgSData(oldp+5,(__VdtypeVar[2]),15);
    bufp->chgSData(oldp+6,(__VdtypeVar[1]),15);
    bufp->chgSData(oldp+7,(__VdtypeVar[0]),15);
}

void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*11:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[7]),12);
    bufp->chgSData(oldp+1,(__VdtypeVar[6]),12);
    bufp->chgSData(oldp+2,(__VdtypeVar[5]),12);
    bufp->chgSData(oldp+3,(__VdtypeVar[4]),12);
    bufp->chgSData(oldp+4,(__VdtypeVar[3]),12);
    bufp->chgSData(oldp+5,(__VdtypeVar[2]),12);
    bufp->chgSData(oldp+6,(__VdtypeVar[1]),12);
    bufp->chgSData(oldp+7,(__VdtypeVar[0]),12);
}

void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[7]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[6]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[5]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[4]),3);
    bufp->chgCData(oldp+4,(__VdtypeVar[3]),3);
    bufp->chgCData(oldp+5,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+6,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+7,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____6(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____7(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____8(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____9(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____10(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 7>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____11(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 7>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[6]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[5]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[4]),7);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),7);
    bufp->chgCData(oldp+4,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+5,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+6,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____12(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 7>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[6]));
    bufp->chgBit(oldp+1,(__VdtypeVar[5]));
    bufp->chgBit(oldp+2,(__VdtypeVar[4]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[2]));
    bufp->chgBit(oldp+5,(__VdtypeVar[1]));
    bufp->chgBit(oldp+6,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____13(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[3]),9);
    bufp->chgSData(oldp+1,(__VdtypeVar[2]),9);
    bufp->chgSData(oldp+2,(__VdtypeVar[1]),9);
    bufp->chgSData(oldp+3,(__VdtypeVar[0]),9);
}

void Vtop___024root__trace_chg_dtype____14(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____15(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____16(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),25);
}

void Vtop___024root__trace_chg_dtype____17(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____18(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____19(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 9>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[8]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[7]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[6]),7);
    bufp->chgCData(oldp+3,(__VdtypeVar[5]),7);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),7);
    bufp->chgCData(oldp+5,(__VdtypeVar[3]),7);
    bufp->chgCData(oldp+6,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+7,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+8,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____20(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[7]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[6]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[5]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[4]),3);
    bufp->chgCData(oldp+4,(__VdtypeVar[3]),3);
    bufp->chgCData(oldp+5,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+6,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+7,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____21(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____22(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____23(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____24(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____25(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[2]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____26(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____27(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____28(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____29(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____30(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____31(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____32(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____33(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____34(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),4);
}

void Vtop___024root__trace_chg_dtype____35(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____36(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____36\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____37(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____37\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____38(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____38\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____39(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*33:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____39\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[2]),34);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),34);
    bufp->chgQData(oldp+4,(__VdtypeVar[0]),34);
}

void Vtop___024root__trace_chg_dtype____40(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____40\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0]),32);
}

void Vtop___024root__trace_chg_dtype____41(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[0]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____6(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____7(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 7>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____8(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 7>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____9(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 7>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____10(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____11(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____12(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____13(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____14(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____15(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 9>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____16(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 8>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____17(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____18(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____19(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____20(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____21(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____22(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____23(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____24(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____25(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____26(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____27(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____28(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____29(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____30(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____31(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____32(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____33(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____34(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*33:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____35(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 3>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 2, vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 4, vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 6, vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 8, vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 10, vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 12, vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 15, vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 16, vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____6(vlSelf, bufp, 17, vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 18, vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 19, vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____6(vlSelf, bufp, 20, vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 21, vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 22, vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____6(vlSelf, bufp, 23, vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____7(vlSelf, bufp, 24, vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____8(vlSelf, bufp, 31, vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____9(vlSelf, bufp, 38, vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____10(vlSelf, bufp, 45, vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____11(vlSelf, bufp, 49, vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____12(vlSelf, bufp, 53, vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 57, vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 58, vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____6(vlSelf, bufp, 59, vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____13(vlSelf, bufp, 60, vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____14(vlSelf, bufp, 61, vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____15(vlSelf, bufp, 63, vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____16(vlSelf, bufp, 72, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____17(vlSelf, bufp, 80, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____18(vlSelf, bufp, 83, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 85, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 87, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 91, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 95, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 99, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 103, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____21(vlSelf, bufp, 107, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____22(vlSelf, bufp, 110, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____23(vlSelf, bufp, 112, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 113, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____25(vlSelf, bufp, 114, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____26(vlSelf, bufp, 115, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____27(vlSelf, bufp, 118, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____28(vlSelf, bufp, 121, vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____18(vlSelf, bufp, 124, vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____18(vlSelf, bufp, 126, vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____29(vlSelf, bufp, 128, vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____30(vlSelf, bufp, 131, vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 133, vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____32(vlSelf, bufp, 136, vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____33(vlSelf, bufp, 139, vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 142, vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____32(vlSelf, bufp, 145, vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____33(vlSelf, bufp, 148, vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 151, vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____34(vlSelf, bufp, 155, vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____29(vlSelf, bufp, 161, vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____35(vlSelf, bufp, 164, vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____34(vlSelf, bufp, 167, vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____29(vlSelf, bufp, 173, vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____35(vlSelf, bufp, 176, vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+179,(vlSelfRef.top__DOT__inst),32);
        bufp->chgCData(oldp+180,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))),4);
        bufp->chgCData(oldp+181,((0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))),4);
        bufp->chgCData(oldp+182,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))),4);
        bufp->chgCData(oldp+183,(vlSelfRef.top__DOT__M_wlen),2);
        bufp->chgCData(oldp+184,(vlSelfRef.top__DOT__M_rlen),2);
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__isB_type));
        bufp->chgCData(oldp+186,(vlSelfRef.top__DOT__RegIn),2);
        bufp->chgBit(oldp+187,(vlSelfRef.top__DOT__ALUIn1Sel));
        bufp->chgBit(oldp+188,(vlSelfRef.top__DOT__ALUIn2Sel));
        bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__R_wen));
        bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__M_wen));
        bufp->chgBit(oldp+191,(vlSelfRef.top__DOT__M_ren));
        bufp->chgBit(oldp+192,(vlSelfRef.top__DOT__ebreak));
        bufp->chgCData(oldp+193,((7U & (vlSelfRef.top__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgBit(oldp+194,((1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000001eU))));
        bufp->chgIData(oldp+195,(vlSelfRef.top__DOT__imm),32);
        bufp->chgCData(oldp+196,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+197,((0x0000007fU & vlSelfRef.top__DOT__inst)),7);
        bufp->chgBit(oldp+198,(vlSelfRef.top__DOT__u2__DOT__EandCSR));
        bufp->chgCData(oldp+199,(vlSelfRef.top__DOT__u2__DOT__rs1),5);
        bufp->chgCData(oldp+200,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))),5);
        bufp->chgBit(oldp+201,(vlSelfRef.top__DOT__ALUIn1Sel));
        bufp->chgBit(oldp+202,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn1SelEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__ALUIn2Sel));
        bufp->chgBit(oldp+205,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__ALUIn2SelEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+207,(vlSelfRef.top__DOT__u2__DOT__EandCSR));
        bufp->chgBit(oldp+208,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+209,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__EandCSREnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__M_ren));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_renEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+213,(vlSelfRef.top__DOT__M_wen));
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__M_wenEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__R_wen));
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__R_wenEnc__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+219,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__RegInEnc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+221,(vlSelfRef.top__DOT__isB_type));
        bufp->chgBit(oldp+222,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+223,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__isB_typeEnc__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+224,((vlSelfRef.top__DOT__inst 
                                  >> 7U)),25);
        bufp->chgBit(oldp+225,(vlSelfRef.top__DOT__ebreak));
        bufp->chgIData(oldp+226,((0x00004000U | (IData)(vlSelfRef.top__DOT__u2__DOT__EandCSR))),26);
        bufp->chgIData(oldp+227,(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__pair_list[0]),26);
        bufp->chgBit(oldp+228,(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+229,(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+230,(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+231,((0x2aU | (0x000007c0U 
                                           & (vlSelfRef.top__DOT__inst 
                                              >> 9U)))),12);
        bufp->chgCData(oldp+232,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+233,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+234,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+235,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+236,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+237,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+238,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut),351);
        bufp->chgQData(oldp+249,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[8]),39);
        bufp->chgQData(oldp+251,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgQData(oldp+253,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+255,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+257,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+259,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+261,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+263,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+265,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgIData(oldp+267,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+270,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+271,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+272,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+277,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+278,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__isM));
        bufp->chgBit(oldp+279,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB));
        bufp->chgBit(oldp+280,((0U == (7U & (vlSelfRef.top__DOT__inst 
                                             >> 0x0000000cU)))));
        bufp->chgBit(oldp+281,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben));
        bufp->chgBit(oldp+282,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP));
        bufp->chgBit(oldp+283,((1U == (3U & (vlSelfRef.top__DOT__inst 
                                             >> 0x0000000dU)))));
        bufp->chgBit(oldp+284,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFT));
        bufp->chgBit(oldp+285,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3));
        bufp->chgBit(oldp+286,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGIC));
        bufp->chgBit(oldp+287,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICfunct3));
        bufp->chgBit(oldp+288,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+289,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+290,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+291,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[3]));
        bufp->chgBit(oldp+292,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[2]));
        bufp->chgBit(oldp+293,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+294,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+295,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBSuben));
        bufp->chgBit(oldp+296,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+297,((1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000000eU))));
        bufp->chgBit(oldp+298,((1U & (vlSelfRef.top__DOT__inst 
                                      >> 0x0000001eU))));
        bufp->chgBit(oldp+299,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+300,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB));
        bufp->chgCData(oldp+301,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut),6);
        bufp->chgCData(oldp+302,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[2]),2);
        bufp->chgCData(oldp+303,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+304,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+305,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[2]));
        bufp->chgBit(oldp+306,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+307,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+308,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+309,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+310,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMP));
        bufp->chgCData(oldp+311,((5U | (((IData)(vlSelfRef.top__DOT__isB_type) 
                                         << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
                                                   << 1U)))),4);
        bufp->chgCData(oldp+312,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+313,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+314,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+315,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+316,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+317,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+318,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTfunct3));
        bufp->chgCData(oldp+319,((3U & (vlSelfRef.top__DOT__inst 
                                        >> 0x0000000cU))),2);
        bufp->chgBit(oldp+320,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+321,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+322,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICfunct3));
        bufp->chgBit(oldp+323,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+324,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+325,(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+326,(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+327,(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+328,(vlSelfRef.top__DOT__u3__DOT__M_rlenMUX__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+329,(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+330,(vlSelfRef.top__DOT__u3__DOT__M_wlenMUX__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+331,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+332,(vlSelfRef.top__DOT__u5__DOT__rlen_num),32);
        bufp->chgIData(oldp+333,(vlSelfRef.top__DOT__u5__DOT__wlen_num),32);
        bufp->chgIData(oldp+334,(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+335,(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+336,(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+337,(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        __Vtemp_2[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15);
        __Vtemp_2[1U] = ((vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2 
                          << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15 
                                            >> 0x00000020U)));
        __Vtemp_2[2U] = (((IData)(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUB) 
                          << 1U) | (vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2 
                                    >> 0x0000001fU));
        bufp->chgWData(oldp+338,(__Vtemp_2),66);
        bufp->chgQData(oldp+341,(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+343,(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+345,(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+346,(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__data_list[0]),32);
        __Vtemp_3[0U] = (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11);
        __Vtemp_3[1U] = (((IData)((QData)((IData)(vlSelfRef.top__DOT__imm))) 
                          << 1U) | (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
                                            >> 0x00000020U)));
        __Vtemp_3[2U] = (((IData)((QData)((IData)(vlSelfRef.top__DOT__imm))) 
                          >> 0x0000001fU) | ((IData)(
                                                     ((QData)((IData)(vlSelfRef.top__DOT__imm)) 
                                                      >> 0x00000020U)) 
                                             << 1U));
        bufp->chgWData(oldp+347,(__Vtemp_3),66);
        bufp->chgQData(oldp+350,(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+352,(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+354,(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+355,(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__data_list[0]),32);
        __Vtemp_6[0U] = (IData)((0x0000000200000000ULL 
                                 | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUResult))));
        __Vtemp_6[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                          << 2U) | (IData)(((0x0000000200000000ULL 
                                             | (QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUResult))) 
                                            >> 0x00000020U)));
        __Vtemp_6[2U] = (4U | (((IData)((QData)((IData)(
                                                        ((IData)(4U) 
                                                         + vlSelfRef.top__DOT__pc)))) 
                                << 4U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 
                                          >> 0x0000001eU)));
        __Vtemp_6[3U] = (((IData)((QData)((IData)(((IData)(4U) 
                                                   + vlSelfRef.top__DOT__pc)))) 
                          >> 0x0000001cU) | ((IData)(
                                                     ((QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelfRef.top__DOT__pc))) 
                                                      >> 0x00000020U)) 
                                             << 4U));
        bufp->chgWData(oldp+356,(__Vtemp_6),102);
        bufp->chgQData(oldp+360,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+362,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+364,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+366,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+367,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+368,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgQData(oldp+369,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+371,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+373,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+375,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+377,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+378,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+379,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+380,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__data_list[0]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+381,(vlSelfRef.top__DOT__dst),32);
        bufp->chgIData(oldp+382,(vlSelfRef.top__DOT__u3__DOT__ALUResult),32);
        bufp->chgIData(oldp+383,(vlSelfRef.top__DOT__M_rdata),32);
        bufp->chgCData(oldp+384,(vlSelfRef.top__DOT__Branch),2);
        bufp->chgBit(oldp+385,((1U & vlSelfRef.top__DOT__u3__DOT__ALUResult)));
        bufp->chgIData(oldp+386,(vlSelfRef.top__DOT__dnpc),32);
        bufp->chgIData(oldp+387,((0x06fb3d8cU | (1U 
                                                 & vlSelfRef.top__DOT__u3__DOT__ALUResult))),27);
        bufp->chgSData(oldp+388,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+389,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+390,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgCData(oldp+391,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+392,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+393,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+394,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+395,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__BranchEnc__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+396,(vlSelfRef.top__DOT__u3__DOT__ALUIn1),32);
        bufp->chgIData(oldp+397,(vlSelfRef.top__DOT__u3__DOT__ALUIn2),32);
        bufp->chgIData(oldp+398,(vlSelfRef.top__DOT__u3__DOT__M_rdatatoReg),32);
        bufp->chgIData(oldp+399,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2),32);
        bufp->chgIData(oldp+400,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBADDERIn2),32);
        bufp->chgIData(oldp+401,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDSUBResult),32);
        bufp->chgIData(oldp+402,((~ vlSelfRef.top__DOT__u3__DOT__ALUIn2)),32);
        bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out),32);
        bufp->chgBit(oldp+404,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDEROverflow));
        bufp->chgIData(oldp+405,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SHIFTResult),32);
        bufp->chgIData(oldp+406,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LOGICResult),32);
        bufp->chgQData(oldp+407,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+409,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+411,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+412,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+413,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ADDERIn2MUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+414,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT____Vcellout__COMPResultMUX__out));
        bufp->chgIData(oldp+415,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut),32);
        bufp->chgCData(oldp+416,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[7]),4);
        bufp->chgCData(oldp+417,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[6]),4);
        bufp->chgCData(oldp+418,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[5]),4);
        bufp->chgCData(oldp+419,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[4]),4);
        bufp->chgCData(oldp+420,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+421,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+422,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+423,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgBit(oldp+424,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[7]));
        bufp->chgBit(oldp+425,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[6]));
        bufp->chgBit(oldp+426,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+427,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+428,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+429,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+430,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+431,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+432,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+433,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__COMPResultMUX__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+434,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut),105);
        bufp->chgQData(oldp+438,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+440,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+442,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgIData(oldp+444,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+445,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+446,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+447,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+448,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__LogicModule__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+449,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut),132);
        bufp->chgQData(oldp+454,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[3]),33);
        bufp->chgQData(oldp+456,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[2]),33);
        bufp->chgQData(oldp+458,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+460,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+462,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+464,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+465,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+466,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+467,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ResultMux__DOT__i0__DOT__hit));
        __Vtemp_7[0U] = (~ vlSelfRef.top__DOT__u3__DOT__ALUIn2);
        __Vtemp_7[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn2)) 
                                         << 1U)));
        __Vtemp_7[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u3__DOT__ALUIn2)) 
                                          << 1U)) >> 0x00000020U));
        bufp->chgWData(oldp+468,(__Vtemp_7),66);
        bufp->chgQData(oldp+471,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgQData(oldp+473,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgIData(oldp+475,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+476,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+477,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__SUBMux__DOT__i0__DOT__lut_out),32);
        bufp->chgCData(oldp+478,((0x0000001fU & vlSelfRef.top__DOT__u3__DOT__ALUIn2)),5);
        bufp->chgBit(oldp+479,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit));
        bufp->chgIData(oldp+480,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl1),32);
        bufp->chgIData(oldp+481,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl2),32);
        bufp->chgIData(oldp+482,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl3),32);
        bufp->chgIData(oldp+483,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__lvl4),32);
        bufp->chgBit(oldp+484,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__shift_fillbit));
        bufp->chgCData(oldp+485,((2U | (vlSelfRef.top__DOT__u3__DOT__ALUIn1 
                                        >> 0x0000001fU))),4);
        bufp->chgCData(oldp+486,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+487,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+488,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+489,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+490,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgCData(oldp+491,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+492,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+497,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+499,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+501,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+503,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+505,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+506,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+507,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+508,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+509,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+510,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+511,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+512,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+517,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+519,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+521,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+523,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+525,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+526,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+527,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+528,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+529,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+530,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+531,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+532,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+537,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+539,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+541,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+543,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+545,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+546,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+547,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+548,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+549,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+550,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+551,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+552,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+557,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+559,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+561,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+563,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+565,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+566,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+567,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+568,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+569,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+570,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u4__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+571,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+572,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+577,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+579,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+581,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+583,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+585,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+586,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+587,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+588,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+589,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+590,(vlSelfRef.top__DOT__u3__DOT__ALU__DOT__ShiftModule__DOT__u5__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+591,(vlSelfRef.top__DOT__u3__DOT__ALUIn1MUX__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+592,(vlSelfRef.top__DOT__u3__DOT__ALUIn2MUX__DOT__i0__DOT__lut_out),32);
        bufp->chgIData(oldp+593,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+594,(vlSelfRef.top__DOT__u3__DOT__BranchMUX__DOT__i0__DOT__hit));
        __Vtemp_8[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32;
        __Vtemp_8[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)) 
                                         << 3U)));
        __Vtemp_8[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31)) 
                                          << 3U)) >> 0x00000020U));
        bufp->chgWData(oldp+595,(__Vtemp_8),70);
        bufp->chgQData(oldp+598,(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+600,(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgIData(oldp+602,(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+603,(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+604,(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+605,(vlSelfRef.top__DOT__u3__DOT__M_rdataMUX__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+606,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut),136);
        bufp->chgIData(oldp+611,(vlSelfRef.top__DOT__u3__DOT__RegInMUX__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+612,(vlSelfRef.top__DOT__u0__DOT__rf[15]),32);
        bufp->chgIData(oldp+613,(vlSelfRef.top__DOT__u0__DOT__rf[14]),32);
        bufp->chgIData(oldp+614,(vlSelfRef.top__DOT__u0__DOT__rf[13]),32);
        bufp->chgIData(oldp+615,(vlSelfRef.top__DOT__u0__DOT__rf[12]),32);
        bufp->chgIData(oldp+616,(vlSelfRef.top__DOT__u0__DOT__rf[11]),32);
        bufp->chgIData(oldp+617,(vlSelfRef.top__DOT__u0__DOT__rf[10]),32);
        bufp->chgIData(oldp+618,(vlSelfRef.top__DOT__u0__DOT__rf[9]),32);
        bufp->chgIData(oldp+619,(vlSelfRef.top__DOT__u0__DOT__rf[8]),32);
        bufp->chgIData(oldp+620,(vlSelfRef.top__DOT__u0__DOT__rf[7]),32);
        bufp->chgIData(oldp+621,(vlSelfRef.top__DOT__u0__DOT__rf[6]),32);
        bufp->chgIData(oldp+622,(vlSelfRef.top__DOT__u0__DOT__rf[5]),32);
        bufp->chgIData(oldp+623,(vlSelfRef.top__DOT__u0__DOT__rf[4]),32);
        bufp->chgIData(oldp+624,(vlSelfRef.top__DOT__u0__DOT__rf[3]),32);
        bufp->chgIData(oldp+625,(vlSelfRef.top__DOT__u0__DOT__rf[2]),32);
        bufp->chgIData(oldp+626,(vlSelfRef.top__DOT__u0__DOT__rf[1]),32);
        bufp->chgIData(oldp+627,(vlSelfRef.top__DOT__u0__DOT__rf[0]),32);
    }
    bufp->chgBit(oldp+628,(vlSelfRef.clk));
    bufp->chgBit(oldp+629,(vlSelfRef.rst_pc));
    bufp->chgBit(oldp+630,(vlSelfRef.wen_pc));
    bufp->chgIData(oldp+631,(vlSelfRef.d_init_pc),32);
    bufp->chgIData(oldp+632,(vlSelfRef.top__DOT__pc),32);
    bufp->chgIData(oldp+633,(vlSelfRef.top__DOT__u0__DOT__rf
                             [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]),32);
    bufp->chgIData(oldp+634,(vlSelfRef.top__DOT__u0__DOT__rf
                             [(0x0000000fU & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))]),32);
    __Vtemp_9[0U] = vlSelfRef.top__DOT__pc;
    __Vtemp_9[1U] = (IData)((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                     [
                                                     (0x0000000fU 
                                                      & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))])) 
                                     << 1U)));
    __Vtemp_9[2U] = (IData)(((1ULL | ((QData)((IData)(vlSelfRef.top__DOT__u0__DOT__rf
                                                      [
                                                      (0x0000000fU 
                                                       & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))])) 
                                      << 1U)) >> 0x00000020U));
    bufp->chgWData(oldp+635,(__Vtemp_9),66);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____6(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____7(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 7>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____7\n"); );
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

void Vtop___024root__trace_chg_dtype____8(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 7>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____8\n"); );
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

void Vtop___024root__trace_chg_dtype____9(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 7>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____9\n"); );
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

void Vtop___024root__trace_chg_dtype____10(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[3]),9);
    bufp->chgSData(oldp+1,(__VdtypeVar[2]),9);
    bufp->chgSData(oldp+2,(__VdtypeVar[1]),9);
    bufp->chgSData(oldp+3,(__VdtypeVar[0]),9);
}

void Vtop___024root__trace_chg_dtype____11(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),7);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),7);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),7);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),7);
}

void Vtop___024root__trace_chg_dtype____12(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____13(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*24:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),25);
}

void Vtop___024root__trace_chg_dtype____14(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____15(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*6:0*/, 9>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____15\n"); );
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

void Vtop___024root__trace_chg_dtype____16(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____16\n"); );
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

void Vtop___024root__trace_chg_dtype____17(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),3);
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

void Vtop___024root__trace_chg_dtype____19(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[1]));
    bufp->chgBit(oldp+1,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____20(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____21(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[2]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[0]));
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

void Vtop___024root__trace_chg_dtype____23(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____24(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____25(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____26(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),4);
}

void Vtop___024root__trace_chg_dtype____27(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____28(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[2]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____29(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____30(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 2>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____30\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____31(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),4);
}

void Vtop___024root__trace_chg_dtype____32(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____33(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____33\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____34(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*33:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[2]),34);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),34);
    bufp->chgQData(oldp+4,(__VdtypeVar[0]),34);
}

void Vtop___024root__trace_chg_dtype____35(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____35\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[0]),32);
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

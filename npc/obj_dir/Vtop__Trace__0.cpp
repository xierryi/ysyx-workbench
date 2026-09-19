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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*12:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 1>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____6(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____7(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____8(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____9(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____10(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 5>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____11(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____12(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____13(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____14(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____15(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____16(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____17(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____18(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 2>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____19(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____20(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____21(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____22(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____23(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____24(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____25(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____26(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____27(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 22>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____28(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____29(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*33:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____30(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar);
void Vtop___024root__trace_chg_dtype____31(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 3>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 0, vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____1(vlSelf, bufp, 1, vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____2(vlSelf, bufp, 2, vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____3(vlSelf, bufp, 3, vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____4(vlSelf, bufp, 8, vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____5(vlSelf, bufp, 13, vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____6(vlSelf, bufp, 18, vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____7(vlSelf, bufp, 23, vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____8(vlSelf, bufp, 28, vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____9(vlSelf, bufp, 33, vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____10(vlSelf, bufp, 38, vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____11(vlSelf, bufp, 43, vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____12(vlSelf, bufp, 46, vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____13(vlSelf, bufp, 49, vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____14(vlSelf, bufp, 52, vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____14(vlSelf, bufp, 55, vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____15(vlSelf, bufp, 58, vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____16(vlSelf, bufp, 61, vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____17(vlSelf, bufp, 64, vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____18(vlSelf, bufp, 67, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 69, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 73, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 77, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 81, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____19(vlSelf, bufp, 85, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____20(vlSelf, bufp, 89, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____21(vlSelf, bufp, 95, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____22(vlSelf, bufp, 101, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____23(vlSelf, bufp, 107, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____24(vlSelf, bufp, 113, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____25(vlSelf, bufp, 119, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____26(vlSelf, bufp, 125, vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____27(vlSelf, bufp, 131, vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____28(vlSelf, bufp, 153, vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____29(vlSelf, bufp, 161, vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____30(vlSelf, bufp, 167, vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 170, vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__data_list);
        Vtop___024root__trace_chg_dtype____29(vlSelf, bufp, 173, vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__pair_list);
        Vtop___024root__trace_chg_dtype____30(vlSelf, bufp, 179, vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__key_list);
        Vtop___024root__trace_chg_dtype____31(vlSelf, bufp, 182, vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__data_list);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgIData(oldp+185,(vlSelfRef.top__DOT__inst),32);
        bufp->chgCData(oldp+186,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))),4);
        bufp->chgBit(oldp+187,(((5U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
                                | ((0U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
                                   | ((1U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
                                      | (3U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)))))));
        bufp->chgCData(oldp+188,((0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))),4);
        bufp->chgCData(oldp+189,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))),4);
        bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__M_ren));
        bufp->chgBit(oldp+191,(vlSelfRef.top__DOT__M_wen));
        bufp->chgCData(oldp+192,(vlSelfRef.top__DOT__M_wlen),2);
        bufp->chgCData(oldp+193,(vlSelfRef.top__DOT__M_rlen),2);
        bufp->chgCData(oldp+194,(vlSelfRef.top__DOT__op_encoded),8);
        bufp->chgIData(oldp+195,(vlSelfRef.top__DOT__imm),32);
        bufp->chgCData(oldp+196,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+197,(vlSelfRef.top__DOT__u2__DOT__op_type),3);
        bufp->chgCData(oldp+198,(vlSelfRef.top__DOT__u2__DOT__rs1),5);
        bufp->chgCData(oldp+199,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+200,((vlSelfRef.top__DOT__inst 
                                  >> 0x00000019U)),7);
        bufp->chgCData(oldp+201,((7U & (vlSelfRef.top__DOT__inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+202,((0x0000007fU & vlSelfRef.top__DOT__inst)),7);
        bufp->chgWData(oldp+203,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut),342);
        bufp->chgCData(oldp+214,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__u2__DOT__u0__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+216,(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+217,(vlSelfRef.top__DOT__u2__DOT__u1__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+218,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgCData(oldp+219,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+220,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+221,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut),175);
        bufp->chgQData(oldp+227,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+229,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+231,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+233,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+235,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgIData(oldp+237,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__u2__DOT__u2__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+244,(vlSelfRef.top__DOT__M_ren));
        bufp->chgBit(oldp+245,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+246,(vlSelfRef.top__DOT__u3__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+247,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+248,(vlSelfRef.top__DOT__u3__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+249,(vlSelfRef.top__DOT__M_wen));
        bufp->chgBit(oldp+250,(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+251,(vlSelfRef.top__DOT__u3__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+252,(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+253,(vlSelfRef.top__DOT__u3__DOT__u6__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+254,((0x0000001fU & vlSelfRef.top__DOT__imm)),5);
        bufp->chgBit(oldp+255,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_en));
        bufp->chgCData(oldp+256,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode),2);
        bufp->chgBit(oldp+257,((1U & (IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode))));
        bufp->chgBit(oldp+258,((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                                      >> 1U))));
        bufp->chgBit(oldp+259,((1U & ((IData)(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_mode) 
                                      >> 1U))));
        bufp->chgBit(oldp+260,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+261,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift_en));
        bufp->chgBit(oldp+262,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+263,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+264,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+265,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+266,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+267,(vlSelfRef.top__DOT__u5__DOT__rlen_num),32);
        bufp->chgIData(oldp+268,(vlSelfRef.top__DOT__u5__DOT__wlen_num),32);
        bufp->chgIData(oldp+269,(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__u5__DOT__u0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+271,(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+272,(vlSelfRef.top__DOT__u5__DOT__u1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[3U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgCData(oldp+273,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[5]),5);
        bufp->chgCData(oldp+274,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[4]),5);
        bufp->chgCData(oldp+275,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[3]),5);
        bufp->chgCData(oldp+276,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[2]),5);
        bufp->chgCData(oldp+277,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+278,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__data_list[0]),5);
        bufp->chgIData(oldp+279,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[21]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[20]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[19]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[18]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[17]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[16]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+290,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+291,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+292,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+293,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__data_list[0]),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgIData(oldp+309,((vlSelfRef.top__DOT__u3__DOT__dst_shift 
                                  | vlSelfRef.top__DOT__u3__DOT__dst_common)),32);
        bufp->chgIData(oldp+310,(vlSelfRef.top__DOT__M_waddr),32);
        bufp->chgIData(oldp+311,(vlSelfRef.top__DOT__M_wdata),32);
        bufp->chgIData(oldp+312,(vlSelfRef.top__DOT__M_rdata),32);
        bufp->chgIData(oldp+313,(vlSelfRef.top__DOT__M_raddr),32);
        bufp->chgIData(oldp+314,(vlSelfRef.top__DOT__dnpc),32);
        bufp->chgIData(oldp+315,(vlSelfRef.top__DOT__u3__DOT__dst_shift),32);
        bufp->chgIData(oldp+316,(vlSelfRef.top__DOT__u3__DOT__dst_common),32);
        bufp->chgWData(oldp+317,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut),200);
        bufp->chgQData(oldp+324,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+326,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+328,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+330,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+332,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgIData(oldp+334,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+338,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+339,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+340,(vlSelfRef.top__DOT__u3__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+341,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut),120);
        bufp->chgQData(oldp+345,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+347,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+349,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgIData(oldp+351,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+352,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+353,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+354,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+355,(vlSelfRef.top__DOT__u3__DOT__u4__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+356,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut),120);
        bufp->chgQData(oldp+360,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+362,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+364,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgIData(oldp+366,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+367,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+368,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+369,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+370,(vlSelfRef.top__DOT__u3__DOT__u5__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+371,(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2),5);
        bufp->chgIData(oldp+372,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__load),32);
        bufp->chgCData(oldp+373,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__shift),5);
        bufp->chgBit(oldp+374,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit));
        bufp->chgIData(oldp+375,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl1),32);
        bufp->chgIData(oldp+376,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl2),32);
        bufp->chgIData(oldp+377,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl3),32);
        bufp->chgIData(oldp+378,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__lvl4),32);
        bufp->chgBit(oldp+379,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__shift_fillbit));
        bufp->chgCData(oldp+380,((2U | (vlSelfRef.top__DOT__u3__DOT__u7__DOT__load 
                                        >> 0x0000001fU))),4);
        bufp->chgCData(oldp+381,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgCData(oldp+382,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgBit(oldp+383,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+384,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+385,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u0__DOT__i0__DOT__lut_out));
        bufp->chgCData(oldp+386,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+387,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+392,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+394,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+396,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+398,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+400,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+401,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+402,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+404,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+405,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+406,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+407,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+412,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+414,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+416,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+418,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+420,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+421,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+422,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+423,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+424,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+425,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u2__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+426,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+427,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+432,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+434,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+436,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+438,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+440,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+441,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+442,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+443,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+444,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+445,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+446,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+447,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+452,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+454,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+456,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+458,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+460,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+461,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+462,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+464,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+465,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u4__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+466,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__key),2);
        bufp->chgWData(oldp+467,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut),136);
        bufp->chgQData(oldp+472,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgQData(oldp+474,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+476,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+478,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgIData(oldp+480,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+481,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+482,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+483,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+484,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+485,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u0__DOT__u5__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+486,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut),78);
        bufp->chgSData(oldp+489,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[5]),13);
        bufp->chgSData(oldp+490,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[4]),13);
        bufp->chgSData(oldp+491,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[3]),13);
        bufp->chgSData(oldp+492,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[2]),13);
        bufp->chgSData(oldp+493,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[1]),13);
        bufp->chgSData(oldp+494,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__pair_list[0]),13);
        bufp->chgCData(oldp+495,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+496,(vlSelfRef.top__DOT__u3__DOT__u7__DOT__u3__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+497,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut),880);
        bufp->chgQData(oldp+525,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[21]),40);
        bufp->chgQData(oldp+527,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[20]),40);
        bufp->chgQData(oldp+529,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[19]),40);
        bufp->chgQData(oldp+531,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[18]),40);
        bufp->chgQData(oldp+533,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[17]),40);
        bufp->chgQData(oldp+535,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[16]),40);
        bufp->chgQData(oldp+537,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[15]),40);
        bufp->chgQData(oldp+539,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[14]),40);
        bufp->chgQData(oldp+541,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[13]),40);
        bufp->chgQData(oldp+543,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[12]),40);
        bufp->chgQData(oldp+545,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[11]),40);
        bufp->chgQData(oldp+547,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[10]),40);
        bufp->chgQData(oldp+549,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[9]),40);
        bufp->chgQData(oldp+551,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[8]),40);
        bufp->chgQData(oldp+553,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[7]),40);
        bufp->chgQData(oldp+555,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgQData(oldp+557,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+559,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+561,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+563,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+565,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+567,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgIData(oldp+569,(vlSelfRef.top__DOT__u3__DOT__u8__DOT__i0__DOT__lut_out),32);
        bufp->chgWData(oldp+570,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut),320);
        bufp->chgQData(oldp+580,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[7]),40);
        bufp->chgQData(oldp+582,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[6]),40);
        bufp->chgQData(oldp+584,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[5]),40);
        bufp->chgQData(oldp+586,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgQData(oldp+588,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+590,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+592,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+594,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgIData(oldp+596,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+597,(vlSelfRef.top__DOT__u3__DOT__u9__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+598,(vlSelfRef.top__DOT__u0__DOT__rf[15]),32);
        bufp->chgIData(oldp+599,(vlSelfRef.top__DOT__u0__DOT__rf[14]),32);
        bufp->chgIData(oldp+600,(vlSelfRef.top__DOT__u0__DOT__rf[13]),32);
        bufp->chgIData(oldp+601,(vlSelfRef.top__DOT__u0__DOT__rf[12]),32);
        bufp->chgIData(oldp+602,(vlSelfRef.top__DOT__u0__DOT__rf[11]),32);
        bufp->chgIData(oldp+603,(vlSelfRef.top__DOT__u0__DOT__rf[10]),32);
        bufp->chgIData(oldp+604,(vlSelfRef.top__DOT__u0__DOT__rf[9]),32);
        bufp->chgIData(oldp+605,(vlSelfRef.top__DOT__u0__DOT__rf[8]),32);
        bufp->chgIData(oldp+606,(vlSelfRef.top__DOT__u0__DOT__rf[7]),32);
        bufp->chgIData(oldp+607,(vlSelfRef.top__DOT__u0__DOT__rf[6]),32);
        bufp->chgIData(oldp+608,(vlSelfRef.top__DOT__u0__DOT__rf[5]),32);
        bufp->chgIData(oldp+609,(vlSelfRef.top__DOT__u0__DOT__rf[4]),32);
        bufp->chgIData(oldp+610,(vlSelfRef.top__DOT__u0__DOT__rf[3]),32);
        bufp->chgIData(oldp+611,(vlSelfRef.top__DOT__u0__DOT__rf[2]),32);
        bufp->chgIData(oldp+612,(vlSelfRef.top__DOT__u0__DOT__rf[1]),32);
        bufp->chgIData(oldp+613,(vlSelfRef.top__DOT__u0__DOT__rf[0]),32);
    }
    bufp->chgBit(oldp+614,(vlSelfRef.clk));
    bufp->chgBit(oldp+615,(vlSelfRef.rst_pc));
    bufp->chgBit(oldp+616,(vlSelfRef.wen_pc));
    bufp->chgIData(oldp+617,(vlSelfRef.d_init_pc),32);
    bufp->chgIData(oldp+618,(vlSelfRef.top__DOT__pc),32);
    bufp->chgIData(oldp+619,(vlSelfRef.top__DOT__u0__DOT__rf
                             [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]),32);
    bufp->chgIData(oldp+620,(vlSelfRef.top__DOT__u0__DOT__rf
                             [(0x0000000fU & (vlSelfRef.top__DOT__inst 
                                              >> 0x00000014U))]),32);
    bufp->chgIData(oldp+621,(((IData)(4U) + vlSelfRef.top__DOT__pc)),32);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*12:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),13);
}

void Vtop___024root__trace_chg_dtype____1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 1>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),5);
}

void Vtop___024root__trace_chg_dtype____3(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*2:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[4]),3);
    bufp->chgCData(oldp+1,(__VdtypeVar[3]),3);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),3);
    bufp->chgCData(oldp+3,(__VdtypeVar[1]),3);
    bufp->chgCData(oldp+4,(__VdtypeVar[0]),3);
}

void Vtop___024root__trace_chg_dtype____4(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[4]),9);
    bufp->chgSData(oldp+1,(__VdtypeVar[3]),9);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),9);
    bufp->chgSData(oldp+3,(__VdtypeVar[1]),9);
    bufp->chgSData(oldp+4,(__VdtypeVar[0]),9);
}

void Vtop___024root__trace_chg_dtype____5(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____6(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[4]));
    bufp->chgBit(oldp+1,(__VdtypeVar[3]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[1]));
    bufp->chgBit(oldp+4,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____7(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____8(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[4]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[3]),10);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),10);
    bufp->chgSData(oldp+3,(__VdtypeVar[1]),10);
    bufp->chgSData(oldp+4,(__VdtypeVar[0]),10);
}

void Vtop___024root__trace_chg_dtype____9(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____10(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 5>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[4]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+4,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____11(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[2]),9);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),9);
    bufp->chgSData(oldp+2,(__VdtypeVar[0]),9);
}

void Vtop___024root__trace_chg_dtype____12(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____13(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[2]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____14(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____15(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[2]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),10);
    bufp->chgSData(oldp+2,(__VdtypeVar[0]),10);
}

void Vtop___024root__trace_chg_dtype____16(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____17(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[0]),2);
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

void Vtop___024root__trace_chg_dtype____19(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____20(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*8:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[5]),9);
    bufp->chgSData(oldp+1,(__VdtypeVar[4]),9);
    bufp->chgSData(oldp+2,(__VdtypeVar[3]),9);
    bufp->chgSData(oldp+3,(__VdtypeVar[2]),9);
    bufp->chgSData(oldp+4,(__VdtypeVar[1]),9);
    bufp->chgSData(oldp+5,(__VdtypeVar[0]),9);
}

void Vtop___024root__trace_chg_dtype____21(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____22(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____22\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[5]));
    bufp->chgBit(oldp+1,(__VdtypeVar[4]));
    bufp->chgBit(oldp+2,(__VdtypeVar[3]));
    bufp->chgBit(oldp+3,(__VdtypeVar[2]));
    bufp->chgBit(oldp+4,(__VdtypeVar[1]));
    bufp->chgBit(oldp+5,(__VdtypeVar[0]));
}

void Vtop___024root__trace_chg_dtype____23(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*9:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[5]),10);
    bufp->chgSData(oldp+1,(__VdtypeVar[4]),10);
    bufp->chgSData(oldp+2,(__VdtypeVar[3]),10);
    bufp->chgSData(oldp+3,(__VdtypeVar[2]),10);
    bufp->chgSData(oldp+4,(__VdtypeVar[1]),10);
    bufp->chgSData(oldp+5,(__VdtypeVar[0]),10);
}

void Vtop___024root__trace_chg_dtype____24(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____25(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____25\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[5]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[4]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+4,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+5,(__VdtypeVar[0]),2);
}

void Vtop___024root__trace_chg_dtype____26(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____26\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____27(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 22>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____27\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[21]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[20]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[19]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[18]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[17]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[16]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[15]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+16,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+17,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+18,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+19,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+20,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+21,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____28(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_chg_dtype____29(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<QData/*33:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____29\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgQData(oldp+0,(__VdtypeVar[2]),34);
    bufp->chgQData(oldp+2,(__VdtypeVar[1]),34);
    bufp->chgQData(oldp+4,(__VdtypeVar[0]),34);
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

void Vtop___024root__trace_chg_dtype____31(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 3>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____31\n"); );
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

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

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__inst),32);
        bufp->chgCData(oldp+1,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                               >> 7U))),4);
        bufp->chgBit(oldp+2,(((1U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
                              | ((4U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type)) 
                                 | (0U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_type))))));
        bufp->chgCData(oldp+3,((0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))),4);
        bufp->chgCData(oldp+4,((0x0000000fU & (vlSelfRef.top__DOT__inst 
                                               >> 0x00000014U))),4);
        bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__u0__DOT__rf
                               [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.top__DOT__u0__DOT__rf
                               [(0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000014U))]),32);
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__u3__DOT__M_ren));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__u3__DOT__M_wen));
        bufp->chgIData(oldp+9,(vlSelfRef.top__DOT__u3__DOT__M_waddr),32);
        bufp->chgCData(oldp+10,((3U & (- (IData)((5U 
                                                  == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))),2);
        bufp->chgIData(oldp+11,((vlSelfRef.top__DOT__u0__DOT__rf
                                 [(0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                  >> 0x00000014U))] 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_wen))))),32);
        bufp->chgCData(oldp+12,(((0x0fU & (- (IData)(
                                                     (5U 
                                                      == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                 | ((- (IData)((6U 
                                                == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))) 
                                    & ((1U & (- (IData)(
                                                        (0U 
                                                         == 
                                                         (3U 
                                                          & vlSelfRef.top__DOT__u3__DOT__M_waddr))))) 
                                       | ((2U & (- (IData)(
                                                           (1U 
                                                            == 
                                                            (3U 
                                                             & vlSelfRef.top__DOT__u3__DOT__M_waddr))))) 
                                          | ((4U & 
                                              (- (IData)(
                                                         (2U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.top__DOT__u3__DOT__M_waddr))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (3U 
                                                               & vlSelfRef.top__DOT__u3__DOT__M_waddr))))))))))),8);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__M_rdata),32);
        bufp->chgIData(oldp+14,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u3__DOT__M_ren))))),32);
        bufp->chgCData(oldp+15,((3U & (- (IData)((3U 
                                                  == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))),2);
        bufp->chgCData(oldp+16,(vlSelfRef.top__DOT__u2__DOT__op_encoded),4);
        bufp->chgIData(oldp+17,(vlSelfRef.top__DOT__u2__DOT__operand3),32);
        bufp->chgCData(oldp+18,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                >> 7U))),5);
        bufp->chgIData(oldp+19,(vlSelfRef.top__DOT__u0__DOT__rf[15]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__u0__DOT__rf[14]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__u0__DOT__rf[13]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__u0__DOT__rf[12]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__u0__DOT__rf[11]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__u0__DOT__rf[10]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__u0__DOT__rf[9]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.top__DOT__u0__DOT__rf[8]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__u0__DOT__rf[7]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__u0__DOT__rf[6]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__u0__DOT__rf[5]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__u0__DOT__rf[4]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__u0__DOT__rf[3]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__u0__DOT__rf[2]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.top__DOT__u0__DOT__rf[1]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.top__DOT__u0__DOT__rf[0]),32);
        bufp->chgCData(oldp+35,(vlSelfRef.top__DOT__u2__DOT__op_type),3);
        bufp->chgCData(oldp+36,(vlSelfRef.top__DOT__u2__DOT__rs1),5);
        bufp->chgCData(oldp+37,((0x0000001fU & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000014U))),5);
        bufp->chgBit(oldp+38,((0U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+39,((1U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+40,((2U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+41,((3U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+42,((4U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+43,((5U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+44,((6U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+45,((7U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgBit(oldp+46,((8U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))));
        bufp->chgIData(oldp+47,(((1U & (- (IData)((0U 
                                                   == 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (3U 
                                                                  == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))))))) 
                                 | ((2U & (- (IData)(
                                                     (1U 
                                                      == 
                                                      (3U 
                                                       & (- (IData)(
                                                                    (3U 
                                                                     == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))))))) 
                                    | (4U & (- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (- (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))))))))),32);
        bufp->chgIData(oldp+48,(((1U & (- (IData)((0U 
                                                   == 
                                                   (3U 
                                                    & (- (IData)(
                                                                 (5U 
                                                                  == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))))))) 
                                 | ((2U & (- (IData)(
                                                     (1U 
                                                      == 
                                                      (3U 
                                                       & (- (IData)(
                                                                    (5U 
                                                                     == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))))))) 
                                    | (4U & (- (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (- (IData)(
                                                                      (5U 
                                                                       == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))))))))),32);
    }
    bufp->chgBit(oldp+49,(vlSelfRef.clk));
    bufp->chgBit(oldp+50,(vlSelfRef.rst_pc));
    bufp->chgBit(oldp+51,(vlSelfRef.wen_pc));
    bufp->chgIData(oldp+52,(vlSelfRef.d_init_pc),32);
    bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__pc),32);
    bufp->chgIData(oldp+54,((((vlSelfRef.top__DOT__u0__DOT__rf
                               [(0x0000000fU & (IData)(vlSelfRef.top__DOT__u2__DOT__rs1))] 
                               + vlSelfRef.top__DOT__u0__DOT__rf
                               [(0x0000000fU & (vlSelfRef.top__DOT__inst 
                                                >> 0x00000014U))]) 
                              & (- (IData)((0U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((1U == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                | ((((IData)(4U) + vlSelfRef.top__DOT__pc) 
                                    & (- (IData)((7U 
                                                  == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded))))) 
                                   | ((vlSelfRef.top__DOT__M_rdata 
                                       & ((- (IData)(
                                                     (3U 
                                                      == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))) 
                                          | (- (IData)(
                                                       (4U 
                                                        == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))))) 
                                      | ((- (IData)(
                                                    (2U 
                                                     == (IData)(vlSelfRef.top__DOT__u2__DOT__op_encoded)))) 
                                         & vlSelfRef.top__DOT__u2__DOT__operand3)))))),32);
    bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__u2__DOT__dnpc),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

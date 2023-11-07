// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_top__Syms.h"


VL_ATTR_COLD void Vf1_top___024root__trace_init_sub__TOP__0(Vf1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBus(c+13,"N", false,-1, 4,0);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("f1_top ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBus(c+13,"N", false,-1, 4,0);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBus(c+16,"K", false,-1, 6,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBit(c+3,"tick_to_mux", false,-1);
    tracep->declBit(c+4,"time_out_to_mux", false,-1);
    tracep->declBit(c+5,"mux_output", false,-1);
    tracep->pushNamePrefix("myDelay ");
    tracep->declBus(c+18,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+2,"trigger", false,-1);
    tracep->declBus(c+16,"n", false,-1, 6,0);
    tracep->declBit(c+4,"time_out", false,-1);
    tracep->declBus(c+6,"count", false,-1, 6,0);
    tracep->declBus(c+7,"current_state", false,-1, 31,0);
    tracep->declBus(c+8,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myStateMachine ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+5,"en", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+14,"trigger", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBit(c+19,"flag", false,-1);
    tracep->declBus(c+9,"current_state", false,-1, 31,0);
    tracep->declBus(c+17,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_divider ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+13,"N", false,-1, 4,0);
    tracep->declBit(c+3,"tick", false,-1);
    tracep->declBus(c+10,"count", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_rnggenerator ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBit(c+21,"en", false,-1);
    tracep->declBus(c+16,"data_out", false,-1, 7,1);
    tracep->declBus(c+16,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_top___024root__trace_init_top(Vf1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root__trace_init_top\n"); );
    // Body
    Vf1_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_top___024root__trace_register(Vf1_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_top___024root__trace_full_sub_0(Vf1_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root__trace_full_top_0\n"); );
    // Init
    Vf1_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_top___024root*>(voidSelf);
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_top___024root__trace_full_sub_0(Vf1_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((8U != vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)));
    bufp->fullBit(oldp+2,(vlSelf->f1_top__DOT__cmd_delay));
    bufp->fullBit(oldp+3,(vlSelf->f1_top__DOT__tick_to_mux));
    bufp->fullBit(oldp+4,(((0U != vlSelf->f1_top__DOT__myDelay__DOT__current_state) 
                           & ((1U != vlSelf->f1_top__DOT__myDelay__DOT__current_state) 
                              & (2U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)))));
    bufp->fullBit(oldp+5,(vlSelf->f1_top__DOT__mux_output));
    bufp->fullCData(oldp+6,(vlSelf->f1_top__DOT__myDelay__DOT__count),7);
    bufp->fullIData(oldp+7,(vlSelf->f1_top__DOT__myDelay__DOT__current_state),32);
    bufp->fullIData(oldp+8,(((0U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                              ? ((IData)(vlSelf->f1_top__DOT__cmd_delay)
                                  ? 1U : vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                              : ((1U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->f1_top__DOT__myDelay__DOT__count))
                                      ? 2U : vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                                  : ((2U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                                      ? ((IData)(vlSelf->f1_top__DOT__cmd_delay)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                                          ? ((IData)(vlSelf->f1_top__DOT__cmd_delay)
                                              ? vlSelf->f1_top__DOT__myDelay__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
    bufp->fullIData(oldp+9,(vlSelf->f1_top__DOT__myStateMachine__DOT__current_state),32);
    bufp->fullCData(oldp+10,(vlSelf->f1_top__DOT__my_divider__DOT__count),5);
    bufp->fullBit(oldp+11,(vlSelf->clk));
    bufp->fullBit(oldp+12,(vlSelf->rst));
    bufp->fullCData(oldp+13,(vlSelf->N),5);
    bufp->fullBit(oldp+14,(vlSelf->trigger));
    bufp->fullCData(oldp+15,(vlSelf->data_out),8);
    bufp->fullCData(oldp+16,(vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg),7);
    bufp->fullIData(oldp+17,(vlSelf->f1_top__DOT__myStateMachine__DOT__next_state),32);
    bufp->fullIData(oldp+18,(7U),32);
    bufp->fullBit(oldp+19,(vlSelf->f1_top__DOT__myStateMachine__DOT__flag));
    bufp->fullIData(oldp+20,(5U),32);
    bufp->fullBit(oldp+21,(1U));
}

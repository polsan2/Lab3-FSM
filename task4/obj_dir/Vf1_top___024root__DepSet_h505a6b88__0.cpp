// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_top.h for the primary calling header

#include "verilated.h"

#include "Vf1_top__Syms.h"
#include "Vf1_top__Syms.h"
#include "Vf1_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__ico(Vf1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vf1_top___024root___eval_triggers__ico(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vf1_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__act(Vf1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vf1_top___024root___eval_triggers__act(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vf1_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

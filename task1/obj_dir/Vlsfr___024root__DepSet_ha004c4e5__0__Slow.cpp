// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlsfr.h for the primary calling header

#include "verilated.h"

#include "Vlsfr__Syms.h"
#include "Vlsfr___024root.h"

VL_ATTR_COLD void Vlsfr___024root___eval_static(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vlsfr___024root___eval_initial(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vlsfr___024root___eval_final(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vlsfr___024root___eval_triggers__stl(Vlsfr___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr___024root___dump_triggers__stl(Vlsfr___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vlsfr___024root___eval_stl(Vlsfr___024root* vlSelf);

VL_ATTR_COLD void Vlsfr___024root___eval_settle(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vlsfr___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vlsfr___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("lsfr.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vlsfr___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr___024root___dump_triggers__stl(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsfr___024root___stl_sequent__TOP__0(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->lsfr__DOT__sreg;
}

VL_ATTR_COLD void Vlsfr___024root___eval_stl(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vlsfr___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr___024root___dump_triggers__act(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlsfr___024root___dump_triggers__nba(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlsfr___024root___ctor_var_reset(Vlsfr___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlsfr___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(7);
    vlSelf->lsfr__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}

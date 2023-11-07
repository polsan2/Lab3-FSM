// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_basic_top.h for the primary calling header

#include "verilated.h"

#include "Vf1_basic_top__Syms.h"
#include "Vf1_basic_top___024root.h"

VL_ATTR_COLD void Vf1_basic_top___024root___eval_static(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vf1_basic_top___024root___eval_initial(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vf1_basic_top___024root___eval_final(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vf1_basic_top___024root___eval_triggers__stl(Vf1_basic_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_basic_top___024root___dump_triggers__stl(Vf1_basic_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vf1_basic_top___024root___eval_stl(Vf1_basic_top___024root* vlSelf);

VL_ATTR_COLD void Vf1_basic_top___024root___eval_settle(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vf1_basic_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vf1_basic_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("f1_basic_top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vf1_basic_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_basic_top___024root___dump_triggers__stl(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_basic_top___024root___stl_sequent__TOP__0(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state) 
               | (1U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) 
              | (2U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) 
             | (3U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) 
            | (4U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) 
           | (5U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) 
          | (6U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) 
         | (7U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state))) {
        if ((0U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 0U;
        if ((8U == vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state)) {
            vlSelf->data_out = 0xffU;
        }
    }
}

VL_ATTR_COLD void Vf1_basic_top___024root___eval_stl(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vf1_basic_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_basic_top___024root___dump_triggers__act(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_basic_top___024root___dump_triggers__nba(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_basic_top___024root___ctor_var_reset(Vf1_basic_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_basic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_basic_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_basic_top__DOT__wire1 = VL_RAND_RESET_I(1);
    vlSelf->f1_basic_top__DOT__my_divider__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__current_state = 0;
    vlSelf->f1_basic_top__DOT__my_f1_machine__DOT__next_state = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
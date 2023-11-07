// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_top.h for the primary calling header

#include "verilated.h"

#include "Vf1_top__Syms.h"
#include "Vf1_top___024root.h"

VL_ATTR_COLD void Vf1_top___024root___eval_static__TOP(Vf1_top___024root* vlSelf);

VL_ATTR_COLD void Vf1_top___024root___eval_static(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_static\n"); );
    // Body
    Vf1_top___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vf1_top___024root___eval_static__TOP(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->f1_top__DOT__myDelay__DOT__count = 0U;
}

VL_ATTR_COLD void Vf1_top___024root___eval_initial(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vf1_top___024root___eval_final(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vf1_top___024root___eval_triggers__stl(Vf1_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__stl(Vf1_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___eval_stl(Vf1_top___024root* vlSelf);

VL_ATTR_COLD void Vf1_top___024root___eval_settle(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vf1_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vf1_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("f1_top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vf1_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__stl(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_top___024root___stl_sequent__TOP__0(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->f1_top__DOT__myDelay__DOT__next_state = 
        ((0U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
          ? ((IData)(vlSelf->f1_top__DOT__cmd_delay)
              ? 1U : vlSelf->f1_top__DOT__myDelay__DOT__current_state)
          : ((1U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
              ? ((0U == (IData)(vlSelf->f1_top__DOT__myDelay__DOT__count))
                  ? 2U : vlSelf->f1_top__DOT__myDelay__DOT__current_state)
              : ((2U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                  ? ((IData)(vlSelf->f1_top__DOT__cmd_delay)
                      ? 3U : 0U) : ((3U == vlSelf->f1_top__DOT__myDelay__DOT__current_state)
                                     ? ((IData)(vlSelf->f1_top__DOT__cmd_delay)
                                         ? vlSelf->f1_top__DOT__myDelay__DOT__current_state
                                         : 0U) : 0U))));
    vlSelf->f1_top__DOT__mux_output = ((8U != vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                        ? (IData)(vlSelf->f1_top__DOT__tick_to_mux)
                                        : ((0U != vlSelf->f1_top__DOT__myDelay__DOT__current_state) 
                                           & ((1U != vlSelf->f1_top__DOT__myDelay__DOT__current_state) 
                                              & (2U 
                                                 == vlSelf->f1_top__DOT__myDelay__DOT__current_state))));
    if (((((((((0U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state) 
               | (1U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
              | (2U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
             | (3U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
            | (4U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
           | (5U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
          | (6U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
         | (7U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state))) {
        if ((0U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 0U;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 1U : 0U);
        } else if ((1U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 1U;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 2U : 1U);
        } else if ((2U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 3U;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 3U : 2U);
        } else if ((3U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 7U;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 4U : 3U);
        } else if ((4U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 0xfU;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 5U : 4U);
        } else if ((5U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 0x1fU;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 6U : 5U);
        } else if ((6U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            vlSelf->data_out = 0x3fU;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 7U : 6U);
        } else {
            vlSelf->data_out = 0x7fU;
            vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
                = ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 8U : 7U);
        }
    } else if ((8U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
        vlSelf->data_out = 0xffU;
        vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
            = ((IData)(vlSelf->f1_top__DOT__mux_output)
                ? 9U : 8U);
    } else {
        vlSelf->data_out = 0U;
        vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
            = ((9U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                ? ((IData)(vlSelf->trigger) ? 0U : 9U)
                : 0U);
    }
}

VL_ATTR_COLD void Vf1_top___024root___eval_stl(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vf1_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__ico(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__act(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__nba(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vf1_top___024root___ctor_var_reset(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(5);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->f1_top__DOT__cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->f1_top__DOT__tick_to_mux = VL_RAND_RESET_I(1);
    vlSelf->f1_top__DOT__mux_output = VL_RAND_RESET_I(1);
    vlSelf->f1_top__DOT__my_divider__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->f1_top__DOT__myDelay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->f1_top__DOT__myDelay__DOT__current_state = 0;
    vlSelf->f1_top__DOT__myDelay__DOT__next_state = 0;
    vlSelf->f1_top__DOT__myStateMachine__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->f1_top__DOT__myStateMachine__DOT__current_state = 0;
    vlSelf->f1_top__DOT__myStateMachine__DOT__next_state = 0;
    vlSelf->__Vdly__f1_top__DOT__my_rnggenerator__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

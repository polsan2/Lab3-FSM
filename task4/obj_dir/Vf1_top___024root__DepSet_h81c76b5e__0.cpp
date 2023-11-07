// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vf1_top.h for the primary calling header

#include "verilated.h"

#include "Vf1_top__Syms.h"
#include "Vf1_top___024root.h"

VL_INLINE_OPT void Vf1_top___024root___ico_sequent__TOP__0(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->f1_top__DOT__myStateMachine__DOT__next_state 
        = (((((((((0U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state) 
                  | (1U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
                 | (2U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
                | (3U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
               | (4U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
              | (5U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
             | (6U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) 
            | (7U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state))
            ? ((0U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 1U : 0U) : ((1U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                   ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                                       ? 2U : 1U) : 
                                  ((2U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                    ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                                        ? 3U : 2U) : 
                                   ((3U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                     ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                                         ? 4U : 3U)
                                     : ((4U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                         ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                                             ? 5U : 4U)
                                         : ((5U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                             ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                                                 ? 6U
                                                 : 5U)
                                             : ((6U 
                                                 == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                                 ? 
                                                ((IData)(vlSelf->f1_top__DOT__mux_output)
                                                  ? 7U
                                                  : 6U)
                                                 : 
                                                ((IData)(vlSelf->f1_top__DOT__mux_output)
                                                  ? 8U
                                                  : 7U))))))))
            : ((8U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                ? ((IData)(vlSelf->f1_top__DOT__mux_output)
                    ? 9U : 8U) : ((9U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)
                                   ? ((IData)(vlSelf->trigger)
                                       ? 0U : 9U) : 0U)));
}

void Vf1_top___024root___eval_ico(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vf1_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vf1_top___024root___eval_act(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vf1_top___024root___nba_sequent__TOP__0(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__f1_top__DOT__my_rnggenerator__DOT__sreg 
        = vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg;
    vlSelf->__Vdly__f1_top__DOT__my_rnggenerator__DOT__sreg 
        = ((IData)(vlSelf->rst) ? 1U : ((0x7eU & ((IData)(vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg) 
                                                  << 1U)) 
                                        | (1U & VL_REDXOR_8(
                                                            (0x44U 
                                                             & (IData)(vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg))))));
}

VL_INLINE_OPT void Vf1_top___024root___nba_sequent__TOP__1(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdly__f1_top__DOT__my_divider__DOT__count;
    __Vdly__f1_top__DOT__my_divider__DOT__count = 0;
    // Body
    __Vdly__f1_top__DOT__my_divider__DOT__count = vlSelf->f1_top__DOT__my_divider__DOT__count;
    vlSelf->f1_top__DOT__myDelay__DOT__count = (0x7fU 
                                                & ((((IData)(vlSelf->rst) 
                                                     | (IData)(vlSelf->f1_top__DOT__cmd_delay)) 
                                                    | (0U 
                                                       == (IData)(vlSelf->f1_top__DOT__myDelay__DOT__count)))
                                                    ? 
                                                   ((IData)(vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((IData)(vlSelf->f1_top__DOT__myDelay__DOT__count) 
                                                    - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->f1_top__DOT__myDelay__DOT__current_state = 0U;
        vlSelf->f1_top__DOT__tick_to_mux = 0U;
        __Vdly__f1_top__DOT__my_divider__DOT__count 
            = vlSelf->N;
        vlSelf->f1_top__DOT__my_divider__DOT__count 
            = __Vdly__f1_top__DOT__my_divider__DOT__count;
        vlSelf->f1_top__DOT__cmd_delay = 0U;
    } else {
        vlSelf->f1_top__DOT__myDelay__DOT__current_state 
            = vlSelf->f1_top__DOT__myDelay__DOT__next_state;
        if ((8U != vlSelf->f1_top__DOT__myStateMachine__DOT__current_state)) {
            if ((0U == (IData)(vlSelf->f1_top__DOT__my_divider__DOT__count))) {
                vlSelf->f1_top__DOT__tick_to_mux = 1U;
                __Vdly__f1_top__DOT__my_divider__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__f1_top__DOT__my_divider__DOT__count 
                    = (0x1fU & ((IData)(vlSelf->f1_top__DOT__my_divider__DOT__count) 
                                - (IData)(1U)));
                vlSelf->f1_top__DOT__tick_to_mux = 0U;
            }
        }
        vlSelf->f1_top__DOT__my_divider__DOT__count 
            = __Vdly__f1_top__DOT__my_divider__DOT__count;
    }
    vlSelf->f1_top__DOT__cmd_delay = ((IData)(vlSelf->f1_top__DOT__mux_output) 
                                      & ((7U == vlSelf->f1_top__DOT__myStateMachine__DOT__current_state) 
                                         & (8U == vlSelf->f1_top__DOT__myStateMachine__DOT__next_state)));
    vlSelf->f1_top__DOT__myStateMachine__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->f1_top__DOT__myStateMachine__DOT__next_state);
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

VL_INLINE_OPT void Vf1_top___024root___nba_sequent__TOP__2(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->f1_top__DOT__my_rnggenerator__DOT__sreg 
        = vlSelf->__Vdly__f1_top__DOT__my_rnggenerator__DOT__sreg;
}

void Vf1_top___024root___eval_nba(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vf1_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vf1_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vf1_top___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vf1_top___024root___eval_triggers__ico(Vf1_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__ico(Vf1_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vf1_top___024root___eval_triggers__act(Vf1_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__act(Vf1_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vf1_top___024root___dump_triggers__nba(Vf1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vf1_top___024root___eval(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vf1_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vf1_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("f1_top.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vf1_top___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vf1_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vf1_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("f1_top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vf1_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vf1_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("f1_top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vf1_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vf1_top___024root___eval_debug_assertions(Vf1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->N & 0xe0U))) {
        Verilated::overWidthError("N");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG

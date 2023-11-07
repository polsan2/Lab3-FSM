// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlsfr.h for the primary calling header

#ifndef VERILATED_VLSFR___024ROOT_H_
#define VERILATED_VLSFR___024ROOT_H_  // guard

#include "verilated.h"


class Vlsfr__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlsfr___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,1);
    CData/*6:0*/ lsfr__DOT__sreg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlsfr__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlsfr___024root(Vlsfr__Syms* symsp, const char* v__name);
    ~Vlsfr___024root();
    VL_UNCOPYABLE(Vlsfr___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

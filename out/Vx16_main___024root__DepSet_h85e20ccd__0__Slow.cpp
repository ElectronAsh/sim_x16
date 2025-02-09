// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main__Syms.h"
#include "Vx16_main___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__stl(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx16_main___024root___eval_triggers__stl(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vx16_main___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

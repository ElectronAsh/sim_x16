// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main___024root.h"

extern const VlUnpacked<CData/*0:0*/, 1024> Vx16_main__ConstPool__TABLE_hbef246c3_0;

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__5(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*9:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n;
    vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__state;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__core_rst = 0U;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst) {
        vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 8U;
        vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n = 1U;
    } else {
        if (((((((((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                   | (0x2fU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                  | (0x30U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                 | (0x31U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                | (0U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
               | (1U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
              | (2U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
             | (3U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
                = ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((0x80U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                        ? ((0x40U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                            ? ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x1eU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 0xdU)))))
                                : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x21U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 0xdU))))))
                            : ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : 2U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 0xdU)))))
                                : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 5U)))))))
                        : ((0x40U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                            ? ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x33U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x1eU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0U
                                                    : 0x18U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x1eU)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 0x2aU)))))
                                : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x21U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0U
                                                    : 0x16U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x21U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 0x25U))))))
                            : ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : 2U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : 0x30U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x1eU)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 0x1aU)))))
                                : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                    ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 2U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 2U
                                                    : 0x24U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x30U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x30U
                                                    : 0x2fU))
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x32U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x12U
                                                    : 5U))))
                                    : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                        ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0U)
                                                : 0U)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? 0x24U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xdU
                                                    : 0x21U)))
                                        : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0x2fU)
                                                : 0x2fU)
                                            : ((2U 
                                                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0x24U
                                                    : 0xdU)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))
                                                    ? 0xeU
                                                    : 8U))))))))
                    : ((0x2fU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back)
                            ? 0x23U : 0xdU) : ((0x30U 
                                                == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                ? 0x31U
                                                : (
                                                   (0x31U 
                                                    == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back)
                                                     ? 0x23U
                                                     : 0xdU)
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                     ? 1U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back)
                                                       ? 0x23U
                                                       : 0xdU)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                       ? 3U
                                                       : 
                                                      ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store)) 
                                                        | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back))
                                                        ? 4U
                                                        : 0xdU))))))));
        } else if (((((((((4U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                          | (0x33U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                         | (0x34U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                        | (0x35U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                       | (0x32U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                      | (0xeU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                     | (0xfU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                    | (0x10U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
                = ((4U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back)
                        ? 0x23U : 0xdU) : ((0x33U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                            ? 0x34U
                                            : ((0x34U 
                                                == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO)
                                                    ? 0x35U
                                                    : 0x16U)
                                                : (
                                                   (0x35U 
                                                    == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                    ? 0x16U
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                     ? 0xfU
                                                     : 
                                                    ((0xeU 
                                                      == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfU 
                                                       == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                       ? 0x10U
                                                       : 0x11U)))))));
        } else if (((((((((0x11U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                          | (0x12U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                         | (0x13U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                        | (0x14U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                       | (0x15U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                      | (0x23U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                     | (0x2eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                    | (0xdU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
                = ((0x11U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? 0xdU : ((0x12U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? 0x13U : ((0x13U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? 0x14U : 
                                          ((0x14U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                            ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO) 
                                                | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store))
                                                ? 0x15U
                                                : 0xdU)
                                            : ((0x15U 
                                                == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                ? 0xdU
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x2eU 
                                                     == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                     ? 0xdU
                                                     : 0xcU)))))));
        } else if (((((((((0x24U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                          | (0x21U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                         | (0x22U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                        | (0x1eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                       | (0x1fU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                      | (0x20U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                     | (0x1aU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                    | (0x1bU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
                = ((0x24U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? 0xcU : ((0x21U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? 0x22U : ((0x22U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? 0xcU : 
                                          ((0x1eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                            ? 0x1fU
                                            : ((0x1fU 
                                                == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                ? 0x20U
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                    ? 0xcU
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                     ? 0x1bU
                                                     : 0x1cU)))))));
        } else if (((((((((0x1cU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                          | (0x1dU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                         | (0x25U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                        | (0x26U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                       | (0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                      | (0x28U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                     | (0x29U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                    | (0x2aU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
                = ((0x1cU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? 0x1dU : ((0x1dU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? 0xdU : ((0x25U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? 0x26U : 
                                          ((0x26U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                            ? 0x27U
                                            : ((0x27U 
                                                == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                ? 0x28U
                                                : (
                                                   (0x28U 
                                                    == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                    ? 0x29U
                                                    : 
                                                   ((0x29U 
                                                     == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                     ? 0xcU
                                                     : 0x2bU)))))));
        } else if (((((((((0x2bU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                          | (0x2cU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                         | (0x2dU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                        | (5U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                       | (6U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                      | (7U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                     | (0x16U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
                    | (0x17U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state 
                = ((0x2bU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? 0x2cU : ((0x2cU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? 0x2dU : ((0x2dU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                            ? 0xdU : 
                                           ((5U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                             ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_true)
                                                 ? 6U
                                                 : 0xcU)
                                             : ((6U 
                                                 == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                 ? 
                                                (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO) 
                                                  ^ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__backwards))
                                                  ? 7U
                                                  : 0xcU)
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                  ? 0xcU
                                                  : 
                                                 ((0x16U 
                                                   == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                   ? 0x17U
                                                   : 0xcU)))))));
        } else if ((0x18U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 0x19U;
        } else if ((0x19U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 0x16U;
        } else if ((8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 9U;
        } else if ((9U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 0xaU;
        } else if ((0xaU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 0xbU;
        } else if ((0xbU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state = 0x16U;
        }
        if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset) 
             != (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n))) {
            vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__core_rst = 1U;
        }
    }
    __Vtableidx7 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_true) 
                     << 9U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__backwards) 
                                << 8U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO) 
                                           << 7U) | 
                                          (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst)))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__SYNC = 
        Vx16_main__ConstPool__TABLE_hbef246c3_0[__Vtableidx7];
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_rst_out 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__core_rst;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__6(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__t3;
    __Vdly__x16_main__DOT__via_1_inst__DOT__t3 = 0;
    // Body
    __Vdly__x16_main__DOT__via_1_inst__DOT__t3 = vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst) {
        __Vdly__x16_main__DOT__via_1_inst__DOT__t3 = 0xffffU;
    } else {
        __Vdly__x16_main__DOT__via_1_inst__DOT__t3 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)));
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__wr_t3) {
            __Vdly__x16_main__DOT__via_1_inst__DOT__t3 
                = vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l;
        }
    }
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3 = __Vdly__x16_main__DOT__via_1_inst__DOT__t3;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__i 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3));
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__7(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT;
    __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT = 0;
    // Body
    __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_I_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_T_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)
                      ? ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                         >> 3U) : (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2)) 
                                     >> 3U) | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                                >> 3U) 
                                               & (~ 
                                                  ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                                   >> 3U)))) 
                                   | ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                          >> 3U)) & 
                                      ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                       >> 3U)))));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)
                      ? ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                         >> 3U) : (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2)) 
                                     | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                        & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))) 
                                    >> 3U) | ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                                  >> 3U))))));
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = ((0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out)))) 
               & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffffU == (0xffffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if (((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR) 
             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 3U) + (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                   >> 3U))));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) {
        if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
                = ((1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                          >> 7U)) != (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT));
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
                = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT) 
                   ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT));
        } else {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
                = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                          >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc;
        }
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) {
        if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal) {
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
                = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT) 
                   ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT));
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
                = (1U & ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                           >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT)) 
                         ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT)));
        } else {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
                = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                          >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc;
        }
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc;
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
            = (IData)((0x7fU == (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc;
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (IData)((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                        >> 0xfU) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT)));
    }
    if (((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR) 
             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT = 0U;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
            = (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                >> 7U) & (0x7fU == (0x7fU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out)))));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                      >> 7U) ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT)));
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT = 0U;
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
            = (0xffU == (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out))));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT;
        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx) {
        if ((1U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
            if ((2U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                if ((3U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                    if ((4U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                        if ((5U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                            if ((6U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                                if ((7U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_I_OUT 
                                        = (1U & (~ 
                                                 ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                                  >> 3U)));
                                }
                            }
                            if ((6U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_T_OUT 
                                    = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                                >> 3U)));
                            }
                        }
                        if ((5U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT 
                                = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                            >> 3U)));
                        }
                    }
                }
                if ((3U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
                        = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                    >> 3U)));
                } else if ((4U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT 
                        = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                    >> 3U)));
                }
            }
        }
        if ((1U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT 
                = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                            >> 3U)));
        }
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT 
        = __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_I_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_I_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_T_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_T_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_H_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_Z_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_S_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_V_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 0xfU));
    }
    if (((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR) 
             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                     >> 7U));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT = 0U;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx) {
        if ((1U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
            if ((2U == (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT 
                    = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                >> 3U)));
            }
        }
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_N_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__8(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_rr 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in) 
           || (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in;
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset = vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_rr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__reset_out 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__reset 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__9(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__wrdata_r 
        = vlSelfRef.x16_main__DOT__vera_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__wraddr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__wraddr_hold_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__wraddr_hold_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__10(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__rdaddr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__11(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset_n) {
        if (((IData)(vlSelfRef.x16_main__DOT__bank_cs) 
             & (IData)(vlSelfRef.cpu_we))) {
            if ((1U & (IData)(vlSelfRef.cpu_addr))) {
                vlSelfRef.x16_main__DOT__rom_bank = vlSelfRef.cpu_dout;
            }
            if ((1U & (~ (IData)(vlSelfRef.cpu_addr)))) {
                vlSelfRef.x16_main__DOT__ram_bank = vlSelfRef.cpu_dout;
            }
        }
        vlSelfRef.x16_main__DOT__cpu_din_int = vlSelfRef.cpu_din;
    } else {
        vlSelfRef.x16_main__DOT__rom_bank = 0U;
        vlSelfRef.x16_main__DOT__ram_bank = 0U;
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__DI = vlSelfRef.x16_main__DOT__cpu_din_int;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__12(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__12\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_addr 
        = (0xfffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr);
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_x 
        = (0x3ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                     >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_palette_offset 
        = (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                   >> 0x18U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_collision_mask 
        = (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                   >> 0x14U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_width 
        = (3U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x1cU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_z 
        = (3U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x12U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_mode 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_hflip 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr14)
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata_r
            : vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata_r);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r 
        = vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r 
        = vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r 
        = vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_enabled 
        = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_z));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____Vcellinp__audio_attr_ram__rd_addr];
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__palette_ram
        [vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data];
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8 
        = (0xffU & ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_r))
                     ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_r))
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata 
                            >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata 
                                         >> 0x10U))
                     : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_r))
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata 
                            >> 8U) : vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata)));
    if (vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem[vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0;
    }
    if (vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__palette_ram[vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v0] 
            = ((0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__palette_ram
                [vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v0]) 
               | ((IData)(vlSelfRef.__VdlyVal__x16_main__DOT__top_inst__DOT__palette_ram__v0) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v1) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__palette_ram[vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v1] 
            = ((0xff00U & vlSelfRef.x16_main__DOT__top_inst__DOT__palette_ram
                [vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v1]) 
               | (IData)(vlSelfRef.__VdlyVal__x16_main__DOT__top_inst__DOT__palette_ram__v1));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__palette_rgb_data 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                     >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__palette_rgb_data 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                     >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata;
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__0(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_right 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__lrck_r)) 
           & (IData)(vlSelfRef.audio_lrck));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample 
        = ((~ (IData)(vlSelfRef.audio_lrck)) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__lrck_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_lb_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_idx9_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_c)
            : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_a)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_b)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_lb_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_idx9_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_c)
            : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_a)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_b)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack)) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low) 
            << 3U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r) 
                       << 2U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r) 
                                  << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma2 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r)
            ? 0U : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r;
    if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next = 0U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 0U;
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__new_sample) 
             & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 1U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 1U;
        }
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r;
        if ((1U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
            if ((2U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
                if ((3U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
                    if ((4U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
                        if ((5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
                            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next 
                                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample;
                            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next 
                                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r)
                                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample)
                                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample));
                        }
                    }
                }
                if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next 
                        = ((0xff00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next)) 
                           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata));
                } else if ((4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next 
                        = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next)) 
                           | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata) 
                              << 8U));
                }
            }
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 0U;
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next 
                = ((0xff00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next)) 
                   | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata));
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 2U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 1U;
            } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 3U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 1U;
            } else {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 5U;
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next 
                = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next)) 
                   | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata) 
                      << 8U));
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 3U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 1U;
            } else {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 5U;
            }
        } else if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 4U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 1U;
            } else {
                vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 5U;
            }
        } else if ((4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 5U;
        } else if ((5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 0U;
        }
    }
    if (((5U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r)) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff 
        = (0x3ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_y)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_l 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_l 
                       + vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_l));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_r 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_r 
                       + vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_pw 
        = (((0x7fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                      >> 0xaU)) > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_pulsewidth))
            ? 0U : 0x3fU);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_phase 
                       + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_freq)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r;
    if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_rddata;
            }
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_strobe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack)) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_strobe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack)) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__active) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r 
            = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                       >> 8U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g 
            = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                       >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b 
            = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_r) 
         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_port_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_r) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_port_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__next_sample 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__next_sample 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_left 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__composer_rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_lb_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer0_lb_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_lb_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer0_opaque 
        = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_lb_rddata));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__composer_rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_lb_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer1_lb_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_lb_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer1_opaque 
        = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_lb_rddata));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_lb_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_opaque 
        = (0U != (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z1 
        = (1U == (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata) 
                        >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z2 
        = (2U == (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata) 
                        >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z3 
        = (3U == (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata) 
                        >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__dest_pixel_is_transparent 
        = (0U == (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collision 
        = (((0x280U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r)) 
            & ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent)) 
               & (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r))))
            ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data) 
                >> 0xcU) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r))
            : 0U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data 
        = ((0xf000U & ((0xfffff000U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data)) 
                       | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r) 
                          << 0xcU))) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r) 
                                         << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_color)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe;
    vlSelfRef.x16_main__DOT__vera_irq_n = (0U == ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status) 
                                                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rd_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_vflip)
                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels) 
                        - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff))
                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_on_line 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff) 
           <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__left_data 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_l 
           << 7U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__right_data 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_r 
           << 7U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_triangle))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_saw)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_pw)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_phase 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0)
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1
            : 0U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__do_noise_sample 
        = (1U & ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0) 
                     & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1 
                        >> 0x10U))) & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                                       >> 0x10U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_strobe));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_strobe));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_1b_8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_4 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r) 
           << 2U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_8 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r) 
           << 3U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_64 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r) 
           << 6U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_g 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_2b_8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__g 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_64 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g) 
           << 6U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_32 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g) 
           << 5U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_2 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g) 
           << 1U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_2 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b) 
           << 1U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_32 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b) 
           << 5U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_8 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b) 
           << 3U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_active) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data = 0U;
        if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r) 
              & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_opaque)) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z1))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata));
        }
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer0_opaque))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_lb_rddata;
        }
        if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r) 
              & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_opaque)) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z2))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata));
        }
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer1_opaque))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_lb_rddata;
        }
        if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r) 
              & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_opaque)) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z3))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata));
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_pixel 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent)) 
           & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r) 
               > (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data) 
                        >> 8U))) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__dest_pixel_is_transparent)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r;
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r) 
                  & (3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))) 
                 | ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)) 
                    & (7U == (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next 
                    = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r) 
                        == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels))
                        ? 0U : 1U);
            }
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r) 
                   | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collision));
        }
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 0U;
        } else if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r) 
                     & (3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))) 
                    | ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)) 
                       & (7U == (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))))) {
            if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r) 
                 != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 1U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 2U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 0U;
        }
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_irq_n 
        = vlSelfRef.x16_main__DOT__vera_irq_n;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_sel_next = 1U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_hi = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_lo = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_next = 0U;
    if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next))) {
        if ((0x80U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 3U;
        } else if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_enabled) 
                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_on_line))) {
            if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_busy)))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_sel_next = 0U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_hi = 1U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 1U;
            }
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_incr;
        }
    } else if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_lo = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_incr;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_next = 0U;
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 3U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 3U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__left_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__left_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__right_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_signal 
        = (0x20U ^ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_noise 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__do_noise_sample)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__noise_value_r)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack_next = 0U;
    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_do_access_r)))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack_next = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe)))) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack_next = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe)))) {
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack_next = 1U;
                }
            }
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr = 0U;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__ib_do_access_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr 
            = (0x7fffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r 
                          >> 2U));
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr;
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr;
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_R_times_r 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_64) 
                     + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_8) 
                        + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_4))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_G_n_times_g 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_64) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_2)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_G_n_times_g 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_32) 
                     + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_2) 
                        + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_B_times_b 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_8) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_2)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_B_times_b 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_32) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_8)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next = 0U;
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_pixel;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1 = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2 = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_idx 
        = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next) 
                     << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_sel_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal 
        = (0x7fffU & VL_MULS_III(15, (0x7fffU & VL_EXTENDS_II(15,6, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_signal))), 
                                 (0x7fffU & VL_EXTENDS_II(15,10, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_volume)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wrdata 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_noise) 
            << 0x11U) | vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_phase);
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_cs 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr) 
                 >> 0xeU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_B_n_times_b 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_B_times_b) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_a 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next) 
           & (0U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_b 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next) 
           & (1U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_c 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next) 
           & (2U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_d 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next) 
           & (3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r))));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1a 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2a 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_a;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1b 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2b 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_b;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1c 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2c 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_c;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1d 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2d 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_d;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1a 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_a;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2a 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1b 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_b;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2b 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1c 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_c;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2c 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1d 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_d;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2d 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_cs 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_cs)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_en;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_en;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1d;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2d;
}

extern const VlUnpacked<CData/*0:0*/, 256> Vx16_main__ConstPool__TABLE_h16dbcb3d_0;

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__13(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__N) 
                      << 7U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__V) 
                                 << 6U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__C) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_code)))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_true 
        = Vx16_main__ConstPool__TABLE_h16dbcb3d_0[__Vtableidx12];
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__wr_t3 
        = vlSelfRef.__Vdly__x16_main__DOT__via_1_inst__DOT__wr_t3;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 7U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 6U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 5U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 1U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 3U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 4U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 2U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP = 0U;
    if (((((((((0x100U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                        << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
               | (0x200U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
              | (0x300U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
             | (0x308U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                        << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
            | (0x380U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                       << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
           | (0x388U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                      << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
          | (0x400U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                     << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
         | (0x1400U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                     << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
        if ((0x100U != (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                     << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
            if ((0x200U != (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                if ((0x300U != (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    if ((0x308U != (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x380U != (0x1ff88U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x388U != (0x1ff88U 
                                            & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x400U == (0x1fc00U 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC = 1U;
                                }
                                if ((0x400U != (0x1fc00U 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW = 0U;
    if ((1U & (~ ((((((((0x100U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                        | (0x200U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                       | (0x300U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                      | (0x308U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                     | (0x380U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                    | (0x388U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                   | (0x400U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                  | (0x1400U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
        if ((1U & (~ ((((((((0x800U == (0x1fc00U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                            | (0x1800U == (0x1fc00U 
                                           & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                           | (0xc00U == (0x1fc00U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                          | (0x1c00U == (0x1fc00U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                         | (0x1000U == (0x1fc00U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                        | (0x2000U == (0x1fc00U & (
                                                   ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                       | (0x2400U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                      | (0x2800U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
            if ((1U & (~ ((((((((0x2c00U == (0x1fc00U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                | (0x3000U == (0x1f000U 
                                               & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                               | (0x5000U == (0x1f000U 
                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                              | (0x4000U == (0x1f000U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                             | (0x6000U == (0x1f000U 
                                            & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                            | (0x7000U == (0x1f000U 
                                           & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                           | (0x8000U == (0x1d000U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                          | (0x9000U == (0x1fc0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
                if ((1U & (~ ((((((((0x9001U == (0x1fc07U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                    | (0x9002U == (0x1fc07U 
                                                   & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                   | (0x9004U == (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                  | (0x9005U == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                 | (0x9204U == (0x1fe0fU 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                | (0x9205U == (0x1fe0fU 
                                               & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                               | (0x9206U == (0x1fe0fU 
                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                              | (0x9207U == (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
                    if ((1U & (~ ((((((((0x900cU == 
                                         (0x1fc0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                        | (0x900dU 
                                           == (0x1fc0fU 
                                               & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                       | (0x900eU == 
                                          (0x1fc0fU 
                                           & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                      | (0x900fU == 
                                         (0x1fc0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                     | (0x9400U == 
                                        (0x1fe0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                    | (0x9401U == (0x1fe0fU 
                                                   & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                   | (0x9402U == (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                  | (0x9403U == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
                        if (((((((((0x9405U == (0x1fe0fU 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                   | (0x9406U == (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                  | (0x9407U == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                 | (0x9408U == (0x1ff0fU 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                | (0x9508U == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                               | (0x9518U == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                              | (0x9580U == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                             | (0x9598U == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x9405U != (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x9406U != (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    if ((0x9407U != 
                                         (0x1fe0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x9408U 
                                             == (0x1ff0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx = 1U;
                                        }
                                    }
                                    if ((0x9407U == 
                                         (0x1fe0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR = 1U;
                                    }
                                }
                                if ((0x9406U == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR = 1U;
                                }
                            }
                            if ((0x9405U == (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR = 1U;
                            }
                        }
                        if ((1U & (~ ((((((((0x9405U 
                                             == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                            | (0x9406U 
                                               == (0x1fe0fU 
                                                   & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                           | (0x9407U 
                                              == (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                          | (0x9408U 
                                             == (0x1ff0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                         | (0x9508U 
                                            == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                        | (0x9518U 
                                           == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                       | (0x9580U == 
                                          (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                      | (0x9598U == 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))))) {
                            if (((((((((0x95a8U == 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) 
                                       | (0x95c8U == 
                                          (0x1ffefU 
                                           & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                      | (0x95e8U == 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                     | (0x95f8U == 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                    | (0x9409U == (
                                                   ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                   | (0x9509U == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                  | (0x940aU == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                 | (0x940bU == (0x1ff0fU 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                                if ((0x95a8U != (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                    if ((0x95c8U != 
                                         (0x1ffefU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x95e8U 
                                             != (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                            if ((0x95f8U 
                                                 != 
                                                 (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                if (
                                                    (0x9409U 
                                                     != 
                                                     (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                    if (
                                                        (0x9509U 
                                                         != 
                                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                        if (
                                                            (0x940aU 
                                                             == 
                                                             (0x1fe0fU 
                                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ ((((((((0x95a8U 
                                                 == 
                                                 (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) 
                                                | (0x95c8U 
                                                   == 
                                                   (0x1ffefU 
                                                    & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                        << 0x10U) 
                                                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                               | (0x95e8U 
                                                  == 
                                                  (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                              | (0x95f8U 
                                                 == 
                                                 (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                             | (0x9409U 
                                                == 
                                                (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                            | (0x9509U 
                                               == (
                                                   ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                           | (0x940aU 
                                              == (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                          | (0x940bU 
                                             == (0x1ff0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
                                if (((((((((0x940cU 
                                            == (0x1fe0eU 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                           | (0x940eU 
                                              == (0x1fe0eU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                          | (0x9600U 
                                             == (0x1ff00U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                         | (0x9700U 
                                            == (0x1ff00U 
                                                & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                        | (0x9800U 
                                           == (0x1fd00U 
                                               & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                       | (0x9900U == 
                                          (0x1fd00U 
                                           & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                      | (0x9c00U == 
                                         (0x1fc00U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                     | (0xb000U == 
                                        (0x1f000U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                                    if ((0x940cU != 
                                         (0x1fe0eU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x940eU 
                                             != (0x1fe0eU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            if ((0x9600U 
                                                 == 
                                                 (0x1ff00U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW = 1U;
                                            }
                                            if ((0x9600U 
                                                 != 
                                                 (0x1ff00U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                if (
                                                    (0x9700U 
                                                     == 
                                                     (0x1ff00U 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (((((((((0x900cU == (0x1fc0fU 
                                            & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                               | (0x900dU == (0x1fc0fU 
                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                              | (0x900eU == (0x1fc0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                             | (0x900fU == (0x1fc0fU 
                                            & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                            | (0x9400U == (0x1fe0fU 
                                           & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                           | (0x9401U == (0x1fe0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                          | (0x9402U == (0x1fe0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                         | (0x9403U == (0x1fe0fU & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                        if ((0x900cU != (0x1fc0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x900dU != (0x1fc0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x900eU != (0x1fc0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    if ((0x900fU != 
                                         (0x1fc0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x9400U 
                                             == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM = 1U;
                                        }
                                        if ((0x9400U 
                                             != (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            if ((0x9401U 
                                                 == 
                                                 (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG = 1U;
                                            }
                                            if ((0x9401U 
                                                 != 
                                                 (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                if (
                                                    (0x9402U 
                                                     != 
                                                     (0x1fe0fU 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (((((((((0x2c00U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                       | (0x3000U == (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                      | (0x5000U == (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                     | (0x4000U == (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                    | (0x6000U == (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                   | (0x7000U == (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                  | (0x8000U == (0x1d000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                 | (0x9000U == (0x1fc0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                if ((0x2c00U != (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    if ((0x3000U != (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x5000U != (0x1f000U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x4000U != (0x1f000U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x6000U != (0x1f000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    if ((0x7000U == 
                                         (0x1f000U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR = 1U;
                                    }
                                }
                                if ((0x6000U == (0x1f000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR = 1U;
                                }
                            }
                            if ((0x4000U == (0x1f000U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI = 1U;
                            }
                        }
                        if ((0x5000U == (0x1f000U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI = 1U;
                        }
                    }
                    if ((0x3000U == (0x1f000U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI = 1U;
                    }
                }
            }
        }
        if (((((((((0x800U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                   | (0x1800U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                               << 0x10U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                  | (0xc00U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                 | (0x1c00U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                | (0x1000U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
               | (0x2000U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
              | (0x2400U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
             | (0x2800U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
            if ((0x800U != (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                if ((0x1800U != (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    if ((0xc00U != (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x1c00U != (0x1fc00U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x1000U != (0x1fc00U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x2000U == (0x1fc00U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND = 1U;
                                }
                                if ((0x2000U != (0x1fc00U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    if ((0x2400U != 
                                         (0x1fc00U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR = 1U;
                                    }
                                    if ((0x2400U == 
                                         (0x1fc00U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR = 1U;
                                    }
                                }
                            }
                        }
                        if ((0x1c00U == (0x1fc00U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC = 1U;
                        }
                    }
                    if ((0xc00U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD = 1U;
                    }
                }
                if ((0x1800U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB = 1U;
                }
            }
            if ((0x800U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC = 1U;
            }
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in 
        = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__por_cnt_r) 
                    >> 7U)));
    if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__store 
            = ((((0x92U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)) 
                 || (0x84U == (0xe5U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
                || (0x64U == (0xefU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
               || (0x81U == (0xe3U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back 
            = (((6U == (0x87U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
                || (4U == (0xe7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
               || (0xc6U == (0xc7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO = (IData)(
                                                         (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp) 
                                                           >> 8U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO9)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__backwards 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                 >> 7U));
    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst)))) {
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs) {
            if (vlSelfRef.cpu_we) {
                if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                    | (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                   | (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                 | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                | (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               | (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))))) {
                    if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                        | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                       | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                      | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                     | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                    | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                   | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))))) {
                        if ((0x11U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((0x12U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l 
                                    = ((0xff00U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l)) 
                                       | (IData)(vlSelfRef.cpu_dout));
                            } else if ((0x13U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l 
                                    = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l)) 
                                       | ((IData)(vlSelfRef.cpu_dout) 
                                          << 8U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_I_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_T_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_H_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_Z_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_V_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_S_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_N_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SEx_CLx 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SEx_CLx 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ANDI_CBR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ANDI_CBR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ORI_SBR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ORI_SBR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_COM 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_COM 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ASR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ASR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ROR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ROR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBCI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBCI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_NEG 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_NEG 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LSR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_LSR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CPI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CPI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_INC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_INC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_DEC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_DEC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SUBI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SUBI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_AND 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_AND 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_OR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_OR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_EOR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_EOR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CPC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CPC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADD 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADD 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SUB 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SUB 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int 
        = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    if (((((((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR)) 
                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG)) 
               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC)) 
            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC)) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int = 0U;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__async_rst_in 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0U;
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = (0x1eU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                << 1U));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1eU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = ((0x10U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 5U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = ((0x10U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 5U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                          >> 3U)) << 1U)));
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                          >> 3U)) << 1U)));
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0x1aU;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = ((0x10U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 5U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                }
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x10U | (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                        >> 4U)));
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    }
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0x1eU;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                          >> 3U)) << 1U)));
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    }
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0x1aU;
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    }
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x18U | (6U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                      >> 3U)));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    }
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 0xbU)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x10U | (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                        >> 4U)));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0x1aU;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                          >> 3U)) << 1U)));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CPSE) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = ((0x10U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                 >> 5U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)));
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_ELPM))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 0U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_ELPM)
                        ? 0U : (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                         >> 4U)));
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                    >> 4U));
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0x1aU;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                          >> 3U)) << 1U)));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
        }
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_addr_r 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_2 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__write 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr;
    } else {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_addr_r 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_2 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__write 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__reg_clr_cnt;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r = 1U;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r 
            = ((vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH
                [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                          >> 1U))] << 8U) | vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL
               [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                         >> 1U))]);
    } else {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r = 0U;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r 
            = ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r))
                ? vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH
               [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                         >> 1U))] : vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL
               [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                         >> 1U))]);
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1eU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x10U | (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                        >> 4U)));
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x10U | (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                        >> 4U)));
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0x1eU;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x18U | (6U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                      >> 3U)));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                 ? ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                              >> 4U)));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0x1eU;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0x1eU;
            } else {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                    >> 4U));
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CPSE) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                >> 4U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBRC_SBRS) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                >> 4U));
            }
        } else {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
        }
    } else {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_addr_d 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal 
        = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d) 
           == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d 
        = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d)
            ? ((vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH
                [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d) 
                          >> 1U))] << 8U) | vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL
               [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d) 
                         >> 1U))]) : ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d))
                                       ? vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH
                                      [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d) 
                                                >> 1U))]
                                       : vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL
                                      [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d) 
                                                >> 1U))]));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AV = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI7) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__BI7) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN) 
                                                    ^ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJH = 
        ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adj_bcd)
          ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_bcd)
              ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO)
                  ? 6U : 0U) : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO)
                                 ? 0U : 0xaU)) : 0U);
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_data_r 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset_res 
        = (0x1fffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r) 
                      + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_PLUS_ONE 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_MINUS_ONE 
        = (0x1fffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r) 
                      - (IData)(1U)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_data_d 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__V 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AV;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AO = ((0xf0U 
                                                   & ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                        >> 4U) 
                                                       + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJH)) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                        + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJL))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int = 0U;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 
                    = ((0xf0U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 4U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 
                    = ((0xf0U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 4U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 = 1U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 = 0xffffU;
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2 
                    = ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 2U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT) {
                if ((0x800U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    if ((1U & (~ (((0x3dU == ((0x30U 
                                               & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                  >> 5U)) 
                                              | (0xfU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                   || (0x3eU == ((0x30U 
                                                  & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                     >> 5U)) 
                                                 | (0xfU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                  || (0x3fU == ((0x30U 
                                                 & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                    >> 5U)) 
                                                | (0xfU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out_int 
                            = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                    }
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out_int 
                    = ((4U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                        ? ((2U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                ? ((0x80U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 2U)) 
                                   | (0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)))
                                : ((0x80U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | ((0x40U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 3U)) 
                                      | (0x3fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)))))
                            : ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                ? ((0xc0U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | ((0x20U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 4U)) 
                                      | (0x1fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int))))
                                : ((0xe0U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | ((0x10U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 5U)) 
                                      | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int))))))
                        : ((2U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                ? ((0xf0U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | ((8U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 6U)) 
                                      | (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int))))
                                : ((0xf8U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | ((4U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 7U)) 
                                      | (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)))))
                            : ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                ? ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | ((2U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 8U)) 
                                      | (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int))))
                                : ((0xfeU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int)) 
                                   | (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                            >> 9U))))));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE));
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                    = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE) 
                                >> 8U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) {
                    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__select_io_in_stam) {
                        if ((1U & (~ ((((((((((((((
                                                   ((((((((((((((((((0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) 
                                                                    || (1U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                   || (2U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                  || (3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                 || (4U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                || (5U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                               || (6U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                              || (7U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                             || (8U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                            || (9U 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                           || (0xaU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                          || (0xbU 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                         || (0xcU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                        || (0xdU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                       || (0xeU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                      || (0xfU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                     || (0x10U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                    || (0x11U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                   || (0x12U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                  || (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                 || (0x14U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                || (0x15U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                               || (0x16U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                              || (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                             || (0x18U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                            || (0x19U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                           || (0x1aU 
                                               == (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                          || (0x1bU 
                                              == (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                         || (0x1cU 
                                             == (0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                        || (0x1dU == 
                                            (0x7fU 
                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                       || (0x1eU == 
                                           (0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                      || (0x1fU == 
                                          (0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))))) {
                            if ((1U & (~ ((((0x7fU 
                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                            == ((IData)(0x3dU) 
                                                + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement)) 
                                           || ((0x7fU 
                                                & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                               == ((IData)(0x3eU) 
                                                   + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) 
                                          || ((0x7fU 
                                               & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                              == ((IData)(0x3fU) 
                                                  + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement)))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                            }
                        }
                    } else {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                            = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                    }
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RCALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int 
                    = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE) 
                                >> 8U));
            }
        }
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
        vlSelfRef.x16_main__DOT__avr_io_out = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out_int;
        vlSelfRef.x16_main__DOT__avr_data_out = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int;
    } else {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
        vlSelfRef.x16_main__DOT__avr_io_out = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out_int;
        vlSelfRef.x16_main__DOT__avr_data_out = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_1 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__mul_sign_int 
        = (1U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                  ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2)) 
                 >> 7U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_int 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1;
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)))) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_int 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
        }
    }
    if (((((((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC)) 
                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
              | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC)) 
             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC)) 
            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_int 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset_res;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                        ? (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)
                        : (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE));
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = (0x1fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r));
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_MINUS_ONE;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE;
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_XCH) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAS)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAC)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAT))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = (0x1fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r));
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if ((0x9509U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP;
            } else if ((0x940eU != (0xfe0eU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                if ((0xd000U == (0xf000U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP;
                } else if ((0x9508U == (0xffefU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE;
                } else if ((0x9000U == (0xfc0fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                        = (0x1fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int));
                }
            }
        }
    }
    vlSelfRef.x16_main__DOT__avr_data_addr = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out 
        = vlSelfRef.x16_main__DOT__avr_io_out;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out 
        = vlSelfRef.x16_main__DOT__avr_data_out;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9 
        = (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_int) 
            << 1U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr 
        = vlSelfRef.x16_main__DOT__avr_data_addr;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
        = (0x3ffffU & ((1U | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                              << 1U)) + vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
        = (0x3ffffU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        << 1U) - vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                       >> 1U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                       >> 1U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
        = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)
                      ? ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                         >> 7U) : (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                                   >> 9U)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)
                      ? ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                         >> 7U) : (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                                   >> 9U)));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                     >> 9U));
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                     >> 9U));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT = 1U;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (0U != (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                     >> 0x11U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                     >> 0x11U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                     >> 9U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (((0U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))
                       ? (0x10000U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                      << 0x10U)) : 
                      (0x10000U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                       >> 3U)) << 0x10U))) 
                     >> 0x10U));
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)
                ? ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                             << 1U)) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int))
                : (0xffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                            >> 1U)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal)
                ? ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                             << 1U)) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int))
                : (0xffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                            >> 1U)));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                        >> 1U));
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC)) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                        >> 1U));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int) 
                << 7U) | (0x7fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                   >> 1U)));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2)));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & ((IData)(0xffU) - (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & (- (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                          >> 1U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                          >> 1U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = ((0x80U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1)) 
               | (0x7fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                           >> 1U)));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP) 
          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI)) 
         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC))) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
                        >> 1U));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = ((0xf0U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                         << 4U)) | (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                            >> 4U)));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffffU & ((0U != (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst)))
                           ? (0x10000U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                          << 0x10U))
                           : (0x10000U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                              >> 3U)) 
                                          << 0x10U))));
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT 
            = (1U & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                     >> 0x11U));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out 
            = (0xffffU & (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
                          >> 1U));
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_C_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__out 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc 
        = (1U & ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                   >> 7U) & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                 >> 7U)) & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                            >> 7U))) 
                 | ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        >> 7U)) & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                       >> 7U)) & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                                  >> 7U)))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp 
        = (1U & (((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                      >> 3U)) & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                 >> 3U)) | ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                              >> 3U) 
                                             | (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                                   >> 3U))) 
                                            & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                               >> 3U))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc 
        = (1U & ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                   >> 7U) & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                 >> 7U)) & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                               >> 7U)))) 
                 | ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        >> 7U)) & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out)) 
                                   >> 7U))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data = 0U;
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__avr_data_in;
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__avr_data_in;
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__avr_data_in;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__avr_data_in;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 0xbU)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = ((0x3dU == ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 5U)) 
                                      | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))
                            ? (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP))
                            : ((0x3eU == ((0x30U & 
                                           ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                            >> 5U)) 
                                          | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))
                                ? (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP) 
                                            >> 8U))
                                : ((0x3fU == ((0x30U 
                                               & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                  >> 5U)) 
                                              | (0xfU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))
                                    ? (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS)
                                    : (IData)(vlSelfRef.x16_main__DOT__avr_io_in))));
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = ((0xf0U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 4U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = ((4U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                            ? ((2U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                ? ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                    ? ((0x80U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                                 << 1U)) 
                                       | (0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)))
                                    : ((0x80U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | ((0x40U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS)) 
                                          | (0x3fU 
                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)))))
                                : ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                    ? ((0xc0U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | ((0x20U & 
                                           ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                            >> 1U)) 
                                          | (0x1fU 
                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d))))
                                    : ((0xe0U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | ((0x10U & 
                                           ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                            >> 2U)) 
                                          | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d))))))
                            : ((2U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                ? ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                    ? ((0xf0U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | ((8U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                                 >> 3U)) 
                                          | (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d))))
                                    : ((0xf8U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | ((4U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                                 >> 4U)) 
                                          | (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)))))
                                : ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))
                                    ? ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | ((2U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                                 >> 5U)) 
                                          | (1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d))))
                                    : ((0xfeU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)) 
                                       | (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                                >> 6U))))));
                }
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_ELPM))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                    = ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_indirect_addr))
                        ? (0xffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 8U)) : (0xffU 
                                               & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                              >> 9U)))) {
                    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__select_io_in_stam) {
                        if ((1U & (~ ((((((((((((((
                                                   ((((((((((((((((((0U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) 
                                                                    || (1U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                   || (2U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                  || (3U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                 || (4U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                                || (5U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                               || (6U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                              || (7U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                             || (8U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                            || (9U 
                                                                == 
                                                                (0x7fU 
                                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                           || (0xaU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                          || (0xbU 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                         || (0xcU 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                        || (0xdU 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                       || (0xeU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                      || (0xfU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                     || (0x10U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                    || (0x11U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                   || (0x12U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                  || (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                 || (0x14U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                || (0x15U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                               || (0x16U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                              || (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                             || (0x18U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                            || (0x19U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                           || (0x1aU 
                                               == (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                          || (0x1bU 
                                              == (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                         || (0x1cU 
                                             == (0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                        || (0x1dU == 
                                            (0x7fU 
                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                       || (0x1eU == 
                                           (0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                      || (0x1fU == 
                                          (0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                                = (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                    == ((IData)(0x3dU) 
                                        + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))
                                    ? (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP))
                                    : (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                        == ((IData)(0x3eU) 
                                            + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))
                                        ? (0x1fU & 
                                           ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP) 
                                            >> 8U))
                                        : (((0x7fU 
                                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                            == ((IData)(0x3fU) 
                                                + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))
                                            ? (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS)
                                            : (IData)(vlSelfRef.x16_main__DOT__avr_data_in))));
                        }
                    } else {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                            = vlSelfRef.x16_main__DOT__avr_data_in;
                    }
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN))) {
                if ((0U == (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r;
                } else if ((1U == (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_PLUS_ONE;
                } else if ((2U == (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_MINUS_ONE;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN))) {
                if ((1U == (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_PLUS_ONE;
                } else if ((2U == (3U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r_MINUS_ONE;
                }
            }
        }
    } else {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data = 0U;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_data 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data;
}

extern const VlUnpacked<CData/*2:0*/, 64> Vx16_main__ConstPool__TABLE_ha031eda2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vx16_main__ConstPool__TABLE_h4e24d346_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vx16_main__ConstPool__TABLE_h4b718479_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vx16_main__ConstPool__TABLE_hb612a1f3_0;

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__14(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    __Vtableidx25 = (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n) 
                      << 5U) | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_cnt) 
                                 << 4U) | (((IData)(vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))))));
    if ((1U & Vx16_main__ConstPool__TABLE_ha031eda2_0
         [__Vtableidx25])) {
        vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n 
            = Vx16_main__ConstPool__TABLE_h4e24d346_0
            [__Vtableidx25];
    }
    if ((2U & Vx16_main__ConstPool__TABLE_ha031eda2_0
         [__Vtableidx25])) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset 
            = Vx16_main__ConstPool__TABLE_h4b718479_0
            [__Vtableidx25];
    }
    if ((4U & Vx16_main__ConstPool__TABLE_ha031eda2_0
         [__Vtableidx25])) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_cnt 
            = Vx16_main__ConstPool__TABLE_hb612a1f3_0
            [__Vtableidx25];
    }
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__1(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ne 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed) 
           ^ (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t3z 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed)) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t3z;
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__2(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_r) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_rr));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__15(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____Vcellinp__audio_attr_ram__rd_addr 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r) 
            << 2U) | (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____Vcellinp__audio_attr_ram__rd_addr;
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__3(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_irq)) 
           & (IData)(vlSelfRef.x16_main__DOT__vera_irq_n));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRQ = vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__16(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__state = vlSelfRef.__Vdly__x16_main__DOT__cpu_inst__DOT__state;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n 
        = vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__17(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX = vlSelfRef.x16_main__DOT__cpu_din_int;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__18(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt 
        = (1U & (IData)(vlSelfRef.x16_main__DOT__clk_div));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk_wdt 
        = vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_clk 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk_wdt;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__19(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__19\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset 
        = (1U & ((~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst)) 
                 & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n))));
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__4(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR = ((
                                                   ((~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__I)) 
                                                    & (IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ)) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD_valid)
                                                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD)
                                                    : (IData)(vlSelfRef.x16_main__DOT__cpu_din_int)));
}

extern const VlUnpacked<CData/*0:0*/, 256> Vx16_main__ConstPool__TABLE_hd858ed19_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vx16_main__ConstPool__TABLE_h3202410d_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vx16_main__ConstPool__TABLE_h011ad514_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vx16_main__ConstPool__TABLE_hced45472_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vx16_main__ConstPool__TABLE_hbe1dfdb2_0;

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__5(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*10:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*12:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx3 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) 
                     << 7U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_reg) 
                                << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_register 
        = Vx16_main__ConstPool__TABLE_hd858ed19_0[__Vtableidx3];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD 
        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_bcd) 
           & (0xdU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_shift_right 
        = (((0xdU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
            | ((0x24U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
               | (0x23U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) 
           & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__shift_right));
    __Vtableidx6 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_only) 
                     << 0xcU) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__compare) 
                                  << 0xbU) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__inc) 
                                               << 0xaU) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__shift) 
                                                  << 9U) 
                                                 | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__C) 
                                                     << 8U) 
                                                    | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__rotate) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO) 
                                                           << 6U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))))))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__CI = Vx16_main__ConstPool__TABLE_h3202410d_0
        [__Vtableidx6];
    __Vtableidx5 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__backwards) 
                     << 0xaU) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__op) 
                                  << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op 
        = Vx16_main__ConstPool__TABLE_h011ad514_0[__Vtableidx5];
    __Vtableidx2 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store) 
                     << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state));
    vlSelfRef.cpu_we = Vx16_main__ConstPool__TABLE_hced45472_0
        [__Vtableidx2];
    __Vtableidx4 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__dst_reg) 
                     << 9U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__index_y) 
                                << 8U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__src_reg) 
                                           << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel 
        = Vx16_main__ConstPool__TABLE_hbe1dfdb2_0[__Vtableidx4];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__BCD 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__right 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_shift_right;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CI 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__CI;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__op 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__adder_CI 
        = ((~ ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_shift_right) 
               | (3U == (3U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op) 
                               >> 2U))))) & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CI));
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_wr_n 
        = (1U & (~ (IData)(vlSelfRef.cpu_we)));
    vlSelfRef.x16_main__DOT__cpu_we = vlSelfRef.cpu_we;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0 
        = (0x100U | vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
           [vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel]);
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__WE = vlSelfRef.x16_main__DOT__cpu_we;
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_rd_n 
        = vlSelfRef.x16_main__DOT__cpu_we;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__we_i 
        = vlSelfRef.x16_main__DOT__cpu_we;
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vx16_main__ConstPool__TABLE_h986036e3_0;

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__6(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__backwards) 
                     << 0xaU) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge) 
                                  << 9U) | (((IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ) 
                                             << 8U) 
                                            | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__I) 
                                                << 7U) 
                                               | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_inc 
        = Vx16_main__ConstPool__TABLE_h986036e3_0[__Vtableidx1];
    vlSelfRef.cpu_dout = ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                           ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                   ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                               : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                           : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                               ? 0U
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)))
                                       : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)))
                                   : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                               : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__php)
                                                   ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__P)
                                                   : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))
                                           : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                               ? 0U
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))))))
                           : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL)
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCH))
                                           : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                               ? 0U
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))))
                                   : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                       ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)))
                               : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                                   ? 0U
                                                   : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                               : (((IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge))
                                                   ? 
                                                  (0xefU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__P))
                                                   : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__P)))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL)
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCH))))
                                   : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                       ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)))));
    vlSelfRef.x16_main__DOT__cpu_dout = vlSelfRef.cpu_dout;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__DO = vlSelfRef.x16_main__DOT__cpu_dout;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__dat_i 
        = vlSelfRef.x16_main__DOT__cpu_dout;
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__7(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
        = ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
            ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                    : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                            : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL))
                                : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))
                : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                        : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))
                    : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))
            : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                        : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))
                    : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))
                : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                            : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                : ((((~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__I)) 
                                     & (IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ)) 
                                    | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge))
                                    ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                        << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                                    : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))))
                        : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__res)
                                    ? 0xfffcU : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge)
                                                  ? 0xfffaU
                                                  : 0xfffeU)))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))
                    : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL))
                                : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))));
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__20(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__20\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n 
        = vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n;
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__8(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.cpu_addr = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                       : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                                           : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))));
            } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)
                        : 0U);
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            }
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
        } else if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                vlSelfRef.cpu_addr = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (IData)(vlSelfRef.x16_main__DOT__cpu_din_int)
                                           : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL)))
                                       : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                           : (0x100U 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))));
            } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                    vlSelfRef.cpu_addr = (0x100U | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                    vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0;
                }
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                vlSelfRef.cpu_addr = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                           << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                       : (0x100U | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)));
            }
        } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                vlSelfRef.cpu_addr = (0x100U | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                vlSelfRef.cpu_addr = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0)
                                       : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                           << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL)));
            }
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & 0U);
        } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__txb_ins)
                                 ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__trb_ins)
                                     ? (~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                     : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                 : 0U));
                vlSelfRef.cpu_addr = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                       << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL));
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
            }
            vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
        }
    } else if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & 0U);
                }
                vlSelfRef.cpu_addr = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (0x100U 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                                       : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
            } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                    vlSelfRef.cpu_addr = (0x100U | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                    vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0;
                }
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                vlSelfRef.cpu_addr = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                           << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                       : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
            }
        } else {
            if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.cpu_addr = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                                       : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                                           : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))));
            } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                    vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                    vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_din_int;
                }
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.cpu_addr = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                           << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                       : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
            }
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
        }
    } else if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & 0U);
                    vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                    vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
                }
            } else {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_only)
                            ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & 0U);
                }
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            }
        } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
                vlSelfRef.cpu_addr = (0x100U | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
            }
        } else {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                vlSelfRef.cpu_addr = (0x100U | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0;
            }
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & 0U);
        }
    } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                vlSelfRef.cpu_addr = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                       << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL));
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
                vlSelfRef.cpu_addr = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                       << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
            }
        } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX;
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL));
            vlSelfRef.cpu_addr = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
            vlSelfRef.cpu_addr = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                   << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL));
        }
    } else {
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                             ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX)));
        }
        vlSelfRef.cpu_addr = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                   << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__BI 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op))
                ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI)
                : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                   ^ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI)))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op))
                ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                   & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI))
                : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                   | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI))));
    if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_shift_right) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic 
            = ((0x100U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                          << 8U)) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CI) 
                                      << 7U) | (0x7fU 
                                                & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                                                   >> 1U))));
    }
    vlSelfRef.x16_main__DOT__bank_cs = (1U >= (IData)(vlSelfRef.cpu_addr));
    vlSelfRef.x16_main__DOT__low_ram_cs = ((2U <= (IData)(vlSelfRef.cpu_addr)) 
                                           & (0x9effU 
                                              >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__io_cs = ((0x9f00U <= (IData)(vlSelfRef.cpu_addr)) 
                                      & (0x9fffU >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__hi_ram_cs = ((0xa000U 
                                           <= (IData)(vlSelfRef.cpu_addr)) 
                                          & (0xbfffU 
                                             >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__banked_rom_cs = (0xc000U 
                                              <= (IData)(vlSelfRef.cpu_addr));
    vlSelfRef.x16_main__DOT__via_2_cs = ((0x9f10U <= (IData)(vlSelfRef.cpu_addr)) 
                                         & (0x9f1fU 
                                            >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__ym_cs = ((0x9f40U <= (IData)(vlSelfRef.cpu_addr)) 
                                      & (0x9f41U >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__unavail_cs = ((0x9f42U 
                                            <= (IData)(vlSelfRef.cpu_addr)) 
                                           & (0x9f5fU 
                                              >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__io3_cs = ((0x9f60U <= (IData)(vlSelfRef.cpu_addr)) 
                                       & (0x9f7fU >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__io4_cs = ((0x9f80U <= (IData)(vlSelfRef.cpu_addr)) 
                                       & (0x9f9fU >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__io5_cs = ((0x9fa0U <= (IData)(vlSelfRef.cpu_addr)) 
                                       & (0x9fbfU >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__io6_cs = ((0x9fc0U <= (IData)(vlSelfRef.cpu_addr)) 
                                       & (0x9fdfU >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__io7_cs = ((0x9fe0U <= (IData)(vlSelfRef.cpu_addr)) 
                                       & (0x9fffU >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__cpu_addr = vlSelfRef.cpu_addr;
    vlSelfRef.x16_main__DOT__via_1_cs = ((0x9f00U <= (IData)(vlSelfRef.cpu_addr)) 
                                         & (0x9f0fU 
                                            >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr 
        = (0x1fU & (IData)(vlSelfRef.cpu_addr));
    vlSelfRef.x16_main__DOT__vera_cs = ((0x9f20U <= (IData)(vlSelfRef.cpu_addr)) 
                                        & (0x9f3fU 
                                           >= (IData)(vlSelfRef.cpu_addr)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_BI 
        = (0xffU & ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op))
                     ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op))
                         ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic))
                     : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op))
                         ? (~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI))
                         : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AB = vlSelfRef.x16_main__DOT__cpu_addr;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs_i 
        = vlSelfRef.x16_main__DOT__via_1_cs;
    vlSelfRef.x16_main__DOT__via_1_cs_pulse = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_cs_d)) 
                                               & (IData)(vlSelfRef.x16_main__DOT__via_1_cs));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wo 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_cs) 
           & (IData)(vlSelfRef.cpu_we));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs = vlSelfRef.x16_main__DOT__via_1_cs;
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__access_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__adr_i 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr;
    if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt = 0xbU;
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 0U;
                        if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        vlSelfRef.x16_main__DOT__via_t2_if = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_if = 0U;
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_if = 0U;
                    }
                    if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_if = 0U;
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_if = 0U;
                        if (((4U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode)) 
                             | (5U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode)))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o = 0U;
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        vlSelfRef.x16_main__DOT__via_t1_if = 0U;
                    }
                }
            }
        }
    }
    if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
        if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        vlSelfRef.x16_main__DOT__via_t3_if = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_cs_n 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__vera_cs)));
    vlSelfRef.x16_main__DOT____VdfgRegularize_h76422dab_1_2 
        = ((IData)(vlSelfRef.x16_main__DOT__vera_cs) 
           & (IData)(vlSelfRef.cpu_we));
    vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write 
        = ((IData)(vlSelfRef.cpu_we) & (IData)(vlSelfRef.x16_main__DOT__vera_cs));
    vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read 
        = ((IData)(vlSelfRef.x16_main__DOT__vera_cs) 
           & (~ (IData)(vlSelfRef.cpu_we)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l 
        = (0x1fU & (((0xfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic)) 
                     + (0xfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_BI))) 
                    + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__adder_CI)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__we_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wo;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_if 
        = vlSelfRef.x16_main__DOT__via_t1_if;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_if 
        = vlSelfRef.x16_main__DOT__via_t2_if;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3_if 
        = vlSelfRef.x16_main__DOT__via_t3_if;
    vlSelfRef.x16_main__DOT__via_cb1_o = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o;
    vlSelfRef.x16_main__DOT__via_ca2_o = ((4U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))
                                           ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o)
                                           : ((5U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))
                                               ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o)
                                               : (6U 
                                                  != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81042145__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0x1dU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h80e0ab29__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81779a78__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h8107dae2__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0x16U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h810a9449__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0x1fU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a2680__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h810a39cc__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0x1bU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a1230__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0xdU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h8177ab65__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (0x14U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81784d2f__0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
           & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__do_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__do_read 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC9 
        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD) 
           & (5U <= (7U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l) 
                           >> 1U))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_o 
        = vlSelfRef.x16_main__DOT__via_cb1_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_o 
        = vlSelfRef.x16_main__DOT__via_ca2_o;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_next = 0U;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81042145__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__do_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__do_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__do_read 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__do_read;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_HC 
        = (IData)((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l) 
                    >> 4U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC9)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h 
        = (0x1fU & ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic) 
                      >> 4U) + (0xfU & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_BI) 
                                        >> 4U))) + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_HC)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp 
        = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h) 
            << 4U) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO9 
        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD) 
           & (5U <= (7U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h) 
                           >> 1U))));
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__9(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__via_dout = (0xffU & ((0x10U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pai)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      (((IData)(vlSelfRef.x16_main__DOT__via_irq) 
                                                        << 7U) 
                                                       | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_irq) 
                                                           << 6U) 
                                                          | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_irq) 
                                                              << 5U) 
                                                             | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_irq) 
                                                                 << 4U) 
                                                                | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_irq) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_irq) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_irq) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_irq))))))))
                                                       : 
                                                      (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode) 
                                                        << 5U) 
                                                       | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode))))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_mode) 
                                                           << 5U) 
                                                          | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode) 
                                                              << 2U) 
                                                             | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_le) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_le)))))
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1) 
                                                       >> 8U)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                       ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pai)
                                                       : (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi)))))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__dat_o 
        = vlSelfRef.x16_main__DOT__via_dout;
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__10(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0 = 0;
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
        = ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r
            : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r);
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r;
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
          & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_r) 
          & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_port_r)) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
         & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
            | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__do_write;
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
         & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
            | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_next = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_next = 1U;
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
         & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
            | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))))) {
        if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r) 
              & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
             & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_next 
                = ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                    ? vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r
                    : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r);
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_r)
                ? vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r
                : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r);
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txstart = 0U;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x1eU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txstart = 1U;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_r) 
          & (0x1eU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txstart = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r;
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
          & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r;
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
          & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 1U;
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
           & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
          & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 1U;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 1U;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 1U;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 1U;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 1U;
    }
    if ((1U & (~ (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                   & (((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                       | (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                      | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) 
                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r))))) {
        if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r) 
                      & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))))) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_next = 0U;
            }
            if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r)))) {
                if ((1U & (~ ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                                & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                              & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r)))))) {
                    if ((1U & (~ ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                                    | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
                                   & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))))) {
                        if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                              & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                             & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                >> 9U))) {
                            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_next = 0U;
                        } else if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                                     & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                                    & (~ (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                          >> 9U)))) {
                            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_next = 0U;
                        }
                    }
                }
            }
        }
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r) 
             & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r)))) {
            if ((1U & (~ ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                            & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                           & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                          & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r)))))) {
                if ((1U & (~ ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                                | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
                               & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))))) {
                    if ((1U & (~ (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                                   & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                                  & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                     >> 9U))))) {
                        if ((1U & (~ (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                                       & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                                      & (~ (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                            >> 9U)))))) {
                            if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r) 
                                 & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
                                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_audio_address 
        = (0x7e7U == (0x7ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
                                >> 6U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_palette_address 
        = (0xfdU == (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
                              >> 9U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_sprite_attr_address 
        = (0x7fU == (0x7fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
                              >> 0xaU)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__txstart 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txstart;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0 
        = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_audio_address) 
                    | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_palette_address) 
                       | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_sprite_attr_address)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_next = 0U;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
         & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
            | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))))) {
        if ((1U & (~ (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r) 
                       & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                      & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))))) {
            if (x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_r;
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_r;
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r;
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r;
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_next 
                    = ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r)
                        : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r));
            }
        }
    }
}

VL_INLINE_OPT void Vx16_main___024root___nba_comb__TOP__11(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_comb__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ x16_main__DOT__vera_data__strong__out1;
    x16_main__DOT__vera_data__strong__out1 = 0;
    // Body
    vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
        = (0xffU & ((0x10U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                     ? ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                         ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                             ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_busy) 
                                         << 7U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_r) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_r))))
                                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_rxdata))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? 0U : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r)))
                             : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full) 
                                         << 7U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty) 
                                                    << 6U) 
                                                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r) 
                                                          << 4U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r)))))
                                     : (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r) 
                                                >> 8U)))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r)
                                     : (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r) 
                                                >> 8U)))))
                         : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                             ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r)
                                     : ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r)) 
                                        | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r))))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r)
                                     : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r) 
                                         << 6U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r)))))))
                             : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r) 
                                                >> 8U))
                                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                                                >> 8U))
                                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r)))))
                     : ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                         ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                             ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r)) 
                                        | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)))
                                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r) 
                                         << 6U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r) 
                                                          << 2U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r)))))
                                     : ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                         ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r)
                                         : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r) 
                                                >> 1U)
                                             : ((5U 
                                                 == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                                 ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_high)
                                                 : 0U)))))
                             : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                         ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r)
                                         : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r) 
                                                >> 1U)
                                             : ((5U 
                                                 == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                                 ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)
                                                 : 0U)))
                                     : ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                         ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r)
                                         : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r) 
                                                >> 2U)
                                             : 0x2fU)))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                         ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__current_field) 
                                             << 7U) 
                                            | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r) 
                                                << 6U) 
                                               | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r) 
                                                   << 5U) 
                                                  | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r) 
                                                      << 4U) 
                                                     | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r) 
                                                            << 2U) 
                                                           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r)))))))
                                         : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r) 
                                                >> 2U)
                                             : ((2U 
                                                 == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                                 ? 
                                                (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_transparency_enabled) 
                                                  << 7U) 
                                                 | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_write_enabled) 
                                                     << 6U) 
                                                    | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_fill_enabled) 
                                                        << 5U) 
                                                       | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_one_byte_cache_cycling) 
                                                           << 4U) 
                                                          | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_16bit_hop) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_4bit_mode) 
                                                                 << 2U) 
                                                                | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_addr1_mode)))))))
                                                 : 0x56U)))
                                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__scanline))))
                         : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                             ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_collisions) 
                                         << 4U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low) 
                                                    << 3U) 
                                                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r)))))
                                     : ((0x80U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r) 
                                                  >> 1U)) 
                                        | ((0x40U & 
                                            ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__scanline) 
                                             >> 2U)) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_r) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_r)))))))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r) 
                                         << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r))
                                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data1_r)))
                             : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data0_r)
                                     : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)
                                         ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r 
                                                           >> 0x10U))))))
                                         : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r 
                                                           >> 0x10U))))))))
                                 : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)
                                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r 
                                            >> 8U) : 
                                        (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r 
                                         >> 8U)) : 
                                    ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)
                                      ? vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r
                                      : vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r)))))));
    x16_main__DOT__vera_data__strong__out1 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read)
                                                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__rddata)
                                                : 0U) 
                                              & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read)
                                                  ? 0xffU
                                                  : 0U));
    vlSelfRef.x16_main__DOT__vera_data = ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read)
                                             ? 0xffU
                                             : 0U) 
                                           & (IData)(x16_main__DOT__vera_data__strong__out1)) 
                                          | (((IData)(vlSelfRef.x16_main__DOT____VdfgRegularize_h76422dab_1_2)
                                               ? (IData)(vlSelfRef.cpu_dout)
                                               : 0U) 
                                             & ((IData)(vlSelfRef.x16_main__DOT____VdfgRegularize_h76422dab_1_2)
                                                 ? 0xffU
                                                 : 0U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_d 
        = vlSelfRef.x16_main__DOT__vera_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h8107dae2__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_next 
            = (0xfcU & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 1U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h8177ab65__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_next 
            = (3U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_next 
            = (3U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 6U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_next 
            = (3U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81779a78__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_next 
            = (0xfcU & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 1U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a1230__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_next 
            = (3U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_next 
            = (3U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 6U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_next 
            = (3U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fpga_reconfigure_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fpga_reconfigure_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h80e0ab29__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_next 
            = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                        >> 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__fpga_reconfigure_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 7U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h810a9449__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 2U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h810a39cc__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 7U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 5U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_next 
            = (0xfU & (IData)(vlSelfRef.x16_main__DOT__vera_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_next 
            = ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
               << 1U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 6U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 5U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_next 
            = (3U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_next 
            = ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
               << 2U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_next 
            = ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
               << 2U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_next 
            = ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
               << 1U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__write_data 
        = vlSelfRef.x16_main__DOT__vera_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__write_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81042145__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x1cU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x15U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a2680__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r) 
               & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 2U)));
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a2680__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r) 
               & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 1U)));
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_irq) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a2680__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r) 
               & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data)));
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x19U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_next 
            = ((0xf00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x1aU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_next)) 
               | (0xf00U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                            << 8U)));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x17U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_next 
            = ((0xf00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x18U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_next)) 
               | (0xf00U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                            << 8U)));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x12U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_next 
            = ((0xf00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x13U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_next)) 
               | (0xf00U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                            << 8U)));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_next 
            = ((0xf00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (0x11U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_next)) 
               | (0xf00U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                            << 8U)));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_next = 0U;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 5U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 7U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_next 
            = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                        >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_next 
            = (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_next 
            = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                        >> 2U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_next = 0U;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 6U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next 
            = ((0x7f00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_next 
            = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                       >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_bit16 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_nibble 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 1U));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_bit16 
            = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
                     >> 0x10U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_nibble 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_next 
            = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                       >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_bit16 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_nibble 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 1U));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_bit16 
            = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r 
                     >> 0x10U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_nibble 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next 
            = ((0x7f00U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 4U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 5U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_next 
            = (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 6U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 7U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81784d2f__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_next 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__vera_data));
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_next)) 
               | (0x100U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                            << 1U)));
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write) 
         & (8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_next 
            = ((0x100U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_next)) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_r;
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
          & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_next 
            = (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__write_data;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_r) 
          & (0x1eU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txdata = 0xffU;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r;
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
         & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
            | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_next 
            = ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r) 
                 & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))
                ? ((0x80U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data))
                    ? ((0x40U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data))
                        ? ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r)) 
                           | (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r)))
                        : ((0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r)) 
                           | ((0xcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r)) 
                              | (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r)))))
                    : ((0x40U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data))
                        ? ((0xc0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r)) 
                           | ((0x30U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r)) 
                              | (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r))))
                        : ((0xc0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r)) 
                           | (0x3fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r)))))
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next 
            = (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 1U));
    } else if ((((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
                   & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r))) 
                  & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                 & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_r)
                ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next)) 
                   | (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))))
                : (3U & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))));
    } else if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r)) 
                & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                   | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_and_nibble_incremented 
                = (7U & ((IData)(1U) + (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r) 
                                         << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r))));
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next 
                = (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_and_nibble_incremented) 
                         >> 1U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_next 
                = (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_and_nibble_incremented));
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_r)
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next)) 
                       | (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))))
                    : (3U & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))));
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated = 0U;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
          & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated = 1U;
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
          & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated = 1U;
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
          & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated = 1U;
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
           & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
          & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_new;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_new;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next)) 
               | (0x7f00U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                             << 8U)));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 7U));
        if (((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)) 
             | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
                = (0x100U | (0xffe00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next));
        }
    }
    if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
           & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
          & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))) 
         & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
            = (0xffdffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next);
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                     >> 7U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next 
            = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next)) 
               | (0x7f00U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                             << 8U)));
        if (((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)) 
             | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
                = (0x100U | (0xffe00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next));
        }
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
            = ((0xe01ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 9U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
            = ((0x1ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next) 
               | (0xe0000U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                              << 0x11U)));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
            = ((0xffffeU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next) 
               | (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                        >> 7U)));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
            = ((0xe01ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 9U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
            = ((0x1ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next) 
               | (0xe0000U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                              << 0x11U)));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
            = ((0xffffeU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next) 
               | (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                        >> 7U)));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
            = ((0xffe01U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 1U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next 
            = ((0xffe01U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 1U));
    }
    if ((1U & (~ (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                   & (((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                       | (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                      | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) 
                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r))))) {
        if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r) 
                      & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))))) {
            if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r)))) {
                if ((1U & (~ ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                                & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                              & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r)))))) {
                    if ((1U & (~ ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                                    | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
                                   & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))))) {
                        if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                              & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                             & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                >> 9U))) {
                            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next 
                                = (0xffdffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next);
                        }
                    }
                }
            }
        }
    }
    if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache 
            = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r)
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r)
                        : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r) 
                           >> 4U)));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache 
            = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r)
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r)
                        : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r) 
                           >> 4U)));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r;
    }
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_nibble 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r)
                    ? ((0xf0000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                       | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                           << 0x18U) | (0xffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)))
                    : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                        << 0x1cU) | (0xfffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)));
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_byte 
                = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache) 
                    << 0x18U) | (0xffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r));
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_nibble 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r)
                    ? ((0xfff00000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                       | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                           << 0x10U) | (0xffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)))
                    : ((0xff000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                       | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                           << 0x14U) | (0xfffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r))));
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_byte 
                = ((0xff000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache) 
                       << 0x10U) | (0xffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)));
        }
    } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_nibble 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r)
                ? ((0xfffff000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                       << 8U) | (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)))
                : ((0xffff0000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                       << 0xcU) | (0xfffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r))));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_byte 
            = ((0xffff0000U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
               | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache) 
                   << 8U) | (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_nibble 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r)
                ? ((0xfffffff0U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                   | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache))
                : ((0xffffff00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
                   | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache) 
                       << 4U) | (0xfU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r))));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_byte 
            = ((0xffffff00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next 
        = (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
              & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r)) 
             & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) 
            & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r))
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_nibble
            : (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read) 
                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r)) 
                 & ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                    | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) 
                & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r)))
                ? vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_byte
                : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r));
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next 
            = ((0xffffff00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next) 
               | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next 
            = ((0xffff00ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 8U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next 
            = ((0xff00ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 0x10U));
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next 
            = ((0xffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next) 
               | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data) 
                  << 0x18U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_0_needs_to_be_changed = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_next = 0U;
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_r) 
          & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_port_r)) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_low 
        = (0xffU & (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                       & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)) 
                     & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode))
                     ? ((0xfcU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r) 
                        | (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data)))
                     : (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                           & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)) 
                         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode)))
                         ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data)
                         : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_low 
        = (0xffU & ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                      & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                     & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)))
                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data)
                     : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_high 
        = (0xffU & ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                      & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                     & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r))
                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data)
                     : (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r 
                        >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_high 
        = (0xffU & ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                      & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                     & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)))
                     ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__write_data)
                     : (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
                        >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_bit16) 
            << 0x10U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_high) 
                          << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_low)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_bit16) 
            << 0x10U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_high) 
                          << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_low)));
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
              | (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
             | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) 
         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_0_needs_to_be_changed = 1U;
    } else if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                 | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
                & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_0_needs_to_be_changed = 2U;
    }
    if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_0_needs_to_be_changed))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_incr_decr_0;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_incr_decr_0;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_nibble;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x 
        = (0x7ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                     >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y 
        = (0x7ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r 
                     >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_x 
        = (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_y 
        = (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map = 1U;
    if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_position_repeat 
            = ((2U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y) 
                      >> 2U)) | (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x) 
                                       >> 3U)));
        if ((IData)(((0U == (0x7f0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y))) 
                     & (0U == (0x7f0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x)))))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_position_repeat 
            = ((0x38U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y)) 
               | (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x) 
                        >> 3U)));
        if ((IData)(((0U == (0x7c0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y))) 
                     & (0U == (0x7c0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x)))))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_position_repeat 
            = ((0x3e0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y) 
                          << 2U)) | (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x) 
                                              >> 3U)));
        if ((IData)(((0U == (0x700U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y))) 
                     & (0U == (0x700U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x)))))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map = 0U;
        }
    } else if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_position_repeat 
            = ((0x3f80U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y) 
                           << 4U)) | (0x7fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x) 
                                               >> 3U)));
        if ((1U & ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y) 
                       >> 0xaU)) & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x) 
                                       >> 0xaU))))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map = 0U;
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_index_looked_up 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_r) 
            & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map))
            ? 0U : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tileindex_lookup 
        = (0x1ffffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_r) 
                        << 0xbU) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_position_repeat)));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tiledata_using_tilemap 
            = (0x1ffffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_r) 
                            << 0xbU) + (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_index_looked_up) 
                                         << 5U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_y) 
                                                    << 2U) 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_x) 
                                                         >> 1U))))));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_tiledata_using_tilemap 
            = (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_x));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_start_of_horizontal_fill_line 
            = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
                           + ((0x1fc00U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                                          >> 0x13U)))) 
                                           << 0xaU)) 
                              | (0x3ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                           >> 0xaU)))));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_start_of_horizontal_fill_line 
            = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                     >> 9U));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tiledata_using_tilemap 
            = (0x1ffffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_r) 
                            << 0xbU) + (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_index_looked_up) 
                                         << 6U) | (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_y) 
                                                    << 3U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_x)))));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_tiledata_using_tilemap = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_start_of_horizontal_fill_line 
            = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
                           + ((0x1f800U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                                          >> 0x13U)))) 
                                           << 0xbU)) 
                              | (0x7ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                           >> 9U)))));
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_start_of_horizontal_fill_line = 0U;
    }
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
              | (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
             | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 7U;
    } else if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r) 
                & (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 5U;
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 3U;
    } else if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                  & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                 & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 1U;
    } else if (((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
                  | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_read)) 
                 & (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 1U;
    } else if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                 & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                   >> 9U))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 2U;
    } else if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r) 
                 & (1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r))) 
                & (~ (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                      >> 9U)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 1U;
    } else if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r) 
                & (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = 6U;
    }
    if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set;
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_nibble;
            } else {
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_start_of_horizontal_fill_line;
                vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_start_of_horizontal_fill_line;
            }
        } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tileindex_lookup;
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_next = 1U;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set;
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_nibble;
        }
    } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tiledata_using_tilemap;
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_tiledata_using_tilemap;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_10;
            vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_incr_decr_1;
        }
    } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_incr_decr_1;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_nibble;
    }
    if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_0_needs_to_be_changed))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_next = 1U;
    } else if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__txdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txdata;
}

void Vx16_main___024root___eval_triggers__act(Vx16_main___024root* vlSelf);
void Vx16_main___024root___eval_act(Vx16_main___024root* vlSelf);

bool Vx16_main___024root___eval_phase__act(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vx16_main___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vx16_main___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vx16_main___024root___eval_nba(Vx16_main___024root* vlSelf);

bool Vx16_main___024root___eval_phase__nba(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vx16_main___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__ico(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG
bool Vx16_main___024root___eval_phase__ico(Vx16_main___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__nba(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__act(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG

void Vx16_main___024root___eval(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x7d0U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vx16_main___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/x16_main.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vx16_main___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x7d0U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vx16_main___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/x16_main.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x7d0U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vx16_main___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/x16_main.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vx16_main___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vx16_main___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vx16_main___024root___eval_debug_assertions(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelfRef.cpu_nmi & 0xfeU))) {
        Verilated::overWidthError("cpu_nmi");}
    if (VL_UNLIKELY((vlSelfRef.spi_miso & 0xfeU))) {
        Verilated::overWidthError("spi_miso");}
}
#endif  // VL_DEBUG

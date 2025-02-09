// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main__Syms.h"
#include "Vx16_main___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__ico(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG

void Vx16_main___024root___eval_triggers__ico(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vx16_main___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__act(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG

void Vx16_main___024root___eval_triggers__act(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vdeeptemp_h059f960e__0;
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.clock) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))) 
                                       | ((~ (IData)(vlSelfRef.reset_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clock) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))));
    vlSelfRef.__VactTriggered.set(2U, (((IData)(vlSelfRef.clock) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))) 
                                       | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__sys_rst__0)))));
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__bus_write__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__bus_read__0))));
    vlSelfRef.__VactTriggered.set(5U, (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__clk__0))) 
                                       | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__reset__0)))));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(7U, (((IData)(vlSelfRef.clock) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))) 
                                       | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in__0)))));
    vlSelfRef.__VactTriggered.set(8U, ((IData)(vlSelfRef.x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i__0))));
    __Vdeeptemp_h059f960e__0 = ((((((((((((((((((((
                                                   (((((((((((((((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT__0)) 
                                                                      | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC) 
                                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC__0))) 
                                                                     | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD) 
                                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD__0))) 
                                                                    | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW__0))) 
                                                                   | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND__0))) 
                                                                  | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR) 
                                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR__0))) 
                                                                 | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM__0))) 
                                                                | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP__0))) 
                                                               | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC__0))) 
                                                              | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI__0))) 
                                                             | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC__0))) 
                                                            | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR__0))) 
                                                           | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL__0))) 
                                                          | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS__0))) 
                                                         | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU__0))) 
                                                        | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC__0))) 
                                                       | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR__0))) 
                                                      | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL) 
                                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL__0))) 
                                                     | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS__0))) 
                                                    | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU__0))) 
                                                   | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG) 
                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG__0))) 
                                                  | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR) 
                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR__0))) 
                                                 | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR) 
                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR__0))) 
                                                | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC__0))) 
                                               | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI) 
                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI__0))) 
                                              | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW) 
                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW__0))) 
                                             | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx) 
                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx__0))) 
                                            | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB) 
                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB__0))) 
                                           | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI__0))) 
                                          | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN__0))) 
                                         | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN__0))) 
                                        | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN) 
                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN__0))) 
                                       | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN__0))) 
                                      | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN__0))) 
                                     | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN) 
                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN__0))) 
                                    | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN__0))) 
                                   | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst) 
                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst__0))) 
                                  | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp) 
                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp__0))) 
                                 | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc) 
                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc__0))) 
                                | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc__0)));
    vlSelfRef.__VactTriggered.set(9U, ((((__Vdeeptemp_h059f960e__0 
                                          | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal__0))) 
                                         | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_in_1__0))) 
                                        | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2) 
                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_in_2__0))) 
                                       | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_out__0))));
    vlSelfRef.__VactTriggered.set(0xaU, (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__sys_rst__0))) 
                                         | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_rst_out) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__wdt_rst_out__0)))));
    vlSelfRef.__VactTriggered.set(0xbU, (((IData)(vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT____Vcellinp__attiny_inst__clk_wdt__0))) 
                                         | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__sys_rst__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__sys_rst__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__bus_write__0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__bus_write;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__bus_read__0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__clk__0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__reset__0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__reset;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in__0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i__0 
        = vlSelfRef.x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_in_1__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_in_2__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_out__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_out;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__wdt_rst_out__0 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_rst_out;
    vlSelfRef.__Vtrigprevexpr___TOP__x16_main__DOT____Vcellinp__attiny_inst__clk_wdt__0 
        = vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(9U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vx16_main___024root___dump_triggers__act(vlSelf);
    }
#endif
}

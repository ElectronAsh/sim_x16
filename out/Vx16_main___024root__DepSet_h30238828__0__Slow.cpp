// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main___024root.h"

VL_ATTR_COLD void Vx16_main___024root___eval_static__TOP(Vx16_main___024root* vlSelf);

VL_ATTR_COLD void Vx16_main___024root___eval_static(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vx16_main___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vx16_main___024root___eval_static__TOP(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__C = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__I = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__D = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__V = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__N = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_1 = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__por_cnt_r = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ro = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed = 0U;
}

VL_ATTR_COLD void Vx16_main___024root___eval_initial__TOP(Vx16_main___024root* vlSelf);

VL_ATTR_COLD void Vx16_main___024root___eval_initial(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vx16_main___024root___eval_initial__TOP(vlSelf);
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
}

VL_ATTR_COLD void Vx16_main___024root___eval_initial__TOP(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement = 0x20U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i)) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i)] 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i)] 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i 
            = ((IData)(1U) + vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[0U] = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[0x1000U] = 0x12345678U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_display_next_pixel = 1U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_max = 0xffU;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_request = 0U;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__RDY = 1U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_1a_8 = 0x1bU;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_2a_8 = 0x35U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cyc_i = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__stb_i = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ce_i = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid_i = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid_i = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ce = 1U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__read_d = 1U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__read_r = 1U;
}

VL_ATTR_COLD void Vx16_main___024root___eval_final(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__stl(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vx16_main___024root___eval_phase__stl(Vx16_main___024root* vlSelf);

VL_ATTR_COLD void Vx16_main___024root___eval_settle(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x7d0U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vx16_main___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/x16_main.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vx16_main___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__stl(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx16_main___024root___stl_sequent__TOP__0(Vx16_main___024root* vlSelf);
VL_ATTR_COLD void Vx16_main___024root___stl_sequent__TOP__1(Vx16_main___024root* vlSelf);
VL_ATTR_COLD void Vx16_main___024root___stl_sequent__TOP__2(Vx16_main___024root* vlSelf);

VL_ATTR_COLD void Vx16_main___024root___eval_stl(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vx16_main___024root___stl_sequent__TOP__0(vlSelf);
        Vx16_main___024root___stl_sequent__TOP__1(vlSelf);
        Vx16_main___024root___stl_sequent__TOP__2(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 16> Vx16_main__ConstPool__TABLE_had34ea41_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vx16_main__ConstPool__TABLE_hd858ed19_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vx16_main__ConstPool__TABLE_h16dbcb3d_0;
extern const VlUnpacked<CData/*5:0*/, 4> Vx16_main__ConstPool__TABLE_hf1527a20_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vx16_main__ConstPool__TABLE_h3202410d_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vx16_main__ConstPool__TABLE_h011ad514_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vx16_main__ConstPool__TABLE_hced45472_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vx16_main__ConstPool__TABLE_hbe1dfdb2_0;
extern const VlUnpacked<SData/*8:0*/, 64> Vx16_main__ConstPool__TABLE_h4ec04809_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vx16_main__ConstPool__TABLE_hbfcc6d1d_0;
extern const VlUnpacked<CData/*4:0*/, 16> Vx16_main__ConstPool__TABLE_hbd8612ea_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vx16_main__ConstPool__TABLE_h8db03e09_0;

VL_ATTR_COLD void Vx16_main___024root___stl_sequent__TOP__0(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1;
    x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1;
    x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1;
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2;
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2 = 0;
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
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*3:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*3:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*3:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*3:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*3:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    CData/*3:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*1:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*1:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*5:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.x16_main__DOT__reset_n = vlSelfRef.reset_n;
    vlSelfRef.x16_main__DOT__cpu_din = vlSelfRef.cpu_din;
    vlSelfRef.x16_main__DOT__spi_sclk = vlSelfRef.spi_sclk;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__DI = vlSelfRef.x16_main__DOT__cpu_din_int;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__OUT 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__N 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__RDY 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__RDY;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_select 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__dc_select 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__input_a_16 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                      >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__input_b_16 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                      >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__mult_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__reset_accum 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__accumulate 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__add_or_sub 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_mult_accum_cache32 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_mult_accum_cache32_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__color_depth 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__attr_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_render_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__color_depth 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__attr_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__active_render_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__active_render_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1d;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2d;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_y_incr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__border_color 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_hstart 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_hstop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_vstart 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_vstop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__irqline 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer0_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer1_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprites_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__current_field;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__line_irq 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_irq;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__palette_rgb_data 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                     >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__interlace 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__output_1_16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r_16;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__output_2_16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G_times_g_16;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__phase 
        = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
                     >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__value 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__phase 
        = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
                     >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__value 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__palette_rgb_data 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                     >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__next_pixel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_display_next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_g 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_hsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_vsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__slow 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wridx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__irq_o 
        = vlSelfRef.x16_main__DOT__via_irq;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__ce_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ce_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ro;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id_o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__i 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__i 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__i 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data 
        = vlSelfRef.x16_main__DOT__avr_pgm_data;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_in 
        = vlSelfRef.x16_main__DOT__avr_data_in;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in 
        = vlSelfRef.x16_main__DOT__avr_io_in;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_sig;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_request 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_request;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_vect 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__current_int_vect;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__executed 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__current_int_executed;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__INTERRUPT_IN_EXECUTION 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_C_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 0U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_Z_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_N_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_V_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_S_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_H_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_T_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_T_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_I_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_I_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_rst_in 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_rst_out;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_rst_out 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__core_rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_next 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_in_int 
        = vlSelfRef.x16_main__DOT__avr_data_in;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN1 = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__A = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [0U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__X = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [2U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__Y = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [3U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__S = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [1U];
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last2 
        = ((0x29U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
           | (0x237U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__line_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last 
        = (0x20cU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync 
        = ((0x290U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter)) 
           & (0x2f0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync 
        = ((0x1eaU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter)) 
           & (0x1ecU > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_addr 
        = (0xfffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr);
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_mode 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_x 
        = (0x3ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                     >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_hflip 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_collision_mask 
        = (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                   >> 0x14U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_palette_offset 
        = (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                   >> 0x18U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_width 
        = (3U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x1cU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_busy 
        = (0x9fU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wraddr 
        = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_bytesel 
        = ((1U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r)
            ? 2U : 1U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wridx 
        = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
                    >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wrdata 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
            << 0x18U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
                          << 0x10U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
                                        << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wrdata 
        = (0xffffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
                       << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i8_s 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i_s) 
                    >> 4U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q8_s 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q_s) 
                    >> 4U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G_times_g 
        = (0xfffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G_times_g_16));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval_s 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval_s 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_TWO 
        = (0x3fffU & ((IData)(2U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_THREE 
        = (0x3fffU & ((IData)(3U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE 
        = (0x1fffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP) 
                      - (IData)(1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_right 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__lrck_r)) 
           & (IData)(vlSelfRef.audio_lrck));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma2 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r)
            ? 0U : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_pulse 
        = (1U & ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r)) 
                 | (0x1fU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__div_cnt_r))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ne 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed) 
           ^ (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ne 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed) 
           ^ (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ne 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed) 
           ^ (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in_int_active 
        = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in_int) 
           ^ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in_int_n));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__mul_result_int 
        = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_1_mul) 
                      * (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_mul)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr) 
            >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr) 
              < (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r)));
    vlSelfRef.x16_main__DOT__cpu_nmi = vlSelfRef.cpu_nmi;
    vlSelfRef.x16_main__DOT__vga_r = vlSelfRef.vga_r;
    vlSelfRef.x16_main__DOT__vga_g = vlSelfRef.vga_g;
    vlSelfRef.x16_main__DOT__vga_b = vlSelfRef.vga_b;
    vlSelfRef.x16_main__DOT__vga_hsync = vlSelfRef.vga_hsync;
    vlSelfRef.x16_main__DOT__vga_vsync = vlSelfRef.vga_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_mult_accum_cache32 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_mult_accum_cache32_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__luma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_luma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__chroma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__sample_rate 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_stereo 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_16bit 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__volume 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_reset 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_r;
    __Vtableidx24 = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume_log 
        = Vx16_main__ConstPool__TABLE_had34ea41_0[__Vtableidx24];
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ack_o 
        = vlSelfRef.x16_main__DOT__via_ack_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1 = vlSelfRef.x16_main__DOT__via_ca1;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_i 
        = vlSelfRef.x16_main__DOT__via_ca2_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_i 
        = vlSelfRef.x16_main__DOT__via_cb1_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_i 
        = vlSelfRef.x16_main__DOT__via_cb2_i;
    vlSelfRef.x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__clk_div) 
                 >> 2U));
    vlSelfRef.x16_main__DOT__via_pa_t = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra;
    vlSelfRef.x16_main__DOT__via_pa_o = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao;
    vlSelfRef.x16_main__DOT__via_pb_t = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb;
    vlSelfRef.x16_main__DOT__via_pb_o = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo;
    vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in 
        = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__por_cnt_r) 
                    >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r 
        = (0xfffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r_16));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_left 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_right 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r;
    vlSelfRef.x16_main__DOT__via_ca2_t = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode) 
                                                   >> 2U)));
    vlSelfRef.x16_main__DOT__via_cb1_t = ((0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode)) 
                                          | ((3U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode)) 
                                             | (7U 
                                                == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 1U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 2U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 3U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 4U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 5U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 6U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 7U));
    vlSelfRef.x16_main__DOT__via_pa_i = ((0x80U & (
                                                   ((~ 
                                                     ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                      >> 7U)) 
                                                    << 7U) 
                                                   | (0xffffff80U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                         | ((0x40U 
                                             & (((~ 
                                                  ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                   >> 6U)) 
                                                 << 6U) 
                                                | (0xffffffc0U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                            | ((0x20U 
                                                & (((~ 
                                                     ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                      >> 5U)) 
                                                    << 5U) 
                                                   | (0xffffffe0U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                               | ((0x10U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                         >> 4U)) 
                                                       << 4U) 
                                                      | (0xfffffff0U 
                                                         & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                                  | ((8U 
                                                      & (((~ 
                                                           ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                            >> 3U)) 
                                                          << 3U) 
                                                         | (0xfffffff8U 
                                                            & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                                     | ((4U 
                                                         & (((~ 
                                                              ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                               >> 2U)) 
                                                             << 2U) 
                                                            | (0xfffffffcU 
                                                               & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                                        | ((2U 
                                                            & (((~ 
                                                                 ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra) 
                                                                  >> 1U)) 
                                                                << 1U) 
                                                               | (0xfffffffeU 
                                                                  & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao)))) 
                                                           | (1U 
                                                              & ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra)) 
                                                                 | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao))))))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__h_active 
        = (0x280U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_active 
        = (0x1e0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_r) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_rr));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_c 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) 
            << 8U) | (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_c 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx) 
              >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_c 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) 
            << 8U) | (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_c 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx) 
              >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____Vcellinp__audio_attr_ram__rd_addr 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r) 
            << 2U) | (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_ca1));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_ca2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_cb1_i));
    vlSelfRef.x16_main__DOT__via_cb2_t = (1U & ((~ 
                                                 ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode) 
                                                    >> 2U))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t3z 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed)) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t1z 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed)) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t2z 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed)) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)));
    __Vtableidx3 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) 
                     << 7U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_reg) 
                                << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_register 
        = Vx16_main__ConstPool__TABLE_hd858ed19_0[__Vtableidx3];
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter 
        = (0x3ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r) 
                     >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_vflip 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x11U));
    vlSelfRef.x16_main__DOT__via_cb2_o = (1U & ((4U 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))
                                                 ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o)
                                                 : 
                                                ((~ 
                                                  ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode) 
                                                   >> 2U)) 
                                                 | ((4U 
                                                     == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))
                                                     ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))
                                                      ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o)
                                                      : 
                                                     (6U 
                                                      != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode)))))));
    vlSelfRef.x16_main__DOT__spi_miso = vlSelfRef.spi_miso;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_addr 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
                    >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_r;
    vlSelfRef.x16_main__DOT__avr_pgm_addr = ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))
                                              ? (((0x9004U 
                                                   == 
                                                   (0xfe0fU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) 
                                                  || (0x9005U 
                                                      == 
                                                      (0xfe0fU 
                                                       & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))))
                                                  ? 
                                                 (0x1fffU 
                                                  & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_indirect_addr) 
                                                     >> 1U))
                                                  : (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC))
                                              : (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC));
    vlSelfRef.spi_ssel_n_sd = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_r)));
    vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt 
        = (1U & (IData)(vlSelfRef.x16_main__DOT__clk_div));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ = (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AV = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI7) 
                                                  ^ 
                                                  ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__BI7) 
                                                   ^ 
                                                   ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN) 
                                                    ^ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO))));
    vlSelfRef.x16_main__DOT__spi_sck = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_write_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field_r;
    if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__adj_bcd) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_bcd) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJL 
                = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC)
                    ? 6U : 0U);
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJH 
                = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO)
                    ? 6U : 0U);
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJL 
                = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC)
                    ? 0U : 0xaU);
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJH 
                = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO)
                    ? 0U : 0xaU);
        }
    } else {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJL = 0U;
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJH = 0U;
    }
    __Vtableidx12 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__N) 
                      << 7U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__V) 
                                 << 6U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__C) 
                                            << 5U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z) 
                                               << 4U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_code)))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_true 
        = Vx16_main__ConstPool__TABLE_h16dbcb3d_0[__Vtableidx12];
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_color_burst 
        = ((0x84U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           & (0xc4U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)));
    vlSelfRef.x16_main__DOT__audio_lrck = vlSelfRef.audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
    vlSelfRef.spi_mosi = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r) 
                                >> 7U));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample 
            = (0xffffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample 
            = (0xffffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r), 8U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r), 8U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a 
        = (0x1ffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a 
        = (0x1ffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_ca1));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_ca1)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_ca2_i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_ca2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_cb1_i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_cb1_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_cb2_i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_l 
        = ((0x10000U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r) 
                        << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_r 
        = ((0x10000U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r) 
                        << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r));
    vlSelfRef.audio_bck = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r;
    vlSelfRef.audio_data = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
                                  >> 0x18U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__noise_value_r 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r) 
                    >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample 
        = ((~ (IData)(vlSelfRef.audio_lrck)) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__lrck_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__subtile_hscroll 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r)
                    : (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__subtile_hscroll 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r)
                    : (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                    >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
           >> 0x1eU);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_saw 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                    >> 0xbU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_triangle 
        = (0x3fU & ((0x10000U & vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data)
                     ? (~ (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                           >> 0xaU)) : (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                                        >> 0xaU)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last2 
        = (0x20bU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter));
    x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 
        = ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx) 
               >> 9U)) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren));
    x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 
        = ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx) 
               >> 9U)) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int 
        = vlSelfRef.x16_main__DOT__avr_io_in;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_vsync_pulse 
        = ((0x2a6U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           | ((0x31aU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
              & (0x5c0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_equalization_pulse 
        = ((0x3aU > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           | ((0x31aU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
              & (0x354U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_equalization 
        = ((5U >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
           | (((0xcU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
               & (0x11U >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt))) 
              | ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
                   >= ((IData)(0x20dU) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r))) 
                  & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
                     <= ((IData)(0x212U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)))) 
                 | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
                     >= ((IData)(0x219U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r))) 
                    & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
                       <= ((IData)(0x21eU) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_left 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_scaled_r 
                      >> 6U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_right 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_scaled_r 
                      >> 6U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_pulsewidth 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                    >> 0x18U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a 
        = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                     >> 7U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_hsync_pulse 
        = (0x76U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync 
        = (((6U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
            & (0xbU >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt))) 
           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
               >= ((IData)(0x213U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r))) 
              & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
                 <= ((IData)(0x218U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_new 
        = (0xfffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                       + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_r)
                           ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r) 
                              << 5U) : ((0xf8000U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r) 
                                                         >> 0xeU)))) 
                                          << 0xfU)) 
                                        | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_new 
        = (0xfffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r 
                       + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_r)
                           ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r) 
                              << 5U) : ((0xf8000U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r) 
                                                         >> 0xeU)))) 
                                          << 0xfU)) 
                                        | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp 
        = (1U & ((0x10U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                  ? ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                      ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x19U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x1aU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x1bU)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x1cU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x1dU))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x1eU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x1fU))))
                      : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x11U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x12U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x13U)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x14U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x15U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0x16U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                  >> 0x17U)))))
                  : ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                      ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                               >> 9U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0xaU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                 >> 0xbU)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0xcU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                 >> 0xdU))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 0xeU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                 >> 0xfU))))
                      : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r
                                  : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 1U)) : ((1U 
                                                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                                 ? 
                                                (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                 >> 2U)
                                                 : 
                                                (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                 >> 3U)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 4U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                               >> 5U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                     >> 6U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                               >> 7U)))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp 
        = (1U & ((0x10U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                  ? ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                      ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x19U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x1aU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x1bU)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x1cU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x1dU))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x1eU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x1fU))))
                      : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x11U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x12U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x13U)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x14U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x15U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0x16U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                  >> 0x17U)))))
                  : ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                      ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                               >> 9U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0xaU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                 >> 0xbU)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0xcU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                 >> 0xdU))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 0xeU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                 >> 0xfU))))
                      : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                          ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r
                                  : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 1U)) : ((1U 
                                                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                                 ? 
                                                (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                 >> 2U)
                                                 : 
                                                (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                 >> 3U)))
                          : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                              ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 4U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                               >> 5U))
                              : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                                  ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                     >> 6U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                               >> 7U)))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line 
        = (0xebU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i 
        = (1U & ((~ ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                     >> 7U)) | ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                >> 7U)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD 
        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_bcd) 
           & (0xdU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                    >> 0x11U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack)) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_left_en 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                 >> 0x16U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_right_en 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                 >> 0x17U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_freq 
        = (0xffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_phase 
        = (0x1ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data);
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE 
        = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__new_sample 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample_r) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum7_r) 
              != (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r) 
                        >> 7U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_incr 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_busy 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) 
           | (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_z 
        = (3U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x12U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_strobe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack)) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_do_access_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done 
        = (0x31eU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst 
        = (1U & (~ (IData)(vlSelfRef.reset_n)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_strobe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack)) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           == ((IData)(0x419U) + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r) 
                                  << 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_even_field_last 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           == ((IData)(0x20cU) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_y 
        = (0x3ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr);
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done 
        = (5U == (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r) 
                        >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done 
        = (5U == (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r) 
                        >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r 
        = (0xffU & ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))
                     ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                            >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                                         >> 0x10U))
                     : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                            >> 8U) : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset = vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_rr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_height 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
           >> 0x1eU);
    vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx 
        = (0x3ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                     >> 7U));
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r)));
        }
    } else if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_x_r;
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last 
        = (0x633U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt));
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
    vlSelfRef.x16_main__DOT__clock = vlSelfRef.clock;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r;
    __Vtableidx20 = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels 
        = Vx16_main__ConstPool__TABLE_hf1527a20_0[__Vtableidx20];
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr14)
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata_r
            : vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata_r);
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__mode 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r) 
            << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__mode 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r) 
            << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line 
        = (0x31fU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r) 
                 >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r))
                    ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r))
                    ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_incr_decr_0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r) 
           ^ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) 
              & ((~ (IData)((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r)))) 
                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_incr_decr_1 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r) 
           ^ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) 
              & ((~ (IData)((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r)))) 
                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel 
        = ((0xecU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           & (0x5ecU > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__clk = vlSelfRef.clock;
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           <= ((IData)(0x209U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)));
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           <= ((IData)(0x417U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)));
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
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_0_nib = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_0_nib = 0U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_0_nib = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_0_nib = 0x7ffU;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_nib = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_1_nib = 0U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_nib = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_1_nib = 0x7ffU;
    }
    __Vtableidx5 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__backwards) 
                     << 0xaU) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__op) 
                                  << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op 
        = Vx16_main__ConstPool__TABLE_h011ad514_0[__Vtableidx5];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r)
                     ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r))
                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1d)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1c))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1b)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1a)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2d)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2c))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2b)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2a)));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx) 
               << 2U);
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx) 
               << 2U);
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
        vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_rddata 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1;
    }
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0 
        = ((3U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r) 
           == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_r));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCH = (0xffU 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC) 
                                                      >> 8U));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__P = (0x30U 
                                                 | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__N) 
                                                     << 7U) 
                                                    | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__V) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__D) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__I) 
                                                              << 2U) 
                                                             | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__C)))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r) 
            << 3U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r) 
                       << 2U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_r) 
                                  << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_addr1_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_collisions 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_fill_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_16bit_hop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_rxdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_busy 
        = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__scanline 
        = ((0x200U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr))
            ? 0x1ffU : (0x1ffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_next 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r) 
           == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r) 
                    + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                        ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                           >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                                     >> 3U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r) 
                    + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                        ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r) 
                           >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r) 
                                     >> 3U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode 
        = ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_r) 
              & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL = (0xffU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__fifo_count 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r) 
                     - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx 
        = (0x1ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r) 
                     >> 7U));
    __Vtableidx2 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store) 
                     << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state));
    vlSelfRef.cpu_we = Vx16_main__ConstPool__TABLE_hced45472_0
        [__Vtableidx2];
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length 
        = (0x3ffU & ((vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r 
                      >> 9U) - (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                >> 9U)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX = vlSelfRef.x16_main__DOT__cpu_din_int;
    __Vtableidx4 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__dst_reg) 
                     << 9U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__index_y) 
                                << 8U) | (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__src_reg) 
                                           << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel 
        = Vx16_main__ConstPool__TABLE_hbe1dfdb2_0[__Vtableidx4];
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy 
        = (0x10U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__reg_clr_cnt));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int 
        = vlSelfRef.x16_main__DOT__avr_pgm_data;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI = vlSelfRef.x16_main__DOT__cpu_nmi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_r = vlSelfRef.x16_main__DOT__vga_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_g = vlSelfRef.x16_main__DOT__vga_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_b = vlSelfRef.x16_main__DOT__vga_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_hsync 
        = vlSelfRef.x16_main__DOT__vga_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_vsync 
        = vlSelfRef.x16_main__DOT__vga_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__output_32 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_mult_accum_cache32;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__luma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__luma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__chroma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__chroma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sample_rate 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__sample_rate;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__mode_stereo 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_stereo;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__mode_16bit 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_16bit;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__volume;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_reset 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_reset;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ack_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__wc_clk_i 
        = vlSelfRef.x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_t 
        = vlSelfRef.x16_main__DOT__via_pa_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_o 
        = vlSelfRef.x16_main__DOT__via_pa_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_t 
        = vlSelfRef.x16_main__DOT__via_pb_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_o 
        = vlSelfRef.x16_main__DOT__via_pb_o;
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__async_rst_in 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_R_times_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_audio 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_left;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_audio 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_right;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_t 
        = vlSelfRef.x16_main__DOT__via_ca2_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_t 
        = vlSelfRef.x16_main__DOT__via_cb1_t;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_Z_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_N_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_V_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_S_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_H_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_T_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_I_IN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_i 
        = vlSelfRef.x16_main__DOT__via_pa_i;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__h_active) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_active));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____Vcellinp__audio_attr_ram__rd_addr;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_t 
        = vlSelfRef.x16_main__DOT__via_cb2_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t3z;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t1z;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t2z;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__hactive 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter) 
            >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter) 
              < (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_o 
        = vlSelfRef.x16_main__DOT__via_cb2_o;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_miso 
        = vlSelfRef.x16_main__DOT__spi_miso;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_write;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_addr 
        = vlSelfRef.x16_main__DOT__avr_pgm_addr;
    vlSelfRef.x16_main__DOT__spi_ssel_n_sd = vlSelfRef.spi_ssel_n_sd;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk_wdt 
        = vlSelfRef.x16_main__DOT____Vcellinp__attiny_inst__clk_wdt;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__Z 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ1 = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__V 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AV;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_sck 
        = vlSelfRef.x16_main__DOT__spi_sck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wridx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_write_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_write_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AO = ((0xf0U 
                                                   & ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                        >> 4U) 
                                                       + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJH)) 
                                                      << 4U)) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                        + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJL))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_lrck 
        = vlSelfRef.x16_main__DOT__audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__spi_mosi = vlSelfRef.spi_mosi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_trans 
        = (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode) 
            & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_pe)) 
           | ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode)) 
              & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ne)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_trans 
        = ((IData)(((0U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))) 
                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ne))) 
           | (IData)(((2U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))) 
                      & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_pe))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_trans 
        = (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode) 
            & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_pe)) 
           | ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode)) 
              & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_trans 
        = ((IData)(((0U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))) 
                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ne))) 
           | (IData)(((2U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))) 
                      & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_pe))));
    vlSelfRef.x16_main__DOT__audio_bck = vlSelfRef.audio_bck;
    vlSelfRef.x16_main__DOT__audio_data = vlSelfRef.audio_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__next_sample 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__next_sample 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_left 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_start 
        = (0x3ffU & (- (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__subtile_hscroll)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_start 
        = (0x3ffU & (- (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__subtile_hscroll)));
    __Vtableidx23 = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume_log 
        = Vx16_main__ConstPool__TABLE_h4ec04809_0[__Vtableidx23];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_b 
        = ((IData)(x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_b 
        = ((IData)(x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_audio 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_left;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_l 
        = ((0x10000U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_scaled_r 
                        >> 5U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_left));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_audio 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_right;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_r 
        = ((0x10000U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_scaled_r 
                        >> 5U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_right));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_pw 
        = (((0x7fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                      >> 0xaU)) > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_pulsewidth))
            ? 0U : 0x3fU);
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_hsync_pulse)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_vsync 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_write 
        = (IData)(((0x1fc00U == (0x1fc00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r)) 
                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_write 
        = (IData)(((0x1fa00U == (0x1fe00U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r)) 
                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_write 
        = (IData)(((0x1f9c0U == (0x1ffc0U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r)) 
                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_line 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_frame 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb6_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ed));
    vlSelfRef.x16_main__DOT__via_pb_i = (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i) 
                                          << 7U) | 
                                         ((0x40U & 
                                           (((~ ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                                                 >> 6U)) 
                                             << 6U) 
                                            | (0xffffffc0U 
                                               & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo)))) 
                                          | ((0x20U 
                                              & (((~ 
                                                   ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                                                    >> 5U)) 
                                                  << 5U) 
                                                 | (0xffffffe0U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo)))) 
                                             | ((0x10U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                                                       >> 4U)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo)))) 
                                                | ((8U 
                                                    & (((~ 
                                                         ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                                                          >> 3U)) 
                                                        << 3U) 
                                                       | (0xfffffff8U 
                                                          & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo)))) 
                                                   | ((4U 
                                                       & (((~ 
                                                            ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                                                             >> 2U)) 
                                                           << 2U) 
                                                          | (0xfffffffcU 
                                                             & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo)))) 
                                                      | ((2U 
                                                          & (((~ 
                                                               ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                                                                >> 1U)) 
                                                              << 1U) 
                                                             | (0xfffffffeU 
                                                                & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo)))) 
                                                         | (1U 
                                                            & ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb)) 
                                                               | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo))))))))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__BCD 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_noise 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__active_composer_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_a 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer) 
           & (IData)(x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_a 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer) 
           & (IData)(x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer) 
            << 8U) | (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                               >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_left_en) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_right_en));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_phase 
                       + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_freq)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_enabled 
        = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_z));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_nibble 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_strobe));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__ib_do_access_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_strobe = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack_next = 1U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_strobe = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack_next = 0U;
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__reset = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_strobe;
    vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_strobe));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_cache8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r;
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
    __Vtableidx19 = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_height;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels 
        = Vx16_main__ConstPool__TABLE_hf1527a20_0[__Vtableidx19];
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__composer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__composer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__lb_rdidx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last 
        = ((0x319U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last));
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
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__clk = vlSelfRef.x16_main__DOT__clock;
    vlSelfRef.x16_main__DOT__top_inst__DOT__clk25 = vlSelfRef.x16_main__DOT__clock;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk 
        = vlSelfRef.x16_main__DOT__clock;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i 
        = vlSelfRef.x16_main__DOT__clock;
    if ((0U == (3U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel = 1U;
    } else if ((1U == (3U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel = 2U;
    } else if ((2U == (3U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel = 4U;
    } else if ((3U == (3U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel = 8U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r) 
            & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r)))
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__ib_mult_accum_cache32_r
            : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use) 
                << 0x18U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use) 
                              << 0x10U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use) 
                                            << 8U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use)))));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_3_transparency_nibblesel 
                    = (((0U != (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                >> 0x1cU)) << 1U) | 
                       (0U != (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                       >> 0x18U))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_2_transparency_nibblesel 
                    = (((0U != (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                        >> 0x14U))) 
                        << 1U) | (0U != (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                                 >> 0x10U))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_1_transparency_nibblesel 
                    = (((0U != (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                        >> 0xcU))) 
                        << 1U) | (0U != (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                                 >> 8U))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_0_transparency_nibblesel 
                    = (((0U != (0xfU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                        >> 4U))) << 1U) 
                       | (0U != (0xfU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata)));
            } else {
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_3_transparency_nibblesel 
                    = ((0U == (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                               >> 0x18U)) ? 0U : 3U);
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_2_transparency_nibblesel 
                    = ((0U == (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                        >> 0x10U)))
                        ? 0U : 3U);
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_1_transparency_nibblesel 
                    = ((0U == (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata 
                                        >> 8U))) ? 0U
                        : 3U);
                vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_0_transparency_nibblesel 
                    = ((0U == (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata))
                        ? 0U : 3U);
            }
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel 
                = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_3_transparency_nibblesel) 
                    << 6U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_2_transparency_nibblesel) 
                               << 4U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_1_transparency_nibblesel) 
                                          << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_0_transparency_nibblesel))));
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel 
                = (0xffU & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r)));
        }
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_transparancy_nibblesel 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r)
                ? ((2U & (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r)) 
                           & ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r)) 
                              | (0U != (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use) 
                                                >> 4U))))) 
                          << 1U)) | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r) 
                                     & ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r)) 
                                        | (0U != (0xfU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use))))))
                : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r) 
                    & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use)))
                    ? 0U : 3U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel 
            = ((2U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r)
                ? ((1U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r)
                    ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_transparancy_nibblesel) 
                       << 6U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_transparancy_nibblesel) 
                                 << 4U)) : ((1U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r)
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_transparancy_nibblesel) 
                                                << 2U)
                                             : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_transparancy_nibblesel)));
    }
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
    __Vtableidx15 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r) 
                      << 3U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__mode));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__words_per_line_minus1 
        = Vx16_main__ConstPool__TABLE_hbfcc6d1d_0[__Vtableidx15];
    __Vtableidx13 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r) 
                      << 3U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__mode));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__pixels_per_word_minus1 
        = Vx16_main__ConstPool__TABLE_hbd8612ea_0[__Vtableidx13];
    __Vtableidx14 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r) 
                      << 3U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__mode));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lines_per_word_minus1 
        = Vx16_main__ConstPool__TABLE_h8db03e09_0[__Vtableidx14];
    __Vtableidx18 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r) 
                      << 3U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__mode));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__words_per_line_minus1 
        = Vx16_main__ConstPool__TABLE_hbfcc6d1d_0[__Vtableidx18];
    __Vtableidx16 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r) 
                      << 3U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__mode));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__pixels_per_word_minus1 
        = Vx16_main__ConstPool__TABLE_hbd8612ea_0[__Vtableidx16];
    __Vtableidx17 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r) 
                      << 3U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__mode));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lines_per_word_minus1 
        = Vx16_main__ConstPool__TABLE_h8db03e09_0[__Vtableidx17];
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__next_line 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__h_last 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_frame 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last2));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vblank_pulse 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line) 
           & (0x1dfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter)));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__interlaced = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr_int 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r), 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_line 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line;
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__interlaced = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr_int 
            = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r));
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_line 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line;
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_display_next_pixel;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r) 
           == (0x4feU | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_4bpp 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                               >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                            >> 0x1cU))
                        : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                               >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                            >> 0x14U)))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                               >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                         >> 0xcU)) : 
                       ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt))
                         ? vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r
                         : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                            >> 4U)))));
    if ((0U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r);
    } else if ((1U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                        >> 8U));
    } else if ((2U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                        >> 0x10U));
    } else if ((3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp 
            = (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
               >> 0x18U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_4bpp 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                               >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                            >> 0x1cU))
                        : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                               >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                            >> 0x14U)))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                               >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                         >> 0xcU)) : 
                       ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt))
                         ? vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r
                         : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                            >> 4U)))));
    if ((0U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r);
    } else if ((1U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                        >> 8U));
    } else if ((2U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                        >> 0x10U));
    } else if ((3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp 
            = (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
               >> 0x18U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_r;
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
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
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r;
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)));
            if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r) 
                  & (3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))) 
                 | ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)) 
                    & (7U == (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))))) {
                if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r) 
                     == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 0U;
                    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next = 0U;
                } else {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 1U;
                }
            }
        }
    } else {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 2U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 0U;
            }
        } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 1U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 1U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next = 0U;
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = 3U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_pixel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_active 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_burst_active 
        = (((0x16U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
            & (IData)(x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1)) 
           | ((0x224U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
              & (IData)(x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_active 
        = (((0x2aU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
            & (IData)(x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1)) 
           | ((0x238U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
              & (IData)(x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__right 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_shift_right;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CI 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__CI;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_r)
            ? ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x580U : 0x6c0U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                   ? 0x760U
                                                   : 0x7b0U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x7d8U : 0x600U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                   ? 0x700U
                                                   : 0x780U)))
                : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x7c0U : 0x7e0U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                   ? 0x7f0U
                                                   : 0x7f8U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x7fcU : 0x7feU) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                   ? 0x7ffU
                                                   : 
                                                  (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) 
                                                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r))
                                                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_0_nib)
                                                    : 0U)))))
            : ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x280U : 0x140U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                   ? 0xa0U
                                                   : 0x50U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x28U : 0x200U) : ((1U 
                                                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                  ? 0x100U
                                                  : 0x80U)))
                : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 0x40U : 0x20U) : ((1U 
                                                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                                 ? 0x10U
                                                 : 8U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                            ? 4U : 2U) : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r))
                                           ? 1U : (
                                                   ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) 
                                                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r))
                                                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_0_nib)
                                                    : 0U))))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__op 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__adder_CI 
        = ((~ ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_shift_right) 
               | (3U == (3U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__alu_op) 
                               >> 2U))))) & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__CI));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_4bpp 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                               >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                                            >> 0x1cU))
                        : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                               >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                                            >> 0x14U)))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                            ? (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                               >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                                         >> 0xcU)) : 
                       ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt))
                         ? vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r
                         : (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                            >> 4U)))));
    if ((0U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r);
    } else if ((1U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                        >> 8U));
    } else if ((2U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp 
            = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
                        >> 0x10U));
    } else if ((3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp 
            = (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
               >> 0x18U);
    }
    if (x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_4 = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_320 = 1U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_4 = 3U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_320 = 0x13fU;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_4bit_mode;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_addr1_mode;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collisions 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_collisions;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_transparency_enabled;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_write_enabled;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_fill_enabled;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_one_byte_cache_cycling;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_16bit_hop;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rxdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_rxdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__busy 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_busy;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scanline 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__scanline;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_next) 
           == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r;
    if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r;
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty = 1U;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty = 0U;
        }
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
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r;
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
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low 
        = (0x400U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__fifo_count));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__line_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                        << 2U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff 
        = (0x3ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_y)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_wr_n 
        = (1U & (~ (IData)(vlSelfRef.cpu_we)));
    vlSelfRef.x16_main__DOT__cpu_we = vlSelfRef.cpu_we;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_high 
        = (0xfeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow 
        = (3U == (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length) 
                        >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_more_than_15 
        = (0U != (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length) 
                           >> 4U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_more_than_7 
        = (0U != (0x7fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length) 
                           >> 3U)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0 
        = (0x100U | vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
           [vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel]);
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__inst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data_switched 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COND_BRANCH = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RJMP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CALL = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DES = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM_Z_P = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_WDR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BREAK = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SLEEP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU = 0U;
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
                        if ((0x380U == (0x1ff88U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS = 1U;
                        }
                        if ((0x380U != (0x1ff88U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x388U == (0x1ff88U 
                                            & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                << 0x10U) 
                                               | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU = 1U;
                            }
                        }
                    }
                    if ((0x308U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL = 1U;
                    }
                }
                if ((0x300U == (0x1ff88U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                             << 0x10U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU = 1U;
                }
            }
            if ((0x200U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS = 1U;
            }
        }
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____VdfgRegularize_h8a0dea4a_2_0 
        = ((0xf800U & ((- (IData)((1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                         >> 0xbU)))) 
                       << 0xbU)) | (0x7ffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_XCH = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAT = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__select_io_in_stam 
        = ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))
            ? (0x60U > (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int_tmp))
            : (0x60U > (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                   >> 4U));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR = 0U;
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
                                if ((1U & (~ ((((((
                                                   ((0x940cU 
                                                     == 
                                                     (0x1fe0eU 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                                    | (0x940eU 
                                                       == 
                                                       (0x1fe0eU 
                                                        & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                                   | (0x9600U 
                                                      == 
                                                      (0x1ff00U 
                                                       & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                                  | (0x9700U 
                                                     == 
                                                     (0x1ff00U 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                                 | (0x9800U 
                                                    == 
                                                    (0x1fd00U 
                                                     & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                                | (0x9900U 
                                                   == 
                                                   (0x1fd00U 
                                                    & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                        << 0x10U) 
                                                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                               | (0x9c00U 
                                                  == 
                                                  (0x1fc00U 
                                                   & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                                              | (0xb000U 
                                                 == 
                                                 (0x1f000U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))))) {
                                    if ((0xc000U != 
                                         (0x1f000U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0xd000U 
                                             != (0x1f000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            if ((0xe000U 
                                                 != 
                                                 (0x1f000U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                if (
                                                    (0xf000U 
                                                     == 
                                                     (0x1f800U 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COND_BRANCH = 1U;
                                                }
                                                if (
                                                    (0xf000U 
                                                     != 
                                                     (0x1f800U 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                    if (
                                                        (0xf800U 
                                                         != 
                                                         (0x1fc08U 
                                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                        if (
                                                            (0xfc00U 
                                                             == 
                                                             (0x1fc08U 
                                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (0xf800U 
                                                         == 
                                                         (0x1fc08U 
                                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST = 1U;
                                                    }
                                                }
                                            }
                                            if ((0xe000U 
                                                 == 
                                                 (0x1f000U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI = 1U;
                                            }
                                        }
                                        if ((0xd000U 
                                             == (0x1f000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL = 1U;
                                        }
                                    }
                                    if ((0xc000U == 
                                         (0x1f000U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RJMP = 1U;
                                    }
                                }
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
                                             == (0x1fe0eU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CALL = 1U;
                                        }
                                        if ((0x940eU 
                                             != (0x1fe0eU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            if ((0x9600U 
                                                 != 
                                                 (0x1ff00U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                if (
                                                    (0x9700U 
                                                     != 
                                                     (0x1ff00U 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                    if (
                                                        (0x9800U 
                                                         != 
                                                         (0x1fd00U 
                                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                        if (
                                                            (0x9900U 
                                                             != 
                                                             (0x1fd00U 
                                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                            if (
                                                                (0x9c00U 
                                                                 == 
                                                                 (0x1fc00U 
                                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL = 1U;
                                                            }
                                                            if (
                                                                (0x9c00U 
                                                                 != 
                                                                 (0x1fc00U 
                                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                      << 0x10U) 
                                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT = 1U;
                                                            }
                                                        }
                                                        if (
                                                            (0x9900U 
                                                             == 
                                                             (0x1fd00U 
                                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (0x9800U 
                                                         == 
                                                         (0x1fd00U 
                                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                              << 0x10U) 
                                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x940cU == 
                                         (0x1fe0eU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP = 1U;
                                    }
                                }
                            }
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
                                                             != 
                                                             (0x1fe0fU 
                                                              & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DES = 1U;
                                                        }
                                                    }
                                                    if (
                                                        (0x9509U 
                                                         == 
                                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x9409U 
                                                     == 
                                                     (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP = 1U;
                                                }
                                            }
                                            if ((0x95f8U 
                                                 == 
                                                 (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM_Z_P = 1U;
                                            }
                                        }
                                        if ((0x95e8U 
                                             == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM = 1U;
                                        }
                                    }
                                }
                                if ((0x95a8U == (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_WDR = 1U;
                                }
                            }
                        }
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
                                             != (0x1ff0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            if ((0x9508U 
                                                 != 
                                                 (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                if (
                                                    (0x9518U 
                                                     != 
                                                     (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                    if (
                                                        (0x9580U 
                                                         != 
                                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BREAK = 1U;
                                                    }
                                                    if (
                                                        (0x9580U 
                                                         == 
                                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SLEEP = 1U;
                                                    }
                                                }
                                                if (
                                                    (0x9518U 
                                                     == 
                                                     (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                       << 0x10U) 
                                                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI = 1U;
                                                }
                                            }
                                            if ((0x9508U 
                                                 == 
                                                 (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET = 1U;
                                            }
                                        }
                                        if ((0x9408U 
                                             == (0x1ff0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx = 1U;
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
                                    if ((0x900fU == 
                                         (0x1fc0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((0x9001U == (0x1fc07U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                           | (0x9002U == (0x1fc07U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                          | (0x9004U == (0x1fe0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                         | (0x9005U == (0x1fe0fU & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                        | (0x9204U == (0x1fe0fU & (
                                                   ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                       | (0x9205U == (0x1fe0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                      | (0x9206U == (0x1fe0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                     | (0x9207U == (0x1fe0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                    if ((0x9001U != (0x1fc07U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x9002U != (0x1fc07U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x9004U != (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x9005U != (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    if ((0x9204U == 
                                         (0x1fe0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_XCH = 1U;
                                    }
                                    if ((0x9204U != 
                                         (0x1fe0fU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x9205U 
                                             == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAS = 1U;
                                        }
                                        if ((0x9205U 
                                             != (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            if ((0x9206U 
                                                 == 
                                                 (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAC = 1U;
                                            }
                                            if ((0x9206U 
                                                 != 
                                                 (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAT = 1U;
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
                                    if ((0x7000U != 
                                         (0x1f000U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x8000U 
                                             != (0x1d000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS = 1U;
                                        }
                                    }
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
                        }
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
                            if ((0x1000U == (0x1fc00U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vx16_main__ConstPool__TABLE_h986036e3_0;

VL_ATTR_COLD void Vx16_main___024root___stl_sequent__TOP__1(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___stl_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ x16_main__DOT__vera_data__strong__out1;
    x16_main__DOT__vera_data__strong__out1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0 = 0;
    IData/*16:0*/ x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1 = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW = 0U;
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
                                                 != 
                                                 (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                if (
                                                    (0x9402U 
                                                     == 
                                                     (0x1fe0fU 
                                                      & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                          << 0x10U) 
                                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP = 1U;
                                                }
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
                                            if ((0x9401U 
                                                 == 
                                                 (0x1fe0fU 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG = 1U;
                                            }
                                        }
                                    }
                                }
                                if ((0x900eU == (0x1fc0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN = 1U;
                                }
                            }
                            if ((0x900dU == (0x1fc0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP = 1U;
                            }
                        }
                        if ((0x900cU == (0x1fc0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X = 1U;
                        }
                    }
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
                            if ((0x9405U == (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR = 1U;
                            }
                            if ((0x9405U != (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x9406U != (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
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
                                    if ((0x95c8U == 
                                         (0x1ffefU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM = 1U;
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
                                            if ((0x9600U 
                                                 == 
                                                 (0x1ff00U 
                                                  & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((0x9001U == (0x1fc07U & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                           | (0x9002U == (0x1fc07U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                          | (0x9004U == (0x1fe0fU & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                         | (0x9005U == (0x1fe0fU & 
                                        (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                          << 0x10U) 
                                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                        | (0x9204U == (0x1fe0fU & (
                                                   ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                       | (0x9205U == (0x1fe0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                      | (0x9206U == (0x1fe0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) 
                     | (0x9207U == (0x1fe0fU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                    if ((0x9001U == (0x1fc07U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP = 1U;
                    }
                    if ((0x9001U != (0x1fc07U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x9002U == (0x1fc07U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN = 1U;
                        }
                        if ((0x9002U != (0x1fc07U & 
                                         (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                           << 0x10U) 
                                          | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x9004U == (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R = 1U;
                            }
                            if ((0x9004U != (0x1fe0fU 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x9005U == (0x1fe0fU 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P = 1U;
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
                            if ((0x4000U == (0x1f000U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI = 1U;
                            }
                            if ((0x4000U != (0x1f000U 
                                             & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                 << 0x10U) 
                                                | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                if ((0x6000U != (0x1f000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    if ((0x7000U != 
                                         (0x1f000U 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        if ((0x8000U 
                                             == (0x1d000U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD = 1U;
                                        }
                                    }
                                }
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
                if ((0x2c00U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV = 1U;
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
                                if ((0x2000U == (0x1fc00U 
                                                 & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND = 1U;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW = 0U;
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
        if ((0x100U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                     << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW = 1U;
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_miso 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_miso;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_ssel_n_sd 
        = vlSelfRef.x16_main__DOT__spi_ssel_n_sd;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_clk 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk_wdt;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_sck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_sck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_lrck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_mosi 
        = vlSelfRef.x16_main__DOT__spi_mosi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_bck 
        = vlSelfRef.x16_main__DOT__audio_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_data 
        = vlSelfRef.x16_main__DOT__audio_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_volume 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume_log;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_l 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_l 
                       + vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_l));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_r 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_r 
                       + vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_triangle))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_saw)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_pw)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_hsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync)
                  ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_vsync_pulse))
                  : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_equalization)
                      ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_equalization_pulse))
                      : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_vsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_frame;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb6_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_i 
        = vlSelfRef.x16_main__DOT__via_pb_i;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_c 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_phase 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0)
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1
            : 0U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__do_noise_sample 
        = (1U & ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0) 
                     & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1 
                        >> 0x10U))) & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                                       >> 0x10U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_strobe 
        = vlSelfRef.x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__rst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rst;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rst;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__rst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rst;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rst_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__rst 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_rdidx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__rst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__rst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_addr 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_vblank_pulse 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_even_field_last) 
              | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__clk 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__clk25;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__clk 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__clk 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__clk 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__clk_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_wrnibblesel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_rddata;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp 
        = ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lines_per_word_minus1)) 
             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt) 
                >> 3U)) << 3U) | (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp 
        = ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lines_per_word_minus1)) 
             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt) 
                >> 3U)) << 3U) | (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__next_frame 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_frame;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_frame;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_vblank_pulse;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_frame;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vblank_pulse;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vblank_pulse 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vblank_pulse;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_next_line 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__next_line;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_lb_erase_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r)
                     ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next))
                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_next_pixel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_burst_active) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_color_burst));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_active) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_active));
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1 
        = ((0x1f800U & ((- (IData)((1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_0) 
                                          >> 0xaU)))) 
                        << 0xbU)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_0));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_4bpp));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__dest_pixel_is_transparent 
        = (0U == (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r)
            ? ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x580U : 0x6c0U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                   ? 0x760U
                                                   : 0x7b0U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x7d8U : 0x600U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                   ? 0x700U
                                                   : 0x780U)))
                : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x7c0U : 0x7e0U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                   ? 0x7f0U
                                                   : 0x7f8U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x7fcU : 0x7feU) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                   ? 0x7ffU
                                                   : 0U))))
            : ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x280U : 0x140U) : ((1U 
                                                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                   ? 0xa0U
                                                   : 0x50U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x28U : 0x200U) : ((1U 
                                                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                  ? 0x100U
                                                  : 0x80U)))
                : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 0x40U : 0x20U) : ((1U 
                                                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                                 ? 0x10U
                                                 : 8U))
                    : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                            ? 4U : 2U) : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r))
                                           ? 1U : 0U)))));
    if ((0U == (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r) 
                 << 4U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1 
            = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) 
                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_nib)
                : 0U);
    }
    if ((3U == (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r) 
                 << 4U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r)
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_4)
                : 4U);
    }
    if ((0xeU == (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r) 
                   << 4U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r)
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_320)
                : 0x140U);
    }
    if ((0x10U == (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r) 
                    << 4U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1 
            = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r) 
                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_1_nib)
                : 0U);
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_full 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rd_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_almost_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low;
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low) 
            << 3U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r) 
                       << 2U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r) 
                                  << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_vflip)
                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels) 
                        - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff))
                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_on_line 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff) 
           <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vmap_idx 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r)
                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx) 
                        >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx) 
                                  >> 3U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vmap_idx 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r)
                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx) 
                        >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx) 
                                  >> 3U)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__WE = vlSelfRef.x16_main__DOT__cpu_we;
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_rd_n 
        = vlSelfRef.x16_main__DOT__cpu_we;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__we_i 
        = vlSelfRef.x16_main__DOT__cpu_we;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_high 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_high;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low 
        = ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)) 
           | ((2U & (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow)) 
                      & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length)) 
                     << 1U)) | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode) 
                                & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                   >> 8U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low 
        = ((0xf3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)) 
           | (0xcU & (((- (IData)((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow))))) 
                       << 2U) & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length) 
                                 << 1U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low 
        = ((0xefU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)) 
           | (0x10U & ((0xfffffff0U & ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow)) 
                                         & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r))) 
                                        << 4U) & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length) 
                                                  << 1U))) 
                       | (0x1fffff0U & ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow)) 
                                          & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r)) 
                                         << 4U) & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                                   >> 7U))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low 
        = ((0x9fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)) 
           | ((0x40U & (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow)) 
                         << 6U) & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                   >> 4U))) | (0x20U 
                                               & (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow)) 
                                                   << 5U) 
                                                  & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                                     >> 4U)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low 
        = ((0x7fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)) 
           | (((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r)) 
                 & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_more_than_15)) 
                | (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode)) 
                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r)) 
                   & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_more_than_7))) 
               << 7U) | (0x7fffff80U & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode) 
                                         << 7U) & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r 
                                                   >> 1U)))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_COND_BRANCH 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COND_BRANCH;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RJMP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RJMP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CALL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CALL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_JMP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_DES 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DES;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SPM_Z_P 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM_Z_P;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SPM 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_WDR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_WDR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_BREAK 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BREAK;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LDS_STS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SLEEP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SLEEP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MUL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MUL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_FMULS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_FMULS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_FMUL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_FMUL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MULSU 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MULSU 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MULS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MULS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_FMULSU 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_FMULSU 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__relative_offset_rjmp 
        = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC) 
                      + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____VdfgRegularize_h8a0dea4a_2_0)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__relative_offset 
        = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE) 
                      + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____VdfgRegularize_h8a0dea4a_2_0)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBIC_SBIS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_XCH 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_XCH;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LAS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LAC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LAT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RET 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RETI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CBI_SBI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RCALL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ICALL 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__inst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SEx_CLx 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SEx_CLx 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LDI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBRC_SBRS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_BLD_BST 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_IN_OUT 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_POP_PUSH 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_IJMP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CPSE 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SWAP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SWAP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_YZP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_YZN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_X 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_XP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_XN 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LDD_STD 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_DEC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_DEC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SUBI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SUBI 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_INC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_INC 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_ELPM 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_R 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MOV 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MOV 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_OR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_OR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_EOR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_EOR 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_AND 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_AND 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_R_P 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_LPM_R_P 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SUB 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SUB 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADD 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADD 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADIW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MOVW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MOVW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_lrck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_mosi 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_mosi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_bck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__left_data 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_l 
           << 7U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__right_data 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mix_r 
           << 7U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_signal 
        = (0x20U ^ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sync_n_in 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_sync_n 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_noise 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__do_noise_sample)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__noise_value_r)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_cs 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr) 
                 >> 0xeU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vblank_pulse 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_vblank_pulse;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__clk_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__clk_i;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8_r));
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_next 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r)));
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r)
                ? 0U : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_start));
    }
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_next 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r)));
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_next 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r)
                ? 0U : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_start));
    }
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next 
            = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r) 
                == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__pixels_per_word_minus1))
                ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))));
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next = 0U;
    }
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start)))) {
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r) 
             == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__pixels_per_word_minus1))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next = 0U;
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_2bpp 
        = (3U & ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                  ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                      ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                              >> 0x1aU))
                          : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 0x1cU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                              >> 0x1eU)))
                      : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                              >> 0x12U))
                          : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 0x14U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                              >> 0x16U))))
                  : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                      ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                           >> 0xaU))
                          : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 0xcU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                             >> 0xeU)))
                      : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                              ? vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r
                              : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                 >> 2U)) : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp))
                                             ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                >> 4U)
                                             : (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                                                >> 6U))))));
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? (0x7fe0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                  << 5U)) : (0x7ff0U 
                                             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                                << 4U)));
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? (0x7ff0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                  << 4U)) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                             << 3U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_4bpp;
        }
    } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                   << 3U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                             << 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_2bpp;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                   << 2U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                             << 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r)
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp)
                : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r)
                    ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp)
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r)
                        : 0U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp)
                                  ? (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r))
                                  : (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r) 
                                             >> 4U)))));
    }
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next 
            = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r) 
                == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__pixels_per_word_minus1))
                ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))));
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next = 0U;
    }
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r) 
             == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__pixels_per_word_minus1))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next = 0U;
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_2bpp 
        = (3U & ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                  ? ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                      ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                              >> 0x1aU))
                          : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 0x1cU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                              >> 0x1eU)))
                      : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 0x10U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                              >> 0x12U))
                          : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 0x14U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                              >> 0x16U))))
                  : ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                      ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                           >> 0xaU))
                          : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 0xcU) : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                             >> 0xeU)))
                      : ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                          ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                              ? vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r
                              : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                 >> 2U)) : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp))
                                             ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                >> 4U)
                                             : (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                                                >> 6U))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_next_frame 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr_tmp 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r))
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)
                    ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                        << 4U) | (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                          >> 2U))) : 
                   (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                     << 3U) | (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                     >> 3U)))) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)
                                                   ? 
                                                  (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                                                    << 3U) 
                                                   | (7U 
                                                      & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                                         >> 2U)))
                                                   : 
                                                  (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                                                    << 2U) 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                                         >> 3U)))))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r))
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)
                    ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                        << 2U) | (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                        >> 2U))) : 
                   (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                     << 1U) | (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                     >> 3U)))) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)
                                                   ? 
                                                  (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next) 
                                                         >> 2U)))
                                                   : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_clk 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__clk;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__color_burst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__active 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_incr_decr_0 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
                       + x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_color 
        = ((0xf0U & (((IData)(((0U == (0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color))) 
                               & (0U != (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color)))))
                       ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_palette_offset_r)
                       : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color) 
                          >> 4U)) << 4U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_1 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r 
                       + ((0x1f800U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1) 
                                                      >> 0xaU)))) 
                                       << 0xbU)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_full 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_full;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_almost_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_almost_empty;
    vlSelfRef.x16_main__DOT__vera_irq_n = (0U == ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status) 
                                                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_line_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r) 
                       << 7U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp)));
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? (0x7fe0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                  << 5U)) : (0x7ff0U 
                                             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                                << 4U)));
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? (0x7ff0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                  << 4U)) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                             << 3U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_4bpp;
        }
    } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                   << 3U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                             << 2U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_2bpp;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                   << 2U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                             << 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r)
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp)
                : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r)
                    ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp)
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r)
                        : 0U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp)
                                  ? (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r))
                                  : (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r) 
                                             >> 4U)))));
    }
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
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_next = 0U;
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = 3U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__wrapped_vmap_idx 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vmap_idx)
                : (0x7fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vmap_idx)))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r))
                ? (0x3fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vmap_idx))
                : (0x1fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vmap_idx))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__wrapped_vmap_idx 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vmap_idx)
                : (0x7fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vmap_idx)))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r))
                ? (0x3fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vmap_idx))
                : (0x1fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vmap_idx))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_low 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low;
    if ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                = ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? 0U : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                             ? 0U : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                      ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                          ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)
                                          : 0U) : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)))));
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
        } else if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
            } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
            }
        } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                    : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
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
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
            }
        } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & 0U);
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
        }
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI 
            = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI;
    } else {
        if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
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
                } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & 0U);
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                }
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? 0U : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                 ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                     ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)
                                     : 0U) : 0U));
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
                    } else {
                        vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                            = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile;
                        vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                            = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                    }
                } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
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
            } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & 0U);
                }
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & 0U);
            }
        } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
                } else {
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH;
                    vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                        = (0xffU & 0U);
                }
            } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL));
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI = 0U;
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__BI 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
            }
        } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
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
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI 
            = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI;
    }
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
    vlSelfRef.cpu_addr = ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                           ? ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                   : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                                               : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))))
                               : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_din_int)
                                               : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL)))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                               : (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))))
                                   : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (0x100U 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0)
                                               : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)))))
                           : ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                               ? ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))))
                                   : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
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
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_din_int))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))))
                               : ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                                       : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                               : (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (0x100U 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0))))
                                   : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                                               : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))
                                           : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                               ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                                               : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))))
                                       : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                               << 8U) 
                                              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))))));
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
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
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
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int = 1U;
                    }
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 0xbU)))) {
                    if ((0x3dU != ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 5U)) 
                                   | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x3eU != ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                 >> 5U)) 
                                       | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            if ((0x3fU != ((0x30U & 
                                            ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 5U)) 
                                           | (0xfU 
                                              & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
                            }
                        }
                    }
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
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
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                            = ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                         >> 5U)) | 
                               (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
                    }
                } else if ((0x3dU != ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 5U)) 
                                      | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    if ((0x3eU != ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 5U)) 
                                   | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                        if ((0x3fU != ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                 >> 5U)) 
                                       | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                                = ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                             >> 5U)) 
                                   | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)));
                        }
                    }
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
            }
            vlSelfRef.x16_main__DOT__avr_io_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
            }
            vlSelfRef.x16_main__DOT__avr_io_re = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int;
            vlSelfRef.x16_main__DOT__avr_io_addr = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
            }
            vlSelfRef.x16_main__DOT__avr_data_re = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int;
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
            }
            vlSelfRef.x16_main__DOT__avr_data_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
            }
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1eU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
            }
            if (((((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC)) 
                    | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND)) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 4U));
            }
            if (((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI) 
                   | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI)) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR))) {
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
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset 
                    = ((0x20U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 8U)) | ((0x18U 
                                             & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 7U)) 
                                            | (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))));
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    }
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0x1eU;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
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
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ram_read_delay))) {
                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    }
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0x1aU;
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                    >> 4U));
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                    = (0x18U | (6U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                      >> 3U)));
            }
            if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X) 
                  | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
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
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__write 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
            }
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0U;
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                    = (0x1eU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                << 1U));
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
        } else {
            vlSelfRef.x16_main__DOT__avr_io_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int;
            if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBIC_SBIS) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                    >> 3U));
                }
                vlSelfRef.x16_main__DOT__avr_io_re 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int;
                vlSelfRef.x16_main__DOT__avr_io_addr 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int;
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                    if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                  >> 9U)))) {
                        if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__select_io_in_stam) {
                            if ((1U & (~ ((((((((((
                                                   ((((((((((((((((((((((0U 
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
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                              || (0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                             || (0x1cU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                            || (0x1dU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                           || (0x1eU 
                                               == (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                          || (0x1fU 
                                              == (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))))) {
                                if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                     != ((IData)(0x3dU) 
                                         + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                    if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                         != ((IData)(0x3eU) 
                                             + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                        if (((0x7fU 
                                              & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                             != ((IData)(0x3fU) 
                                                 + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                        }
                    }
                }
                if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RET) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RETI))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
                vlSelfRef.x16_main__DOT__avr_data_re 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int;
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d = 1U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                    if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) {
                        if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__select_io_in_stam) {
                            if ((1U & (~ ((((((((((
                                                   ((((((((((((((((((((((0U 
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
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                              || (0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                             || (0x1cU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                            || (0x1dU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                           || (0x1eU 
                                               == (0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))) 
                                          || (0x1fU 
                                              == (0x7fU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))))) {
                                if ((1U & (~ ((((0x7fU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                                == 
                                                ((IData)(0x3dU) 
                                                 + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement)) 
                                               || ((0x7fU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                                   == 
                                                   ((IData)(0x3eU) 
                                                    + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) 
                                              || ((0x7fU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                                  == 
                                                  ((IData)(0x3fU) 
                                                   + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement)))))) {
                                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                                }
                            }
                        } else {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                        }
                    }
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RCALL) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
                vlSelfRef.x16_main__DOT__avr_data_we 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int;
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
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr = 0x1aU;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
                }
                if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg = 1U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__write 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr 
                        = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                              >> 3U)) 
                                          << 1U)));
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r = 1U;
                } else {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__write 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr;
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0U;
                if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0x1aU;
                }
                if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                        = (0x1cU | (2U & ((~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                              >> 3U)) 
                                          << 1U)));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CPSE) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r 
                        = ((0x10U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                     >> 5U)) | (0xfU 
                                                & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)));
                }
            } else {
                vlSelfRef.x16_main__DOT__avr_io_re 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int;
                vlSelfRef.x16_main__DOT__avr_io_addr 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int;
                vlSelfRef.x16_main__DOT__avr_data_re 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int;
                vlSelfRef.x16_main__DOT__avr_data_we 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__write 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r = 0U;
            }
        }
    } else {
        vlSelfRef.x16_main__DOT__avr_io_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int;
        vlSelfRef.x16_main__DOT__avr_io_re = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int;
        vlSelfRef.x16_main__DOT__avr_io_addr = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int;
        vlSelfRef.x16_main__DOT__avr_data_re = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int;
        vlSelfRef.x16_main__DOT__avr_data_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int;
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
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d 
            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_d;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_addr_r 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_2 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r 
        = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_16bit_r)
            ? ((vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH
                [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                          >> 1U))] << 8U) | vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL
               [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                         >> 1U))]) : ((1U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r))
                                       ? vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH
                                      [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                                                >> 1U))]
                                       : vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL
                                      [(0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_r) 
                                                >> 1U))]));
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0U;
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
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
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_addr_d = 0x1eU;
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
        }
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_bck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__left_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__left_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__right_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal 
        = (0x7fffU & VL_MULS_III(15, (0x7fffU & VL_EXTENDS_II(15,6, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_signal))), 
                                 (0x7fffU & VL_EXTENDS_II(15,10, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_volume)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_sync_n 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_sync_n;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wrdata 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_noise) 
            << 0x11U) | vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_phase);
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_cs 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_cs)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_done 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_rddata;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_addr_r) 
                       << 3U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr_tmp)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data 
        = ((0xf000U & ((0xfffff000U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data)) 
                       | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r) 
                          << 0xcU))) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r) 
                                         << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_color)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collision 
        = (((0x280U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r)) 
            & ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent)) 
               & (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r))))
            ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data) 
                >> 0xcU) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r))
            : 0U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_pixel 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent)) 
           & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r) 
               > (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data) 
                        >> 8U))) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__dest_pixel_is_transparent)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_10 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_1 
                       + x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__full 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_full;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__almost_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_almost_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__extbus_irq_n 
        = vlSelfRef.x16_main__DOT__vera_irq_n;
    vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_irq)) 
           & (IData)(vlSelfRef.x16_main__DOT__vera_irq_n));
    if ((0x20U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                    : ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                            : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL))
                                : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)));
            vlSelfRef.cpu_dout = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                   ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
        } else if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                    : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                            << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)));
            vlSelfRef.cpu_dout = ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                               ? 0U
                                               : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                                       : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)))
                                   : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                       ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile)));
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            vlSelfRef.cpu_dout = ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
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
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))));
        }
    } else if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                    : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                            << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)));
            vlSelfRef.cpu_dout = ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                       ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))
                                   : ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                           ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL)
                                           : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCH))
                                       : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                           ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))));
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                            ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                                << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                        : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                    : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
            vlSelfRef.cpu_dout = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                   ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
        }
    } else if ((8U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                    : ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC)
                        : ((((~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__I)) 
                             & (IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ)) 
                            | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge))
                            ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                                << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL))
                            : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))));
            vlSelfRef.cpu_dout = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                   ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
        } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                    = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
                vlSelfRef.cpu_dout = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                                       ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
            } else {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                    = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__res)
                        ? 0xfffcU : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge)
                                      ? 0xfffaU : 0xfffeU));
                vlSelfRef.cpu_dout = (((IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ) 
                                       | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge))
                                       ? (0xefU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__P))
                                       : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__P));
            }
        } else {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC;
            vlSelfRef.cpu_dout = ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                                   ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL)
                                   : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCH));
        }
    } else {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp 
            = ((4U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                        ? (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                            << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL))
                        : (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH) 
                            << 8U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))
                    : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC))
                : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
        vlSelfRef.cpu_dout = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero)
                               ? 0U : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_line_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r) 
                       << 7U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_idx 
        = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next) 
                     << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_sel_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_idx 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r))
                ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__wrapped_vmap_idx) 
                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt))
                : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__wrapped_vmap_idx) 
                    << 7U) | (0x7fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt))))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r))
                ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__wrapped_vmap_idx) 
                    << 6U) | (0x3fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt)))
                : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__wrapped_vmap_idx) 
                    << 5U) | (0x1fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_idx 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r))
                ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__wrapped_vmap_idx) 
                    << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt))
                : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__wrapped_vmap_idx) 
                    << 7U) | (0x7fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt))))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r))
                ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__wrapped_vmap_idx) 
                    << 6U) | (0x3fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt)))
                : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__wrapped_vmap_idx) 
                    << 5U) | (0x1fU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt)))));
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
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & 0U);
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
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
                                                >> 8U))))));
        } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & 0U);
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                 ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r)
                                 : ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r)) 
                                    | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r) 
                                        << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)))));
            } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp) 
                              >> 8U));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r));
            } else {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r) 
                                 << 6U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))))));
            }
        } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l) 
                              >> 8U));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r) 
                                        >> 8U)));
            } else {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r));
            }
        } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3) 
                                                    >> 8U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                                    >> 8U)));
        } else {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r));
        }
    } else if ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                    vlSelfRef.x16_main__DOT__via_dout 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pai));
                    vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                        = (0xffU & ((0xfcU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r)) 
                                    | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r) 
                                        << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r))));
                } else {
                    vlSelfRef.x16_main__DOT__via_dout 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier));
                    vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                        = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r));
                }
            } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (((IData)(vlSelfRef.x16_main__DOT__via_irq) 
                               << 7U) | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_irq) 
                                          << 6U) | 
                                         (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_irq) 
                                           << 5U) | 
                                          (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_irq) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_irq) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_irq) 
                                                  << 2U) 
                                                 | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_irq) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_irq)))))))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r) 
                                 << 6U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r) 
                                               << 3U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))))));
            } else {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode) 
                               << 5U) | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode) 
                                           << 1U) | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode)))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                 ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r)
                                 : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r) 
                                        >> 1U) : ((5U 
                                                   == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                                   ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_high)
                                                   : 0U))));
            }
        } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode) 
                               << 6U) | (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_mode) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_le) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_le))))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                 ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r)
                                 : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r) 
                                        >> 1U) : ((5U 
                                                   == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                                   ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low)
                                                   : 0U))));
            } else {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                 ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r)
                                 : ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                     ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r) 
                                        >> 2U) : 0x2fU)));
            }
        } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2) 
                                                    >> 8U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                             ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__current_field) 
                                 << 7U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r) 
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
                                    >> 2U) : ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r))
                                               ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fx_transparency_enabled) 
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
                                               : 0x56U))));
        } else {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__scanline));
        }
    } else if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l) 
                              >> 8U));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_collisions) 
                                 << 4U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r))))));
            } else {
                vlSelfRef.x16_main__DOT__via_dout = 
                    (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l));
                vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                    = (0xffU & ((0x80U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r) 
                                          >> 1U)) | 
                                ((0x40U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__scanline) 
                                           >> 2U)) 
                                 | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r) 
                                     << 3U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_r) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_r)))))));
            }
        } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1) 
                                                    >> 8U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r) 
                             << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)));
        } else {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data1_r));
        }
    } else if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data0_r));
        } else {
            vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb));
            vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
                = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)
                             ? (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r) 
                                 << 4U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r 
                                                       >> 0x10U))))))
                             : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r) 
                                 << 4U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r) 
                                            << 3U) 
                                           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r 
                                                       >> 0x10U))))))));
        }
    } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
        vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                             & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pai));
        vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r 
                            >> 8U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r 
                                      >> 8U)));
    } else {
        vlSelfRef.x16_main__DOT__via_dout = (0xffU 
                                             & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi));
        vlSelfRef.x16_main__DOT__top_inst__DOT__rddata 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r)
                         ? vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r
                         : vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
        = ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
            ? vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r
            : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r);
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we 
        = vlSelfRef.x16_main__DOT__avr_io_we;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re 
        = vlSelfRef.x16_main__DOT__avr_io_re;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr 
        = vlSelfRef.x16_main__DOT__avr_io_addr;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re 
        = vlSelfRef.x16_main__DOT__avr_data_re;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we 
        = vlSelfRef.x16_main__DOT__avr_data_we;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wrdata;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq 
            = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprcol_irq 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color 
        = ((0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color)) 
           | (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color 
        = ((0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color)) 
           | (0xf0U & ((((IData)(((0U == (0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color))) 
                                  & (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r)))) 
                         & (0U != (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color))))
                         ? (((IData)((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r) 
                                       >> 7U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r))) 
                             << 3U) | (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r) 
                                             >> 4U)))
                         : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color) 
                            >> 4U)) << 4U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color 
        = ((0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color)) 
           | (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color 
        = ((0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color)) 
           | (0xf0U & ((((IData)(((0U == (0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color))) 
                                  & (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r)))) 
                         & (0U != (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color))))
                         ? (((IData)((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r) 
                                       >> 7U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r))) 
                             << 3U) | (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r) 
                                             >> 4U)))
                         : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color) 
                            >> 4U)) << 4U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r;
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r) 
                  & (3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))) 
                 | ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)) 
                    & (7U == (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))))) {
                if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r) 
                     != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next 
                        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr;
                }
            }
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r) 
                   | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collision));
        }
    } else if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next = 0U;
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_pixel;
        }
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRQ = vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR = ((
                                                   ((~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__I)) 
                                                    & (IData)(vlSelfRef.x16_main__DOT____Vcellinp__cpu_inst__IRQ)) 
                                                   | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge))
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD_valid)
                                                    ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD)
                                                    : (IData)(vlSelfRef.x16_main__DOT__cpu_din_int)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r) 
                       << 7U) + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_idx) 
                                 >> 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data 
        = (0xffffU & ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_idx))
                       ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_data_r 
                          >> 0x10U) : vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_data_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r) 
                       << 7U) + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_idx) 
                                 >> 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data 
        = (0xffffU & ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_idx))
                       ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_data_r 
                          >> 0x10U) : vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_data_r));
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
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__dat_o 
        = vlSelfRef.x16_main__DOT__via_dout;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_audio_address 
        = (0x7e7U == (0x7ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
                                >> 6U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_palette_address 
        = (0xfdU == (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
                              >> 9U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_sprite_attr_address 
        = (0x7fU == (0x7fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr 
                              >> 0xaU)));
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
    x16_main__DOT__vera_data__strong__out1 = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read)
                                                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__rddata)
                                                : 0U) 
                                              & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__bus_read)
                                                  ? 0xffU
                                                  : 0U));
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
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                    = vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset_res;
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
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP;
                } else {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_2;
    vlSelfRef.x16_main__DOT__avr_io_out = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out_int;
    vlSelfRef.x16_main__DOT__avr_data_out = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out_int;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_B_n_times_b 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_B_times_b) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b)));
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
    vlSelfRef.x16_main__DOT__cpu_dout = vlSelfRef.cpu_dout;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_hflip 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data) 
              >> 0xaU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx 
        = (0x3ffU & ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                      ? (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data))
                      : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_vflip 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data) 
              >> 0xbU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_hflip 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data) 
              >> 0xaU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx 
        = (0x3ffU & ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                      ? (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data))
                      : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_vflip 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data) 
              >> 0xbU));
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
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgExtracted_hf7077458__0 
        = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_audio_address) 
                    | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_palette_address) 
                       | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__is_sprite_attr_address)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_next = 0U;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT____VdfgExtracted_h81042145__0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_next = 1U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__do_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__do_write;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__do_read 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__do_read;
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
    vlSelfRef.x16_main__DOT__avr_data_addr = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr_int;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_out 
        = vlSelfRef.x16_main__DOT__avr_io_out;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_out 
        = vlSelfRef.x16_main__DOT__avr_data_out;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9 
        = (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_int) 
            << 1U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_en;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_en;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__DO = vlSelfRef.x16_main__DOT__cpu_dout;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__dat_i 
        = vlSelfRef.x16_main__DOT__cpu_dout;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_word_cnt 
        = (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_hflip)
                  ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r))
                  : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_vflip)
                    ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx))
                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_word_cnt 
        = (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_hflip)
                  ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r))
                  : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_vflip)
                    ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx))
                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_HC 
        = (IData)((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l) 
                    >> 4U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC9)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__txstart 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txstart;
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
    }
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
    if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__do_write) 
          & (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
         & (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_next 
            = (1U & ((IData)(vlSelfRef.x16_main__DOT__vera_data) 
                     >> 6U));
    }
}

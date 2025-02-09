// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main___024root.h"

void Vx16_main___024root___ico_sequent__TOP__0(Vx16_main___024root* vlSelf);

void Vx16_main___024root___eval_ico(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vx16_main___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vx16_main___024root___ico_sequent__TOP__0(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__reset_n = vlSelfRef.reset_n;
    vlSelfRef.x16_main__DOT__cpu_din = vlSelfRef.cpu_din;
    vlSelfRef.x16_main__DOT__cpu_nmi = vlSelfRef.cpu_nmi;
    vlSelfRef.x16_main__DOT__spi_miso = vlSelfRef.spi_miso;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst 
        = (1U & (~ (IData)(vlSelfRef.reset_n)));
    vlSelfRef.x16_main__DOT__clock = vlSelfRef.clock;
    vlSelfRef.x16_main__DOT__top_inst__DOT__clk = vlSelfRef.clock;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI = vlSelfRef.x16_main__DOT__cpu_nmi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_miso 
        = vlSelfRef.x16_main__DOT__spi_miso;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__reset = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__rst 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__rst_i 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__clk = vlSelfRef.x16_main__DOT__clock;
    vlSelfRef.x16_main__DOT__top_inst__DOT__clk25 = vlSelfRef.x16_main__DOT__clock;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__clk 
        = vlSelfRef.x16_main__DOT__clock;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__clk_i 
        = vlSelfRef.x16_main__DOT__clock;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_miso 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_miso;
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
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__clk_i 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__clk_i;
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
}

void Vx16_main___024root___eval_triggers__ico(Vx16_main___024root* vlSelf);

bool Vx16_main___024root___eval_phase__ico(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vx16_main___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vx16_main___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vx16_main___024root___eval_act(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vx16_main___024root___nba_sequent__TOP__0(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__1(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__2(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__3(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__4(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__5(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__6(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__7(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__8(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__9(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__10(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__11(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__12(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__0(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__13(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__14(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__1(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__2(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__15(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__3(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__16(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__17(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__18(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__19(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__4(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__5(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__6(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__7(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_sequent__TOP__20(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__8(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__9(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__10(Vx16_main___024root* vlSelf);
void Vx16_main___024root___nba_comb__TOP__11(Vx16_main___024root* vlSelf);

void Vx16_main___024root___eval_nba(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__1(vlSelf);
        Vx16_main___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x60ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x102ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0xa0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x62ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x63ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x66ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x67ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x107ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x27ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x67ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vx16_main___024root___nba_comb__TOP__11(vlSelf);
    }
}

extern const VlUnpacked<CData/*7:0*/, 512> Vx16_main__ConstPool__TABLE_he0317981_0;
extern const VlUnpacked<CData/*7:0*/, 512> Vx16_main__ConstPool__TABLE_haf9b229c_0;
extern const VlUnpacked<CData/*5:0*/, 4> Vx16_main__ConstPool__TABLE_hf1527a20_0;

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__0(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    SData/*8:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    SData/*8:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v1;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v1 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v1;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v2;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v2 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v2;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v3;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v3 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v3;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v3 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 = 0;
    IData/*23:0*/ __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r = 0;
    IData/*22:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0;
    __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 = 0;
    SData/*11:0*/ __VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0;
    __VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v1;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v1 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v2;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v2 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v3;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v3 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0;
    __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 = 0;
    // Body
    vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r;
    vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r;
    vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r;
    __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v0 = 0U;
    vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v1 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v1 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v2 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v3 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 = 0U;
    __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__hactive) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive));
    vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r 
        = ((2U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r) 
                  << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync));
    vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r 
        = ((2U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r) 
                  << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync));
    vlSelfRef.__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r 
        = ((2U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r) 
                  << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active));
    __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
        = (0xffffffU & ((IData)(0x24a790U) + vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2d) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2c) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2b) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2a) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1d) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1c) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1b) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1a) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 
            = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1) 
                        >> 2U));
        __VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__palette_write) {
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_bytesel))) {
            vlSelfRef.__VdlyVal__x16_main__DOT__top_inst__DOT__palette_ram__v0 
                = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wrdata) 
                            >> 8U));
            vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v0 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wridx;
            vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v0 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_bytesel))) {
            vlSelfRef.__VdlyVal__x16_main__DOT__top_inst__DOT__palette_ram__v1 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wrdata));
            vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v1 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wridx;
            vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v1 = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_write) {
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel))) {
            __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v0 
                = (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wrdata 
                   >> 0x18U);
            __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v0 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wraddr;
            __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v0 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel))) {
            __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v1 
                = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wrdata 
                            >> 0x10U));
            __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v1 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wraddr;
            __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v1 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel))) {
            __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v2 
                = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wrdata 
                            >> 8U));
            __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v2 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wraddr;
            __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v2 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_bytesel))) {
            __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v3 
                = (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wrdata);
            __VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v3 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wraddr;
            __VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v3 = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_b) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_b;
        __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_b) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_b;
        __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_c) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_c;
        __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_c) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_c;
        __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_a) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a;
        __VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_a) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a;
        __VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_write) {
        vlSelfRef.__VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
        vlSelfRef.__VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 
            = (0x3fU & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r);
        vlSelfRef.__VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r) {
        __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wrdata;
        __VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wridx_r;
        __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset)))) {
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_r) 
             & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full)))) {
            __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r;
            __VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r;
            __VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0 = 1U;
        }
    }
    __Vtableidx22 = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
                               >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval 
        = Vx16_main__ConstPool__TABLE_he0317981_0[__Vtableidx22];
    __Vtableidx21 = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
                               >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval 
        = Vx16_main__ConstPool__TABLE_haf9b229c_0[__Vtableidx21];
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma 
        = (0x3fU & ((IData)(0x20U) + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__chroma_s) 
                                      >> 8U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__lrck_r 
        = vlSelfRef.audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_r 
        = (3U & vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r);
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_c 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_c];
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_b];
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_a];
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_b];
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_c 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c];
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a];
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr14 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr) 
                 >> 0xeU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_idx9_r 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx) 
                 >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_idx9_r 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx) 
                 >> 9U));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8;
    }
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_cs))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfffffff0U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xfU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xffffff0fU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf0U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfffff0ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf00U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xffff0fffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfff0ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf0000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x20U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xff0fffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf00000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x40U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xf0ffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x80U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf0000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10
        [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))];
    if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write) 
         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_cs))) {
        if ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfffffff0U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xfU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xffffff0fU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf0U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfffff0ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf00U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((8U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xffff0fffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfff0ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf0000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x20U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xff0fffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf00000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x40U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xf0ffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
        if ((0x80U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[(0x3fffU 
                                                                                & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))] 
                = ((0xfffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
                    [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))]) 
                   | (0xf0000000U & vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata));
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32
        [(0x3fffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem
        [vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram
        [vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_idx];
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_scaled_r 
        = (0x3fffffU & VL_MULS_III(22, (0x3fffffU & 
                                        VL_EXTENDS_II(22,16, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_r))), 
                                   (0x3fffffU & VL_EXTENDS_II(22,8, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume_log)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_scaled_r 
        = (0x3fffffU & VL_MULS_III(22, (0x3fffffU & 
                                        VL_EXTENDS_II(22,16, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r))), 
                                   (0x3fffffU & VL_EXTENDS_II(22,8, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume_log)))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r 
        = (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r 
        = (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2d 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2c 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1d 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1c 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                   >> 2U))];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem
        [(0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1) 
                   >> 2U))];
    if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r))) {
        vlSelfRef.vga_b = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_b));
        vlSelfRef.vga_r = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_r));
        vlSelfRef.vga_g = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_g;
        vlSelfRef.vga_vsync = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vsync;
        vlSelfRef.vga_hsync = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_hsync;
    } else {
        if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r))) {
            vlSelfRef.vga_b = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma2));
            vlSelfRef.vga_r = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_luma) 
                                       >> 2U));
            vlSelfRef.vga_g = ((0xcU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_luma) 
                                        << 2U)) | (3U 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma2) 
                                                      >> 4U)));
        } else if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r))) {
            vlSelfRef.vga_b = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_b));
            vlSelfRef.vga_r = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_r));
            vlSelfRef.vga_g = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_g;
        } else {
            vlSelfRef.vga_b = (0xfU & 0U);
            vlSelfRef.vga_r = (0xfU & 0U);
            vlSelfRef.vga_g = 0U;
        }
        vlSelfRef.vga_vsync = ((2U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r)) 
                               && ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r)) 
                                   && ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r) 
                                       && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_vsync))));
        vlSelfRef.vga_hsync = ((2U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r)) 
                               && ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r)) 
                                   && ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r)
                                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync)
                                        : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_sync_n))));
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r = 0U;
    } else {
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read) 
             & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r
                [vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r];
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_next;
        }
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_r) 
             & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_next;
        }
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r;
    if (__VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v0] 
            = ((0xffffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram
                [__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v0]) 
               | ((IData)(__VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v0) 
                  << 0x18U));
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v1) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v1] 
            = ((0xff00ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram
                [__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v1]) 
               | ((IData)(__VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v1) 
                  << 0x10U));
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v2) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v2] 
            = ((0xffff00ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram
                [__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v2]) 
               | ((IData)(__VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v2) 
                  << 8U));
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_ram__v3) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v3] 
            = ((0xffffff00U & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_ram
                [__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_ram__v3]) 
               | (IData)(__VdlyVal__x16_main__DOT__top_inst__DOT__sprite_ram__v3));
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem[__VdlyDim0__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem__v0;
    }
    if (__VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r[__VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0] 
            = __VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r__v0;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__value 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__value 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__phase 
        = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
                     >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__phase 
        = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r 
                     >> 0xfU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__chroma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_chroma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__chroma_s 
        = (0x3fffU & (VL_MULS_III(14, (0x3fffU & VL_EXTENDS_II(14,8, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval_s))), 
                                  (0x3fffU & VL_EXTENDS_II(14,8, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i8_s)))) 
                      + VL_MULS_III(14, (0x3fffU & 
                                         VL_EXTENDS_II(14,8, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval_s))), 
                                    (0x3fffU & VL_EXTENDS_II(14,8, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q8_s))))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_ack;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_saw 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                    >> 0xbU));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_triangle 
        = (0x3fU & ((0x10000U & vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data)
                     ? (~ (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                           >> 0xaU)) : (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                                        >> 0xaU)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data 
                    >> 0x11U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_phase 
        = (0x1ffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data);
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_vflip 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
                 >> 0x11U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_y 
        = (0x3ffU & vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr);
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_height 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr 
           >> 0x1eU);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_left 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_scaled_r 
                      >> 6U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm_right 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_scaled_r 
                      >> 6U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2d;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2d)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2c))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2b)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2a)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1d;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1d)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1c))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1b)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1a)));
    vlSelfRef.x16_main__DOT__vga_b = vlSelfRef.vga_b;
    vlSelfRef.x16_main__DOT__vga_r = vlSelfRef.vga_r;
    vlSelfRef.x16_main__DOT__vga_g = vlSelfRef.vga_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_luma 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__lum) 
                    >> 2U));
    vlSelfRef.x16_main__DOT__vga_vsync = vlSelfRef.vga_vsync;
    vlSelfRef.x16_main__DOT__vga_hsync = vlSelfRef.vga_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rddata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__chroma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__chroma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval_s 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i_s 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active)
                      ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst)
                          ? 0x171U : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_R_times_r) 
                                       - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_G_n_times_g)) 
                                      - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_B_n_times_b)))
                      : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst)
                          ? 0x171U : 0U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i8_s 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i_s) 
                    >> 4U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval_s 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q_s 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active)
                      ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst)
                          ? 0xea1U : (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_R_times_r) 
                                       - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_G_n_times_g)) 
                                      + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_B_times_b)))
                      : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst)
                          ? 0xea1U : 0U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q8_s 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q_s) 
                    >> 4U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_noise 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise;
    __Vtableidx19 = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_height;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels 
        = Vx16_main__ConstPool__TABLE_hf1527a20_0[__Vtableidx19];
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_b = vlSelfRef.x16_main__DOT__vga_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_r = vlSelfRef.x16_main__DOT__vga_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_g = vlSelfRef.x16_main__DOT__vga_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_vsync 
        = vlSelfRef.x16_main__DOT__vga_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vga_hsync 
        = vlSelfRef.x16_main__DOT__vga_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_next 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__luma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_luma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__lum 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,12, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__y_s)))
            ? 0U : (VL_LTES_III(32, 0x7ffU, VL_EXTENDS_II(32,12, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__y_s)))
                     ? 0xffU : (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__y_s) 
                                         >> 3U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__y_s 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active)
                      ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst)
                          ? 0x550U : ((IData)(0x280U) 
                                      + (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r) 
                                          + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G_times_g)) 
                                         + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_B_times_b))))
                      : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst)
                          ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n)
                              ? 0x220U : 0U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n)
                                                 ? 0x220U
                                                 : 0U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_next 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r) 
           == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__fifo_count 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r) 
                     - (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_next) 
           == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__luma 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__luma;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low 
        = (0x400U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__fifo_count));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_full 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_full;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_almost_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_low;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_full 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_full;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_almost_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_almost_empty;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__full 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_full;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__almost_empty 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_almost_empty;
}

extern const VlUnpacked<CData/*0:0*/, 16384> Vx16_main__ConstPool__TABLE_h2c99de0f_0;
extern const VlUnpacked<CData/*3:0*/, 16384> Vx16_main__ConstPool__TABLE_h407c50c9_0;
extern const VlUnpacked<CData/*1:0*/, 16384> Vx16_main__ConstPool__TABLE_h01a2ef85_0;
extern const VlUnpacked<CData/*1:0*/, 16384> Vx16_main__ConstPool__TABLE_h340d18fd_0;
extern const VlUnpacked<CData/*0:0*/, 16384> Vx16_main__ConstPool__TABLE_hfd64b07d_0;

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__1(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*13:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    SData/*13:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    SData/*13:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    SData/*13:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__avr_ram__v0;
    __VdlyVal__x16_main__DOT__avr_ram__v0 = 0;
    SData/*8:0*/ __VdlyDim0__x16_main__DOT__avr_ram__v0;
    __VdlyDim0__x16_main__DOT__avr_ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__cpu_inst__DOT__AXYS__v0;
    __VdlyVal__x16_main__DOT__cpu_inst__DOT__AXYS__v0 = 0;
    CData/*1:0*/ __VdlyDim0__x16_main__DOT__cpu_inst__DOT__AXYS__v0;
    __VdlyDim0__x16_main__DOT__cpu_inst__DOT__AXYS__v0 = 0;
    CData/*0:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o;
    __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o = 0;
    SData/*15:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__t1;
    __Vdly__x16_main__DOT__via_1_inst__DOT__t1 = 0;
    SData/*15:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__t2;
    __Vdly__x16_main__DOT__via_1_inst__DOT__t2 = 0;
    CData/*5:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay;
    __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__pbo;
    __Vdly__x16_main__DOT__via_1_inst__DOT__pbo = 0;
    CData/*4:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt;
    __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__sr;
    __Vdly__x16_main__DOT__via_1_inst__DOT__sr = 0;
    SData/*8:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__ierd;
    __Vdly__x16_main__DOT__via_1_inst__DOT__ierd = 0;
    CData/*3:0*/ __VdlyVal__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id__v1;
    __VdlyVal__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id__v1 = 0;
    CData/*1:0*/ __Vdly__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy;
    __Vdly__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy = 0;
    CData/*4:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__reg_clr_cnt;
    __Vdly__x16_main__DOT__attiny_inst__DOT__reg_clr_cnt = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS;
    __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS = 0;
    CData/*1:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt;
    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 0;
    SData/*13:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__PC;
    __Vdly__x16_main__DOT__attiny_inst__DOT__PC = 0;
    SData/*15:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data;
    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data = 0;
    CData/*5:0*/ __Vdly__x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP;
    __Vdly__x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0;
    __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 = 0;
    CData/*3:0*/ __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0;
    __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1;
    __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 = 0;
    CData/*3:0*/ __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1;
    __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 = 0;
    CData/*7:0*/ __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0;
    __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 = 0;
    CData/*3:0*/ __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0;
    __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__avr_ram__v0;
    __VdlySet__x16_main__DOT__avr_ram__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__cpu_inst__DOT__AXYS__v0;
    __VdlySet__x16_main__DOT__cpu_inst__DOT__AXYS__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0;
    __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1;
    __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 = 0;
    CData/*0:0*/ __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0;
    __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 = 0;
    // Body
    __VdlySet__x16_main__DOT__avr_ram__v0 = 0U;
    __Vdly__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy;
    __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 = 0U;
    vlSelfRef.__Vdly__x16_main__DOT__via_1_inst__DOT__wr_t3 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__wr_t3;
    __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 = 0U;
    __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 = 0U;
    __Vdly__x16_main__DOT__attiny_inst__DOT__reg_clr_cnt 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__reg_clr_cnt;
    __VdlySet__x16_main__DOT__cpu_inst__DOT__AXYS__v0 = 0U;
    __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ie_delay;
    __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt;
    __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o;
    __Vdly__x16_main__DOT__via_1_inst__DOT__sr = vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr;
    __Vdly__x16_main__DOT__via_1_inst__DOT__pbo = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo;
    __Vdly__x16_main__DOT__via_1_inst__DOT__t2 = vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2;
    __Vdly__x16_main__DOT__via_1_inst__DOT__t1 = vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1;
    __Vdly__x16_main__DOT__via_1_inst__DOT__ierd = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ierd;
    __Vdly__x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP;
    __Vdly__x16_main__DOT__attiny_inst__DOT__PC = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
    __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS;
    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data;
    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__n = 2U;
    if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__por_cnt_r) 
                  >> 7U)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__por_cnt_r 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__por_cnt_r)));
    }
    if (vlSelfRef.x16_main__DOT__avr_data_we) {
        __VdlyVal__x16_main__DOT__avr_ram__v0 = vlSelfRef.x16_main__DOT__avr_data_out;
        __VdlyDim0__x16_main__DOT__avr_ram__v0 = (0x1ffU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__avr_data_addr));
        __VdlySet__x16_main__DOT__avr_ram__v0 = 1U;
    }
    vlSelfRef.x16_main__DOT__clk_div = (7U & ((IData)(1U) 
                                              + (IData)(vlSelfRef.x16_main__DOT__clk_div)));
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__write_to_reg) {
        if ((1U & (~ ((~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit)) 
                      & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr)))))) {
            __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 
                = (0xffU & ((1U & ((~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit)) 
                                   & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr)))
                             ? (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data)
                             : ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data) 
                                >> 8U)));
            __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 
                = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr) 
                           >> 1U));
            __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0 = 1U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit)) 
                   & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr))))) {
            __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data));
            __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 
                = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr) 
                           >> 1U));
            __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0 = 1U;
        } else if ((1U & (~ ((~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_16bit)) 
                             & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr))))) {
            __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 
                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_data));
            __VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 
                = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rw_addr) 
                           >> 1U));
            __VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1 = 1U;
        }
    }
    if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst) {
        vlSelfRef.__Vdly__x16_main__DOT__via_1_inst__DOT__wr_t3 = 0U;
        __Vdly__x16_main__DOT__attiny_inst__DOT__reg_clr_cnt = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_32 = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3_access = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_64 = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_64 = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra = 0U;
        vlSelfRef.x16_main__DOT__via_t3_if = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o = 0U;
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD_valid = 0U;
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__res = 1U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_irq = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_irq = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_irq = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_irq = 0U;
        vlSelfRef.x16_main__DOT__via_t1_if = 0U;
        vlSelfRef.x16_main__DOT__via_t2_if = 0U;
        __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 0U;
        __Vdly__x16_main__DOT__via_1_inst__DOT__t1 = 0xffffU;
        __Vdly__x16_main__DOT__via_1_inst__DOT__t2 = 0xffffU;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier = 0U;
        __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode = 0U;
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb = 0U;
    } else {
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__wr_t3) {
            if (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3) 
                 == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3l))) {
                vlSelfRef.__Vdly__x16_main__DOT__via_1_inst__DOT__wr_t3 = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy)))) {
            __Vdly__x16_main__DOT__attiny_inst__DOT__reg_clr_cnt 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__reg_clr_cnt)));
        }
        vlSelfRef.x16_main__DOT__via_t3_if = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp) 
                                              <= (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3));
        if (((4U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode)) 
             & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_trans))) {
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o = 1U;
        } else if ((5U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))) {
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o = 1U;
        }
        if (((0x1eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
             | (0x21U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD_valid = 1U;
        } else if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD_valid = 0U;
        }
        if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__res = 0U;
        }
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_trans) 
               & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier));
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_trans) 
               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                  >> 1U));
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if) 
               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                  >> 2U));
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_trans) 
               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                  >> 3U));
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_trans) 
               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                  >> 4U));
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_t1_if) 
               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                  >> 5U));
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_irq 
            = ((IData)(vlSelfRef.x16_main__DOT__via_t2_if) 
               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                  >> 6U));
        vlSelfRef.x16_main__DOT__via_irq = ((((((((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_trans) 
                                                  & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier)) 
                                                 | ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_trans) 
                                                    & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                       >> 1U))) 
                                                | ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if) 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                      >> 2U))) 
                                               | ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_trans) 
                                                  & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                     >> 3U))) 
                                              | ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_trans) 
                                                 & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                    >> 4U))) 
                                             | ((IData)(vlSelfRef.x16_main__DOT__via_t1_if) 
                                                & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                   >> 5U))) 
                                            | ((IData)(vlSelfRef.x16_main__DOT__via_t2_if) 
                                               & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                  >> 6U)));
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t1z) {
            vlSelfRef.x16_main__DOT__via_t1_if = 1U;
        }
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t2z) {
            vlSelfRef.x16_main__DOT__via_t2_if = 1U;
        }
        if ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ie_delay))) {
            __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay 
                = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ie_delay) 
                            - (IData)(1U)));
        }
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
                            if ((0x12U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0x13U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    vlSelfRef.__Vdly__x16_main__DOT__via_1_inst__DOT__wr_t3 = 1U;
                                    vlSelfRef.x16_main__DOT__via_t3_if = 0U;
                                }
                            }
                        }
                    }
                    if (((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                               | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                             | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                            | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                           | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                         | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        if ((8U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((9U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0xcU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((0xaU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        if ((0xbU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                            if ((0xeU 
                                                 == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                                __Vdly__x16_main__DOT__via_1_inst__DOT__ierd 
                                                    = 
                                                    ((0x180U 
                                                      & (IData)(__Vdly__x16_main__DOT__via_1_inst__DOT__ierd)) 
                                                     | (0x7fU 
                                                        & ((0x80U 
                                                            & (IData)(vlSelfRef.cpu_dout))
                                                            ? 
                                                           ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                            | (IData)(vlSelfRef.cpu_dout))
                                                            : 
                                                           ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier) 
                                                            & (~ (IData)(vlSelfRef.cpu_dout))))));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (((((((((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                           | (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          | (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                         | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                        | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                       | (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                      | (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                     | (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                    if ((1U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra 
                                    = vlSelfRef.cpu_dout;
                            }
                        }
                    }
                    if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        if (((4U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode)) 
                             | (5U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode)))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2o = 0U;
                        }
                    }
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ie_delay))) {
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier 
                = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ierd;
        }
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_le) {
            if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_trans) {
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 1U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo))
                        : (1U & (IData)(vlSelfRef.x16_main__DOT__via_pb_i)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 2U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((2U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 1U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 1U)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 3U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((4U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 2U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 2U)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 4U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((8U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 3U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 3U)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 5U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((0x10U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 4U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 4U)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 6U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((0x20U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 5U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 5U)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 7U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((0x40U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 6U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 6U)));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 8U;
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                    = ((0x80U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                        ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                 >> 7U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                                  >> 7U)));
            }
        } else {
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 1U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo))
                    : (1U & (IData)(vlSelfRef.x16_main__DOT__via_pb_i)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 2U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((2U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 1U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 1U)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 3U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((4U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 2U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 2U)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 4U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((8U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 3U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 3U)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 5U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((0x10U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 4U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 4U)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 6U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((0x20U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 5U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 5U)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 7U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((0x40U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 6U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 6U)));
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__n = 8U;
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbi 
                = ((0x80U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb))
                    ? (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                             >> 7U)) : (1U & ((IData)(vlSelfRef.x16_main__DOT__via_pb_i) 
                                              >> 7U)));
        }
        __Vdly__x16_main__DOT__via_1_inst__DOT__t1 
            = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1) 
                          - (IData)(1U)));
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t1z) {
            if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode))) {
                __Vdly__x16_main__DOT__via_1_inst__DOT__t1 
                    = vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l;
            } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode))) {
                __Vdly__x16_main__DOT__via_1_inst__DOT__pbo 
                    = (0x80U | (IData)(__Vdly__x16_main__DOT__via_1_inst__DOT__pbo));
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier 
                    = (0x1dfU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier));
            } else if ((3U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode))) {
                __Vdly__x16_main__DOT__via_1_inst__DOT__pbo 
                    = ((0x7fU & (IData)(__Vdly__x16_main__DOT__via_1_inst__DOT__pbo)) 
                       | (0x80U & ((~ ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                       >> 7U)) << 7U)));
                __Vdly__x16_main__DOT__via_1_inst__DOT__t1 
                    = vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l;
            }
        }
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t2z) {
            if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_mode)))) {
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier 
                    = (0x1bfU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier));
            }
        }
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_mode) {
            if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_mode) {
                if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb6_ne) {
                    __Vdly__x16_main__DOT__via_1_inst__DOT__t2 
                        = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2) 
                                      - (IData)(1U)));
                }
            }
        } else {
            __Vdly__x16_main__DOT__via_1_inst__DOT__t2 
                = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2) 
                              - (IData)(1U)));
        }
        if ((4U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                    if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
                            = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt) 
                                        - (IData)(1U)));
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                            = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                         << 1U)) | 
                               (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                      >> 7U)));
                        if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 1U;
                        }
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o 
                            = (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                     >> 7U));
                    }
                } else if ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                    if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
                            = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt) 
                                        - (IData)(1U)));
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                            = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                         << 1U)) | 
                               (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                      >> 7U)));
                        if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 1U;
                        }
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o 
                            = (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                     >> 7U));
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode)))) {
                    if ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                        __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o 
                            = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                if ((0U == (0xfffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)))) {
                    if ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                            __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
                                = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt) 
                                            - (IData)(1U)));
                            __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                                = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                             << 1U)) 
                                   | (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                            >> 7U)));
                            if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 1U;
                            }
                        }
                    }
                }
                if ((0U == (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)))) {
                    if ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                        __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o 
                            = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o)));
                        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o 
                                = (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                         >> 7U));
                        }
                    }
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o 
                            = (1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode));
                    }
                }
            } else {
                if ((0U == (0xfffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)))) {
                    if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                            = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                         << 1U)) | 
                               (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                      >> 7U)));
                    }
                }
                if ((0U == (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)))) {
                    __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o 
                        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o)));
                    if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o 
                            = (1U & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                     >> 7U));
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                if ((1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                    if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
                            = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt) 
                                        - (IData)(1U)));
                        __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                            = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                         << 1U)) | (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
                        if ((0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 1U;
                        }
                    }
                } else if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                    __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt) 
                                    - (IData)(1U)));
                    __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                        = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                     << 1U)) | (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode)))) {
                    __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o 
                        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o)));
                }
            } else if ((1U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne) {
                    __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt 
                        = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt) 
                                    - (IData)(1U)));
                    __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                        = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr) 
                                     << 1U)) | (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
                    if ((0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 1U;
                    }
                }
                if ((0U == (0xffU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)))) {
                    __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o 
                        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o)));
                }
            }
            if (((4U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode)) 
                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_trans))) {
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o = 1U;
            } else if ((5U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))) {
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o = 1U;
            }
        }
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs) {
            if (vlSelfRef.cpu_we) {
                if (((((((((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                           | (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          | (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                         | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                        | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                       | (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                      | (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                     | (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                    if ((1U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((3U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((2U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((4U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        if ((5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                            vlSelfRef.x16_main__DOT__via_t1_if = 0U;
                                        } else if (
                                                   (6U 
                                                    != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                            vlSelfRef.x16_main__DOT__via_t1_if = 0U;
                                        }
                                    }
                                }
                                if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb 
                                        = vlSelfRef.cpu_dout;
                                }
                            }
                        }
                        if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            __Vdly__x16_main__DOT__via_1_inst__DOT__pbo 
                                = vlSelfRef.cpu_dout;
                            if (((4U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode)) 
                                 | (5U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode)))) {
                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2o = 0U;
                            }
                        } else if ((3U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((2U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((4U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        __Vdly__x16_main__DOT__via_1_inst__DOT__t1 
                                            = (((IData)(vlSelfRef.cpu_dout) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l)));
                                        if ((2U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode))) {
                                            __Vdly__x16_main__DOT__via_1_inst__DOT__pbo 
                                                = (0x7fU 
                                                   & (IData)(__Vdly__x16_main__DOT__via_1_inst__DOT__pbo));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if (((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                  | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                 | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                             | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                            | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                    if ((8U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        if ((9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            __Vdly__x16_main__DOT__via_1_inst__DOT__t2 
                                = (((IData)(vlSelfRef.cpu_dout) 
                                    << 8U) | (0xffU 
                                              & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2l)));
                        } else if ((0xcU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                __Vdly__x16_main__DOT__via_1_inst__DOT__sr 
                                    = vlSelfRef.cpu_dout;
                                __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt = 0xbU;
                                if ((1U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))) {
                                    __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o = 1U;
                                }
                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_if = 0U;
                            } else if ((0xbU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier 
                                        = (0x17fU & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ier));
                                    __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay = 1U;
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                    | (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                   | (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                 | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                | (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               | (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))))) {
                    if (((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                               | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                             | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                            | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                           | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                         | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        if ((8U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                vlSelfRef.x16_main__DOT__via_t2_if = 0U;
                            }
                            if ((9U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0xcU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((0xaU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        if ((0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode 
                                                = (7U 
                                                   & ((IData)(vlSelfRef.cpu_dout) 
                                                      >> 2U));
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
    if (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge) 
         & (0xbU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge = 0U;
    } else if (((IData)(vlSelfRef.cpu_nmi) & (~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_1)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_edge = 1U;
    }
    if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_register) {
        __VdlyVal__x16_main__DOT__cpu_inst__DOT__AXYS__v0 
            = ((0x1aU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))
                ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX)
                : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AO));
        __VdlyDim0__x16_main__DOT__cpu_inst__DOT__AXYS__v0 
            = vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel;
        __VdlySet__x16_main__DOT__cpu_inst__DOT__AXYS__v0 = 1U;
    }
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid_o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid;
    vlSelfRef.x16_main__DOT__via_1_cs_d = vlSelfRef.x16_main__DOT__via_1_cs;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN = (1U 
                                                  & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp) 
                                                     >> 7U));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_HC;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__BI7 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_BI) 
                 >> 7U));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__cond_code 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR) 
                   >> 4U));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid_o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid;
    vlSelfRef.x16_main__DOT__avr_data_in = vlSelfRef.x16_main__DOT__avr_ram
        [(0x1ffU & (IData)(vlSelfRef.x16_main__DOT__avr_data_addr))];
    if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst)))) {
        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3_irq = 0U;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__current_int_executed = 0U;
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_rst_out = 0U;
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_le) {
            if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_trans) {
                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pai 
                    = vlSelfRef.x16_main__DOT__via_pa_i;
            }
        } else {
            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pai 
                = vlSelfRef.x16_main__DOT__via_pa_i;
        }
        if (vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs) {
            if (vlSelfRef.cpu_we) {
                if (((((((((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                           | (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          | (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                         | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                        | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                       | (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                      | (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                     | (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                    if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_if = 0U;
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_if = 0U;
                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao 
                            = vlSelfRef.cpu_dout;
                    }
                    if ((1U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_if = 0U;
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_if = 0U;
                        }
                        if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((3U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((2U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l)) 
                                               | (IData)(vlSelfRef.cpu_dout));
                                    } else if ((5U 
                                                != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l 
                                            = ((6U 
                                                == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))
                                                ? (
                                                   (0xff00U 
                                                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l)) 
                                                   | (IData)(vlSelfRef.cpu_dout))
                                                : (
                                                   (0xffU 
                                                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1l)) 
                                                   | ((IData)(vlSelfRef.cpu_dout) 
                                                      << 8U)));
                                    }
                                }
                            }
                        }
                    }
                } else if (((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                  | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                 | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                             | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                            | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                    if ((8U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                        if ((9U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((0xcU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0xaU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((0xbU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        if ((0xeU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                            if ((0xfU 
                                                 == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                                vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao 
                                                    = vlSelfRef.cpu_dout;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                    | (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                   | (3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  | (2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                 | (4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                | (5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                               | (6U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (7U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))))) {
                    if (((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                               | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                              | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                             | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                            | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                           | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                          | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                         | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))) {
                        if ((8U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((9U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode 
                                        = (1U & ((IData)(vlSelfRef.cpu_dout) 
                                                 >> 4U));
                                    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode 
                                        = (1U & (IData)(vlSelfRef.cpu_dout));
                                    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode 
                                        = (7U & ((IData)(vlSelfRef.cpu_dout) 
                                                 >> 1U));
                                    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode 
                                        = (7U & ((IData)(vlSelfRef.cpu_dout) 
                                                 >> 5U));
                                }
                                if ((0xcU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((0xaU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        if ((0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_le 
                                                = (1U 
                                                   & (IData)(vlSelfRef.cpu_dout));
                                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_le 
                                                = (1U 
                                                   & ((IData)(vlSelfRef.cpu_dout) 
                                                      >> 1U));
                                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1_mode 
                                                = (3U 
                                                   & ((IData)(vlSelfRef.cpu_dout) 
                                                      >> 6U));
                                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2_mode 
                                                = (1U 
                                                   & ((IData)(vlSelfRef.cpu_dout) 
                                                      >> 5U));
                                        }
                                    }
                                }
                            }
                        }
                        if ((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2l 
                                = ((0xff00U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2l)) 
                                   | (IData)(vlSelfRef.cpu_dout));
                        }
                    }
                    if ((1U & (~ ((((((((8U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)) 
                                        | (9U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                       | (0xcU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                      | (0xaU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                     | (0xbU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                    | (0xeU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                   | (0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) 
                                  | (0x10U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr)))))) {
                        if ((0x11U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                            if ((0x12U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                if ((0x13U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                    if ((0x14U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp 
                                            = ((0xff00U 
                                                & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp)) 
                                               | (IData)(vlSelfRef.cpu_dout));
                                    } else if ((0x15U 
                                                == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__access_addr))) {
                                        vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp 
                                            = ((0xffU 
                                                & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3cmp)) 
                                               | ((IData)(vlSelfRef.cpu_dout) 
                                                  << 8U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_rst = 0U;
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
                = ((0xf0U & (IData)(__Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS)) 
                   | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT) 
                       << 3U) | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT) 
                                  << 2U) | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT)))));
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
                = ((0xfU & (IData)(__Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS)) 
                   | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_I_OUT) 
                       << 7U) | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_T_OUT) 
                                  << 6U) | (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT) 
                                             << 5U) 
                                            | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT) 
                                               << 4U)))));
            __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 1U;
            __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE;
            if ((1U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT) {
                    if ((0x800U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                        if ((0x3dU == ((0x30U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                 >> 5U)) 
                                       | (0xfU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                                = ((0x1f00U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)) 
                                   | (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)));
                        } else if ((0x3eU == ((0x30U 
                                               & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                  >> 5U)) 
                                              | (0xfU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                                = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)) 
                                   | (0x1f00U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d) 
                                                 << 8U)));
                        } else if ((0x3fU == ((0x30U 
                                               & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                  >> 5U)) 
                                              | (0xfU 
                                                 & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
                                = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                        }
                    }
                }
                if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM))) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_indirect_addr 
                        = (0x3fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data_switched))
                            ? (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE)
                            : (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = (0x3fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                }
                if ((((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP) 
                        | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN)) 
                       | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X)) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN))) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RJMP) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = (0x3fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__relative_offset));
                }
                if ((((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL) 
                      | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL)) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered))) {
                    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL) 
                         | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL))) {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                    }
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE;
                }
                if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI))) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP 
                        = (0x3fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_in_int));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COND_BRANCH) {
                    if (((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                   >> 0xaU))) == (1U 
                                                  & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                                                     >> 
                                                     (7U 
                                                      & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)))))) {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                            = (0x3fffU & ((IData)(1U) 
                                          + ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC) 
                                             + ((0x3fc0U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                                   >> 9U)))) 
                                                    << 6U)) 
                                                | (0x3fU 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                      >> 3U))))));
                    }
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 2U;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST) {
                    if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
                            = ((0xbfU & (IData)(__Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS)) 
                               | (0x40U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d) 
                                            >> (7U 
                                                & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) 
                                           << 6U)));
                    }
                }
            } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
                if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R_P))) {
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS) {
                    if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) {
                        if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__select_io_in_stam) {
                            if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                 == ((IData)(0x3dU) 
                                     + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                                    = ((0x1f00U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)) 
                                       | (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d)));
                            } else if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                        == ((IData)(0x3eU) 
                                            + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                                    = ((0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)) 
                                       | (0x1f00U & 
                                          ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d) 
                                           << 8U)));
                            } else if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                        == ((IData)(0x3fU) 
                                            + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
                                    = (0xffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                            }
                        }
                    }
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = (0x3fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = (0x3fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RCALL) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE;
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = (0x3fffU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__relative_offset));
                }
                if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RET) 
                     | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RETI))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP 
                        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE;
                    if ((0x10U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data))) {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
                            = (0x80U | (IData)(__Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS));
                    }
                    __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                        = (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP) 
                            << 8U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_in_int));
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CPSE) {
                    if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d) 
                         == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_r))) {
                        if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS) 
                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP))) {
                            __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_TWO;
                        }
                    } else {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                    }
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBRC_SBRS) {
                    if (((1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__rd_data_d) 
                                >> (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) 
                         == (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                   >> 9U)))) {
                        if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS) 
                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP))) {
                            __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_TWO;
                        }
                    } else {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                    }
                }
                if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBIC_SBIS) {
                    if (((1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_in_int) 
                                >> (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data)))) 
                         == (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                   >> 9U)))) {
                        if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS) 
                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP))) {
                            __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                                = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_TWO;
                        }
                    } else {
                        __Vdly__x16_main__DOT__attiny_inst__DOT__PC 
                            = vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC;
                    }
                }
            }
        } else {
            __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS = 0U;
            __Vdly__x16_main__DOT__attiny_inst__DOT__PC = 0U;
            __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt = 1U;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy)))) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__rom_read_delay = 1U;
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered = 0U;
        }
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CALL 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CALL));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_JMP 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_MUL 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_MULS 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_MULSU 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_FMUL 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_FMULS 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_FMULSU 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_ELPM 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP));
        if (((0x1eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
             | (0x21U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__IRHOLD 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX;
        }
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBIC_SBIS 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RET 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RETI 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RCALL 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBRC_SBRS 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R_P 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P));
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CPSE 
            = ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy) 
               && (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE));
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI7 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                 >> 7U));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (IData)(vlSelfRef.x16_main__DOT__via_cb1_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (IData)(vlSelfRef.x16_main__DOT__via_ca2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (IData)(vlSelfRef.x16_main__DOT__via_ca1));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst))) 
           && (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t3)));
    vlSelfRef.x16_main__DOT__via_ack_o = ((~ (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__sys_rst)) 
                                          & ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wo)
                                              ? (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__wo)
                                              : ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs) 
                                                 & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ro))));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC = (0xffffU 
                                                  & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_temp) 
                                                     + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC_inc)));
    __Vtableidx11 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR) 
                      << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state));
    if (Vx16_main__ConstPool__TABLE_h2c99de0f_0[__Vtableidx11]) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__op 
            = Vx16_main__ConstPool__TABLE_h407c50c9_0
            [__Vtableidx11];
    }
    __Vtableidx10 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR) 
                      << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state));
    if (Vx16_main__ConstPool__TABLE_h2c99de0f_0[__Vtableidx10]) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__src_reg 
            = Vx16_main__ConstPool__TABLE_h01a2ef85_0
            [__Vtableidx10];
    }
    __Vtableidx9 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR) 
                     << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state));
    if (Vx16_main__ConstPool__TABLE_h2c99de0f_0[__Vtableidx9]) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__dst_reg 
            = Vx16_main__ConstPool__TABLE_h340d18fd_0
            [__Vtableidx9];
    }
    if ((((((0x21U != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
            & (0x22U != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
           & (0x1eU != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
          & (0x1fU != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) 
         & (0x20U != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABL 
            = (0xffU & (IData)(vlSelfRef.cpu_addr));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__ABH 
            = (0xffU & ((IData)(vlSelfRef.cpu_addr) 
                        >> 8U));
    }
    if ((0xbU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__I = 1U;
    } else if ((0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__I = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 2U));
    } else if ((0x24U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__sei) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__I = 1U;
        }
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__cli) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__I = 0U;
        }
    } else if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__I 
                = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                         >> 2U));
        }
    }
    if ((0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__V = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 6U));
    } else if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_sbc) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__V 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AV;
        }
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__clv) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__V = 0U;
        }
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__V 
                = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                         >> 6U));
        }
    } else if (((0xdU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__bit_ins_nv))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__V = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 6U));
    }
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__adj_bcd 
        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_sbc) 
           & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__D));
    if (((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
         | (8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_bcd 
            = (((0x72U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)) 
                || (0x61U == (0xe3U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
               && (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__D));
    }
    if ((0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__D = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 3U));
    } else if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__sed) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__D = 1U;
        }
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__cld) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__D = 0U;
        }
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__D 
                = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                         >> 3U));
        }
    }
    if (((0x2eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
         & (~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__txb_ins)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__N = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN1;
    } else if ((0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__N = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 7U));
    } else if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__N 
                = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                         >> 7U));
        } else if ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_reg) 
                     & (1U != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel))) 
                    | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__compare))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__N 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN1;
        }
    } else if (((0xdU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
                & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__bit_ins_nv))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__N = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 7U));
    }
    if ((0x2eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z = 
            ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__txb_ins)
              ? (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ2)
              : (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ1));
    } else if ((0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z = 
            (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX) 
                   >> 1U));
    } else if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z 
                = (1U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD) 
                         >> 1U));
        } else if (((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_reg) 
                      & (1U != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regsel))) 
                     | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__compare)) 
                    | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__bit_ins))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__Z 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ1;
        }
    }
    if (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__shift) 
         & (0x2eU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__C = vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO;
    } else if ((0x27U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__C = 
            (1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__DIMUX));
    } else if (((~ (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__write_back)) 
                & (0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
        if ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_sbc) 
              | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__shift)) 
             | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__compare))) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__C 
                = vlSelfRef.x16_main__DOT__cpu_inst__DOT__CO;
        } else if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp) {
            vlSelfRef.x16_main__DOT__cpu_inst__DOT__C 
                = (1U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD));
        } else {
            if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__sec) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__C = 1U;
            }
            if (vlSelfRef.x16_main__DOT__cpu_inst__DOT__clc) {
                vlSelfRef.x16_main__DOT__cpu_inst__DOT__C = 0U;
            }
        }
    }
    if (((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)) 
         | (8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state)))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_sbc 
            = ((0x72U == (0x7fU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (0x61U == (0x63U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
    }
    if ((0xcU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state))) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__shift_right 
            = ((0x46U == (0xc7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (0x4aU == (0xcbU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__rotate 
            = ((0x2aU == (0xbfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (0x26U == (0xa7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__inc 
            = (((0x1aU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)) 
                || (0xe6U == (0xe7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
               || (0xc8U == (0xdfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__trb_ins 
            = (0x14U == (0xf7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_only 
            = (0xa0U == (0xe0U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__php 
            = (8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__store_zero 
            = ((0x9cU == (0xfdU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (0x64U == (0xefU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__index_y 
            = ((((0x11U == (0x1fU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
                 || (0x96U == (0xdfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
                || (0xbeU == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (9U == (0xfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__sei 
            = (0x78U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__cli 
            = (0x58U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__clv 
            = (0xb8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__bit_ins_nv 
            = (0x24U == (0xe7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__bit_ins 
            = ((0x24U == (0xe7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (0x89U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__txb_ins 
            = (4U == (0xe7U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__sec 
            = (0x38U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__clc 
            = (0x18U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__shift 
            = ((6U == (0x87U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))) 
               || (0xaU == (0x9fU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__compare 
            = ((((0xd2U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)) 
                 || (0xc0U == (0xdbU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
                || (0xccU == (0xdfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR)))) 
               || (0xc1U == (0xe3U & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR))));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__sed 
            = (0xf8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__cld 
            = (0xd8U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__plp 
            = (0x28U == (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR));
    }
    if (__VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH[__VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0] 
            = __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH__v0;
    }
    if (__VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL[__VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0] 
            = __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v0;
    }
    if (__VdlySet__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1) {
        vlSelfRef.x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL[__VdlyDim0__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1] 
            = __VdlyVal__x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL__v1;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__reg_clr_cnt 
        = __Vdly__x16_main__DOT__attiny_inst__DOT__reg_clr_cnt;
    if (__VdlySet__x16_main__DOT__cpu_inst__DOT__AXYS__v0) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS[__VdlyDim0__x16_main__DOT__cpu_inst__DOT__AXYS__v0] 
            = __VdlyVal__x16_main__DOT__cpu_inst__DOT__AXYS__v0;
    }
    if (__VdlySet__x16_main__DOT__avr_ram__v0) {
        vlSelfRef.x16_main__DOT__avr_ram[__VdlyDim0__x16_main__DOT__avr_ram__v0] 
            = __VdlyVal__x16_main__DOT__avr_ram__v0;
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP 
        = __Vdly__x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC = __Vdly__x16_main__DOT__attiny_inst__DOT__PC;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS 
        = __Vdly__x16_main__DOT__attiny_inst__DOT__ALU_FLAGS;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data 
        = __Vdly__x16_main__DOT__attiny_inst__DOT__tmp_pgm_data;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt 
        = __Vdly__x16_main__DOT__attiny_inst__DOT__step_cnt;
    vlSelfRef.x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__clk_div) 
                 >> 2U));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__NMI_1 = vlSelfRef.cpu_nmi;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__A = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [0U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__X = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [2U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__Y = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [3U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__S = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AXYS
        [1U];
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__N 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN1 = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AN;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC;
    __VdlyVal__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id__v1 
        = (vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id
           [0U] & (- (IData)((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid 
        = (vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id
           [1U] & (- (IData)((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs))));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_in 
        = vlSelfRef.x16_main__DOT__avr_data_in;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_in_int 
        = vlSelfRef.x16_main__DOT__avr_data_in;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__executed 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__current_int_executed;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_rst_in 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_rst_out;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_cb1_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_cb1_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_ca2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_ca2_i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_ca2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_ca1));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_ca1));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_ca1)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed) 
           ^ (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_cb2_i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_pe 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_cb2_i));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ack_o 
        = vlSelfRef.x16_main__DOT__via_ack_o;
    __Vdly__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy 
        = ((((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy) 
             & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs)) 
            << 1U) | (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ro 
        = (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy) 
            >> 1U) & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cs));
    vlSelfRef.x16_main__DOT__via_pa_o = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pao;
    vlSelfRef.x16_main__DOT__via_pa_t = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddra;
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
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCH = (0xffU 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC) 
                                                      >> 8U));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__PCL = (0xffU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__PC));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADJL = 
        ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adj_bcd)
          ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__adc_bcd)
              ? ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC)
                  ? 6U : 0U) : ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__HC)
                                 ? 0U : 0xaU)) : 0U);
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ2 = (1U 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__AI) 
                                                                  & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__regfile))))));
    __Vtableidx8 = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__IR) 
                     << 6U) | (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__state));
    if (Vx16_main__ConstPool__TABLE_h2c99de0f_0[__Vtableidx8]) {
        vlSelfRef.x16_main__DOT__cpu_inst__DOT__load_reg 
            = Vx16_main__ConstPool__TABLE_hfd64b07d_0
            [__Vtableidx8];
    }
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__irq_o 
        = vlSelfRef.x16_main__DOT__via_irq;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_TWO 
        = (0x3fffU & ((IData)(2U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_THREE 
        = (0x3fffU & ((IData)(3U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__relative_offset_rjmp 
        = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC) 
                      + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____VdfgRegularize_h8a0dea4a_2_0)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE 
        = (0x3fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE 
        = (0x1fffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP) 
                      - (IData)(1U)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE 
        = (0x1fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SP)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_C_IN 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__ALU_FLAGS) 
                 >> 0U));
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
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__wc_clk_i 
        = vlSelfRef.x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id[0U] = 0U;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id[1U] 
        = __VdlyVal__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id__v1;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued2__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued1__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_trans 
        = (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode) 
            & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_pe)) 
           | ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_mode)) 
              & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca1_ne)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ee 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ee;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued4__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_pe;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ack_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy 
        = __Vdly__x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_o 
        = vlSelfRef.x16_main__DOT__via_pa_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_t 
        = vlSelfRef.x16_main__DOT__via_pa_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pa_i 
        = vlSelfRef.x16_main__DOT__via_pa_i;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ierd 
        = __Vdly__x16_main__DOT__via_1_inst__DOT__ierd;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ie_delay 
        = __Vdly__x16_main__DOT__via_1_inst__DOT__ie_delay;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_cnt 
        = __Vdly__x16_main__DOT__via_1_inst__DOT__sr_cnt;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_cb1_i)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1o 
        = __Vdly__x16_main__DOT__via_1_inst__DOT__cb1o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr = __Vdly__x16_main__DOT__via_1_inst__DOT__sr;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo = __Vdly__x16_main__DOT__via_1_inst__DOT__pbo;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1 = __Vdly__x16_main__DOT__via_1_inst__DOT__t1;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2 = __Vdly__x16_main__DOT__via_1_inst__DOT__t2;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__relative_offset 
        = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE) 
                      + (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT____VdfgRegularize_h8a0dea4a_2_0)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_addr 
        = vlSelfRef.x16_main__DOT__avr_pgm_addr;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_rdy 
        = (0x10U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__reg_clr_cnt));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id_o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__o 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__uag1__DOT__ro;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_trans 
        = ((IData)(((0U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))) 
                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_ne))) 
           | (IData)(((2U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode))) 
                      & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_pe))));
    vlSelfRef.x16_main__DOT__via_ca2_t = (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_mode) 
                                                   >> 2U)));
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
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD = (0xffU 
                                                   & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued3__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_trans 
        = (((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode) 
            & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_pe)) 
           | ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_mode)) 
              & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_ne)));
    vlSelfRef.x16_main__DOT__via_pb_o = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__i 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ne 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed) 
           ^ (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t1z 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed)) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t1)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__i 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ne 
        = ((0U != (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)) 
           & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ee 
        = ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed) 
           ^ (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t2z 
        = ((~ (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed)) 
           & (0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__t2)));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__INTERRUPT_IN_EXECUTION 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE = 0U;
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

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__2(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV = 0U;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P = 0U;
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
                                    if ((0x95c8U == 
                                         (0x1ffefU 
                                          & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                                        vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM = 1U;
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
                    }
                }
                if ((0x2c00U == (0x1fc00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                              << 0x10U) 
                                             | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV = 1U;
                }
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
        if ((0x100U == (0x1ff00U & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__interrupt_registered) 
                                     << 0x10U) | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))))) {
            vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW = 1U;
        }
    }
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ca2_t 
        = vlSelfRef.x16_main__DOT__via_ca2_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_o 
        = vlSelfRef.x16_main__DOT__via_pb_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued8__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t1z;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued7__DOT__pe 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pe_t2z;
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SWAP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SWAP 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP;
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
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                >> 3U));
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__indirect_addr_offset 
                    = ((0x20U & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                 >> 8U)) | ((0x18U 
                                             & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                                                >> 7U)) 
                                            | (7U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))));
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
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH) {
                if ((1U & (~ ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int) 
                              >> 9U)))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
                }
                if ((0x200U & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int))) {
                    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
                }
            }
            if (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET) 
                 | (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI))) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
            }
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__step_cnt))) {
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBIC_SBIS) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int = 1U;
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int 
                    = (0x1fU & ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__tmp_pgm_data) 
                                >> 3U));
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
                            if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                 != ((IData)(0x3dU) 
                                     + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
                                     != ((IData)(0x3eU) 
                                         + vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_ports_displacement))) {
                                    if (((0x7fU & (IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__pgm_data_int)) 
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
            if (vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL) {
                vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int = 1U;
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
        }
    }
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_ELPM 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_R 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MOV 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MOV 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_R_P 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_LPM_R_P 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MOVW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MOVW 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__OUT 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ = (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ADD)))));
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_trans 
        = ((IData)(((0U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))) 
                    & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_ne))) 
           | (IData)(((2U == (6U & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode))) 
                      & (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_pe))));
    vlSelfRef.x16_main__DOT__via_cb1_t = ((0U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode)) 
                                          | ((3U == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode)) 
                                             | (7U 
                                                == (IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode))));
    vlSelfRef.x16_main__DOT__via_cb2_t = (1U & ((~ 
                                                 ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__sr_mode) 
                                                  >> 2U)) 
                                                & (~ 
                                                   ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_mode) 
                                                    >> 2U))));
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
    vlSelfRef.x16_main__DOT__via_pb_t = vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i 
        = (1U & ((~ ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__ddrb) 
                     >> 7U)) | ((IData)(vlSelfRef.x16_main__DOT__via_1_inst__DOT__pbo) 
                                >> 7U)));
    vlSelfRef.x16_main__DOT__avr_io_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_we_int;
    vlSelfRef.x16_main__DOT__avr_io_re = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_re_int;
    vlSelfRef.x16_main__DOT__avr_io_addr = vlSelfRef.x16_main__DOT__attiny_inst__DOT__io_addr_int;
    vlSelfRef.x16_main__DOT__avr_data_re = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_re_int;
    vlSelfRef.x16_main__DOT__avr_data_we = vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_we_int;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__Z 
        = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ;
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ1 = vlSelfRef.x16_main__DOT__cpu_inst__DOT__AZ;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb1_t 
        = vlSelfRef.x16_main__DOT__via_cb1_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_t 
        = vlSelfRef.x16_main__DOT__via_cb2_t;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__cb2_o 
        = vlSelfRef.x16_main__DOT__via_cb2_o;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_t 
        = vlSelfRef.x16_main__DOT__via_pb_t;
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
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__ued5__DOT__ne 
        = vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb6_ne;
    vlSelfRef.x16_main__DOT__via_1_inst__DOT__pb_i 
        = vlSelfRef.x16_main__DOT__via_pb_i;
}

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__3(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n 
        = vlSelfRef.x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n;
}

extern const VlUnpacked<CData/*7:0*/, 16> Vx16_main__ConstPool__TABLE_had34ea41_0;
extern const VlUnpacked<SData/*8:0*/, 64> Vx16_main__ConstPool__TABLE_h4ec04809_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vx16_main__ConstPool__TABLE_hbfcc6d1d_0;
extern const VlUnpacked<CData/*4:0*/, 16> Vx16_main__ConstPool__TABLE_hbd8612ea_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vx16_main__ConstPool__TABLE_h8db03e09_0;

VL_INLINE_OPT void Vx16_main___024root___nba_sequent__TOP__4(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0 = 0;
    IData/*16:0*/ x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1;
    x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1;
    x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1;
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1 = 0;
    CData/*0:0*/ x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2;
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2 = 0;
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
    CData/*1:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    CData/*5:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*3:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*0:0*/ __Vdly__x16_main__DOT__top_inst__DOT__active_line_buf_r;
    __Vdly__x16_main__DOT__top_inst__DOT__active_line_buf_r = 0;
    CData/*2:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r = 0;
    CData/*1:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r = 0;
    SData/*14:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r = 0;
    IData/*31:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r = 0;
    CData/*2:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r = 0;
    CData/*1:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r = 0;
    SData/*14:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r = 0;
    IData/*31:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r = 0;
    SData/*9:0*/ __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r;
    __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx;
    __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx = 0;
    SData/*9:0*/ __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r = 0;
    SData/*10:0*/ __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r = 0;
    SData/*15:0*/ __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r = 0;
    CData/*0:0*/ __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r = 0;
    IData/*16:0*/ __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r = 0;
    SData/*10:0*/ __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt;
    __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt = 0;
    SData/*9:0*/ __Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter;
    __Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r = 0;
    CData/*3:0*/ __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r = 0;
    CData/*0:0*/ __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r = 0;
    CData/*3:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r = 0;
    SData/*15:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r = 0;
    SData/*15:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r = 0;
    CData/*1:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r = 0;
    CData/*2:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r = 0;
    IData/*31:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r = 0;
    CData/*7:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r = 0;
    CData/*0:0*/ __Vdly__audio_lrck;
    __Vdly__audio_lrck = 0;
    CData/*0:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r = 0;
    IData/*24:0*/ __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r = 0;
    // Body
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r;
    __Vdly__audio_lrck = vlSelfRef.audio_lrck;
    __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r;
    __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt;
    __Vdly__x16_main__DOT__top_inst__DOT__active_line_buf_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r;
    __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r;
    __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__fpga_reconfigure_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__fpga_reconfigure_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_port_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r) 
               & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_autotx_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset) 
           || (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_vsync_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_line_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_irq 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__next_line) 
               & (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced)) 
                   & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r) 
                      == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r))) 
                  | ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced) 
                     & ((0x1ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r) 
                                   >> 1U)) == (0xffU 
                                               & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r) 
                                                  >> 1U)))))));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__reset) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__div_cnt_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r = 1U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r = 0U;
        __Vdly__audio_lrck = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx = 0x9fU;
        __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__active_line_buf_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_addr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_x_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_palette_offset_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r = 0x80U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r = 0x1e0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r = 0x280U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r = 0x100U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r = 0x100U;
        __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_data_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_data_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wridx_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r = 0U;
        __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_b = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_g = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_sample_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__field = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r = 0x80U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__current_field = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r = 0U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__div_cnt_r 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__div_cnt_r)));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r 
            = ((0xfffeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r) 
                           << 1U)) | (1U & VL_REDXOR_16(
                                                        (0x8016U 
                                                         & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r)))));
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r) 
             == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_max))) {
            __Vdly__audio_lrck = (1U & (~ (IData)(vlSelfRef.audio_lrck)));
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r = 0U;
        } else {
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r)));
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel) {
            __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r 
                = (0x7ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r) 
                             + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced)
                                 ? 1U : 2U)));
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__h_last) {
            __Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last)
                    ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter))));
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter = 0U;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter)));
        }
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__hactive))) {
            if ((0x280U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter))) {
                __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                    = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                                   + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr_int)));
            }
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__next_line) {
            __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__active_line_buf_r 
                = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)));
            __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r 
                = (0x3ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r) 
                             + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced)
                                 ? 2U : 1U)));
            vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r;
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r) {
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
                = (0x1fffffeU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
                                 << 1U));
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_left) {
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__left_data;
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_right) {
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_sample_r;
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_left) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_sample_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__right_data;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last)
                ? 0U : (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt))));
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last) {
            __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last)
                    ? 0U : (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt))));
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__spi_busy) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_pulse) {
                __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r 
                    = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r)));
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r) {
                    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r 
                        = (0xfeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r) 
                                    << 1U));
                    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r 
                        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r) 
                                   - (IData)(1U)));
                } else {
                    __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r 
                        = ((0xfeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r) 
                                     << 1U)) | (IData)(vlSelfRef.spi_miso));
                }
            }
        } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txstart) {
            __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txdata;
            __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r = 8U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next;
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_lo) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_addr_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_addr;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_x_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_x;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_mode;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next;
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_hi) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_palette_offset_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_palette_offset;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_collision_mask;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_width;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_z;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_hflip;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx_next;
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last2))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame_r = 1U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__field;
        } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame_r = 0U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en = 0U;
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start) {
            __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en = 1U;
        } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_busy) {
            __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx 
                = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx)));
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en = 1U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_next;
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum7_r 
                = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r) 
                         >> 7U));
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r 
                = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r) 
                            + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r)));
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r = 0U;
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__next_line_r) {
            if ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r)) 
                  & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__next_line_r)) 
                 & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r) 
                    >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r)))) {
                __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r = 1U;
                vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r = 1U;
                __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r 
                    = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced) 
                        & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__current_field) 
                           ^ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r)))
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r)
                        : 0U);
            } else if (((0x1e0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter)) 
                        & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive))) {
                __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r 
                    = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r) 
                                  + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced)
                                      ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r) 
                                         << 1U) : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r))));
                vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r = 1U;
            }
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame) {
            __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r 
                = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced) 
                    & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field)))
                    ? 1U : 0U);
            __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__current_field 
                = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field)));
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start = 0U;
        if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r))) {
            if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_addr;
                vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r = 1U;
                __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 2U;
            } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r))) {
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_data_r 
                        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata;
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r = 0U;
                    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 3U;
                }
            } else if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr 
                    = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r)
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r)
                        : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr));
                vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r = 1U;
                __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 4U;
                __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r)));
            } else if ((4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r))) {
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_ack) {
                    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
                        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_rddata;
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r = 0U;
                    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r 
                        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data) 
                                    >> 8U));
                    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r))) {
                if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy)))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r 
                        = ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lines_per_word_minus1))
                            ? (0xffffU & ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx))
                                           ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
                                              >> 0x10U)
                                           : vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r))
                            : ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lines_per_word_minus1))
                                ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx))
                                    ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx))
                                        ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
                                            >> 0x10U)))
                                    : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx))
                                        ? (0xffU & 
                                           (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
                                            >> 8U))
                                        : (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r)))
                                : vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r));
                    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r) {
                        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r 
                            = (0xf0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r) 
                                        >> 4U));
                        __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 3U;
                    } else {
                        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r 
                            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r;
                        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r) 
                             == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__words_per_line_minus1))) {
                            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r)));
                            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r = 0U;
                            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r 
                                = ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt))
                                    ? 1U : 3U);
                        } else {
                            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r)));
                            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 3U;
                        }
                    }
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start = 1U;
                }
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done) {
                    __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = 0U;
                }
            }
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start = 0U;
        if ((0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r))) {
            if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr 
                    = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_addr;
                vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r = 1U;
                __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 2U;
            } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r))) {
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_data_r 
                        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r = 0U;
                    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 3U;
                }
            } else if ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r))) {
                vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr 
                    = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r)
                        ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r)
                        : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr));
                vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r = 1U;
                __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 4U;
                __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r 
                    = (0x7fffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r)));
            } else if ((4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r))) {
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_ack) {
                    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
                        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_rddata;
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r = 0U;
                    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r 
                        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data) 
                                    >> 8U));
                    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 5U;
                }
            } else if ((5U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r))) {
                if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy)))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r 
                        = ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lines_per_word_minus1))
                            ? (0xffffU & ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx))
                                           ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
                                              >> 0x10U)
                                           : vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r))
                            : ((3U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lines_per_word_minus1))
                                ? ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx))
                                    ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx))
                                        ? (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
                                            >> 0x10U)))
                                    : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx))
                                        ? (0xffU & 
                                           (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
                                            >> 8U))
                                        : (0xffU & vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r)))
                                : vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r));
                    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r) {
                        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r 
                            = (0xf0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                                        >> 4U));
                        __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 3U;
                    } else {
                        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r 
                            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r;
                        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r) 
                             == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__words_per_line_minus1))) {
                            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r 
                                = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r)));
                            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r = 0U;
                            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r 
                                = ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt))
                                    ? 1U : 3U);
                        } else {
                            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r)));
                            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 3U;
                        }
                    }
                    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start = 1U;
                }
                if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done) {
                    __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = 0U;
                }
            }
        }
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
            __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r)
                    ? 3U : 1U);
            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_line_addr;
            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r 
                = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r)
                    ? 3U : 1U);
            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_line_addr;
        } else if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done)))) {
            __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r)));
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r = 0U;
        if ((0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r;
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__next_sample) {
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r = 1U;
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r = 0U;
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r = 0U;
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r = 0U;
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r = 0U;
            }
        } else if ((1U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r))) {
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_rddata) 
                    << 0x18U) | (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                                 >> 8U));
            if ((4U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r))) {
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r = 2U;
            }
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r)));
        } else if ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r))) {
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_left_en) {
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r 
                    = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r) 
                                  + ((0xf000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal) 
                                                                >> 0xeU)))) 
                                                 << 0xcU)) 
                                     | (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal) 
                                                  >> 3U)))));
            }
            if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_right_en) {
                __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r 
                    = (0xffffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r) 
                                  + ((0xf000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal) 
                                                                >> 0xeU)))) 
                                                 << 0xcU)) 
                                     | (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal) 
                                                  >> 3U)))));
            }
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wridx_r 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r;
            vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r = 1U;
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r = 0U;
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r 
                = ((0xfU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r))
                    ? 0U : 1U);
            __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r 
                = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r)));
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next;
        if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_b 
                = (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data));
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_r 
                = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                           >> 8U));
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_g 
                = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__palette_rgb_data) 
                           >> 4U));
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_b = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_r = 0U;
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_g = 0U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_next;
        if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last) 
             & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__field = 1U;
        } else if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last) 
                    & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_even_field_last))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__field = 0U;
        }
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_next;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vsync 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset) 
           || (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r) 
                        >> 1U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_hsync 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset) 
           || (1U & (~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r) 
                        >> 1U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__chroma_disable_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r;
    vlSelfRef.audio_lrck = __Vdly__audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx 
        = __Vdly__x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter 
        = __Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt 
        = __Vdly__x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt;
    vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
        = __Vdly__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__noise_value_r 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r) 
                    >> 1U));
    vlSelfRef.x16_main__DOT__audio_lrck = vlSelfRef.audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_busy 
        = (0x9fU != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter 
        = (0x3ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r) 
                     >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last 
        = (0x20cU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync 
        = ((0x1eaU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter)) 
           & (0x1ecU > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_active 
        = (0x1e0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last2 
        = (0x20bU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync 
        = ((0x290U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter)) 
           & (0x2f0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__h_active 
        = (0x280U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line 
        = (0x31fU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a 
        = (0x1ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                     >> 7U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx 
        = (0x3ffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                     >> 7U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done 
        = (0x31eU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r));
    vlSelfRef.audio_data = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r 
                                  >> 0x18U));
    vlSelfRef.audio_bck = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_color_burst 
        = ((0x84U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           & (0xc4U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_vsync_pulse 
        = ((0x2a6U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           | ((0x31aU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
              & (0x5c0U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_equalization_pulse 
        = ((0x3aU > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           | ((0x31aU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
              & (0x354U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_hsync_pulse 
        = (0x76U > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line 
        = (0xebU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last 
        = (0x633U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel 
        = ((0xecU <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           & (0x5ecU > (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last2 
        = ((0x29U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
           | (0x237U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_render_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__active_render_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__active_render_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r)));
    vlSelfRef.x16_main__DOT__spi_sck = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r;
    vlSelfRef.spi_mosi = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r) 
                                >> 7U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_rxdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_busy 
        = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__accumulate 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__reset_accum 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__add_or_sub 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__mult_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_reset 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_reset_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_c 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) 
            << 8U) | (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_c 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx) 
              >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a 
        = (0x1ffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx));
    x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 
        = ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx) 
               >> 9U)) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wren));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_c 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) 
            << 8U) | (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_c 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx) 
              >> 9U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a 
        = (0x1ffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx));
    x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1 
        = ((~ ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx) 
               >> 9U)) & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wren));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wrdata 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
            << 0x18U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
                          << 0x10U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
                                        << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wrdata 
        = (0xffffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r) 
                       << 8U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done 
        = (5U == (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r) 
                        >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done 
        = (5U == (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r) 
                        >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_incr 
        = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__input_a_16 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                      >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__input_b_16 
        = (0xffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                      >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r 
        = (0xffU & ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))
                     ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                            >> 0x18U) : (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                                         >> 0x10U))
                     : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r))
                         ? (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r 
                            >> 8U) : vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r)));
    __Vtableidx20 = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels 
        = Vx16_main__ConstPool__TABLE_hf1527a20_0[__Vtableidx20];
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_busy 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) 
           | (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx) 
               << 2U);
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2 
            = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx) 
               << 2U);
    }
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
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__lb_rdidx;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_collisions 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__slow 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_pulse 
        = (1U & ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_slow_r)) 
                 | (0x1fU == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__div_cnt_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r;
    vlSelfRef.spi_ssel_n_sd = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__spi_select_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_vstop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_hstop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_hstart 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_baseaddr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__volume 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r;
    __Vtableidx24 = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_volume_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume_log 
        = Vx16_main__ConstPool__TABLE_had34ea41_0[__Vtableidx24];
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__border_color 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_border_color_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprites_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprites_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_stereo 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_stereo_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__attr_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__attr_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_fill_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__audio_mode_16bit_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_16bit = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample 
            = (0xffffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample 
            = (0xffffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_16bit = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r), 8U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample 
            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r), 8U));
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer1_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__layer0_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_select 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_16bit_hop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__dc_select 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_select_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__interlace 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__line_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync 
        = (((6U <= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt)) 
            & (0xbU >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt))) 
           | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
               >= ((IData)(0x213U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r))) 
              & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
                 <= ((IData)(0x218U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)))));
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_1 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           <= ((IData)(0x209U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)));
    x16_main__DOT__top_inst__DOT__video_composite__DOT____VdfgRegularize_h12e37973_0_2 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           <= ((IData)(0x417U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)));
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_nib = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_1_nib = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r = 1U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_nib = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_1_nib = 0x7ffU;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r = 0U;
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_0_nib = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_0_nib = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r = 1U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_0_nib = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_0_nib = 0x7ffU;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__new_sample 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample_r) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum7_r) 
              != (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r) 
                        >> 7U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r) 
            << 3U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r) 
                       << 2U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_line_r) 
                                  << 1U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__irq_enable_vsync_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_map_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_map_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr;
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0 
        = ((3U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r) 
           == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_height 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__color_depth 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__color_depth 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_width 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__line_irq 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_irq;
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_addr1_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__fx_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode 
        = ((2U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_r) 
              & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length 
        = (0x3ffU & ((vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r 
                      >> 9U) - (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r 
                                >> 9U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__next_line_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__next_line));
    vlSelfRef.x16_main__DOT__top_inst__DOT__scanline 
        = ((0x200U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr))
            ? 0x1ffU : (0x1ffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx 
        = (0x1ffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r) 
                     >> 7U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_addr;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r))
                    ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r))
                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_addr;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt 
        = (0xfU & ((4U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r))
                    ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r))
                    : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r 
        = ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__reset))) 
           && (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_next));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_attr_wraddr 
        = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
                    >> 2U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_bytesel 
        = ((1U & vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r)
            ? 2U : 1U);
    vlSelfRef.x16_main__DOT__top_inst__DOT__palette_wridx 
        = (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
                    >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_addr 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r 
                    >> 0U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wridx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_left 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_l 
        = ((0x10000U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r) 
                        << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_right 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_r 
        = ((0x10000U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r) 
                        << 1U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                    >> 0x10U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform 
        = (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
           >> 0x1eU);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_pulsewidth 
        = (0x3fU & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                    >> 0x18U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_left_en 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                 >> 0x16U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_right_en 
        = (1U & (vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r 
                 >> 0x17U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_freq 
        = (0xffffU & vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r);
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_g 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_g;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_vsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_hsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_output_mode_r) 
                 >> 1U));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_fifo_write_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_lrck 
        = vlSelfRef.x16_main__DOT__audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__hactive 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter) 
            >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstart_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter) 
              < (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_hstop_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__h_active) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__v_active));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_a 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a;
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
    vlSelfRef.x16_main__DOT__audio_data = vlSelfRef.audio_data;
    vlSelfRef.x16_main__DOT__audio_bck = vlSelfRef.audio_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_hsync_pulse)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_line 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_frame 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_pixel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_active 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__active_composer_buffer 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer) 
            << 8U) | (0xffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r 
                               >> 7U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_sck 
        = vlSelfRef.x16_main__DOT__spi_sck;
    vlSelfRef.x16_main__DOT__spi_mosi = vlSelfRef.spi_mosi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__rxdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_rxdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__busy 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_busy;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_reset 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_reset;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_4bit_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_nibble 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_addr_nibble_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_a 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer) 
           & (IData)(x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_b 
        = ((IData)(x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT____VdfgRegularize_hb02df769_0_1) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_b 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_a 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer) 
           & (IData)(x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_b 
        = ((IData)(x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT____VdfgRegularize_hb02df769_0_1) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__active_line_buf_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_wrdata_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren_next = 0U;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wridx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_cache8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_cache8_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wridx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_even_field_last 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           == ((IData)(0x20cU) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last 
        = ((0x319U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt)) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt) 
           == ((IData)(0x419U) + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_interlace_mode_r) 
                                  << 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r)
                     ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r))
                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collisions 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_collisions;
    vlSelfRef.x16_main__DOT__spi_ssel_n_sd = vlSelfRef.spi_ssel_n_sd;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__volume;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_write_enabled;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_transparency_enabled;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__mode_stereo 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_stereo;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_one_byte_cache_cycling;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_cache_fill_enabled;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__mode_16bit 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__mode_16bit;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_data1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_16bit_hop;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_0_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_vsync 
        = (1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r;
    if (x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_0) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_4 = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_320 = 1U;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_4 = 3U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_320 = 0x13fU;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_addr_1_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_addr1_mode;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_4bit_mode;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__line_render_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r;
    if ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)));
            if ((((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r) 
                  & (3U == (3U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))) 
                 | ((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)) 
                    & (7U == (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r)))))) {
                if (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r) 
                     == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels))) {
                    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next = 0U;
                }
            }
        }
    }
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__line_render_start) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next 
        = (0x3fU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r)
                     ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next))
                     : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__scanline 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__scanline;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_vscroll_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx 
        = (0xfffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__line_idx) 
                     + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_vscroll_r)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_addr;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_audio 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_left;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_audio 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg_right;
    __Vtableidx23 = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume_log 
        = Vx16_main__ConstPool__TABLE_h4ec04809_0[__Vtableidx23];
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_left_en) 
           | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_right_en));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__interlaced 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r) 
           == (0x4feU | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__fifo_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_lrck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__next_frame 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_frame;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga__DOT__vblank_pulse 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vblank_pulse;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_data 
        = vlSelfRef.x16_main__DOT__audio_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio_bck 
        = vlSelfRef.x16_main__DOT__audio_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_hsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n 
        = (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync)
                  ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_vsync_pulse))
                  : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_equalization)
                      ? (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_equalization_pulse))
                      : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_hsync))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_frame;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_c 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_sck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_sck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_mosi 
        = vlSelfRef.x16_main__DOT__spi_mosi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_a;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_b;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_rdidx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_rd_idx 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx;
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
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__dc_interlaced) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr_int 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r), 1U));
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_line 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_line;
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel;
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_next_frame;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_vblank_pulse;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr_int 
            = (0xffU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_hscale_r));
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_line 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_line;
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_display_next_pixel;
        vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_next_frame;
        vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__video_vga_vblank_pulse;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r)
            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp)
            : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_4bpp));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_write_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__ib_do_access_r 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spi_ssel_n_sd 
        = vlSelfRef.x16_main__DOT__spi_ssel_n_sd;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_vsync 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_vsync;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_burst_active) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__h_color_burst));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_active));
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active 
        = ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__v_active) 
           & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel));
    x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1 
        = ((0x1f800U & ((- (IData)((1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_0) 
                                          >> 0xaU)))) 
                        << 0xbU)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_0));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__sample_rate 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__irqline 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__irq_line_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__frac_y_incr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_vscale_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__composer_display_current_field;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__current_field 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__current_field;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__active_vstart 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__vactive 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr) 
            >= (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstart_r)) 
           & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr) 
              < (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__dc_active_vstop_r)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__mode 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r) 
            << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r) 
                    + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                        ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r) 
                           >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r) 
                                     >> 3U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_mode 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__mode 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r) 
            << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hscroll 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt 
        = (0xffU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r) 
                    + ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                        ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                           >> 4U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r) 
                                     >> 3U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_addr;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_wrnibblesel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_volume 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume_log;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wrdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_next_line 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__next_line;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_next_pixel 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__next_pixel;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__sprite_lb_erase_start 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spr_lb_erase_start;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_lrck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_lrck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_bck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sync_n_in 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_sync_n 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n;
    vlSelfRef.x16_main__DOT__top_inst__DOT__composer__DOT__display_next_frame 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__next_frame;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_addr 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_c;
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_mosi 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_mosi;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_wrdata;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__vblank_pulse 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite_vblank_pulse;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_color 
        = ((0xf0U & (((IData)(((0U == (0xf0U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color))) 
                               & (0U != (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color)))))
                       ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_palette_offset_r)
                       : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color) 
                          >> 4U)) << 4U)) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent 
        = (0U == (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_write_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__ib_write_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__color_burst 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__active 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_incr_decr_0 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r 
                       + x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sample_rate 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__sample_rate;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_1 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r 
                       + ((0x1f800U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1) 
                                                      >> 0xaU)))) 
                                       << 0xbU)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_low 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__fx_fill_length_low;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? (0x7fe0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                  << 5U)) : (0x7ff0U 
                                             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                                << 4U)))
                : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? (0x7ff0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                  << 4U)) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                             << 3U)))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                       << 3U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                 << 2U)) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                                << 2U)
                                             : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5) 
                                                << 1U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_line_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r) 
                       << 7U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__subtile_hscroll 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r)
                    : (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_hscroll_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_start 
        = (0x3ffU & (- (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__subtile_hscroll)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__subtile_hscroll 
        = (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r)
                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r)
                    : (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_hscroll_r))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_start 
        = (0x3ffU & (- (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__subtile_hscroll)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_data 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_data;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_bck 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__i2s_bck;
    vlSelfRef.x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_sync_n 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__video_rgb_sync_n;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__vblank_pulse) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_done = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq 
            = (0U != (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r));
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_done = 0U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r;
        vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq = 0U;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_10 
        = (0x1ffffU & (vlSelfRef.x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_1 
                       + x16_main__DOT__top_inst__DOT__addr_data__DOT____VdfgRegularize_h8afea0ee_0_1));
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_addr_r) 
                       << 3U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr_tmp)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? (0x7fe0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                  << 5U)) : (0x7ff0U 
                                             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                                << 4U)))
                : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? (0x7ff0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                  << 4U)) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                             << 3U)))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                    ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                       << 3U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                 << 2U)) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r)
                                             ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                                << 2U)
                                             : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5) 
                                                << 1U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_line_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r) 
                       << 7U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp)));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp 
        = ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lines_per_word_minus1)) 
             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt) 
                >> 3U)) << 3U) | (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp 
        = ((((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lines_per_word_minus1)) 
             & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt) 
                >> 3U)) << 3U) | (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r;
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
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren_next = 1U;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprcol_irq 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprcol_irq;
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_write 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__attr_write;
    vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r;
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
        }
    } else if ((1U & (~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r)))) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr;
        }
    }
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_en 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_write;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_4bpp))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_2bpp)
                : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r)
                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp)
                    : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_attr_mode_r)
                        ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp)
                            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r)
                            : 0U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp)
                                      ? (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r))
                                      : (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r) 
                                                 >> 4U)))))));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_4bpp))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_2bpp)
                : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r)
                    ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp)
                    : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_attr_mode_r)
                        ? ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp)
                            ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r)
                            : 0U) : ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp)
                                      ? (0xfU & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r))
                                      : (0xfU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r) 
                                                 >> 4U)))))));
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_8x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 1U) | (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                            >> 2U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_8x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 2U) | (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                            >> 2U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 5U) | ((0x1cU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                                << 2U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_word_cnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_16x16 
        = ((0x7fc0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
                       << 6U)) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                                   << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_word_cnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 2U) | (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                            >> 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 3U) | (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                            >> 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 3U) | (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 4U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 4U) | ((0xeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                               << 1U)) | (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_word_cnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx) 
            << 5U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx) 
                       << 1U) | (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_word_cnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_8x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 1U) | (1U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                            >> 2U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_8x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 2U) | (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                            >> 2U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 5U) | ((0x1cU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                                << 2U)) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_word_cnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_16x16 
        = ((0x7fc0U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
                       << 6U)) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                                   << 2U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_word_cnt)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 2U) | (3U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                            >> 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 3U) | (7U & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                            >> 1U)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 3U) | (7U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 4U) | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x8 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 4U) | ((0xeU & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                               << 1U)) | (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_word_cnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x16 
        = (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx) 
            << 5U) | (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx) 
                       << 1U) | (1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_word_cnt))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata_next 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata;
    if (((~ (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done)) 
         & ((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r) 
            | (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start)))) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata_next 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_8x8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x8;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_8x16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x16;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_8x8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x8;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_8x16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x16;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_8x8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x8;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_8x16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x16;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_width_r) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x16;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x16;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x16;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_16x16;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x8;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x8;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x8;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_16x8;
        }
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_height_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_8x16;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_8x16;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_8x16;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_8x16;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_8x8;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_8x8;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_8x8;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_8x8;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_xbpp 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_8x8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x8;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_8x16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x16;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_8x8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x8;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_8x16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x16;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_8x8 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x8;
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_8x16 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x16;
    if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_width_r) {
        if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r) {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x16;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x16;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x16;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_16x16;
        } else {
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x8;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x8;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x8;
            vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp 
                = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_16x8;
        }
    } else if (vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_height_r) {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_8x16;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_8x16;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_8x16;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_8x16;
    } else {
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_8x8;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_8x8;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_8x8;
        vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp 
            = vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_8x8;
    }
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_xbpp 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r) 
                       << 7U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_xbpp)));
    vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr 
        = (0x7fffU & (((IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r) 
                       << 7U) + (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_xbpp)));
}

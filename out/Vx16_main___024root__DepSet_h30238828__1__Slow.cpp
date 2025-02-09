// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main___024root.h"

VL_ATTR_COLD void Vx16_main___024root___stl_sequent__TOP__2(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___stl_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__data_addr 
        = vlSelfRef.x16_main__DOT__avr_data_addr;
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp 
        = (0x3ffffU & ((1U | ((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                              << 1U)) + vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9));
    vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp 
        = (0x3ffffU & (((IData)(vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu_in_1) 
                        << 1U) - vlSelfRef.x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9));
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
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h 
        = (0x1fU & ((((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic) 
                      >> 4U) + (0xfU & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_BI) 
                                        >> 4U))) + (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_HC)));
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
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp 
        = (((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h) 
            << 4U) | (0xfU & (IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l)));
    vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO9 
        = ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD) 
           & (5U <= (7U & ((IData)(vlSelfRef.x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h) 
                           >> 1U))));
    vlSelfRef.x16_main__DOT__top_inst__DOT__spictrl__DOT__txdata 
        = vlSelfRef.x16_main__DOT__top_inst__DOT__spi_txdata;
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
    vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_xbpp 
        = ((2U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
            ? ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp))
            : ((1U & (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_color_depth_r))
                ? (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp)
                : (IData)(vlSelfRef.x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp)));
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

VL_ATTR_COLD void Vx16_main___024root___eval_triggers__stl(Vx16_main___024root* vlSelf);
VL_ATTR_COLD void Vx16_main___024root___eval_stl(Vx16_main___024root* vlSelf);

VL_ATTR_COLD bool Vx16_main___024root___eval_phase__stl(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vx16_main___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vx16_main___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__ico(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__act(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock or negedge reset_n)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clock or posedge x16_main.attiny_inst.sys_rst)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge x16_main.top_inst.bus_write)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge x16_main.top_inst.bus_read)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge x16_main.top_inst.clk or posedge x16_main.top_inst.reset)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge x16_main.top_inst.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge clock or posedge x16_main.top_inst.__Vcellinp__reset_sync_clk25__async_rst_in)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge x16_main.__Vcellinp__via_1_inst__wc_clk_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] x16_main.attiny_inst.ALU_FLAG_C_OUT or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ADC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ADD or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ADIW or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_AND or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ASR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_COM or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_CP or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_CPC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_CPI or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_DEC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_EOR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_FMUL or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_FMULS or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_FMULSU or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_INC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_LSR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_MUL or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_MULS or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_MULSU or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_NEG or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_OR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ROR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SBC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SBCI or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SBIW or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SEx_CLx or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SUB or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SUBI or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_H_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_I_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_N_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_S_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_T_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_V_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_Z_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__inst or [changed] x16_main.attiny_inst.alu.flag_h_adc_sub_cp or [changed] x16_main.attiny_inst.alu.flag_v_add_adc or [changed] x16_main.attiny_inst.alu.flag_v_sub_sbc or [changed] x16_main.attiny_inst.alu.in_addr_1_and_2_equal or [changed] x16_main.attiny_inst.alu_in_1 or [changed] x16_main.attiny_inst.alu_in_2 or [changed] x16_main.attiny_inst.alu_out)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge x16_main.attiny_inst.sys_rst or posedge x16_main.attiny_inst.wdt_rst_out)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge x16_main.__Vcellinp__attiny_inst__clk_wdt or posedge x16_main.attiny_inst.sys_rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vx16_main___024root___dump_triggers__nba(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock or negedge reset_n)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clock or posedge x16_main.attiny_inst.sys_rst)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge x16_main.top_inst.bus_write)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge x16_main.top_inst.bus_read)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge x16_main.top_inst.clk or posedge x16_main.top_inst.reset)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge x16_main.top_inst.clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge clock or posedge x16_main.top_inst.__Vcellinp__reset_sync_clk25__async_rst_in)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge x16_main.__Vcellinp__via_1_inst__wc_clk_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] x16_main.attiny_inst.ALU_FLAG_C_OUT or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ADC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ADD or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ADIW or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_AND or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ASR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_COM or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_CP or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_CPC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_CPI or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_DEC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_EOR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_FMUL or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_FMULS or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_FMULSU or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_INC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_LSR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_MUL or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_MULS or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_MULSU or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_NEG or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_OR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_ROR or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SBC or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SBCI or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SBIW or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SEx_CLx or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SUB or [changed] x16_main.attiny_inst.SEL_S1_INSTRUCTION_SUBI or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_H_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_I_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_N_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_S_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_T_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_V_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__ALU_FLAG_Z_IN or [changed] x16_main.attiny_inst.__Vcellinp__alu__inst or [changed] x16_main.attiny_inst.alu.flag_h_adc_sub_cp or [changed] x16_main.attiny_inst.alu.flag_v_add_adc or [changed] x16_main.attiny_inst.alu.flag_v_sub_sbc or [changed] x16_main.attiny_inst.alu.in_addr_1_and_2_equal or [changed] x16_main.attiny_inst.alu_in_1 or [changed] x16_main.attiny_inst.alu_in_2 or [changed] x16_main.attiny_inst.alu_out)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge x16_main.attiny_inst.sys_rst or posedge x16_main.attiny_inst.wdt_rst_out)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge x16_main.__Vcellinp__attiny_inst__clk_wdt or posedge x16_main.attiny_inst.sys_rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vx16_main___024root___ctor_var_reset(Vx16_main___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vx16_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vx16_main___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->cpu_addr = VL_RAND_RESET_I(16);
    vlSelf->cpu_din = VL_RAND_RESET_I(8);
    vlSelf->cpu_dout = VL_RAND_RESET_I(8);
    vlSelf->cpu_we = VL_RAND_RESET_I(1);
    vlSelf->cpu_nmi = VL_RAND_RESET_I(1);
    vlSelf->vga_r = VL_RAND_RESET_I(4);
    vlSelf->vga_g = VL_RAND_RESET_I(4);
    vlSelf->vga_b = VL_RAND_RESET_I(4);
    vlSelf->vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->audio_lrck = VL_RAND_RESET_I(1);
    vlSelf->audio_bck = VL_RAND_RESET_I(1);
    vlSelf->audio_data = VL_RAND_RESET_I(1);
    vlSelf->spi_sclk = VL_RAND_RESET_I(1);
    vlSelf->spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->spi_miso = VL_RAND_RESET_I(1);
    vlSelf->spi_ssel_n_sd = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_addr = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__cpu_din = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_dout = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_we = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_nmi = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__vga_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__vga_g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__vga_b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__audio_lrck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__audio_bck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__audio_data = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__spi_sclk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__spi_miso = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__spi_ssel_n_sd = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__bank_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__low_ram_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__io_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__hi_ram_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__banked_rom_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_2_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__vera_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__ym_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__unavail_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__io3_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__io4_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__io5_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__io6_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__io7_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__ram_bank = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__rom_bank = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_din_int = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT____Vcellinp__cpu_inst__IRQ = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__vera_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__vera_irq_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_cs_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_cs_d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__clk_div = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_dout = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_ca1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_ca2_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_ca2_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_ca2_t = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_cb1_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_cb1_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_cb1_t = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_cb2_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_cb2_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_cb2_t = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_pa_i = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_pa_o = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_pa_t = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_pb_i = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_pb_o = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_pb_t = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_t1_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_t2_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_t3_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__avr_pgm_addr = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__avr_pgm_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__avr_data_addr = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__avr_data_in = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__avr_data_out = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__avr_data_we = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__avr_data_re = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__avr_io_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__avr_io_in = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__avr_io_out = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__avr_io_we = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__avr_io_re = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__avr_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT____Vcellinp__attiny_inst__clk_wdt = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__spi_sck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_ack_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT____VdfgRegularize_h76422dab_1_2 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AB = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__cpu_inst__DOT__DI = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__DO = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__WE = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__IRQ = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__NMI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__RDY = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__SYNC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__PC = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ABL = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ABH = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ADD = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__DIHOLD = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__DIHOLD_valid = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__DIMUX = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__IRHOLD = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__IRHOLD_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->x16_main__DOT__cpu_inst__DOT__AXYS[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__cpu_inst__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__Z = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__I = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__D = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__N = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AZ = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AZ1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AZ2 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AV = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AN1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__HC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AI = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__BI = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__IR = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__AO = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__CI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__CO = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__PCH = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__PCL = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__NMI_edge = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__regsel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__cpu_inst__DOT__regfile = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__A = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__X = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__Y = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__S = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__P = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__cpu_inst__DOT__PC_inc = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__PC_temp = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__cpu_inst__DOT__src_reg = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__cpu_inst__DOT__dst_reg = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__cpu_inst__DOT__index_y = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__load_reg = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__inc = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__write_back = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__load_only = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__adc_sbc = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__compare = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__shift = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__rotate = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__backwards = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__cond_true = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__cond_code = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__cpu_inst__DOT__shift_right = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__alu_shift_right = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__cpu_inst__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__cpu_inst__DOT__adc_bcd = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__adj_bcd = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__store_zero = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__trb_ins = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__txb_ins = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__bit_ins = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__bit_ins_nv = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__plp = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__php = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__clc = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__sec = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__cld = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__sed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__cli = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__sei = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__clv = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__res = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__write_register = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ADJL = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ADJH = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__cpu_inst__DOT____Vcellinp__ALU__BCD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__NMI_1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT____VdfgExtracted_h02a08e40__0 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__right = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__BI = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__CI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__BCD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__OUT = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__Z = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__N = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__RDY = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__AI7 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__BI7 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_logic = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_BI = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_l = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_h = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__adder_CI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__HC9 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__CO9 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__cpu_inst__DOT__ALU__DOT__temp_HC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__clk25 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__extbus_cs_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__extbus_rd_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__extbus_wr_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__extbus_a = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__extbus_d = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__extbus_irq_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vga_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__vga_g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__vga_b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_sck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_miso = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_ssel_n_sd = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_lrck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_bck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_data = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__por_cnt_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_0_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_1_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_nib_0_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_nib_1_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_incr_0_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_incr_1_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_0_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_nib_incr_1_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_decr_0_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_decr_1_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_data0_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_data1_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_addr_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_addr_nibble_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_4bit_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_cache_write_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_transparency_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_one_byte_cache_cycling_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_mult_accum_cache32_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_cache8_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_wrdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_write_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__ib_do_access_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_fill_length_low = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_fill_length_high = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_transparency_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_cache_write_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_cache_fill_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_one_byte_cache_cycling = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_16bit_hop = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_4bit_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fx_addr1_mode = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_select_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_addr_select_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_select_r = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_select_next = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__fpga_reconfigure_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__fpga_reconfigure_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_vsync_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_vsync_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_line_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_line_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_sprite_collision_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable_audio_fifo_low_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status_vsync_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status_vsync_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status_line_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status_line_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status_sprite_collision_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_line_r = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_line_next = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__sprites_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprites_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__chroma_disable_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__chroma_disable_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_hscale_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_hscale_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_vscale_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_vscale_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_border_color_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_border_color_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_hstart_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_hstart_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_hstop_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_hstop_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_vstart_r = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_vstart_next = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_vstop_r = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_active_vstop_next = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_color_depth_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_color_depth_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_bitmap_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_bitmap_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_attr_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_attr_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_tile_height_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_tile_height_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_tile_width_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_tile_width_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_map_height_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_map_height_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_map_width_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_map_width_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_map_baseaddr_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_map_baseaddr_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_tile_baseaddr_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_hscroll_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_hscroll_next = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_vscroll_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_vscroll_next = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_color_depth_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_color_depth_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_bitmap_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_bitmap_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_attr_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_attr_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_tile_height_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_tile_height_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_tile_width_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_tile_width_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_map_height_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_map_height_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_map_width_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_map_width_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_map_baseaddr_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_map_baseaddr_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_tile_baseaddr_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_hscroll_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_hscroll_next = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_vscroll_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_vscroll_next = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_output_mode_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__video_output_mode_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__line_interlace_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__line_interlace_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_pcm_sample_rate_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_mode_stereo_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_mode_stereo_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_mode_16bit_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_mode_16bit_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_reset_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_reset_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_full = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_pcm_volume_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_pcm_volume_next = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_wrdata_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_write_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_write_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_collisions = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__current_field = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_low = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprcol_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vblank_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__line_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__scanline = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_select_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_select_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_slow_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_slow_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_autotx_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_autotx_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_txdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_txstart = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_busy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spi_rxdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__bus_read = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__bus_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__rdaddr_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__wraddr_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__wraddr_hold_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__wrdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__do_read = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__do_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__access_addr = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__write_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spr_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__spr_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__spr_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spr_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if2_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____Vcellinp__vram_if__if1_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__next_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__lb_rdidx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_lb_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_lb_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__spr_lb_rddata = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__spr_lb_erase_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__line_idx = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__line_render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__active_line_buf_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_linebuf_wridx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_linebuf_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_linebuf_wren = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_linebuf_wridx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_linebuf_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_linebuf_wren = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_attr = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_lb_renderer_rd_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_lb_renderer_wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_attr_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_attr_wraddr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_attr_wrdata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_attr_bytesel = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__composer_display_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__next_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__next_frame = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer_display_current_field = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__dc_interlaced = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__palette_rgb_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__palette_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__palette_bytesel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__palette_wridx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__palette_wrdata = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__palette_ram[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_next_frame = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_next_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_display_next_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_vblank_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_luma = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_chroma = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_rgb_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_rgb_g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_rgb_b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_rgb_sync_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_rgb_hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_rgb_vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite_chroma2 = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_next_frame = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_next_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_display_next_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_vblank_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_enable = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__irq_status = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h80e0ab29__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a1230__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h81779a78__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h8177ab65__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h8107dae2__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h81784d2f__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h817a2680__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h810a9449__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h810a39cc__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT____VdfgExtracted_h81042145__0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__async_rst_in = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__reset_out = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__reset_sync_clk25__DOT__dff_rr = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__do_read = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__do_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__access_addr = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__write_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_select = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__dc_select = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0 = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1 = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0 = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1 = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_mult_accum_cache32 = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_low = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_high = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_next = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_next = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_0_next = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_incr_1_next = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_0_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_incr_1_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_0_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_decr_1_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data0_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_data1_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_next = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_addr_nibble_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_4bit_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache_write_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_transparency_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_one_byte_cache_cycling_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_cache32_next = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_wrdata_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_write_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__ib_do_access_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_addr1_mode_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_4bit_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_mult_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_reset_accum_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_accumulate_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_add_or_sub_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_r = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tiledata_base_address_next = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_pixels_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_r = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_base_address_next = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_apply_clip_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_map_size_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_index_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_nibble_index_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_increment_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_fill_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_r = VL_RAND_RESET_I(20);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_next = VL_RAND_RESET_I(20);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_r = VL_RAND_RESET_I(20);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_next = VL_RAND_RESET_I(20);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_times_32_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_times_32_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_r = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_x_next = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_r = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_incr_y_next = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_write_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_transparency_enabled_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_one_byte_cache_cycling_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_poke_mode_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_16bit_hop_start_index_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_0 = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_0_nib = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_0_nib = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_decr_1 = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_4 = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_16bit_hop_320 = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__incr_1_nib = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__decr_1_nib = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_incr_decr_0 = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_1 = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_incr_decr_10 = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_0_incr_decr_0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_incr_decr_1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__save_result_port_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fetch_ahead_port_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_use_result_as_tileindex_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_tileindex_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_calculate_addr1_based_on_position_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_increment_on_overflow_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_bit16 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_nibble = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_high = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_0_untouched_or_set_low = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_bit16 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_nibble = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_high = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_untouched_or_set_low = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tileindex_lookup = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_tiledata_using_tilemap = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_1_start_of_horizontal_fill_line = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_tiledata_using_tilemap = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_tiledata_using_tilepos = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr_nib_1_start_of_horizontal_fill_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_x = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_map_y = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_x = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_in_tile_y = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_position_repeat = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_tile_index_looked_up = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_position_is_outside_map = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_byte_and_nibble_incremented = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_nibble_to_be_loaded_into_cache = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_byte_to_be_loaded_into_cache = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_nibble = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_cache_filled_with_byte = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_0_needs_to_be_changed = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_vram_addr_1_needs_to_be_changed = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_position_needs_to_be_updated = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__vram_addr = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__is_audio_address = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__is_palette_address = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__is_sprite_attr_address = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_x_new = VL_RAND_RESET_I(20);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_pixel_pos_y_new = VL_RAND_RESET_I(20);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_more_than_15 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_more_than_7 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_fill_length_overflow = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__fx_2bit_polygon_filler_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__input_a_16 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__input_b_16 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__mult_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__reset_accum = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__accumulate = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__add_or_sub = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__addr_data__DOT__mult_accum__DOT__output_32 = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_nibble = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_4bit_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_cache_write_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_transparency_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_one_byte_cache_cycling = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_cache8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_mult_accum_cache32 = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrdata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_wrnibblesel = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__ram_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_ack_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if1_ack_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if2_ack_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if3_ack_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_0_transparency_nibblesel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_1_transparency_nibblesel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_2_transparency_nibblesel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_3_transparency_nibblesel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__byte_transparancy_nibblesel = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_wrdata_to_use = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_addr_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__if0_rddata8_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_wrdata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_wrnibblesel = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__bus_addr14 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk10_rddata_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__blk32_rddata_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__vram_if__DOT__main_ram__DOT__INIT__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__color_depth = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__attr_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_height = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_width = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_height = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_width = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_baseaddr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_baseaddr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hscroll = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vscroll = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__mode = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__pixels_per_word_minus1 = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lines_per_word_minus1 = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__words_per_line_minus1 = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_line_idx = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vmap_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__wrapped_vmap_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__htile_cnt_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__word_cnt_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__scrolled_htile_cnt = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_idx = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__map_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_map_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_vflip = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_tile_hflip = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__vflipped_line_idx = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_word_cnt = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_1bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_2bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_4bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_8bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr_xbpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_idx_mul5 = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bm_line_addr_tmp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_line_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bus_strobe_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__state_r = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tile_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__bitmap_addr_r = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__next_render_mapdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_mapdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__line_done = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__xcnt_next = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__hflipped_xcnt_2bpp = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_1bpp = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_2bpp = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_4bpp = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_data_8bpp = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__tmp_pixel_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__cur_pixel_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wridx_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wrdata_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__linebuf_wren_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__subtile_hscroll = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__lb_wridx_start = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_renderer__DOT__render_busy_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_render_buffer = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__renderer_wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__composer_rd_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__composer_rd_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__active_composer_buffer = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_a = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_b = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_addr_c = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_a = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_b = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__wr_en_c = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_a = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_b = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_addr_c = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_a = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_b = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_data_c = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__rd_idx9_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__color_depth = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__attr_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_height = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_width = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_height = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_width = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_baseaddr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_baseaddr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hscroll = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vscroll = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__mode = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__pixels_per_word_minus1 = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lines_per_word_minus1 = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__words_per_line_minus1 = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_line_idx = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vmap_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__wrapped_vmap_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__htile_cnt_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__word_cnt_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__scrolled_htile_cnt = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_idx = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__map_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_map_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_vflip = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_tile_hflip = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__vflipped_line_idx = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_word_cnt = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_1bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_2bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_4bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_8x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_8x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_16x8 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp_16x16 = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_8bpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr_xbpp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_idx_mul5 = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bm_line_addr_tmp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_line_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bus_strobe_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__state_r = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tile_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__bitmap_addr_r = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__next_render_mapdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_mapdata_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__line_done = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__xcnt_next = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__hflipped_xcnt_2bpp = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_1bpp = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_2bpp = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_4bpp = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_data_8bpp = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__tmp_pixel_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__cur_pixel_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wridx_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wrdata_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__linebuf_wren_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__subtile_hscroll = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__lb_wridx_start = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_renderer__DOT__render_busy_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__active_render_buffer = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__renderer_wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__composer_rd_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__composer_rd_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__active_composer_buffer = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_a = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_b = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_addr_c = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_a = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_b = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__wr_en_c = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_a = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_b = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_addr_c = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_a = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_b = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_data_c = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__rd_idx9_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_addr = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collisions = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprcol_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_idx = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_done = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_rddata = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_ack = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_rdidx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_rddata = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wridx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wrdata = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_collision_mask_next = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__frame_collision_mask_next = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_time_done = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_busy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_next = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_sel_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_addr = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_x = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_y = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_hflip = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_vflip = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_z = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_collision_mask = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_palette_offset = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_width = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_attr_height = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_addr_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_mode_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_x_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line_r = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_hflip_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_z_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_collision_mask_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_palette_offset_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_height_pixels = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__ydiff = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_on_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_line = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sf_state_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_hi = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__save_lo = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__start_render_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_idx_incr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__sprite_width_pixels = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_r = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__xcnt_next = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__hflipped_xcnt_next = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr_tmp = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__line_addr = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_r = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_addr_next = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__bus_strobe_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_data_next = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_idx_next = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__linebuf_wren_next = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_4bpp = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_data_8bpp = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__tmp_pixel_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__pixel_is_transparent = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__cur_pixel_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__dest_pixel_is_transparent = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__render_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__collision = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__active_render_buffer = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_rd_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_rd_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_rd_idx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_rd_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_1 = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_1 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1a = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1b = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1c = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_1d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1 = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1a = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1b = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1c = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1d = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_1_sel_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_1 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_addr_2 = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_data_2 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2a = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2b = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2c = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__wr_en_2d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2 = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2a = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2b = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2c = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2d = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_addr_2_sel_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__rd_data_2 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_idx = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__composer_erase_busy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_a = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_b = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_c = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__renderer_wr_en_d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__wr_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_addr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__rd_data = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__interlaced = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__frac_y_incr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__border_color = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__active_hstart = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__active_hstop = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__active_vstart = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__active_vstop = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__irqline = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__layer0_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__layer1_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprites_enabled = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__current_field = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__line_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__scanline = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__line_idx = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__line_render_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__lb_rdidx = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__layer0_lb_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__layer1_lb_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprite_lb_rddata = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprite_lb_erase_start = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__display_next_frame = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__display_next_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__display_next_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__display_current_field = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__display_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__frac_x_incr_int = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__scaled_x_counter = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__scaled_y_counter = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__render_start_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__layer0_opaque = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__layer1_opaque = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprite_opaque = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z2 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__sprite_z3 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_r = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__y_counter_rr = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__next_line_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__x_counter_r = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__x_counter = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__y_counter = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__hactive = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__vactive = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__display_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__composer__DOT__vactive_started_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__palette_rgb_data = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__interlace = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__next_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__next_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__vblank_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__luma = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__chroma = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_sync_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__rgb_vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__hcnt = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_hsync_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_vsync_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_equalization_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_color_burst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_last = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__h_half_line_last = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__line_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__vcnt = VL_RAND_RESET_I(11);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_sync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_equalization = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_burst_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__field = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last2 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_last = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__v_even_field_last = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__current_field_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__next_frame_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__mod_sync_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT____Vcellinp__modulator__color_burst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__color_burst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sync_n_in = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__luma = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__chroma = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G_times_g_16 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r_16 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_4 = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_8 = VL_RAND_RESET_I(7);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__r_times_64 = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_2 = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_32 = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__g_times_64 = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_2 = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_8 = VL_RAND_RESET_I(7);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__b_times_32 = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R_times_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G_times_g = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_B_times_b = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_R_times_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_G_n_times_g = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_B_times_b = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_R_times_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_G_n_times_g = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_B_n_times_b = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__y_s = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i_s = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q_s = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__phase_accum_r = VL_RAND_RESET_I(24);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinval_s = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__cosval_s = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__i8_s = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__q8_s = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__lum = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__chroma_s = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_1a_8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_1b_8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_2a_8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__input_2b_8 = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__output_1_16 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__video_modulator_mult_yg_yr__DOT__output_2_16 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__phase = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__sinlut__DOT__value = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__phase = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__coslut__DOT__value = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__palette_rgb_data = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__next_frame = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__next_line = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__next_pixel = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vblank_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_g = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_b = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vga_vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__x_counter = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__y_counter = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__h_last = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__v_last2 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__h_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__v_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__txdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__txstart = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__rxdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__slow = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_sck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_mosi = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__spi_miso = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__bitcnt_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__tx_shift_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__rx_shift_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__div_cnt_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_pulse = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__spictrl__DOT__clk_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__attr_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__attr_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__attr_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__sample_rate = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__mode_stereo = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__mode_16bit = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__volume = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__fifo_reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__fifo_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__fifo_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__fifo_full = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__fifo_almost_empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__i2s_lrck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__i2s_bck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__i2s_data = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__next_sample = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg_left = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg_right = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm_left = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm_right = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg_l = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm_l = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__mix_l = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__mix_r = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__left_data = VL_RAND_RESET_I(24);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__right_data = VL_RAND_RESET_I(24);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__next_sample = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_audio = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_audio = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_byte_r = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__attr_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____Vcellinp__audio_attr_ram__rd_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_channel_attr_r = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_freq = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_left_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_right_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_pulsewidth = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_waveform = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_volume_log = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__lfsr_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__noise_value_r = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_working_data = VL_RAND_RESET_I(23);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_noise = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__cur_phase = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_phase = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__do_noise_sample = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__new_noise = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wridx_r = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wrdata = VL_RAND_RESET_I(23);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_wren_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_pw = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_saw = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_triangle = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal_noise = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signal = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_signal = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__signed_volume = VL_RAND_RESET_I(10);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__scaled_signal = VL_RAND_RESET_I(15);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_sample_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_sample_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__left_accum_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__right_accum_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__state_r = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_0 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT____VdfgRegularize_h2af1e958_1_1 = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__wr_data = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__rd_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_addr = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__wr_data = VL_RAND_RESET_I(23);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_addr = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__rd_data = VL_RAND_RESET_I(23);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(23);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sample_rate = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__mode_stereo = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__mode_16bit = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_full = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_almost_empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_audio = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_audio = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo_reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__fifo_read = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__sr_accum7_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__next_sample_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__new_sample = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_r = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample_next = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample_next = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_output_next = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_output_next = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_sample = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_sample = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__volume_log = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__left_scaled_r = VL_RAND_RESET_I(22);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__right_scaled_r = VL_RAND_RESET_I(22);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wrdata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rddata = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__almost_empty = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_r = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_r = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__mem_r[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__wridx_next = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__rdidx_next = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__audio_fifo__DOT__fifo_count = VL_RAND_RESET_I(12);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__next_sample = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__left_data = VL_RAND_RESET_I(24);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_data = VL_RAND_RESET_I(24);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_lrck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_bck = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__i2s_data = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_r = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__div_max = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__lrck_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__bck_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_left = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__start_right = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__right_sample_r = VL_RAND_RESET_I(24);
    vlSelf->x16_main__DOT__top_inst__DOT__audio__DOT__dacif__DOT__shiftreg_r = VL_RAND_RESET_I(25);
    vlSelf->x16_main__DOT__via_1_inst__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__wc_clk_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__irq_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cs_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cyc_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__stb_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ack_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__we_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__adr_i = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__via_1_inst__DOT__dat_i = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__dat_o = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_t = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_t = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_t = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pa_i = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pb_i = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pa_o = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pb_o = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pa_t = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pb_t = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t1_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t2_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cs = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ie_delay = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ier = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ierd = VL_RAND_RESET_I(9);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pai = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pbi = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pao = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pbo = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pal = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pbl = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pa_le = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pb_le = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ddra = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ddrb = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t1_mode = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t2_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t1 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t2 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3cmp = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3_access = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t1_64 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t2_64 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t1l = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t2l = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3l = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_trans = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_trans = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_trans = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_trans = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_mode = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_mode = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_mode = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__via_1_inst__DOT__sr_cnt = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__via_1_inst__DOT__sr = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__via_1_inst__DOT__sr_32 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__sr_mode = VL_RAND_RESET_I(3);
    vlSelf->x16_main__DOT__via_1_inst__DOT__sr_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_if = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pb6_ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca1_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ca2_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb1_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t1_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t2_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__t3_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__sr_irq = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pe_t1z = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pe_t2z = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__pe_t3z = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT____Vcellinp__ued5__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__wr_t3 = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__cb2_ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__ce_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid_i = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__we_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid_i = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid_o = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid_o = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__ro = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__wo = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__rid = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__wid = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__ce_i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__o = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id_i = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id_o = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__rdy = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__id[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued1__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued2__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued3__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued4__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued5__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued6__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued7__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__ce = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__pe = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__ne = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__ee = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__via_1_inst__DOT__ued8__DOT__ed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__sys_rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__clk_wdt = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__pgm_addr = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__attiny_inst__DOT__pgm_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_addr = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_out = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_we = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_re = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_addr = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_in = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_out = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_we = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_re = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_sig = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_rst_out = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAGS = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_Z_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_N_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_V_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_S_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_H_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_T_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ALU_FLAG_I_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__PC = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__attiny_inst__DOT__pgm_indirect_addr = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__attiny_inst__DOT__PC_PLUS_ONE = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__attiny_inst__DOT__PC_PLUS_TWO = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__attiny_inst__DOT__PC_PLUS_THREE = VL_RAND_RESET_I(14);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SP = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SP_PLUS_ONE = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SP_MINUS_ONE = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__step_cnt = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__attiny_inst__DOT__tmp_pgm_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__core_rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu_rdy = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_in_int = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_out_int = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_in_int = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_out_int = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_we_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_re_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_addr_int = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__data_addr_int_tmp = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_addr_int = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_we_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_re_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__write_to_reg = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rw_addr = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rw_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rw_16bit = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_addr_d = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_data_d = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_16bit_d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__read_d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_addr_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_data_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_data_r_PLUS_ONE = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_data_r_MINUS_ONE = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rd_16bit_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__read_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu_in_1 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu_in_2 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu_out = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__indirect_addr_offset = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__indirect_addr_offset_res = VL_RAND_RESET_I(13);
    vlSelf->x16_main__DOT__attiny_inst__DOT__reg_clr_cnt = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__rom_read_delay = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__ram_read_delay = VL_RAND_RESET_I(2);
    vlSelf->x16_main__DOT__attiny_inst__DOT__pgm_data_int = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__interrupt_registered = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__current_int_executed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__current_int_vect = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__current_int_vect_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_request = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOVW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPSE = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MOV = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ORI_SBR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ANDI_CBR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDD_STD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDS_STS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_YZN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_R_P = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_XCH = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LAT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_X = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LD_ST_XN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_POP_PUSH = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SWAP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RET = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RETI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SLEEP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BREAK = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_WDR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LPM_ELPM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SPM_Z_P = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IJMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ICALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DES = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_JMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CBI_SBI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIC_SBIS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_IN_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RJMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_RCALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LDI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COND_BRANCH = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_BLD_BST = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBRC_SBRS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CPSE = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LDS_STS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_YZN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_ELPM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LPM_R_P = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_X = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_LD_ST_XN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RET = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RETI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_ICALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_JMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_CALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBIC_SBIS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_MUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_MULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_MULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_FMUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_FMULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_FMULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_RCALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__SEL_S2_INSTRUCTION_SBRC_SBRS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__select_io_in_stam = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__io_ports_displacement = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__attiny_inst__DOT__tmp_pgm_data_switched = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__skip_execution = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__relative_offset = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__relative_offset_rjmp = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__PGM_HI_TMP = VL_RAND_RESET_I(6);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__attiny_inst__DOT____VdfgRegularize_h8a0dea4a_2_0 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_request = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_vect = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__executed = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in_int_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__int_sig_in_int_active = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__inst = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__INTERRUPT_IN_EXECUTION = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MOVW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_FMUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_FMULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_FMULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CPC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SUB = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CPSE = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_AND = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_EOR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_OR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MOV = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CPI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SUBI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBCI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ORI_SBR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ANDI_CBR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LDD_STD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LDS_STS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_YZP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_YZN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_R = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_R_P = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_XCH = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LAS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LAC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LAT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_X = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_XP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LD_ST_XN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_POP_PUSH = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_COM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_NEG = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SWAP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_INC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ASR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LSR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ROR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SEx_CLx = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RET = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RETI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SLEEP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_BREAK = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_WDR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LPM_ELPM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SPM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SPM_Z_P = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_IJMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ICALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_DEC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_DES = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_JMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_ADIW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBIW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_CBI_SBI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBIC_SBIS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_MUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_IN_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RJMP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_RCALL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_LDI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_COND_BRANCH = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_BLD_BST = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__inst_dec_s1_inst__DOT__SEL_INSTRUCTION_SBRC_SBRS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_addr = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_data = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rw_16bit = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_addr_d = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_data_d = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__read_d = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_addr_r = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_data_r = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__rd_16bit_r = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__read_r = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGL[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->x16_main__DOT__attiny_inst__DOT__regs__DOT__genblk1__DOT__REGH[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__inst = VL_RAND_RESET_I(4);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1 = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_2 = VL_RAND_RESET_I(5);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_1 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2 = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__out = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_C_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_Z_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_N_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_V_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_S_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_H_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_T_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_I_IN = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_C_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_Z_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_N_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_V_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_S_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_H_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_T_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__ALU_FLAG_I_OUT = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MOVW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_FMUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_FMULS = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_FMULSU = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CPC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SUB = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADD = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_AND = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ANDI_CBR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_EOR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_OR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ORI_SBR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MOV = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_CPI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SUBI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBCI = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_LPM_R_P = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_COM = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_NEG = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SWAP = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_INC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ASR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_LSR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ROR = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SEx_CLx = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_DEC = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_ADIW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_SBIW = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__SEL_INSTRUCTION_MUL = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_int = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__cin_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c_tmp = VL_RAND_RESET_I(18);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__add_result_int_w_c = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c_tmp = VL_RAND_RESET_I(18);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__sub_result_int_w_c = VL_RAND_RESET_I(17);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_1_mul = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__in_2_mul = VL_RAND_RESET_I(8);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__mul_result_int = VL_RAND_RESET_I(16);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__mul_sign_int = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__alu__DOT____VdfgRegularize_hb1bbb4eb_0_9 = VL_RAND_RESET_I(18);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_clk = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_rst_in = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_rst_out = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_cnt = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset = VL_RAND_RESET_I(1);
    vlSelf->x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__x16_main__DOT__via_1_inst__DOT__wr_t3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__x16_main__DOT__cpu_inst__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__wdt_reset_n = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__x16_main__DOT__top_inst__DOT__palette_ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__x16_main__DOT__top_inst__DOT__palette_ram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__x16_main__DOT__top_inst__DOT__palette_ram__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__hsync_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__vsync_r = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__x16_main__DOT__top_inst__DOT__video_vga__DOT__active_r = VL_RAND_RESET_I(2);
    vlSelf->__VdlyVal__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__reset_n = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v0 = 0;
    vlSelf->__VdlySet__x16_main__DOT__top_inst__DOT__palette_ram__v1 = 0;
    vlSelf->__VdlySet__x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__mem__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__sys_rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__bus_write__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__bus_read__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__top_inst__DOT____Vcellinp__reset_sync_clk25__async_rst_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT____Vcellinp__via_1_inst__wc_clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__ALU_FLAG_C_OUT__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADC__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADD__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ADIW__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_AND__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ASR__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_COM__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CP__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPC__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_CPI__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_DEC__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_EOR__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMUL__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULS__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_FMULSU__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_INC__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_LSR__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MUL__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULS__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_MULSU__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_NEG__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_OR__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_ROR__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBC__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBCI__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SBIW__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SEx_CLx__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUB__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__SEL_S1_INSTRUCTION_SUBI__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_H_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_I_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_N_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_S_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_T_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_V_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__ALU_FLAG_Z_IN__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT____Vcellinp__alu__inst__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_h_adc_sub_cp__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_add_adc__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__flag_v_sub_sbc__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu__DOT__in_addr_1_and_2_equal__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_in_1__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_in_2__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__alu_out__0 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT__attiny_inst__DOT__wdt_rst_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__x16_main__DOT____Vcellinp__attiny_inst__clk_wdt__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}

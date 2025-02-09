// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vx16_main.h for the primary calling header

#include "Vx16_main__pch.h"
#include "Vx16_main__Syms.h"
#include "Vx16_main___024root.h"

// Parameter definitions for Vx16_main___024root
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__SEL_A;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__SEL_S;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__SEL_X;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__SEL_Y;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_OR;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_AND;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_EOR;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_ADD;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_SUB;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_ROL;
constexpr CData/*3:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__OP_A;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ABS0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ABS1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ABSX0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ABSX1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ABSX2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRA0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRA1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRA2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRK0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRK1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRK2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__BRK3;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__DECODE;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__FETCH;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDX0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDX1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDX2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDX3;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDY0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDY1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDY2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__INDY3;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMP0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMP1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMPI0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMPI1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JSR0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JSR1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JSR2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JSR3;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__PULL0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__PULL1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__PULL2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__PUSH0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__PUSH1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__READ;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__REG;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTI0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTI1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTI2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTI3;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTI4;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTS0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTS1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTS2;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__RTS3;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__WRITE;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ZP0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ZPX0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ZPX1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__IND0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMPIX0;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMPIX1;
constexpr CData/*5:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__JMPIX2;
constexpr CData/*7:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__ZEROPAGE;
constexpr CData/*7:0*/ Vx16_main___024root::x16_main__DOT__cpu_inst__DOT__STACKPAGE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__MODE_NORMAL;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__MODE_LINE_DRAW;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__MODE_POLY_FILL;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__MODE_AFFINE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR0_UNTOUCHED;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR0_SET;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR0_INCR_0;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_UNTOUCHED;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_INCR_1;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_INCR_1_AND_0;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_TILEDATA;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_MAP_LOOKUP;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_ADDR0_X1;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__addr_data__DOT__ADDR1_SET;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_renderer__DOT__WAIT_START;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_renderer__DOT__FETCH_MAP;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_renderer__DOT__WAIT_FETCH_MAP;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_renderer__DOT__FETCH_TILE;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_renderer__DOT__WAIT_FETCH_TILE;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_renderer__DOT__RENDER;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_renderer__DOT__WAIT_START;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_renderer__DOT__FETCH_MAP;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_renderer__DOT__WAIT_FETCH_MAP;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_renderer__DOT__FETCH_TILE;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_renderer__DOT__WAIT_FETCH_TILE;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_renderer__DOT__RENDER;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__SF_FIND_SPRITE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__SF_START_RENDER;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__SF_DONE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__STATE_IDLE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__STATE_WAIT_FETCH;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__STATE_RENDER;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_renderer__DOT__STATE_DONE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__IDLE;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__FETCH_CH;
constexpr CData/*1:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__CALC_CH;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__IDLE;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__FETCH_L_7_0;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__FETCH_L_15_8;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__FETCH_R_7_0;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__FETCH_R_15_8;
constexpr CData/*2:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__pcm__DOT__DONE;
constexpr CData/*0:0*/ Vx16_main___024root::x16_main__DOT__via_1_inst__DOT__uag1__DOT__ACK_LEVEL;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_a__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_b__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l0_line_buffer__DOT__linebuf_c__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_a__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_b__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__l1_line_buffer__DOT__linebuf_c__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1a__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1b__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1c__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_1d__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2a__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2b__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2c__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__sprite_line_buffer__DOT__linebuf_2d__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_SYNC;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_BACK_PORCH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_ACTIVE;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_FRONT_PORCH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_TOTAL;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_HALF;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_VSYNC_PULSE_LEN;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_EQUALIZATION_PULSE_LEN;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_COLOR_BURST_START;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__H_COLOR_BURST_END;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_R;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_G;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Y_B;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_R;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_G_n;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__I_B_n;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_R;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_G_n;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_composite__DOT__modulator__DOT__Q_B;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__H_ACTIVE;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__H_FRONT_PORCH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__H_SYNC;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__H_BACK_PORCH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__H_TOTAL;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__V_ACTIVE;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__V_FRONT_PORCH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__V_SYNC;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__V_BACK_PORCH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__video_vga__DOT__V_TOTAL;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__audio_attr_ram__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__ADDR_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__top_inst__DOT__audio__DOT__psg__DOT__working_data_ram__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__via_1_inst__DOT__pBitsPerByte;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__via_1_inst__DOT__uag1__DOT__READ_STAGES;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__via_1_inst__DOT__uag1__DOT__WRITE_STAGES;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__via_1_inst__DOT__uag1__DOT__REGISTER_OUTPUT;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__via_1_inst__DOT__uag1__DOT__gRdy__DOT__genblk1__DOT__urrdy__DOT__STAGES;
constexpr VlWide<3>/*79:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__CORE_CONFIG;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__BUS_ADDR_PGM_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__BUS_ADDR_DATA_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__WATCHDOG_CNT_WIDTH;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__VECTOR_INT_TABLE_SIZE;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__int_bus_size;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__VECTOR_INT_TABLE_SIZE;
constexpr VlWide<3>/*79:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__alu__DOT__CORE_CONFIG;
constexpr IData/*31:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__wdt_inst__DOT__CNT_WIDTH;
constexpr QData/*47:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__PLATFORM;
constexpr QData/*39:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__USE_BRAM_ROM;
constexpr QData/*39:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__STORE_INTERUPTS;
constexpr QData/*39:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__MAP_REGS_IN_TO_SRAM_SECTION;
constexpr QData/*39:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__int_encoder_inst__DOT__STORE_INTERUPTS;
constexpr QData/*47:0*/ Vx16_main___024root::x16_main__DOT__attiny_inst__DOT__regs__DOT__PLATFORM;


void Vx16_main___024root___ctor_var_reset(Vx16_main___024root* vlSelf);

Vx16_main___024root::Vx16_main___024root(Vx16_main__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vx16_main___024root___ctor_var_reset(this);
}

void Vx16_main___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vx16_main___024root::~Vx16_main___024root() {
}

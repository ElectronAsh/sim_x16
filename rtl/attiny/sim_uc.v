/*
 * This is the simulation file for Atmel XMEGA CPU IP.
 * 
 * Copyright (C) 2017  Iulian Gheorghiu
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

`timescale 1ns / 1ps
//`include "ddr3_v.v"
/* For Attiny 26 */
//`define BUS_ADDR_PGM_LEN_SIM		11 /* < in address lines 2KWords */
//`define BUS_ADDR_DATA_LEN_SIM		8 /* < in address lines 256Bytes data address space */
//`define DATA_MEM_SIZE_LEN_SIM		7  /* < in address lines 128Bytes */
//`define DATA_ADDR_RESERVED_AT_BOTTOM_SIM	'd128  /* < in bytes ( 128 bytes to let space for IO usage )*/

/* For ATXmega */
`define BUS_ADDR_PGM_LEN_SIM		16 /* < in address lines 64KWords */
`define BUS_ADDR_DATA_LEN_SIM		16 /* < in address lines 64KBytes data address space */
`define DATA_MEM_SIZE_LEN_SIM		12  /* < in address lines 4KByte */
`define DATA_ADDR_RESERVED_AT_BOTTOM_SIM	'd8192  /* < in bytes ( 8192 bytes is the standard atxmega reserved address for IO usage )*/

`define USE_HDMI_OUTPUT

`define DDR3_ADDR_BUS_LEN		15

module sim_uc(
//`DDR3_TOP
    );

//`DDR3_IO

reg rst = 0;

/*ddr3 ddr3_inst(
	`DDR3_CONNECT
);*/
reg int1 = 0;
reg int2 = 0;
reg int3 = 0;
wire _int1 = int1;
wire _int2 = int2;
wire _int3 = int3;
wire [4:0]int = 0;

wire sys_rst;

wire [7:0]port_out;
wire [7:0]port_in = port_out;
wire UART_TXD;
wire UART_RXD = UART_TXD;

wire hdmi_tx_cec;
wire hdmi_tx_clk_n;
wire hdmi_tx_clk_p;
wire hdmi_tx_hpd;
wire hdmi_tx_rscl;
wire hdmi_tx_rsda;
wire [2:0]hdmi_tx_n;
wire [2:0]hdmi_tx_p;



reg core_clk = 0;
reg ram_clk = 0;
always	#(1)	ram_clk	<=	~ram_clk;	//	clocking	device
always @ (posedge ram_clk)
begin
	core_clk <= ~core_clk;
end

wire lcd_clk = core_clk;
//wire pgm_re;
wire [`BUS_ADDR_PGM_LEN_SIM-1:0] pgm_addr;
wire [15:0] pgm_data;
wire data_re;
wire data_we;
wire [`BUS_ADDR_DATA_LEN_SIM-1:0] data_addr;
wire [7:0]data_in;
wire [7:0]data_out;

wire io_re;
wire io_we;
wire [5:0] io_addr;
wire [7:0] io_in;
wire [7:0] io_out;

//assign data_addr = data_re | data_we ? 'bz : 0;
wire ram_data_sel = data_addr >= `DATA_ADDR_RESERVED_AT_BOTTOM_SIM;
wire [`BUS_ADDR_DATA_LEN_SIM-1:0]ram_offset = `DATA_ADDR_RESERVED_AT_BOTTOM_SIM;
wire [`DATA_MEM_SIZE_LEN_SIM-1:0]ram_addr_bus = data_addr - ram_offset;

wire rtc_int;
wire int_pio_a;
wire int_pio_b;
wire int_pio_c;
wire int_pio_d;
wire int_pio_e;
wire int_pio_f;
wire int_uart_a_rx_rcv;
wire int_uart_a_tx_compl;
wire int_uart_a_tx_buff_empty;
wire int_spi_a;
wire [10:0]int_rst;

initial begin
	rst = 0;
	#1;
	rst = 1;
	#1;
	rst = 0;
	
	//port_out = 8'haa;
	#110000;
	int1 = 1;
	//int2 = 1;
	//int3 = 1;
	#20;
	int1 = 0;
	int2 = 0;
	int3 = 0;
	#1200000;
	$finish;
end
 

rtc_s # (
	.ADDRESS('h40),
	.BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM),
	.CNT_SIZE(32)
	) rtc (
	.rst(sys_rst),
	.clk(core_clk),
	.addr(data_addr),
	.wr(data_we),
	.rd(data_re),
	.bus_in(data_out),
	.bus_out(data_in),
	.int(rtc_int),
	.int_rst(int_rst[0])
	);

pio_s  # (
	.DINAMIC_IN_OUT_CONFIG("TRUE"),
	.IN_OUT_MASK_CONFIG(8'h00),
	.USE_INTERRUPTS("TRUE"),
	.DINAMIC_INTERRUPT_CONFIG("TRUE"),
	.INTERRUPT_MASK_CONFIG(8'h07),
	.INTERRUPT_UP_DN_EDGE_DETECT(8'h07),
	.INTERRUPT_BOTH_EDGES_DETECT_MASK(8'h00),
	.BUS_KEPPER_EN_MASK(8'b00000000),
	.BUS_PULL_UP_EN_MASK(8'b00000000),
	.BUS_PULL_DN_EN_MASK(8'b00000000),
	.ADDRESS('h60),
	.BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM)
	) pio_port_A (
	.rst(sys_rst),
	.clk(core_clk),
	.addr(data_addr),
	.wr(data_we),
	.rd(data_re),
	.bus_in(data_out),
	.bus_out(data_in),
	.io({int, _int3, _int2, _int1}),
	.int(int_pio_a),
	.int_rst(int_rst[1])
);

pio_s  # (
	.DINAMIC_IN_OUT_CONFIG("FALSE"),
	.IN_OUT_MASK_CONFIG(8'h00),
	.USE_INTERRUPTS("FALSE"),
	.DINAMIC_INTERRUPT_CONFIG("FALSE"),
	.INTERRUPT_MASK_CONFIG(8'h00),
	.INTERRUPT_UP_DN_EDGE_DETECT(8'h00),
	.INTERRUPT_BOTH_EDGES_DETECT_MASK(8'h00),
	.BUS_KEPPER_EN_MASK(8'b00000000),
	.BUS_PULL_UP_EN_MASK(8'b00000000),
	.BUS_PULL_DN_EN_MASK(8'b00000000),
	.ADDRESS('h80),
	.BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM)
	) pio_port_B (
	.rst(sys_rst),
	.clk(core_clk),
	.addr(data_addr),
	.wr(data_we),
	.rd(data_re),
	.bus_in(data_out),
	.bus_out(data_in),
	.io(port_in),
	.int(int_pio_b),
	.int_rst(int_rst[2])
);

pio_s # (
	.DINAMIC_IN_OUT_CONFIG("FALSE"),
	.IN_OUT_MASK_CONFIG(8'hFF),
	.USE_INTERRUPTS("FALSE"),
	.DINAMIC_INTERRUPT_CONFIG("FALSE"),
	.INTERRUPT_MASK_CONFIG(8'h00),
	.INTERRUPT_UP_DN_EDGE_DETECT(8'h00),
	.INTERRUPT_BOTH_EDGES_DETECT_MASK(8'h00),
	.BUS_KEPPER_EN_MASK(8'b00000000),
	.BUS_PULL_UP_EN_MASK(8'b00000000),
	.BUS_PULL_DN_EN_MASK(8'b00000000),
	.ADDRESS('hA0),
	.BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM)
	) pio_port_C (
	.rst(sys_rst),
	.clk(core_clk),
	.addr(data_addr),
	.wr(data_we),
	.rd(data_re),
	.bus_in(data_out),
	.bus_out(data_in),
	.io(port_out),
	.int(int_pio_c),
	.int_rst(int_rst[3])
);
//`ifdef _0_
uart_s # (
	.BAUDRATE_COUNTER_LENGTH(12),
	.DINAMIC_BAUDRATE("TRUE"),
	.BAUDRATE_DIVIDER((1000 / 24) / 16 / 19200),
	.ADDRESS('hC0),
	.BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM)
	) uart_A (
	.rst(sys_rst),
	.clk(core_clk),
	.addr(data_addr),
	.wr(data_we),
	.rd(data_re),
	.bus_in(data_out),
	.bus_out(data_in),
	.int_rx_rcv(int_uart_a_rx_rcv),
	.int_tx_compl(int_uart_a_tx_compl),
	.int_tx_buff_empty(int_uart_a_tx_buff_empty),
	.tx(UART_TXD),
	.rx(UART_RXD)
	);

wire oled_sclk;
wire oled_sdin;

spi_s #(
	.DINAMIC_BAUDRATE("TRUE"),
	.BAUDRATE_DIVIDER(8),
	.ADDRESS('h600),
	.BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM)
    )spi_A(
	.rst(sys_rst),
	.clk(core_clk),
	.addr(data_addr),
	.wr(data_we),
	.rd(data_re),
	.bus_in(data_out),
	.bus_out(data_in),
	.int(int_spi_a),

	.sck(oled_sclk),/* SPI 'sck' signal (output) */
	.mosi(oled_sdin),/* SPI 'mosi' signal (output) */
	.miso(1'b1),/* SPI 'miso' signal (input) */
	.ss()/* SPI 'ss' signal (if send buffer is maintained full the ss signal will not go high between between transmit chars)(output) */
    );

wire ja_scl;
wire ja_sda;

twi_s #(
    .DINAMIC_BAUDRATE("TRUE"),
    .BAUDRATE_DIVIDER(255),
    .ADDRESS('h800),
    .BUS_ADDR_DATA_LEN(`BUS_ADDR_DATA_LEN_SIM)
    )twi_inst(
    .rst(sys_rst),
    .clk(core_clk),
    .addr(data_addr),
    .wr(data_we),
    .rd(data_re),
    .bus_in(data_out),
    .bus_out(data_in),
    .int_tx_cmpl(),
    .int_rx_cmpl(),
    .int_tx_rst(),
    .int_rx_rst(),
    	
    .scl(ja_scl),
    .sda(ja_sda)
    );
wire lcd_h_int;
wire lcd_v_int;
wire lcd_de;
wire [7:0]ja_int;
wire [7:0]jb_int;
wire [7:0]jc_int;
wire lcd_clk_10;
`ifndef USE_HDMI_OUTPUT
assign ja = {ja_int[7:1], lcd_clk_10};
assign jb = {jb_int[7:1], lcd_h_int};
assign jc = {jc_int[7:1], lcd_v_int};
`endif

lcd # (
	.MASTER("TRUE"),
	.DEBUG(""),//"PATERN_RASTER"
	.DISPLAY_CFG("1280_720_60_DISPLAY_74_25_Mhz"),

	.ADDRESS('hE0),
	.BUS_VRAM_ADDR_LEN(24),
	.BUS_VRAM_DATA_LEN(8),
	.BUS_ADDR_DATA_LEN(16),
	
	.DINAMIC_CONFIG("FALSE"),
	.VRAM_BASE_ADDRESS_CONF(0),
	/* This timings are for AT070TN92 LCD display module but is not tacken in account because we will load a default setup with DISPLAY_CFG parameter.*/
	.H_RES_CONF(720),
	.H_BACK_PORCH_CONF(138),
	.H_FRONT_PORCH_CONF(16),
	.H_PULSE_WIDTH_CONF(62),
	.V_RES_CONF(480),
	.V_BACK_PORCH_CONF(45),
	.V_FRONT_PORCH_CONF(9),
	.V_PULSE_WIDTH_CONF(6),
	.PIXEL_SIZE_CONF(16),
	.HSYNK_INVERTED_CONF(1'b0),
	.VSYNK_INVERTED_CONF(1'b0),
	.DATA_ENABLE_INVERTED_CONF(1'b0),
	.DEDICATED_VRAM_SIZE(800 * 480)
	)lcd_inst(
	.rst(sys_rst),
	.ctrl_clk(core_clk),
    .ctrl_addr(data_addr),
	.ctrl_wr(data_we),
	.ctrl_rd(data_re),
	.ctrl_data_in(data_out),
	.ctrl_data_out(data_in),

	.vmem_addr(ram_addr_bus),
	.vmem_in(data_out),
	.vmem_out(data_in),
	.vmem_rd(1'b0),
	.vmem_wr(data_we & ram_data_sel),
	
`ifdef USE_HDMI_OUTPUT
	.lcd_clk(lcd_clk_10),
`else
	.lcd_clk(lcd_clk),
`endif
	.lcd_h_synk(lcd_h_int),
	.lcd_v_synk(lcd_v_int),
	.lcd_r(ja_int),
	.lcd_g(jb_int),
	.lcd_b(jc_int),
	.lcd_de(lcd_de)
);

`ifdef USE_HDMI_OUTPUT
hdmi_out # (
	.PLATFORM("XILINX_ARTIX_7")
)hdmi_out_inst(
	.rst(sys_rst),
	.clk(lcd_clk),
	.hdmi_tx_cec(hdmi_tx_cec),
	.hdmi_tx_clk_n(hdmi_tx_clk_n),
	.hdmi_tx_clk_p(hdmi_tx_clk_p),
	.hdmi_tx_hpd(hdmi_tx_hpd),
	.hdmi_tx_rscl(hdmi_tx_rscl),
	.hdmi_tx_rsda(hdmi_tx_rsda),
	.hdmi_tx_n(hdmi_tx_n),
	.hdmi_tx_p(hdmi_tx_p),
	
	.lcd_clk_out(lcd_clk_10),
	.lcd_h_synk(lcd_h_int),
	.lcd_v_synk(lcd_v_int),
	.lcd_r('hAA),
	.lcd_g('hDB),
	.lcd_b('h24),
	.lcd_de(lcd_de)
	);
`endif
//`endif //!_0_

rom  #(
.ADDR_ROM_BUS_WIDTH(`BUS_ADDR_PGM_LEN_SIM),
.ROM_PATH("core1ROM.mem"),
.SYNCHRONOUS("FALSE")
)rom(
	.clk(core_clk),
	.a(pgm_addr),
	.d(pgm_data)
);

ram  #(
.ADDR_BUS_WIDTH(`DATA_MEM_SIZE_LEN_SIM),
.RAM_PATH(""),
.SYNCHRONOUS("TRUE")
)ram(
	.clk(core_clk),
	.re(data_re & ram_data_sel),
	.we(data_we & ram_data_sel),
	.a(ram_addr_bus),
	.d_in(data_out),
	.d_out(data_in)
);
 
mega_core #(
	.CORE_CONFIG("XMEGA"),// Supported: "REDUCED", "MINIMAL", "CLASSIC_8K", "CLASSIC_128K", "ENHANCED_8K", "ENHANCED_128K", "ENHANCED_4M", "XMEGA"
	.BUS_ADDR_PGM_WIDTH(`BUS_ADDR_PGM_LEN_SIM),
	.BUS_ADDR_DATA_WIDTH(`BUS_ADDR_DATA_LEN_SIM),
	.USE_BRAM_ROM("FALSE"),
	.WATCHDOG_CNT_WIDTH(21),/* If is 0 the watchdog is disabled */
	.VECTOR_INT_TABLE_SIZE(10),
	.STORE_INTERUPTS("FALSE"),
	.MAP_REGS_IN_TO_SRAM_SECTION("FALSE")
)core(
	.rst(rst),
	.sys_rst(sys_rst),/* Output reset provided by core thru watchdog to the rest of the system */
	.clk(core_clk),
	.clk_wdt(core_clk),
	
	.pgm_addr(pgm_addr),
	.pgm_data(pgm_data),
	
	.data_re(data_re),
	.data_we(data_we),
	.data_addr(data_addr),
	.data_in(data_in),
	.data_out(data_out),
	
	.io_re(io_re),
	.io_we(io_we),
	.io_addr(io_addr),
	.io_in(io_in),
	.io_out(io_out),
	
	.int_sig({int_uart_a_tx_buff_empty, int_uart_a_tx_compl, int_uart_a_rx_rcv, int_spi_a, int_pio_f, int_pio_e, int_pio_d, int_pio_c, int_pio_b, int_pio_a, rtc_int}),
	.int_rst(int_rst),
	.wdt_rst_out()
);


endmodule
	 
	 
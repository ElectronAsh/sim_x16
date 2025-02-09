/*
 * This is the simulation file for TWI IP.
 * 
 * Copyright (C) 2018  Iulian Gheorghiu
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
`include "io_s_h.v"

module sim_i2c(
	output reg rst,
	output reg clk,
	output reg [15:0]addr,
	output reg wr,
	output reg rd,
	output [7:0]bus_in,
	output reg [7:0]bus_out,
	output int_tx_cmpl,
	output int_rx_cmpl,
	output int_tx_rst,
	output int_rx_rst,
	
	inout scl,
	inout sda
);


always	#(1)	clk	<=	~clk;	//	clocking	device

initial
begin
	rst = 0;
	clk = 1;
	wr = 0;
	rd = 0;
	#2;
	rst = 1;
	#2;
	rst = 0;
	#4;
	addr = `TWI_MASTER_BAUD;
	bus_out = 'h1;
	wr = 1;
	#2;
	addr = `TWI_MASTER_CTRLA;
	bus_out = `TWI_MASTER_ENABLE_bm;
	#2;
	addr = `TWI_MASTER_DATA;
	bus_out = 8'h55;
	#2;
	wr = 0;
	bus_out = 'hz;
	rd = 1;
	addr = `TWI_MASTER_STATUS;
	#2;
	while(~bus_in[`TWI_MASTER_WIF_bp]) #2;
	rd = 0;
	#2;
	wr = 1;
	addr = `TWI_MASTER_DATA;
	bus_out = 8'hAA;
	#2;
	wr = 0;
	bus_out = 'hz;
	rd = 1;
	addr = `TWI_MASTER_STATUS;
	#2;
	while(~bus_in[`TWI_MASTER_WIF_bp]) #2;
	rd = 0;
	#2;
	addr = `TWI_MASTER_CTRLC;
	bus_out = `TWI_MASTER_CMD_REPSTART_gc;
	#2;
	wr = 1;
	addr = `TWI_MASTER_CTRLC;
	bus_out = `TWI_MASTER_CMD_RECVTRANS_gc;
	#2;
	wr = 0;
	bus_out = 'hz;
	rd = 1;
	addr = `TWI_MASTER_STATUS;
	#2;
	while(~bus_in[`TWI_MASTER_RIF_bp]) #2;
	addr = `TWI_MASTER_DATA;
	#2;
	rd = 0;
	#2;
	wr = 1;
	addr = `TWI_MASTER_CTRLC;
	bus_out = `TWI_MASTER_ACKACT_bm | `TWI_MASTER_CMD_RECVTRANS_gc;
	#2;
	wr = 0;
	bus_out = 'hz;
	rd = 1;
	addr = `TWI_MASTER_STATUS;
	#2;
	while(~bus_in[`TWI_MASTER_RIF_bp]) #2;
	addr = `TWI_MASTER_DATA;
	#2;
	rd = 0;
	#2;
	wr = 1;
	addr = `TWI_MASTER_CTRLC;
	bus_out = `TWI_MASTER_CMD_STOP_gc;
	#2;
	wr = 0;
	bus_out = 'hz;
	#10;
	$finish;
end

twi_s #(
	.DINAMIC_BAUDRATE("TRUE"),
	.BAUDRATE_DIVIDER(19200),
	.ADDRESS(0),
	.BUS_ADDR_DATA_LEN(16)
    )twi_inst(
	.rst(rst),
	.clk(clk),
	.addr(addr),
	.wr(wr),
	.rd(rd),
	.bus_in(bus_out),
	.bus_out(bus_in),
	.int_tx_cmpl(int_tx_cmpl),
	.int_rx_cmpl(int_rx_cmpl),
	.int_tx_rst(int_tx_rst),
	.int_rx_rst(int_rx_rst),
	
	.scl(scl),
	.sda(sda)
);
endmodule

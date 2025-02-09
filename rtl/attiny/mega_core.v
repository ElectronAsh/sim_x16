/*----------------------------------------------------------------------------/
/  This IP is the Atmel ATTINY-ATMEGA-ATXMEGA CPU implementation.                             /
/-----------------------------------------------------------------------------/
/
/ Copyright (C) 2017 Iulian Gheorghiu (morgoth.creator@gmail.com), all right reserved.
/
/ This IP file is an open source software. Redistribution and use of this IP in
/ source and binary forms, with or without modification, are permitted provided
/ that the following condition is met:

/ 1. Redistributions of source code must retain the above copyright notice,
/    this condition and the following disclaimer.
/
/ This software is provided by the copyright holder and contributors "AS IS"
/ and any warranties related to this software are DISCLAIMED.
/ The copyright owner or contributors be NOT LIABLE for any damages caused
/ by use of this software.
/----------------------------------------------------------------------------*/

`timescale 1ns / 1ps

/* verilator lint_off WIDTHCONCAT */

/*
 * Define modes.
 */

//`define USE_RAM_READ_DELAY	1// For now let it undefined because is not fully implemented( uncommenting this line will result in unnexpected behavior ).

//`define USE_EXTENDED_RAMP_REGS// For future usage.
//`define USE_CCP_REG// For future usage.
`define USE_LPM

/*
 * Core configurations:
 * "REDUCED" // (not working)
 * "MINIMAL"
 * "CLASSIC_8K"
 * "CLASSIC_128K"
 * "ENHANCED_8K"
 * "ENHANCED_128K"
 * "ENHANCED_4M"  //Not implemented
 * "XMEGA"
 */

/*
 * Watchdog.
 */
module watchdog # (
		parameter CNT_WIDTH = 0
		)(
		input rst,
		input clk,
		input wdt_clk,
		input wdt_rst_in,
		output reg wdt_rst_out);
		
reg [CNT_WIDTH:0]wdt_cnt;
reg reset;
reg reset_n;
reg wdt_reset;
reg wdt_reset_n;

always @ (posedge rst or posedge wdt_rst_in)
begin
	if(rst)
		reset <= 1'b0;
	else
		reset <= ~reset_n;
end

always @ (posedge rst or posedge wdt_clk)
begin
	if(rst)
	begin
		reset_n <= 1'b0;
		wdt_reset <=1'b0;
		wdt_cnt <= 'h0000;
	end
	else if(reset != reset_n)
	begin
		reset_n <= reset;
		wdt_cnt <= 'h0000;
	end
	else if(wdt_clk)
	begin
		if(wdt_cnt[CNT_WIDTH])
		begin
			wdt_reset <= ~wdt_reset_n;
			wdt_cnt <= 'h0000;
		end
		else
		begin
			wdt_cnt <= wdt_cnt + 1;
		end
	end
end

always @ (posedge rst or posedge clk)
begin
	wdt_rst_out <= 1'b0;
	if(rst)
		wdt_reset_n <= 1'b1;
	else if(wdt_reset != wdt_reset_n)
	begin
		wdt_reset_n <= wdt_reset;
		wdt_rst_out <= 1'b1;
	end
end

endmodule
/*
  * !Watchdog.
  */
  
/*
   * !Define modes.
   */
   
 

/*
 * Instruction set.
 */

`define INSTRUCTION_NOP				16'b0000000000000000
`define INSTRUCTION_MOVW			16'b00000001xxxxxxxx//00000001DDDDRRRR
`define INSTRUCTION_MULS			16'b00000010xxxxxxxx//00000010ddddrrrr
`define INSTRUCTION_MULSU			16'b000000110xxx0xxx//000000110ddd0rrr
`define INSTRUCTION_FMUL			16'b000000110xxx1xxx//000000110ddd1rrr
`define INSTRUCTION_FMULS			16'b000000111xxx0xxx//000000111dddurrr
`define INSTRUCTION_FMULSU			16'b000000111xxx1xxx//000000111dddurrr
`define INSTRUCTION_CPC				16'b000001xxxxxxxxxx//000001rdddddrrrr
`define INSTRUCTION_CP				16'b000101xxxxxxxxxx//000101rdddddrrrr
`define INSTRUCTION_SBC				16'b000010xxxxxxxxxx//000010rdddddrrrr
`define INSTRUCTION_SUB				16'b000110xxxxxxxxxx//000110rdddddrrrr
`define INSTRUCTION_ADD				16'b000011xxxxxxxxxx//000011rdddddrrrr
`define INSTRUCTION_ADC				16'b000111xxxxxxxxxx//000111rdddddrrrr
`define INSTRUCTION_CPSE			16'b000100xxxxxxxxxx//000100rdddddrrrr
`define INSTRUCTION_AND				16'b001000xxxxxxxxxx//001000rdddddrrrr
`define INSTRUCTION_EOR				16'b001001xxxxxxxxxx//001001rdddddrrrr
`define INSTRUCTION_OR				16'b001010xxxxxxxxxx//001010rdddddrrrr
`define INSTRUCTION_MOV				16'b001011xxxxxxxxxx//001011rdddddrrrr
`define INSTRUCTION_CPI				16'b0011xxxxxxxxxxxx//0011kkkkddddkkkk
`define INSTRUCTION_SUBI			16'b0101xxxxxxxxxxxx//0101kkkkddddkkkk
`define INSTRUCTION_SBCI			16'b0100xxxxxxxxxxxx//0100kkkkddddkkkk
`define INSTRUCTION_ORI_SBR			16'b0110xxxxxxxxxxxx//0110kkkkddddkkkk
`define INSTRUCTION_ANDI_CBR		16'b0111xxxxxxxxxxxx//0111kkkkddddkkkk

`define INSTRUCTION_LDD_STD			16'b10x0xxxxxxxxxxxx//10k0kksdddddykkk
`define INSTRUCTION_LDS_STS			16'b100100xxxxxx0000//100100sddddd0000
`define INSTRUCTION_LD_ST_YZP		16'b100100xxxxxxx001//100100sdddddy001
`define INSTRUCTION_LD_ST_YZN		16'b100100xxxxxxx010//100100sdddddy010
`define INSTRUCTION_LPM_R			16'b1001000xxxxx0100//1001000ddddd01q0
`define INSTRUCTION_LPM_R_P			16'b1001000xxxxx0101//1001000ddddd01q1
`define INSTRUCTION_XCH				16'b1001001xxxxx0100//1001001ddddd0100
`define INSTRUCTION_LAS				16'b1001001xxxxx0101//1001001ddddd0101
`define INSTRUCTION_LAC				16'b1001001xxxxx0110//1001001ddddd0110
`define INSTRUCTION_LAT				16'b1001001xxxxx0111//1001001ddddd0111
`define INSTRUCTION_LD_ST_X			16'b100100xxxxxx1100//100100sddddd1100
`define INSTRUCTION_LD_ST_XP		16'b100100xxxxxx1101//100100sddddd1101
`define INSTRUCTION_LD_ST_XN		16'b100100xxxxxx1110//100100sddddd1110
`define INSTRUCTION_POP_PUSH		16'b100100xxxxxx1111//100100sddddd1111
`define INSTRUCTION_COM				16'b1001010xxxxx0000//1001010ddddd0000
`define INSTRUCTION_NEG				16'b1001010xxxxx0001//1001010ddddd0001
`define INSTRUCTION_SWAP			16'b1001010xxxxx0010//1001010ddddd0010
`define INSTRUCTION_INC				16'b1001010xxxxx0011//1001010ddddd0011
`define INSTRUCTION_ASR				16'b1001010xxxxx0101//1001010ddddd0101
`define INSTRUCTION_LSR				16'b1001010xxxxx0110//1001010ddddd0110
`define INSTRUCTION_ROR				16'b1001010xxxxx0111//1001010ddddd0111
`define INSTRUCTION_SEx_CLx			16'b10010100xxxx1000//10010100Bbbb1000
`define INSTRUCTION_RET_RETI		16'b10010101000x1000//10010101000x1000
`define INSTRUCTION_RET				16'b1001010100001000//1001010100001000
`define INSTRUCTION_RETI			16'b1001010100011000//1001010100001000
`define INSTRUCTION_SLEEP			16'b1001010110000000//1001010100001000
`define INSTRUCTION_BREAK			16'b1001010110011000//1001010100011000
`define INSTRUCTION_WDR				16'b1001010110101000//1001010100101000
`define INSTRUCTION_LPM_ELPM		16'b10010101110x1000//10010101110q1000
`define INSTRUCTION_SPM				16'b1001010111101000//1001010111101000
`define INSTRUCTION_SPM_Z_P			16'b1001010111111000//1001010111111000
`define INSTRUCTION_IJMP			16'b1001010000001001//1001010c000e1001
`define INSTRUCTION_ICALL			16'b1001010100001001//1001010c000e1001
`define INSTRUCTION_DEC				16'b1001010xxxxx1010//1001010ddddd1010
`define INSTRUCTION_DES				16'b10010100xxxx1011//10010100kkkk1011
`define INSTRUCTION_JMP				16'b1001010xxxxx110x//1001010kkkkk110k
`define INSTRUCTION_CALL			16'b1001010xxxxx111x//1001010kkkkk111k
`define INSTRUCTION_ADIW			16'b10010110xxxxxxxx//10010110kkppkkkk
`define INSTRUCTION_SBIW			16'b10010111xxxxxxxx//10010111kkppkkkk
`define INSTRUCTION_CBI_SBI			16'b100110x0xxxxxxxx//100110B0aaaaabbb
`define INSTRUCTION_SBIC_SBIS		16'b100110x1xxxxxxxx//100110B1aaaaabbb
`define INSTRUCTION_MUL				16'b100111xxxxxxxxxx//100111rdddddrrrr
`define INSTRUCTION_IN_OUT			16'b1011xxxxxxxxxxxx//1011saadddddaaaa
`define INSTRUCTION_RJMP			16'b1100xxxxxxxxxxxx//1100xxxxxxxxxxxx
`define INSTRUCTION_RCALL			16'b1101xxxxxxxxxxxx//1101xxxxxxxxxxxx
`define INSTRUCTION_LDI				16'b1110xxxxxxxxxxxx//1110KKKKddddKKKK
`define INSTRUCTION_COND_BRANCH		16'b11110xxxxxxxxxxx//11110Bxxxxxxxbbb
`define INSTRUCTION_BLD_BST			16'b111110xxxxxx0xxx//111110sddddd0bbb
`define INSTRUCTION_SBRC_SBRS		16'b111111xxxxxx0xxx//111111Bddddd0bbb
/*
 * !Instruction set.
 */

/*
 * Instruction decoder.
 */
module inst_dec(
	input [15:0]inst,
	
	input INTERRUPT_IN_EXECUTION,
	
	output reg SEL_INSTRUCTION_MOVW,
	output reg SEL_INSTRUCTION_MULS,
	output reg SEL_INSTRUCTION_MULSU,
	output reg SEL_INSTRUCTION_FMUL,
	output reg SEL_INSTRUCTION_FMULS,
	output reg SEL_INSTRUCTION_FMULSU,
	output reg SEL_INSTRUCTION_CPC,
	output reg SEL_INSTRUCTION_CP,
	output reg SEL_INSTRUCTION_SBC,
	output reg SEL_INSTRUCTION_SUB,
	output reg SEL_INSTRUCTION_ADD,
	output reg SEL_INSTRUCTION_ADC,
	output reg SEL_INSTRUCTION_CPSE,
	output reg SEL_INSTRUCTION_AND,
	output reg SEL_INSTRUCTION_EOR,
	output reg SEL_INSTRUCTION_OR,
	output reg SEL_INSTRUCTION_MOV,
	output reg SEL_INSTRUCTION_CPI,
	output reg SEL_INSTRUCTION_SUBI,
	output reg SEL_INSTRUCTION_SBCI,
	output reg SEL_INSTRUCTION_ORI_SBR,
	output reg SEL_INSTRUCTION_ANDI_CBR,
	output reg SEL_INSTRUCTION_LDD_STD,
	output reg SEL_INSTRUCTION_LDS_STS,
	output reg SEL_INSTRUCTION_LD_ST_YZP,
	output reg SEL_INSTRUCTION_LD_ST_YZN,
	output reg SEL_INSTRUCTION_LPM_R,
	output reg SEL_INSTRUCTION_LPM_R_P,
	output reg SEL_INSTRUCTION_XCH,
	output reg SEL_INSTRUCTION_LAS,
	output reg SEL_INSTRUCTION_LAC,
	output reg SEL_INSTRUCTION_LAT,
	output reg SEL_INSTRUCTION_LD_ST_X,
	output reg SEL_INSTRUCTION_LD_ST_XP,
	output reg SEL_INSTRUCTION_LD_ST_XN,
	output reg SEL_INSTRUCTION_POP_PUSH,
	output reg SEL_INSTRUCTION_COM,
	output reg SEL_INSTRUCTION_NEG,
	output reg SEL_INSTRUCTION_SWAP,
	output reg SEL_INSTRUCTION_INC,
	output reg SEL_INSTRUCTION_ASR,
	output reg SEL_INSTRUCTION_LSR,
	output reg SEL_INSTRUCTION_ROR,
	output reg SEL_INSTRUCTION_SEx_CLx,
	output reg SEL_INSTRUCTION_RET,
	output reg SEL_INSTRUCTION_RETI,
	output reg SEL_INSTRUCTION_SLEEP,
	output reg SEL_INSTRUCTION_BREAK,
	output reg SEL_INSTRUCTION_WDR,
	output reg SEL_INSTRUCTION_LPM_ELPM,
	output reg SEL_INSTRUCTION_SPM,
	output reg SEL_INSTRUCTION_SPM_Z_P,
	output reg SEL_INSTRUCTION_IJMP,
	output reg SEL_INSTRUCTION_ICALL,
	output reg SEL_INSTRUCTION_DEC,
	output reg SEL_INSTRUCTION_DES,
	output reg SEL_INSTRUCTION_JMP,
	output reg SEL_INSTRUCTION_CALL,
	output reg SEL_INSTRUCTION_ADIW,
	output reg SEL_INSTRUCTION_SBIW,
	output reg SEL_INSTRUCTION_CBI_SBI,
	output reg SEL_INSTRUCTION_SBIC_SBIS,
	output reg SEL_INSTRUCTION_MUL,
	output reg SEL_INSTRUCTION_IN_OUT,
	output reg SEL_INSTRUCTION_RJMP,
	output reg SEL_INSTRUCTION_RCALL,
	output reg SEL_INSTRUCTION_LDI,
	output reg SEL_INSTRUCTION_COND_BRANCH,
	output reg SEL_INSTRUCTION_BLD_BST,
	output reg SEL_INSTRUCTION_SBRC_SBRS
);

always @ (*)
begin
	SEL_INSTRUCTION_MOVW <= 1'b0;
	SEL_INSTRUCTION_MULS <= 1'b0;
	SEL_INSTRUCTION_MULSU <= 1'b0;
	SEL_INSTRUCTION_FMUL <= 1'b0;
	SEL_INSTRUCTION_FMULS <= 1'b0;
	SEL_INSTRUCTION_FMULSU <= 1'b0;
	SEL_INSTRUCTION_CPC <= 1'b0;
	SEL_INSTRUCTION_CP <= 1'b0;
	SEL_INSTRUCTION_SBC <= 1'b0;
	SEL_INSTRUCTION_SUB <= 1'b0;
	SEL_INSTRUCTION_ADD <= 1'b0;
	SEL_INSTRUCTION_ADC <= 1'b0;
	SEL_INSTRUCTION_CPSE <= 1'b0;
	SEL_INSTRUCTION_AND <= 1'b0;
	SEL_INSTRUCTION_EOR <= 1'b0;
	SEL_INSTRUCTION_OR <= 1'b0;
	SEL_INSTRUCTION_MOV <= 1'b0;
	SEL_INSTRUCTION_CPI <= 1'b0;
	SEL_INSTRUCTION_SUBI <= 1'b0;
	SEL_INSTRUCTION_SBCI <= 1'b0;
	SEL_INSTRUCTION_ORI_SBR <= 1'b0;
	SEL_INSTRUCTION_ANDI_CBR <= 1'b0;
	SEL_INSTRUCTION_LDD_STD <= 1'b0;
	SEL_INSTRUCTION_LDS_STS <= 1'b0;
	SEL_INSTRUCTION_LD_ST_YZP <= 1'b0;
	SEL_INSTRUCTION_LD_ST_YZN <= 1'b0;
	SEL_INSTRUCTION_LPM_R <= 1'b0;
	SEL_INSTRUCTION_LPM_R_P <= 1'b0;
	SEL_INSTRUCTION_XCH <= 1'b0;
	SEL_INSTRUCTION_LAS <= 1'b0;
	SEL_INSTRUCTION_LAC <= 1'b0;
	SEL_INSTRUCTION_LAT <= 1'b0;
	SEL_INSTRUCTION_LD_ST_X <= 1'b0;
	SEL_INSTRUCTION_LD_ST_XP <= 1'b0;
	SEL_INSTRUCTION_LD_ST_XN <= 1'b0;
	SEL_INSTRUCTION_POP_PUSH <= 1'b0;
	SEL_INSTRUCTION_COM <= 1'b0;
	SEL_INSTRUCTION_NEG <= 1'b0;
	SEL_INSTRUCTION_SWAP <= 1'b0;
	SEL_INSTRUCTION_INC <= 1'b0;
	SEL_INSTRUCTION_ASR <= 1'b0;
	SEL_INSTRUCTION_LSR <= 1'b0;
	SEL_INSTRUCTION_ROR <= 1'b0;
	SEL_INSTRUCTION_SEx_CLx <= 1'b0;
	SEL_INSTRUCTION_RET <= 1'b0;
	SEL_INSTRUCTION_RETI <= 1'b0;
	SEL_INSTRUCTION_SLEEP <= 1'b0;
	SEL_INSTRUCTION_BREAK <= 1'b0;
	SEL_INSTRUCTION_WDR <= 1'b0;
	SEL_INSTRUCTION_LPM_ELPM <= 1'b0;
	SEL_INSTRUCTION_SPM <= 1'b0;
	SEL_INSTRUCTION_SPM_Z_P <= 1'b0;
	SEL_INSTRUCTION_IJMP <= 1'b0;
	SEL_INSTRUCTION_ICALL <= 1'b0;
	SEL_INSTRUCTION_DEC <= 1'b0;
	SEL_INSTRUCTION_DES <= 1'b0;
	SEL_INSTRUCTION_JMP <= 1'b0;
	SEL_INSTRUCTION_CALL <= 1'b0;
	SEL_INSTRUCTION_ADIW <= 1'b0;
	SEL_INSTRUCTION_SBIW <= 1'b0;
	SEL_INSTRUCTION_CBI_SBI <= 1'b0;
	SEL_INSTRUCTION_SBIC_SBIS <= 1'b0;
	SEL_INSTRUCTION_MUL <= 1'b0;
	SEL_INSTRUCTION_IN_OUT <= 1'b0;
	SEL_INSTRUCTION_RJMP <= 1'b0;
	SEL_INSTRUCTION_RCALL <= 1'b0;
	SEL_INSTRUCTION_LDI <= 1'b0;
	SEL_INSTRUCTION_COND_BRANCH <= 1'b0;
	SEL_INSTRUCTION_BLD_BST <= 1'b0;
	SEL_INSTRUCTION_SBRC_SBRS <= 1'b0;
	casex({INTERRUPT_IN_EXECUTION, inst})
	{1'b0, `INSTRUCTION_MOVW}: SEL_INSTRUCTION_MOVW <= 1'b1;
	{1'b0, `INSTRUCTION_MULS}: SEL_INSTRUCTION_MULS <= 1'b1;
	{1'b0, `INSTRUCTION_MULSU}: SEL_INSTRUCTION_MULSU <= 1'b1;
	{1'b0, `INSTRUCTION_FMUL}: SEL_INSTRUCTION_FMUL <= 1'b1;
	{1'b0, `INSTRUCTION_FMULS}: SEL_INSTRUCTION_FMULS <= 1'b1;
	{1'b0, `INSTRUCTION_FMULSU}: SEL_INSTRUCTION_FMULSU <= 1'b1;
	{1'b0, `INSTRUCTION_CPC}: SEL_INSTRUCTION_CPC <= 1'b1;
	{1'b0, `INSTRUCTION_CP}: SEL_INSTRUCTION_CP <= 1'b1;
	{1'b0, `INSTRUCTION_SBC}: SEL_INSTRUCTION_SBC <= 1'b1;
	{1'b0, `INSTRUCTION_SUB}: SEL_INSTRUCTION_SUB <= 1'b1;
	{1'b0, `INSTRUCTION_ADD}: SEL_INSTRUCTION_ADD <= 1'b1;
	{1'b0, `INSTRUCTION_ADC}: SEL_INSTRUCTION_ADC <= 1'b1;
	{1'b0, `INSTRUCTION_CPSE}: SEL_INSTRUCTION_CPSE <= 1'b1;
	{1'b0, `INSTRUCTION_AND}: SEL_INSTRUCTION_AND <= 1'b1;
	{1'b0, `INSTRUCTION_EOR}: SEL_INSTRUCTION_EOR <= 1'b1;
	{1'b0, `INSTRUCTION_OR}: SEL_INSTRUCTION_OR <= 1'b1;
	{1'b0, `INSTRUCTION_MOV}: SEL_INSTRUCTION_MOV <= 1'b1;
	{1'b0, `INSTRUCTION_CPI}: SEL_INSTRUCTION_CPI <= 1'b1;
	{1'b0, `INSTRUCTION_SUBI}: SEL_INSTRUCTION_SUBI <= 1'b1;
	{1'b0, `INSTRUCTION_SBCI}: SEL_INSTRUCTION_SBCI <= 1'b1;
	{1'b0, `INSTRUCTION_ORI_SBR}: SEL_INSTRUCTION_ORI_SBR <= 1'b1;
	{1'b0, `INSTRUCTION_ANDI_CBR}: SEL_INSTRUCTION_ANDI_CBR <= 1'b1;
	{1'b0, `INSTRUCTION_LDD_STD}: SEL_INSTRUCTION_LDD_STD <= 1'b1;
	{1'b0, `INSTRUCTION_LDS_STS}: SEL_INSTRUCTION_LDS_STS <= 1'b1;
	{1'b0, `INSTRUCTION_LD_ST_YZP}: SEL_INSTRUCTION_LD_ST_YZP <= 1'b1;
	{1'b0, `INSTRUCTION_LD_ST_YZN}: SEL_INSTRUCTION_LD_ST_YZN <= 1'b1;
	{1'b0, `INSTRUCTION_LPM_R}: SEL_INSTRUCTION_LPM_R <= 1'b1;
	{1'b0, `INSTRUCTION_LPM_R_P}: SEL_INSTRUCTION_LPM_R_P <= 1'b1;
	{1'b0, `INSTRUCTION_XCH}: SEL_INSTRUCTION_XCH <= 1'b1;
	{1'b0, `INSTRUCTION_LAS}: SEL_INSTRUCTION_LAS <= 1'b1;
	{1'b0, `INSTRUCTION_LAC}: SEL_INSTRUCTION_LAC <= 1'b1;
	{1'b0, `INSTRUCTION_LAT}: SEL_INSTRUCTION_LAT <= 1'b1;
	{1'b0, `INSTRUCTION_LD_ST_X}: SEL_INSTRUCTION_LD_ST_X <= 1'b1;
	{1'b0, `INSTRUCTION_LD_ST_XP}: SEL_INSTRUCTION_LD_ST_XP <= 1'b1;
	{1'b0, `INSTRUCTION_LD_ST_XN}: SEL_INSTRUCTION_LD_ST_XN <= 1'b1;
	{1'b0, `INSTRUCTION_POP_PUSH}: SEL_INSTRUCTION_POP_PUSH <= 1'b1;
	{1'b0, `INSTRUCTION_COM}: SEL_INSTRUCTION_COM <= 1'b1;
	{1'b0, `INSTRUCTION_NEG}: SEL_INSTRUCTION_NEG <= 1'b1;
	{1'b0, `INSTRUCTION_SWAP}: SEL_INSTRUCTION_SWAP <= 1'b1;
	{1'b0, `INSTRUCTION_INC}: SEL_INSTRUCTION_INC <= 1'b1;
	{1'b0, `INSTRUCTION_ASR}: SEL_INSTRUCTION_ASR <= 1'b1;
	{1'b0, `INSTRUCTION_LSR}: SEL_INSTRUCTION_LSR <= 1'b1;
	{1'b0, `INSTRUCTION_ROR}: SEL_INSTRUCTION_ROR <= 1'b1;
	{1'b0, `INSTRUCTION_SEx_CLx}: SEL_INSTRUCTION_SEx_CLx <= 1'b1;
	{1'b0, `INSTRUCTION_RET}: SEL_INSTRUCTION_RET <= 1'b1;
	{1'b0, `INSTRUCTION_RETI}: SEL_INSTRUCTION_RETI <= 1'b1;
	{1'b0, `INSTRUCTION_SLEEP}: SEL_INSTRUCTION_SLEEP <= 1'b1;
	{1'b0, `INSTRUCTION_BREAK}: SEL_INSTRUCTION_BREAK <= 1'b1;
	{1'b0, `INSTRUCTION_WDR}: SEL_INSTRUCTION_WDR <= 1'b1;
	{1'b0, `INSTRUCTION_LPM_ELPM}: SEL_INSTRUCTION_LPM_ELPM <= 1'b1;
	{1'b0, `INSTRUCTION_SPM}: SEL_INSTRUCTION_SPM <= 1'b1;
	{1'b0, `INSTRUCTION_SPM_Z_P}: SEL_INSTRUCTION_SPM_Z_P <= 1'b1;
	{1'b0, `INSTRUCTION_IJMP}: SEL_INSTRUCTION_IJMP <= 1'b1;
	{1'b0, `INSTRUCTION_ICALL}: SEL_INSTRUCTION_ICALL <= 1'b1;
	{1'b0, `INSTRUCTION_DEC}: SEL_INSTRUCTION_DEC <= 1'b1;
	{1'b0, `INSTRUCTION_DES}: SEL_INSTRUCTION_DES <= 1'b1;
	{1'b0, `INSTRUCTION_JMP}: SEL_INSTRUCTION_JMP <= 1'b1;
	{1'b0, `INSTRUCTION_CALL}: SEL_INSTRUCTION_CALL <= 1'b1;
	{1'b0, `INSTRUCTION_ADIW}: SEL_INSTRUCTION_ADIW <= 1'b1;
	{1'b0, `INSTRUCTION_SBIW}: SEL_INSTRUCTION_SBIW <= 1'b1;
	{1'b0, `INSTRUCTION_CBI_SBI}: SEL_INSTRUCTION_CBI_SBI <= 1'b1;
	{1'b0, `INSTRUCTION_SBIC_SBIS}: SEL_INSTRUCTION_SBIC_SBIS <= 1'b1;
	{1'b0, `INSTRUCTION_MUL}: SEL_INSTRUCTION_MUL <= 1'b1;
	{1'b0, `INSTRUCTION_IN_OUT}: SEL_INSTRUCTION_IN_OUT <= 1'b1;
	{1'b0, `INSTRUCTION_RJMP}: SEL_INSTRUCTION_RJMP <= 1'b1;
	{1'b0, `INSTRUCTION_RCALL}: SEL_INSTRUCTION_RCALL <= 1'b1;
	{1'b0, `INSTRUCTION_LDI}: SEL_INSTRUCTION_LDI <= 1'b1;
	{1'b0, `INSTRUCTION_COND_BRANCH}: SEL_INSTRUCTION_COND_BRANCH <= 1'b1;
	{1'b0, `INSTRUCTION_BLD_BST}: SEL_INSTRUCTION_BLD_BST <= 1'b1;
	{1'b0, `INSTRUCTION_SBRC_SBRS}: SEL_INSTRUCTION_SBRC_SBRS <= 1'b1;
	endcase
end
endmodule
/*
 * !Instruction decoder.
 */

/*
 * Registers memory.
 */
`define ALU_FLAG_C	0
`define ALU_FLAG_Z	1
`define ALU_FLAG_N	2
`define ALU_FLAG_V	3
`define ALU_FLAG_S	4
`define ALU_FLAG_H	5
`define ALU_FLAG_T	6
`define ALU_FLAG_I	7

module mega_regs #
	(
	parameter PLATFORM = "XILINX"
	)(
	input rst,
	input clk,
	input [4:0]rw_addr,
	input [15:0]rw_data,
	input rw_16bit,
	input write,
	input [4:0]rd_addr_d,
	output [15:0]rd_data_d,
	input rd_16bit_d,
	input read_d,
	input [4:0]rd_addr_r,
	output [15:0]rd_data_r,
	input rd_16bit_r,
	input read_r
);

generate
if(PLATFORM == "XILINX")
begin
reg [7:0]REGL[0:15];
reg [7:0]REGH[0:15];

/*integer k;

initial
begin
	for (k = 0; k < 16; k = k + 1)
	begin
		REGL[k] = 0;
		REGH[k] = 0;
	end
end*/
always @ (posedge clk)
begin
	if(write)
	begin
		if(!rw_16bit & !rw_addr[0])
			REGL[rw_addr[4:1]] <= rw_data[7:0];
		else if(!rw_16bit & rw_addr[0])
			REGH[rw_addr[4:1]] <= rw_data[7:0];
		else
		begin
			REGL[rw_addr[4:1]] <= rw_data[7:0];
			REGH[rw_addr[4:1]] <= rw_data[15:8];
		end
	end
end

assign rd_data_d = (read_d) ? (rd_16bit_d) ? {REGH[rd_addr_d[4:1]], REGL[rd_addr_d[4:1]]} : (rd_addr_d[0]) ? {8'h00, REGH[rd_addr_d[4:1]]} : {8'h00, REGL[rd_addr_d[4:1]]} : 16'bx;
assign rd_data_r = (read_r) ? (rd_16bit_r) ? {REGH[rd_addr_r[4:1]], REGL[rd_addr_r[4:1]]} : (rd_addr_r[0]) ? {8'h00, REGH[rd_addr_r[4:1]]} : {8'h00, REGL[rd_addr_r[4:1]]} : 16'bx;
end /* PLATFORM != "XILINX" */
else
if(PLATFORM == "LATTICE_ECP5" || PLATFORM == "LATTICE_ECP3" || PLATFORM == "LATTICE_LIFMD" || PLATFORM == "LATTICE_MARCHXO2" || PLATFORM == "LATTICE_MARCHXO3L")
begin/* Lattice Diamond does not know how to implement distributed RAM with true three ports, so I implement him from individual distributed RAM cells. */
	
wire [7:0]REGLD_out;
wire [7:0]REGHD_out;
wire [7:0]REGLR_out;
wire [7:0]REGHR_out;
wire write_to_L = write & ((!rw_16bit & !rw_addr[0]) || rw_16bit);
wire write_to_H = write &((!rw_16bit & rw_addr[0]) || rw_16bit);
wire write_to_HL = write &rw_16bit;

DPR16X4C REG_L_D_4_7(
	.DI3(rw_data[7]),
	.DI2(rw_data[6]),
	.DI1(rw_data[5]),
	.DI0(rw_data[4]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_L | write_to_HL),
	.RAD3(rd_addr_d[4]),
	.RAD2(rd_addr_d[3]),
	.RAD1(rd_addr_d[2]),
	.RAD0(rd_addr_d[1]),
	.DO3(REGLD_out[7]),
	.DO2(REGLD_out[6]),
	.DO1(REGLD_out[5]),
	.DO0(REGLD_out[4])
);
	
DPR16X4C REG_L_D_0_3(
	.DI3(rw_data[3]),
	.DI2(rw_data[2]),
	.DI1(rw_data[1]),
	.DI0(rw_data[0]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_L | write_to_HL),
	.RAD3(rd_addr_d[4]),
	.RAD2(rd_addr_d[3]),
	.RAD1(rd_addr_d[2]),
	.RAD0(rd_addr_d[1]),
	.DO3(REGLD_out[3]),
	.DO2(REGLD_out[2]),
	.DO1(REGLD_out[1]),
	.DO0(REGLD_out[0])
);
	
DPR16X4C REG_H_D_4_7(
	.DI3(write_to_HL ? rw_data[15] : rw_data[7]),
	.DI2(write_to_HL ? rw_data[14] : rw_data[6]),
	.DI1(write_to_HL ? rw_data[13] : rw_data[5]),
	.DI0(write_to_HL ? rw_data[12] : rw_data[4]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_H | write_to_HL),
	.RAD3(rd_addr_d[4]),
	.RAD2(rd_addr_d[3]),
	.RAD1(rd_addr_d[2]),
	.RAD0(rd_addr_d[1]),
	.DO3(REGHD_out[7]),
	.DO2(REGHD_out[6]),
	.DO1(REGHD_out[5]),
	.DO0(REGHD_out[4])
);
	
DPR16X4C REG_H_D_0_3(
	.DI3(write_to_HL ? rw_data[11] : rw_data[3]),
	.DI2(write_to_HL ? rw_data[10] : rw_data[2]),
	.DI1(write_to_HL ? rw_data[9] : rw_data[1]),
	.DI0(write_to_HL ? rw_data[8] : rw_data[0]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_H | write_to_HL),
	.RAD3(rd_addr_d[4]),
	.RAD2(rd_addr_d[3]),
	.RAD1(rd_addr_d[2]),
	.RAD0(rd_addr_d[1]),
	.DO3(REGHD_out[3]),
	.DO2(REGHD_out[2]),
	.DO1(REGHD_out[1]),
	.DO0(REGHD_out[0])
);
	
DPR16X4C REG_L_R_4_7(
	.DI3(rw_data[7]),
	.DI2(rw_data[6]),
	.DI1(rw_data[5]),
	.DI0(rw_data[4]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_L | write_to_HL),
	.RAD3(rd_addr_r[4]),
	.RAD2(rd_addr_r[3]),
	.RAD1(rd_addr_r[2]),
	.RAD0(rd_addr_r[1]),
	.DO3(REGLR_out[7]),
	.DO2(REGLR_out[6]),
	.DO1(REGLR_out[5]),
	.DO0(REGLR_out[4])
);
	
DPR16X4C REG_L_R_0_3(
	.DI3(rw_data[3]),
	.DI2(rw_data[2]),
	.DI1(rw_data[1]),
	.DI0(rw_data[0]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_L | write_to_HL),
	.RAD3(rd_addr_r[4]),
	.RAD2(rd_addr_r[3]),
	.RAD1(rd_addr_r[2]),
	.RAD0(rd_addr_r[1]),
	.DO3(REGLR_out[3]),
	.DO2(REGLR_out[2]),
	.DO1(REGLR_out[1]),
	.DO0(REGLR_out[0])
);
	
DPR16X4C REG_H_R_4_7(
	.DI3(write_to_HL ? rw_data[15] : rw_data[7]),
	.DI2(write_to_HL ? rw_data[14] : rw_data[6]),
	.DI1(write_to_HL ? rw_data[13] : rw_data[5]),
	.DI0(write_to_HL ? rw_data[12] : rw_data[4]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_H | write_to_HL),
	.RAD3(rd_addr_r[4]),
	.RAD2(rd_addr_r[3]),
	.RAD1(rd_addr_r[2]),
	.RAD0(rd_addr_r[1]),
	.DO3(REGHR_out[7]),
	.DO2(REGHR_out[6]),
	.DO1(REGHR_out[5]),
	.DO0(REGHR_out[4])
);
	
DPR16X4C REG_H_R_0_3(
	.DI3(write_to_HL ? rw_data[11] : rw_data[3]),
	.DI2(write_to_HL ? rw_data[10] : rw_data[2]),
	.DI1(write_to_HL ? rw_data[9] : rw_data[1]),
	.DI0(write_to_HL ? rw_data[8] : rw_data[0]),
	.WAD3(rw_addr[4]),
	.WAD2(rw_addr[3]),
	.WAD1(rw_addr[2]),
	.WAD0(rw_addr[1]),
	.WCK(clk),
	.WRE(write_to_H | write_to_HL),
	.RAD3(rd_addr_r[4]),
	.RAD2(rd_addr_r[3]),
	.RAD1(rd_addr_r[2]),
	.RAD0(rd_addr_r[1]),
	.DO3(REGHR_out[3]),
	.DO2(REGHR_out[2]),
	.DO1(REGHR_out[1]),
	.DO0(REGHR_out[0])
);
	
assign rd_data_d = (read_d) ? (rd_16bit_d) ? {REGHD_out, REGLD_out} : (rd_addr_d[0]) ? {8'h00, REGHD_out} : {8'h00, REGLD_out} : 16'bx;
assign rd_data_r = (read_r) ? (rd_16bit_r) ? {REGHR_out, REGLR_out} : (rd_addr_r[0]) ? {8'h00, REGHR_out} : {8'h00, REGLR_out} : 16'bx;

end/* PLATFORM != "LATTICE_ECP5" || PLATFORM != "LATTICE_ECP3" || PLATFORM != "LATTICE_LIFMD" || PLATFORM != "LATTICE_MARCHXO2" || PLATFORM != "LATTICE_MARCHXO3L" */
endgenerate
endmodule
/*
 * !Registers memory.
 */

/*
 * Asynchronous ALU.
 */
module mega_alu # (
	parameter CORE_CONFIG = "CLASSIC_8K"
	)(
	input [3:0]inst,
	input [4:0]in_addr_1,
	input [4:0]in_addr_2,
	input [15:0]in_1,
	input [15:0]in_2,
	output reg [15:0]out,
	//output c_out,
	input ALU_FLAG_C_IN,	//Zero Flag
	input ALU_FLAG_Z_IN,	//Zero Flag
	input ALU_FLAG_N_IN, //Negative Flag
	input ALU_FLAG_V_IN, //Two's complement overflow indicator 
	input ALU_FLAG_S_IN,	//N?V for signed tests
	input ALU_FLAG_H_IN,	//Half Carry Flag
	input ALU_FLAG_T_IN,	//Transfer bit used by BLD and BST instructions
	input ALU_FLAG_I_IN,	//Global Interrupt Enable/Disable Flag
	output reg ALU_FLAG_C_OUT,	//Carry Flag
	output reg ALU_FLAG_Z_OUT,	//Zero Flag
	output reg ALU_FLAG_N_OUT, //Negative Flag
	output reg ALU_FLAG_V_OUT, //Two's complement overflow indicator 
	output reg ALU_FLAG_S_OUT,	//N?V for signed tests
	output reg ALU_FLAG_H_OUT,	//Half Carry Flag
	output reg ALU_FLAG_T_OUT,	//Transfer bit used by BLD and BST instructions
	output reg ALU_FLAG_I_OUT,	//Global Interrupt Enable/Disable Flag
	
	input SEL_INSTRUCTION_MOVW,
	input SEL_INSTRUCTION_MULS,
	input SEL_INSTRUCTION_MULSU,
	input SEL_INSTRUCTION_FMUL,
	input SEL_INSTRUCTION_FMULS,
	input SEL_INSTRUCTION_FMULSU,
	input SEL_INSTRUCTION_CPC,
	input SEL_INSTRUCTION_CP,
	input SEL_INSTRUCTION_SBC,
	input SEL_INSTRUCTION_SUB,
	input SEL_INSTRUCTION_ADD,
	input SEL_INSTRUCTION_ADC,
	input SEL_INSTRUCTION_AND,
	input SEL_INSTRUCTION_ANDI_CBR,
	input SEL_INSTRUCTION_EOR,
	input SEL_INSTRUCTION_OR,
	input SEL_INSTRUCTION_ORI_SBR,
	input SEL_INSTRUCTION_MOV,
	input SEL_INSTRUCTION_CPI,
	input SEL_INSTRUCTION_SUBI,
	input SEL_INSTRUCTION_SBCI,
	input SEL_INSTRUCTION_LPM_R_P,
	input SEL_INSTRUCTION_COM,
	input SEL_INSTRUCTION_NEG,
	input SEL_INSTRUCTION_SWAP,
	input SEL_INSTRUCTION_INC,
	input SEL_INSTRUCTION_ASR,
	input SEL_INSTRUCTION_LSR,
	input SEL_INSTRUCTION_ROR,
	input SEL_INSTRUCTION_SEx_CLx,
	input SEL_INSTRUCTION_DEC,
	input SEL_INSTRUCTION_ADIW,
	input SEL_INSTRUCTION_SBIW,
	input SEL_INSTRUCTION_MUL
    );

reg in_addr_1_and_2_equal;

always @ (in_addr_1 or in_addr_2)
begin
	in_addr_1_and_2_equal = in_addr_1 == in_addr_2;
end

reg [15:0]in_2_int;
reg cin_int;

always @ (*)
begin
	in_2_int <= in_1;
	cin_int <= ALU_FLAG_C_IN;

	if(SEL_INSTRUCTION_ADD |
	SEL_INSTRUCTION_ADC)
	begin
		if(!in_addr_1_and_2_equal)
			in_2_int <= in_2;
	end
	if(
	(SEL_INSTRUCTION_ADIW && CORE_CONFIG != "REDUCED") |
	(SEL_INSTRUCTION_SBIW && CORE_CONFIG != "REDUCED") |
	SEL_INSTRUCTION_SUB |
	SEL_INSTRUCTION_SBC |
	SEL_INSTRUCTION_SUBI |
	SEL_INSTRUCTION_SBCI |
	SEL_INSTRUCTION_INC |
	SEL_INSTRUCTION_DEC |
	SEL_INSTRUCTION_LPM_R_P |
	SEL_INSTRUCTION_CP |
	SEL_INSTRUCTION_CPI |
	SEL_INSTRUCTION_CPC) in_2_int <= in_2;

	if(SEL_INSTRUCTION_ADD |
	(SEL_INSTRUCTION_ADIW && CORE_CONFIG != "REDUCED") |
	(SEL_INSTRUCTION_SBIW && CORE_CONFIG != "REDUCED") |
	SEL_INSTRUCTION_LSR |
	SEL_INSTRUCTION_NEG |
	SEL_INSTRUCTION_SUB |
	SEL_INSTRUCTION_SUBI |
	SEL_INSTRUCTION_INC |
	SEL_INSTRUCTION_DEC |
	SEL_INSTRUCTION_LPM_R_P |
	SEL_INSTRUCTION_CP |
	SEL_INSTRUCTION_CPI) cin_int <= 1'b0;
end

wire [17:0] add_result_int_w_c_tmp = {in_1, 1'b1} + {in_2_int, cin_int};
wire [16:0] add_result_int_w_c = add_result_int_w_c_tmp[17:1];
wire [17:0] sub_result_int_w_c_tmp = {in_1, 1'b0} - {in_2_int, cin_int};
wire [16:0] sub_result_int_w_c = sub_result_int_w_c_tmp[17:1];

/*
 * Multiply Unit.
 */

reg [7:0]in_1_mul;
reg [7:0]in_2_mul;
wire [15:0]mul_result_int = in_1_mul * in_2_mul;
wire mul_sign_int = in_1[7] ^ in_2[7];
always @ (*)
begin
	if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
	begin
		in_1_mul <= 0;
		in_2_mul <= 0;
		if(SEL_INSTRUCTION_MUL | SEL_INSTRUCTION_FMUL)
		begin
			in_1_mul <= in_1[7:0];
			in_2_mul <= in_2[7:0];
		end
		if(SEL_INSTRUCTION_MULS | SEL_INSTRUCTION_FMULS)
		begin
			in_1_mul <= {1'b0, in_1[6:0]};
			in_2_mul <= {1'b0, in_2[6:0]};
		end
		if(SEL_INSTRUCTION_MULSU | SEL_INSTRUCTION_FMULSU)
		begin
			in_1_mul <= {1'b0, in_1[6:0]};
			in_2_mul <= in_2[7:0];
		end
	end
end

always @ (*)
begin
	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, in_1};
		if(SEL_INSTRUCTION_ADD)
		begin
			if(in_addr_1_and_2_equal)
				{ALU_FLAG_C_OUT, out} <= {in_1[7], 8'h00, in_1[6:0], cin_int};//LSL
			else
				{ALU_FLAG_C_OUT, out} <= {add_result_int_w_c[8], 8'h00, add_result_int_w_c[7:0]};
		end
		if(SEL_INSTRUCTION_ADC)
		begin
			if(in_addr_1_and_2_equal)
				{ALU_FLAG_C_OUT, out} <= {in_1[7], 8'h00, in_1[6:0], cin_int};//ROL
			else
				{ALU_FLAG_C_OUT, out} <= {add_result_int_w_c[8], 8'h00, add_result_int_w_c[7:0]};
		end
		if(SEL_INSTRUCTION_INC |
		SEL_INSTRUCTION_DEC)		{ALU_FLAG_C_OUT, out} <= {add_result_int_w_c[8], 8'h00, add_result_int_w_c[7:0]};
		if(SEL_INSTRUCTION_SUB |
		SEL_INSTRUCTION_SBC |
		SEL_INSTRUCTION_SUBI |
		SEL_INSTRUCTION_SBCI) 		{ALU_FLAG_C_OUT, out} <= {sub_result_int_w_c[8], 8'h00, sub_result_int_w_c[7:0]};
		if(SEL_INSTRUCTION_LSR |
		SEL_INSTRUCTION_ROR) 		{ALU_FLAG_C_OUT, out} <= {in_1[0], 8'h00, cin_int, in_1[7:1]};
		if(SEL_INSTRUCTION_AND | 
		SEL_INSTRUCTION_ANDI_CBR) 	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, 8'h00, (in_1[7:0] & in_2[7:0])};
		if(SEL_INSTRUCTION_OR | 
		SEL_INSTRUCTION_ORI_SBR) 	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, 8'h00, (in_1[7:0] | in_2[7:0])};
		if(SEL_INSTRUCTION_EOR) 	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, 8'h00, (in_1[7:0] ^ in_2[7:0])};
		if(SEL_INSTRUCTION_MOV) 	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, 8'h00, in_2[7:0]};
		if(SEL_INSTRUCTION_MOVW) 	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, in_2};
		if(SEL_INSTRUCTION_COM) 	{ALU_FLAG_C_OUT, out} <= {1'b1, 8'h00, (8'hFF - in_1[7:0])};
		if(SEL_INSTRUCTION_NEG) 	{ALU_FLAG_C_OUT, out} <= {|in_1[7:0], 8'h00, (8'h00 - in_1[7:0])};
		if(SEL_INSTRUCTION_ADIW && CORE_CONFIG != "REDUCED")
		 	{ALU_FLAG_C_OUT, out} <= add_result_int_w_c;
		if(SEL_INSTRUCTION_SBIW && CORE_CONFIG != "REDUCED")
		 	{ALU_FLAG_C_OUT, out} <= sub_result_int_w_c;
		
		if((SEL_INSTRUCTION_MUL) && CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
		 	{ALU_FLAG_C_OUT, out} <= {mul_result_int[15], mul_result_int};
		if((SEL_INSTRUCTION_MULS) && CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
		 	{ALU_FLAG_C_OUT, out} <= {mul_sign_int, mul_sign_int, mul_result_int[14:0]};
		if((SEL_INSTRUCTION_MULSU) && CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
		 	{ALU_FLAG_C_OUT, out} <= {in_1[7], in_1[7], mul_result_int};
		
		if((SEL_INSTRUCTION_FMUL) && CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
			{ALU_FLAG_C_OUT, out} <= {mul_result_int[15], mul_result_int[14:0], 1'b0};
		if((SEL_INSTRUCTION_FMULS) && CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
			{ALU_FLAG_C_OUT, out} <= {mul_sign_int, mul_result_int[14:0], 1'b0};
		if((SEL_INSTRUCTION_FMULSU) && CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
			{ALU_FLAG_C_OUT, out} <= {in_1[7], mul_result_int[14:0], 1'b0};
		
		if(SEL_INSTRUCTION_ASR) 	{ALU_FLAG_C_OUT, out} <= {in_1[0], 8'h00, in_1[7], in_1[7:1]};
		if(SEL_INSTRUCTION_CP |
		SEL_INSTRUCTION_CPI |
		SEL_INSTRUCTION_CPC)		{ALU_FLAG_C_OUT, out} <= {sub_result_int_w_c[8], 8'h00, sub_result_int_w_c[7:0]};
		if(SEL_INSTRUCTION_SWAP)	{ALU_FLAG_C_OUT, out} <= {ALU_FLAG_C_IN, 8'b0, in_1[3:0], in_1[7:4]};
		if(SEL_INSTRUCTION_SEx_CLx)	{ALU_FLAG_C_OUT, out} <= inst[2:0] ? {ALU_FLAG_C_IN, {16{1'b0}}} : {~inst[3], {16{1'b0}}};
		if(SEL_INSTRUCTION_LPM_R_P && CORE_CONFIG != "REDUCED")
			{ALU_FLAG_C_OUT, out} <= add_result_int_w_c;
end

wire flag_h_adc_sub_cp = (~in_1[3] & in_2[3])|(in_2[3] & out[3])|(out[3] & ~in_1[3]);
wire flag_v_add_adc = (in_1[7] & in_2[7] & ~out[7])|(~in_1[7] & ~in_2[7] & out[7]);
wire flag_v_sub_sbc = (in_1[7] & ~in_2[7] & ~out[7])|(~in_1[7] & in_2[7] & out[7]);
/*
 * ALU FLAG effect for each instruction.
 */
always @ (inst or out or in_1 or in_2 or
	ALU_FLAG_Z_IN or ALU_FLAG_N_IN or ALU_FLAG_V_IN or 
	ALU_FLAG_S_IN or ALU_FLAG_H_IN or ALU_FLAG_T_IN or 
	ALU_FLAG_I_IN or ALU_FLAG_C_OUT or in_addr_1_and_2_equal or
	flag_v_add_adc or flag_h_adc_sub_cp or 
	flag_v_sub_sbc or SEL_INSTRUCTION_ADD or
	SEL_INSTRUCTION_ADC or SEL_INSTRUCTION_SUB or
	SEL_INSTRUCTION_SUBI or SEL_INSTRUCTION_CP or
	SEL_INSTRUCTION_CPI or SEL_INSTRUCTION_INC or
	SEL_INSTRUCTION_DEC or SEL_INSTRUCTION_SBC or
	SEL_INSTRUCTION_SBCI or SEL_INSTRUCTION_CPC or
	SEL_INSTRUCTION_ADIW or SEL_INSTRUCTION_SBIW or
	SEL_INSTRUCTION_AND or SEL_INSTRUCTION_OR or 
	SEL_INSTRUCTION_COM or SEL_INSTRUCTION_EOR or
	SEL_INSTRUCTION_NEG or SEL_INSTRUCTION_ASR or
	SEL_INSTRUCTION_LSR or SEL_INSTRUCTION_ROR or
	SEL_INSTRUCTION_SEx_CLx or SEL_INSTRUCTION_MUL or
	SEL_INSTRUCTION_FMUL or SEL_INSTRUCTION_MULS or
	SEL_INSTRUCTION_MULSU or SEL_INSTRUCTION_FMULS or
	SEL_INSTRUCTION_FMULSU)
begin
	ALU_FLAG_Z_OUT <= ALU_FLAG_Z_IN;
	ALU_FLAG_N_OUT <= ALU_FLAG_N_IN;
	ALU_FLAG_V_OUT <= ALU_FLAG_V_IN;
	ALU_FLAG_S_OUT <= ALU_FLAG_S_IN;
	ALU_FLAG_H_OUT <= ALU_FLAG_H_IN;
	ALU_FLAG_T_OUT <= ALU_FLAG_T_IN;
	ALU_FLAG_I_OUT <= ALU_FLAG_I_IN;
	if(SEL_INSTRUCTION_ADD)
	begin
		ALU_FLAG_N_OUT <= out[7];
		if(in_addr_1_and_2_equal)
		begin//LSL
			ALU_FLAG_H_OUT <= in_1[3];
			ALU_FLAG_V_OUT <= ALU_FLAG_N_OUT ^ ALU_FLAG_C_OUT;
			ALU_FLAG_S_OUT <= out[7] != ALU_FLAG_V_OUT;
		end
		else
		begin
			ALU_FLAG_H_OUT <= (in_1[3] & in_2[3])|(in_2[3] & ~out[3])|(~out[3] & in_1[3]);
			ALU_FLAG_V_OUT <= flag_v_add_adc;
			ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		end
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_ADC)
	begin//ROL
		ALU_FLAG_N_OUT <= out[7];
		if(in_addr_1_and_2_equal)
		begin
			ALU_FLAG_H_OUT <= in_1[3];
			ALU_FLAG_V_OUT <= ALU_FLAG_N_OUT ^ ALU_FLAG_C_OUT;
			ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_N_OUT ^ ALU_FLAG_C_OUT;
		end
		else
		begin
			ALU_FLAG_H_OUT <= (in_1[3] & in_2[3])|(in_2[3] & out[3])|(~out[3] & ~in_1[3]);
			ALU_FLAG_V_OUT <= flag_v_add_adc;
			ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		end
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_SUB |
	SEL_INSTRUCTION_SUBI |
	SEL_INSTRUCTION_CP |
	SEL_INSTRUCTION_CPI)
	begin
		ALU_FLAG_H_OUT <= flag_h_adc_sub_cp;
		ALU_FLAG_V_OUT <= flag_v_sub_sbc;
		ALU_FLAG_N_OUT <= out[7];
		ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_INC |
	SEL_INSTRUCTION_DEC)
	begin
		ALU_FLAG_V_OUT <= &{~out[7], out[6:0]};
		ALU_FLAG_N_OUT <= out[7];
		ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_SBC |
	SEL_INSTRUCTION_SBCI |
	SEL_INSTRUCTION_CPC)
	begin
		ALU_FLAG_H_OUT <= flag_h_adc_sub_cp;
		ALU_FLAG_V_OUT <= flag_v_sub_sbc;
		ALU_FLAG_N_OUT <= out[7];
		ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &{~out[7:0], ALU_FLAG_Z_IN};
	end
	if(CORE_CONFIG != "REDUCED")
	begin
		if(SEL_INSTRUCTION_ADIW |
		SEL_INSTRUCTION_SBIW)
		begin
			ALU_FLAG_V_OUT <= ALU_FLAG_C_OUT;
			ALU_FLAG_N_OUT <= out[15];
			ALU_FLAG_S_OUT <= out[15] ^ ALU_FLAG_C_OUT;
			ALU_FLAG_Z_OUT <= &(~out[15:0]);
		end
	end
	if(SEL_INSTRUCTION_ANDI_CBR |
	SEL_INSTRUCTION_ORI_SBR |
	SEL_INSTRUCTION_AND |
	SEL_INSTRUCTION_OR |
	SEL_INSTRUCTION_COM |
	SEL_INSTRUCTION_EOR)
	begin
		ALU_FLAG_V_OUT <= 1'b0;
		ALU_FLAG_N_OUT <= out[7];
		ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_NEG)
	begin
		ALU_FLAG_H_OUT <= out[3] + ~in_1[3];
		ALU_FLAG_V_OUT <= &{out[7], ~out[6:0]};
		ALU_FLAG_N_OUT <= out[7];
		ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_ASR)
	begin
		ALU_FLAG_V_OUT <= 1'b0;
		ALU_FLAG_N_OUT <= out[7];
		ALU_FLAG_S_OUT <= out[7] ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_LSR |
	SEL_INSTRUCTION_ROR)
	begin
		ALU_FLAG_H_OUT <= in_1[3];
		ALU_FLAG_N_OUT <= 0;
		ALU_FLAG_V_OUT <= 0 ^ ALU_FLAG_C_OUT;
		ALU_FLAG_S_OUT <= 0 ^ ALU_FLAG_V_OUT;
		ALU_FLAG_Z_OUT <= &(~out[7:0]);
	end
	if(SEL_INSTRUCTION_SEx_CLx)
	begin
		case(inst[2:0])
		3'd1: ALU_FLAG_Z_OUT <= ~inst[3];
		3'd2: ALU_FLAG_N_OUT <= ~inst[3];
		3'd3: ALU_FLAG_V_OUT <= ~inst[3];
		3'd4: ALU_FLAG_S_OUT <= ~inst[3];
		3'd5: ALU_FLAG_H_OUT <= ~inst[3];
		3'd6: ALU_FLAG_T_OUT <= ~inst[3];
		3'd7: ALU_FLAG_I_OUT <= ~inst[3];
		endcase
	end
	if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
	begin
		if(SEL_INSTRUCTION_MUL |
		SEL_INSTRUCTION_FMUL) 
			ALU_FLAG_Z_OUT <= &(~out[15:0]);
		if(SEL_INSTRUCTION_MULS |
		SEL_INSTRUCTION_MULSU |
		SEL_INSTRUCTION_FMULS |
		SEL_INSTRUCTION_FMULSU) 
			ALU_FLAG_Z_OUT <= &(~out[15:0]);
	end
end

endmodule
/*
 * !Asynchronous ALU.
 */
 
/*
 * Interrupt and priority encoder.
 */
module int_encoder # (
		parameter VECTOR_INT_TABLE_SIZE = 0,
		parameter STORE_INTERUPTS = "FALSE"
		)(
		input rst,
		input [((VECTOR_INT_TABLE_SIZE == 0) ? 0 : VECTOR_INT_TABLE_SIZE-1):0]int_sig_in,
		output int_request,
		output reg[((VECTOR_INT_TABLE_SIZE > 127) ? 7 :
					(VECTOR_INT_TABLE_SIZE > 63) ? 6 :
					(VECTOR_INT_TABLE_SIZE > 31) ? 5 :
					(VECTOR_INT_TABLE_SIZE > 15) ? 4 :
					(VECTOR_INT_TABLE_SIZE > 7) ? 3 :
					(VECTOR_INT_TABLE_SIZE > 3) ? 2 :
					(VECTOR_INT_TABLE_SIZE > 1) ? 1 : 0) : 0]int_vect,
		input executed
		);

reg [VECTOR_INT_TABLE_SIZE : 0]int_sig_in_int;
reg [VECTOR_INT_TABLE_SIZE : 0]int_sig_in_int_n;
wire [VECTOR_INT_TABLE_SIZE : 0]int_sig_in_int_active = int_sig_in_int ^ int_sig_in_int_n;

genvar i;
generate
for (i = 0; i < VECTOR_INT_TABLE_SIZE;i = i + 1) 
begin :int_sig_store
always @(posedge rst or posedge int_sig_in[i])
begin
	if(STORE_INTERUPTS == "TRUE" && VECTOR_INT_TABLE_SIZE != 0)
	begin
		if(rst)
			int_sig_in_int[i] <= 1'b0;
		else
		begin
			if(int_sig_in_int_n[i] == int_sig_in_int[i])
				int_sig_in_int[i] <= ~int_sig_in_int_n[i];
		end
	end
end
always @ (posedge rst or posedge executed)
begin
	if(STORE_INTERUPTS == "TRUE" && VECTOR_INT_TABLE_SIZE != 0)
	begin
		if(rst)
			int_sig_in_int_n[i] <= 1'b0;
		else if(executed && int_vect == i)
			int_sig_in_int_n[int_vect] <= int_sig_in_int[int_vect];
	end
end
end
endgenerate

integer j;
always @*
begin
	if(VECTOR_INT_TABLE_SIZE != 0)
	begin
		int_vect <= 0;
		for (j=VECTOR_INT_TABLE_SIZE-1; j>=0; j=j-1)
		if ((STORE_INTERUPTS == "TRUE") ? int_sig_in_int_active[j] : int_sig_in[j]) 
			int_vect <= j+1;
	end
end

assign int_request = (int_vect != 0 && VECTOR_INT_TABLE_SIZE != 'h0);

endmodule
/*
 * !Interrupt and priority encoder.
 */

/*
 * XMega core.
 */

`define STEP0	0
`define STEP1	1
`define STEP2	2

module mega_core # (
	parameter PLATFORM = "XILINX",
	parameter CORE_CONFIG = "CLASSIC_8K",// Supported: "REDUCED", "MINIMAL", "CLASSIC_8K", "CLASSIC_128K", "ENHANCED_8K", "ENHANCED_128K", "ENHANCED_4M", "XMEGA"
	parameter BUS_ADDR_PGM_WIDTH = 14,
	parameter BUS_ADDR_DATA_WIDTH = 13,
	parameter USE_BRAM_ROM = "FALSE",
	parameter WATCHDOG_CNT_WIDTH = 0,
	parameter VECTOR_INT_TABLE_SIZE = 0,
	parameter STORE_INTERUPTS = "FALSE",
	parameter MAP_REGS_IN_TO_SRAM_SECTION = "FALSE"

)(
	input rst,
	output sys_rst,
	input clk,
	input clk_wdt,
	
	output reg [BUS_ADDR_PGM_WIDTH-1:0]pgm_addr,
	input [15:0]pgm_data,
	
	output reg [BUS_ADDR_DATA_WIDTH-1:0]data_addr,
	input [7:0]data_in,
	output [7:0]data_out,
	output data_we,
	output data_re,
	
	output [5:0]io_addr,
	input [7:0]io_in,
	output [7:0]io_out,
	output io_we,
	output io_re,
	
	input [(VECTOR_INT_TABLE_SIZE == 0 ? 0 : VECTOR_INT_TABLE_SIZE - 1):0]int_sig,
	output reg [(VECTOR_INT_TABLE_SIZE == 0 ? 0 : VECTOR_INT_TABLE_SIZE - 1):0]int_rst,
	output reg wdt_rst_out
);

reg [7:0]ALU_FLAGS;	//Carry Flag
wire ALU_FLAG_C_OUT;	//Carry Flag
wire ALU_FLAG_Z_OUT;	//Zero Flag
wire ALU_FLAG_N_OUT;	//Negative Flag
wire ALU_FLAG_V_OUT;	//Two's complement overflow indicator 
wire ALU_FLAG_S_OUT;	//N?V for signed tests
wire ALU_FLAG_H_OUT;	//Half Carry Flag
wire ALU_FLAG_T_OUT;	//Transfer bit used by BLD and BST instructions
wire ALU_FLAG_I_OUT;	//Global Interrupt Enable/Disable Flag
reg [BUS_ADDR_PGM_WIDTH-1:0]PC;
reg [BUS_ADDR_PGM_WIDTH-1:0]pgm_indirect_addr;
wire [BUS_ADDR_PGM_WIDTH-1:0]PC_PLUS_ONE = PC + 1;
wire [BUS_ADDR_PGM_WIDTH-1:0]PC_PLUS_TWO = PC + 2;
wire [BUS_ADDR_PGM_WIDTH-1:0]PC_PLUS_THREE = PC + 3;
reg [BUS_ADDR_DATA_WIDTH-1:0]SP;
wire [BUS_ADDR_DATA_WIDTH-1:0]SP_PLUS_ONE = SP + 1;
wire [BUS_ADDR_DATA_WIDTH-1:0]SP_MINUS_ONE = SP - 1;
reg [1:0]step_cnt;
reg [15:0]tmp_pgm_data;

`ifdef USE_CCP_REG
reg [7:0]CCP;  /* Configuration Change Protection */
`endif
`ifdef USE_EXTENDED_RAMP_REGS
reg [7:0]RAMPD;  /* Ramp D */
reg [7:0]RAMPX;  /* Ramp X */
reg [7:0]RAMPY;  /* Ramp Y */
reg [7:0]RAMPZ;  /* Ramp Z */
reg [7:0]EIND;  /* Extended Indirect Jump */
`endif

wire core_rst;
assign sys_rst = (WATCHDOG_CNT_WIDTH != 'd0) ? core_rst : rst;

wire alu_rdy;

wire [7:0]data_in_int;
reg [7:0]data_out_int;
wire [7:0]io_in_int;
reg [7:0]io_out_int;

reg data_we_int;
reg data_re_int;

reg [BUS_ADDR_DATA_WIDTH - 1:0]data_addr_int;
reg [BUS_ADDR_DATA_WIDTH - 1:0]data_addr_int_tmp;

reg [5:0]io_addr_int;

reg io_we_int;
reg io_re_int;

assign io_we = io_we_int;
assign io_re = io_re_int;
assign io_addr = io_addr_int;
assign io_in_int = io_in;
assign io_out = io_out_int;
assign data_we = data_we_int;
assign data_re = data_re_int;
always @ (*) data_addr <= data_addr_int;
assign data_out = data_out_int;
assign data_in_int = data_in;

/*
 * ! pgm_addr bus switcher
 */

// REG aditional
reg write_to_reg;
// REG wires
reg [4:0]rw_addr;
reg [15:0]rw_data;
reg rw_16bit;
//wire write;
reg [4:0]rd_addr_d;
wire [15:0]rd_data_d;
reg rd_16bit_d;
wire read_d;
reg [4:0]rd_addr_r;
wire [15:0]rd_data_r;

wire [BUS_ADDR_DATA_WIDTH-1:0]rd_data_r_PLUS_ONE = rd_data_r + 1;
wire [BUS_ADDR_DATA_WIDTH-1:0]rd_data_r_MINUS_ONE = rd_data_r - 1;
reg rd_16bit_r;
wire read_r;

// ALU wires
reg [15:0]alu_in_1;
reg [15:0]alu_in_2;
wire [15:0]alu_out;
//wire alu_c_out;
reg [BUS_ADDR_DATA_WIDTH-1:0]indirect_addr_offset;
wire [BUS_ADDR_DATA_WIDTH-1:0]indirect_addr_offset_res = rd_data_r + indirect_addr_offset;

reg [4:0]reg_clr_cnt;
assign alu_rdy = reg_clr_cnt == 16;
//`ifdef USE_RAM_READ_DELAY
reg rom_read_delay;
reg [1:0]ram_read_delay;
//`endif

reg [15:0]pgm_data_int;


always @ (*)
begin
	pgm_data_int <= pgm_data;
end

localparam int_bus_size = (VECTOR_INT_TABLE_SIZE > 127) ? 8 :
							(VECTOR_INT_TABLE_SIZE > 63) ? 7 :
							(VECTOR_INT_TABLE_SIZE > 31) ? 6 :
							(VECTOR_INT_TABLE_SIZE > 15) ? 5 :
							(VECTOR_INT_TABLE_SIZE > 7) ? 4 :
							(VECTOR_INT_TABLE_SIZE > 3) ? 3 :
							(VECTOR_INT_TABLE_SIZE > 1) ? 2 : 1;
 
reg interrupt_registered;
reg current_int_executed;
wire [int_bus_size - 1 : 0]current_int_vect;
reg [int_bus_size - 1 : 0]current_int_vect_int;
wire int_request;

/*always @ (posedge interrupt_registered)
begin
	current_int_vect_int <= current_int_vect;
end*/

int_encoder # (
	.VECTOR_INT_TABLE_SIZE(VECTOR_INT_TABLE_SIZE),
	.STORE_INTERUPTS(STORE_INTERUPTS)
	)int_encoder_inst(
	.rst(rst),
	.int_sig_in(int_sig),
	.int_vect(current_int_vect),
	.int_request(int_request),
	.executed(current_int_executed)
	);

/*
 * pgm_addr bus switcher
 */
always @ (*)
begin
	if(CORE_CONFIG != "REDUCED")
	begin
`ifdef USE_LPM
		case(step_cnt)
		`STEP2:
		begin
			casex(tmp_pgm_data)
			`INSTRUCTION_LPM_R,
			`INSTRUCTION_LPM_R_P: pgm_addr <= pgm_indirect_addr[{1'b0, BUS_ADDR_PGM_WIDTH-1}:1];
			default: pgm_addr <= PC;
			endcase
		end
		default: pgm_addr <= PC;
		endcase
`endif
	end
	else
	begin
		pgm_addr <= PC;
	end
end


wire SEL_S1_INSTRUCTION_MOVW;
wire SEL_S1_INSTRUCTION_MULS;
wire SEL_S1_INSTRUCTION_MULSU;
wire SEL_S1_INSTRUCTION_FMUL;
wire SEL_S1_INSTRUCTION_FMULS;
wire SEL_S1_INSTRUCTION_FMULSU;
wire SEL_S1_INSTRUCTION_CPC;
wire SEL_S1_INSTRUCTION_CP;
wire SEL_S1_INSTRUCTION_SBC;
wire SEL_S1_INSTRUCTION_SUB;
wire SEL_S1_INSTRUCTION_ADD;
wire SEL_S1_INSTRUCTION_ADC;
wire SEL_S1_INSTRUCTION_CPSE;
wire SEL_S1_INSTRUCTION_AND;
wire SEL_S1_INSTRUCTION_EOR;
wire SEL_S1_INSTRUCTION_OR;
wire SEL_S1_INSTRUCTION_MOV;
wire SEL_S1_INSTRUCTION_CPI;
wire SEL_S1_INSTRUCTION_SUBI;
wire SEL_S1_INSTRUCTION_SBCI;
wire SEL_S1_INSTRUCTION_ORI_SBR;
wire SEL_S1_INSTRUCTION_ANDI_CBR;
wire SEL_S1_INSTRUCTION_LDD_STD;
wire SEL_S1_INSTRUCTION_LDS_STS;
wire SEL_S1_INSTRUCTION_LD_ST_YZP;
wire SEL_S1_INSTRUCTION_LD_ST_YZN;
wire SEL_S1_INSTRUCTION_LPM_R;
wire SEL_S1_INSTRUCTION_LPM_R_P;
wire SEL_S1_INSTRUCTION_XCH;
wire SEL_S1_INSTRUCTION_LAS;
wire SEL_S1_INSTRUCTION_LAC;
wire SEL_S1_INSTRUCTION_LAT;
wire SEL_S1_INSTRUCTION_LD_ST_X;
wire SEL_S1_INSTRUCTION_LD_ST_XP;
wire SEL_S1_INSTRUCTION_LD_ST_XN;
wire SEL_S1_INSTRUCTION_POP_PUSH;
wire SEL_S1_INSTRUCTION_COM;
wire SEL_S1_INSTRUCTION_NEG;
wire SEL_S1_INSTRUCTION_SWAP;
wire SEL_S1_INSTRUCTION_INC;
wire SEL_S1_INSTRUCTION_ASR;
wire SEL_S1_INSTRUCTION_LSR;
wire SEL_S1_INSTRUCTION_ROR;
wire SEL_S1_INSTRUCTION_SEx_CLx;
wire SEL_S1_INSTRUCTION_RET;
wire SEL_S1_INSTRUCTION_RETI;
wire SEL_S1_INSTRUCTION_SLEEP;
wire SEL_S1_INSTRUCTION_BREAK;
wire SEL_S1_INSTRUCTION_WDR;
wire SEL_S1_INSTRUCTION_LPM_ELPM;
wire SEL_S1_INSTRUCTION_SPM;
wire SEL_S1_INSTRUCTION_SPM_Z_P;
wire SEL_S1_INSTRUCTION_IJMP;
wire SEL_S1_INSTRUCTION_ICALL;
wire SEL_S1_INSTRUCTION_DEC;
wire SEL_S1_INSTRUCTION_DES;
wire SEL_S1_INSTRUCTION_JMP;
wire SEL_S1_INSTRUCTION_CALL;
wire SEL_S1_INSTRUCTION_ADIW;
wire SEL_S1_INSTRUCTION_SBIW;
wire SEL_S1_INSTRUCTION_CBI_SBI;
wire SEL_S1_INSTRUCTION_SBIC_SBIS;
wire SEL_S1_INSTRUCTION_MUL;
wire SEL_S1_INSTRUCTION_IN_OUT;
wire SEL_S1_INSTRUCTION_RJMP;
wire SEL_S1_INSTRUCTION_RCALL;
wire SEL_S1_INSTRUCTION_LDI;
wire SEL_S1_INSTRUCTION_COND_BRANCH;
wire SEL_S1_INSTRUCTION_BLD_BST;
wire SEL_S1_INSTRUCTION_SBRC_SBRS;

inst_dec inst_dec_s1_inst(
.inst(
`ifdef USE_RAM_READ_DELAY
ram_read_delay != `USE_RAM_READ_DELAY || step_cnt != `STEP1 ? tmp_pgm_data :
`endif
pgm_data_int),
.INTERRUPT_IN_EXECUTION(interrupt_registered),
.SEL_INSTRUCTION_MOVW(SEL_S1_INSTRUCTION_MOVW),
.SEL_INSTRUCTION_MULS(SEL_S1_INSTRUCTION_MULS),
.SEL_INSTRUCTION_MULSU(SEL_S1_INSTRUCTION_MULSU),
.SEL_INSTRUCTION_FMUL(SEL_S1_INSTRUCTION_FMUL),
.SEL_INSTRUCTION_FMULS(SEL_S1_INSTRUCTION_FMULS),
.SEL_INSTRUCTION_FMULSU(SEL_S1_INSTRUCTION_FMULSU),
.SEL_INSTRUCTION_CPC(SEL_S1_INSTRUCTION_CPC),
.SEL_INSTRUCTION_CP(SEL_S1_INSTRUCTION_CP),
.SEL_INSTRUCTION_SBC(SEL_S1_INSTRUCTION_SBC),
.SEL_INSTRUCTION_SUB(SEL_S1_INSTRUCTION_SUB),
.SEL_INSTRUCTION_ADD(SEL_S1_INSTRUCTION_ADD),
.SEL_INSTRUCTION_ADC(SEL_S1_INSTRUCTION_ADC),
.SEL_INSTRUCTION_CPSE(SEL_S1_INSTRUCTION_CPSE),
.SEL_INSTRUCTION_AND(SEL_S1_INSTRUCTION_AND),
.SEL_INSTRUCTION_EOR(SEL_S1_INSTRUCTION_EOR),
.SEL_INSTRUCTION_OR(SEL_S1_INSTRUCTION_OR),
.SEL_INSTRUCTION_MOV(SEL_S1_INSTRUCTION_MOV),
.SEL_INSTRUCTION_CPI(SEL_S1_INSTRUCTION_CPI),
.SEL_INSTRUCTION_SUBI(SEL_S1_INSTRUCTION_SUBI),
.SEL_INSTRUCTION_SBCI(SEL_S1_INSTRUCTION_SBCI),
.SEL_INSTRUCTION_ORI_SBR(SEL_S1_INSTRUCTION_ORI_SBR),
.SEL_INSTRUCTION_ANDI_CBR(SEL_S1_INSTRUCTION_ANDI_CBR),
.SEL_INSTRUCTION_LDD_STD(SEL_S1_INSTRUCTION_LDD_STD),
.SEL_INSTRUCTION_LDS_STS(SEL_S1_INSTRUCTION_LDS_STS),
.SEL_INSTRUCTION_LD_ST_YZP(SEL_S1_INSTRUCTION_LD_ST_YZP),
.SEL_INSTRUCTION_LD_ST_YZN(SEL_S1_INSTRUCTION_LD_ST_YZN),
.SEL_INSTRUCTION_LPM_R(SEL_S1_INSTRUCTION_LPM_R),
.SEL_INSTRUCTION_LPM_R_P(SEL_S1_INSTRUCTION_LPM_R_P),
.SEL_INSTRUCTION_XCH(SEL_S1_INSTRUCTION_XCH),
.SEL_INSTRUCTION_LAS(SEL_S1_INSTRUCTION_LAS),
.SEL_INSTRUCTION_LAC(SEL_S1_INSTRUCTION_LAC),
.SEL_INSTRUCTION_LAT(SEL_S1_INSTRUCTION_LAT),
.SEL_INSTRUCTION_LD_ST_X(SEL_S1_INSTRUCTION_LD_ST_X),
.SEL_INSTRUCTION_LD_ST_XP(SEL_S1_INSTRUCTION_LD_ST_XP),
.SEL_INSTRUCTION_LD_ST_XN(SEL_S1_INSTRUCTION_LD_ST_XN),
.SEL_INSTRUCTION_POP_PUSH(SEL_S1_INSTRUCTION_POP_PUSH),
.SEL_INSTRUCTION_COM(SEL_S1_INSTRUCTION_COM),
.SEL_INSTRUCTION_NEG(SEL_S1_INSTRUCTION_NEG),
.SEL_INSTRUCTION_SWAP(SEL_S1_INSTRUCTION_SWAP),
.SEL_INSTRUCTION_INC(SEL_S1_INSTRUCTION_INC),
.SEL_INSTRUCTION_ASR(SEL_S1_INSTRUCTION_ASR),
.SEL_INSTRUCTION_LSR(SEL_S1_INSTRUCTION_LSR),
.SEL_INSTRUCTION_ROR(SEL_S1_INSTRUCTION_ROR),
.SEL_INSTRUCTION_SEx_CLx(SEL_S1_INSTRUCTION_SEx_CLx),
.SEL_INSTRUCTION_RET(SEL_S1_INSTRUCTION_RET),
.SEL_INSTRUCTION_RETI(SEL_S1_INSTRUCTION_RETI),
.SEL_INSTRUCTION_SLEEP(SEL_S1_INSTRUCTION_SLEEP),
.SEL_INSTRUCTION_BREAK(SEL_S1_INSTRUCTION_BREAK),
.SEL_INSTRUCTION_WDR(SEL_S1_INSTRUCTION_WDR),
.SEL_INSTRUCTION_LPM_ELPM(SEL_S1_INSTRUCTION_LPM_ELPM),
.SEL_INSTRUCTION_SPM(SEL_S1_INSTRUCTION_SPM),
.SEL_INSTRUCTION_SPM_Z_P(SEL_S1_INSTRUCTION_SPM_Z_P),
.SEL_INSTRUCTION_IJMP(SEL_S1_INSTRUCTION_IJMP),
.SEL_INSTRUCTION_ICALL(SEL_S1_INSTRUCTION_ICALL),
.SEL_INSTRUCTION_DEC(SEL_S1_INSTRUCTION_DEC),
.SEL_INSTRUCTION_DES(SEL_S1_INSTRUCTION_DES),
.SEL_INSTRUCTION_JMP(SEL_S1_INSTRUCTION_JMP),
.SEL_INSTRUCTION_CALL(SEL_S1_INSTRUCTION_CALL),
.SEL_INSTRUCTION_ADIW(SEL_S1_INSTRUCTION_ADIW),
.SEL_INSTRUCTION_SBIW(SEL_S1_INSTRUCTION_SBIW),
.SEL_INSTRUCTION_CBI_SBI(SEL_S1_INSTRUCTION_CBI_SBI),
.SEL_INSTRUCTION_SBIC_SBIS(SEL_S1_INSTRUCTION_SBIC_SBIS),
.SEL_INSTRUCTION_MUL(SEL_S1_INSTRUCTION_MUL),
.SEL_INSTRUCTION_IN_OUT(SEL_S1_INSTRUCTION_IN_OUT),
.SEL_INSTRUCTION_RJMP(SEL_S1_INSTRUCTION_RJMP),
.SEL_INSTRUCTION_RCALL(SEL_S1_INSTRUCTION_RCALL),
.SEL_INSTRUCTION_LDI(SEL_S1_INSTRUCTION_LDI),
.SEL_INSTRUCTION_COND_BRANCH(SEL_S1_INSTRUCTION_COND_BRANCH),
.SEL_INSTRUCTION_BLD_BST(SEL_S1_INSTRUCTION_BLD_BST),
.SEL_INSTRUCTION_SBRC_SBRS(SEL_S1_INSTRUCTION_SBRC_SBRS)
);

reg SEL_S2_INSTRUCTION_CPSE;
reg SEL_S2_INSTRUCTION_LDS_STS;
reg SEL_S2_INSTRUCTION_LD_ST_YZP;
reg SEL_S2_INSTRUCTION_LD_ST_YZN;
reg SEL_S2_INSTRUCTION_LPM_ELPM;
reg SEL_S2_INSTRUCTION_LPM_R;
reg SEL_S2_INSTRUCTION_LPM_R_P;
reg SEL_S2_INSTRUCTION_LD_ST_X;
reg SEL_S2_INSTRUCTION_LD_ST_XP;
reg SEL_S2_INSTRUCTION_LD_ST_XN;
reg SEL_S2_INSTRUCTION_RET;
reg SEL_S2_INSTRUCTION_RETI;
reg SEL_S2_INSTRUCTION_ICALL;
reg SEL_S2_INSTRUCTION_JMP;
reg SEL_S2_INSTRUCTION_CALL;
reg SEL_S2_INSTRUCTION_SBIC_SBIS;
reg SEL_S2_INSTRUCTION_MUL;
reg SEL_S2_INSTRUCTION_MULS;
reg SEL_S2_INSTRUCTION_MULSU;
reg SEL_S2_INSTRUCTION_FMUL;
reg SEL_S2_INSTRUCTION_FMULS;
reg SEL_S2_INSTRUCTION_FMULSU;
reg SEL_S2_INSTRUCTION_RCALL;
reg SEL_S2_INSTRUCTION_SBRC_SBRS;

reg select_io_in_stam;
integer io_ports_displacement;

/*
 * IO maping switch
 */
always @*
begin
	if(CORE_CONFIG == "XMEGA")
	begin
		if(ram_read_delay == 0)
			select_io_in_stam = data_addr_int_tmp < 'h40;
		else
			select_io_in_stam = pgm_data_int < 'h40;
		io_ports_displacement = 'h0000;
	end
	else
	begin
		if(ram_read_delay == 0)
			select_io_in_stam = data_addr_int_tmp < 'h60;
		else
			select_io_in_stam = pgm_data_int < 'h60;
		io_ports_displacement = 'h0020;
	end
end
/*
 * !IO maping switch
 */

`ifdef USE_RAM_READ_DELAY
wire [15:0]tmp_pgm_data_switched = ram_read_delay == `USE_RAM_READ_DELAY ? pgm_data_int : tmp_pgm_data;
`else
wire [15:0]tmp_pgm_data_switched = pgm_data_int;
`endif

/*
 * Busses switch.
 */
reg skip_execution;
 
always @ (*)
begin
	rw_addr <= 5'h0;
	rw_16bit <= 1'b0;
	rd_addr_d <= 5'h0;
	rd_16bit_d <= 1'b0;
	rd_addr_r <= 5'h0;
	rd_16bit_r <= 1'b0;
	// Connect busses
	rw_data <= 16'h0;
	alu_in_1 <= 16'h0;
	alu_in_2 <= 16'h0;
	write_to_reg <= 1'b0;
	io_we_int <= 1'b0;
	io_re_int <= 1'b0;
	io_addr_int <= 16'h0;
	io_out_int <= 'h0;
	data_addr_int <= 'h0;
	data_out_int <= 'h0;
	data_re_int <= 1'b0;
	indirect_addr_offset <= 16'h0;
	data_we_int <= 1'b0;

	if(~alu_rdy)
	begin
		rw_addr <= reg_clr_cnt;
		rw_16bit <= 1'b1;
		rw_data <= 16'h0;
		write_to_reg <= 1'b1;
	end
	else
	begin
/*
 * Data address switch.
 */
		if(!skip_execution | USE_BRAM_ROM != "TRUE")
		begin
		case(step_cnt)
		`STEP1:
		begin
			if(CORE_CONFIG != "REDUCED")
			begin
				if(SEL_S1_INSTRUCTION_LDD_STD) 
					data_addr_int <= indirect_addr_offset_res;
				if(SEL_S1_INSTRUCTION_POP_PUSH) 
				begin
					if(pgm_data_int[9])
						data_addr_int <= SP;
					else
						data_addr_int <= SP_PLUS_ONE;
				end
			end
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")
			begin
				if(SEL_S1_INSTRUCTION_LD_ST_X | 
				SEL_S1_INSTRUCTION_LD_ST_XP | 
				SEL_S1_INSTRUCTION_LD_ST_YZP) 
					data_addr_int <= rd_data_r;
				if(SEL_S1_INSTRUCTION_LD_ST_XN | 
				SEL_S1_INSTRUCTION_LD_ST_YZN) 
					data_addr_int <= rd_data_r_MINUS_ONE;
			end
			if((SEL_S1_INSTRUCTION_ICALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")) |
			(SEL_S1_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) |
			SEL_S1_INSTRUCTION_RCALL |
			(interrupt_registered && VECTOR_INT_TABLE_SIZE != 0)) 
				data_addr_int <= SP;
			if(SEL_S1_INSTRUCTION_RET |
			SEL_S1_INSTRUCTION_RETI) 
				data_addr_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, SP_PLUS_ONE};
			if (SEL_S1_INSTRUCTION_XCH |
			SEL_S1_INSTRUCTION_LAS |
			SEL_S1_INSTRUCTION_LAC |
			SEL_S1_INSTRUCTION_LAT)
				 data_addr_int <= rd_data_r;
		end
		`STEP2:
		begin
			if(interrupt_registered && VECTOR_INT_TABLE_SIZE != 0)
				data_addr_int <= SP;
			else
			begin
				casex(tmp_pgm_data)
				`INSTRUCTION_ICALL: 
				begin
					if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")
					begin
						data_addr_int <= SP;
					end
				end
				`INSTRUCTION_CALL: 
				begin
					if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")
					begin
						data_addr_int <= SP;
					end
				end
				`INSTRUCTION_RCALL: data_addr_int <= SP;
				`INSTRUCTION_RET_RETI: data_addr_int <= SP_PLUS_ONE;
				`INSTRUCTION_LDS_STS: 
				begin
`ifdef USE_RAM_READ_DELAY
					if(ram_read_delay == `USE_RAM_READ_DELAY)
`endif
						data_addr_int <= pgm_data_int[BUS_ADDR_DATA_WIDTH-1:0];
`ifdef USE_RAM_READ_DELAY
					else
						data_addr_int <= data_addr_int_tmp;
`endif
				end
				endcase
			end
		end
		endcase
	
/*
 * Instruction decode.
 */
 		rd_addr_d <= 'h0;
 		rd_addr_r <= 'h0;
		case(step_cnt)
		`STEP1:
		begin
			if(SEL_S1_INSTRUCTION_MOVW)
			begin
				rw_addr <= {pgm_data_int[7:4], 1'b0};
				rw_16bit <= 1'b1;
				rd_addr_d <= {pgm_data_int[7:4], 1'b0};
				rd_16bit_d <= 1'b1;
				rd_addr_r <= {pgm_data_int[3:0], 1'b0};
				rd_16bit_r <= 1'b1;
				// Connect busses
				alu_in_1 <= rd_data_d;
				alu_in_2 <= rd_data_r;
				rw_data <= alu_out;
				// Signalize write_to_reg;
				write_to_reg <= 1'b1;
			end
			/*if(SEL_S1_INSTRUCTION_CPSE)
			begin
			end*/
			if(SEL_S1_INSTRUCTION_CPI)
			begin
				rd_addr_d <= {1'b1, pgm_data_int[7:4]};
				// Connect busses
				alu_in_1 <= rd_data_d;
				alu_in_2 <= {pgm_data_int[11:8], pgm_data_int[3:0]};
			end
			if(SEL_S1_INSTRUCTION_CPC | 
			SEL_S1_INSTRUCTION_CP)
			begin
				rd_addr_d <= pgm_data_int[8:4];
				rd_addr_r <= {pgm_data_int[9], pgm_data_int[3:0]};
				// Connect busses
				alu_in_1 <= rd_data_d;
				alu_in_2 <= rd_data_r;
			end
			if(SEL_S1_INSTRUCTION_SBC |
					SEL_S1_INSTRUCTION_SUB |
					SEL_S1_INSTRUCTION_ADD |
					SEL_S1_INSTRUCTION_ADC |
					SEL_S1_INSTRUCTION_AND |
					SEL_S1_INSTRUCTION_EOR |
					SEL_S1_INSTRUCTION_OR |
					SEL_S1_INSTRUCTION_MOV)
			begin
				rw_addr <= pgm_data_int[8:4];
				rd_addr_d <= pgm_data_int[8:4];
				rd_addr_r <= {pgm_data_int[9], pgm_data_int[3:0]};
				// Connect busses
				alu_in_1 <= rd_data_d;
				alu_in_2 <= rd_data_r;
				rw_data <= alu_out;
				// Signalize write_to_reg;
				write_to_reg <= 1'b1;
			end
			if(SEL_S1_INSTRUCTION_SUBI |
			SEL_S1_INSTRUCTION_SBCI |
			SEL_S1_INSTRUCTION_ORI_SBR |
			SEL_S1_INSTRUCTION_ANDI_CBR)
			begin
				rw_addr <= {1'b1, pgm_data_int[7:4]};
				rd_addr_d <= {1'b1, pgm_data_int[7:4]};
				// Connect busses
				alu_in_1 <= rd_data_d;
				alu_in_2 <= {8'h00, pgm_data_int[11:8], pgm_data_int[3:0]};
				rw_data <= alu_out;
				// Signalize write_to_reg;
				write_to_reg <= 1'b1;
			end
			if(SEL_S1_INSTRUCTION_COM |
			SEL_S1_INSTRUCTION_NEG |
			SEL_S1_INSTRUCTION_SWAP |
			SEL_S1_INSTRUCTION_INC |
			SEL_S1_INSTRUCTION_DEC |
			SEL_S1_INSTRUCTION_ASR |
			SEL_S1_INSTRUCTION_LSR |
			SEL_S1_INSTRUCTION_ROR)
			begin
				rw_addr <= pgm_data_int[8:4];
				rd_addr_d <= pgm_data_int[8:4];
				// Connect busses
				alu_in_1 <= rd_data_d;
				if(SEL_S1_INSTRUCTION_INC) alu_in_2 <= 16'h0001;
				if(SEL_S1_INSTRUCTION_DEC) alu_in_2 <= 16'hFFFF;
				rw_data <= alu_out;
				// Signalize write_to_reg;
				write_to_reg <= 1'b1;
			end
			if(CORE_CONFIG != "REDUCED")
			begin
				if(SEL_S1_INSTRUCTION_LDD_STD)
				begin
					rd_addr_r <= {{3{1'b1}}, ~tmp_pgm_data_switched[3], 1'b0};
					rd_16bit_r <= 1'b1;
					indirect_addr_offset <= {{10{1'b0}}, tmp_pgm_data_switched[13], tmp_pgm_data_switched[11:10], tmp_pgm_data_switched[2:0]};
					if(tmp_pgm_data_switched[9])
					begin
						rd_addr_d <= tmp_pgm_data_switched[8:4];
						data_out_int <= rd_data_d;
						data_we_int <= 1'b1;
					end
					else
					begin
						rw_addr <= tmp_pgm_data_switched[8:4];
						// Connect busses
						rw_data <= data_in_int;
						// Signalize write_to_reg;
						if(ram_read_delay == 0)
							write_to_reg <= 1'b1;
						data_re_int <= 1'b1;
					end
				end
`ifdef USE_LPM
				if(SEL_S1_INSTRUCTION_LPM_R |
				SEL_S1_INSTRUCTION_LPM_R_P |
				SEL_S1_INSTRUCTION_LPM_ELPM)
				begin
					rd_addr_d <= 'h1E;//pgm_data_int[8:4];
					rd_16bit_d <= 1'b1;
					if(pgm_data_int[0])
					begin
						// Connect busses
						alu_in_1 <= rd_data_d;
						alu_in_2 <= 1;
						rw_addr <= 'h1E;//pgm_data_int[8:4];
						rw_data <= alu_out;
						rw_16bit <= 1'b1;
						write_to_reg <= 1'b1;
					end
				end
`endif
			end/*!CORE_CONFIG != "REDUCED"*/
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")
			begin
				/*if(SEL_S1_INSTRUCTION_LD_ST_X)
				begin
					rd_addr_r <= 5'd26;
					rd_16bit_r <= 1'b1;
					if(pgm_data_int[9])
					begin
						rd_addr_d <= tmp_pgm_data_switched[8:4];
						data_out_int <= rd_data_d;
						data_we_int <= 1'b1;
					end
					else
					begin
						rw_addr <= tmp_pgm_data_switched[8:4];
						// Connect busses
						rw_data <= data_in_int;
						// Signalize write_to_reg;
						write_to_reg <= 1'b1;
						data_re_int <= 1'b1;
					end
					
				end*/
				if(SEL_S1_INSTRUCTION_LD_ST_YZP |
				SEL_S1_INSTRUCTION_LD_ST_YZN)
				begin
					rd_addr_r <= {{3{1'b1}}, ~tmp_pgm_data_switched[3], 1'b0};
					rd_16bit_r <= 1'b1;
					rw_addr <= {{3{1'b1}}, ~tmp_pgm_data_switched[3], 1'b0};
					//rw_16bit <= 1'b1;
					//rw_16bit <= 1'b1;
					if(tmp_pgm_data_switched[9])
					begin
						rd_addr_d <= tmp_pgm_data_switched[8:4];
						data_out_int <= rd_data_d;
						data_we_int <= 1'b1;
					end
					else
					begin
						rw_addr <= tmp_pgm_data_switched[8:4];
						// Connect busses
						rw_data <= data_in_int;
						// Signalize write_to_reg;
						if(ram_read_delay == 0)
							write_to_reg <= 1'b1;
						data_re_int <= 1'b1;
					end
				end
				if(SEL_S1_INSTRUCTION_LD_ST_X |
				SEL_S1_INSTRUCTION_LD_ST_XP |
				SEL_S1_INSTRUCTION_LD_ST_XN)
				begin
					rd_addr_r <= 5'd26;
					rd_16bit_r <= 1'b1;
					rw_addr <= 5'd26;
					//rw_16bit <= 1'b1;
					//rw_16bit <= 1'b1;
					if(tmp_pgm_data_switched[9])
					begin
						rd_addr_d <= tmp_pgm_data_switched[8:4];
						data_out_int <= rd_data_d;
						data_we_int <= 1'b1;
					end
					else
					begin
						rw_addr <= tmp_pgm_data_switched[8:4];
						// Connect busses
						rw_data <= data_in_int;
						// Signalize write_to_reg;
						if(ram_read_delay == 0)
							write_to_reg <= 1'b1;
						data_re_int <= 1'b1;
					end
				end
				if(SEL_S1_INSTRUCTION_ADIW |
					SEL_S1_INSTRUCTION_SBIW)
				begin
					rw_addr <= {2'b11, pgm_data_int[5:4], 1'b0};
					rw_16bit <= 1'b1;
					rd_addr_d <= {2'b11, pgm_data_int[5:4], 1'b0};
					rd_16bit_d <= 1'b1;
					//rd_addr_r <= {5{1'b00}};
					rd_16bit_r <= 1'b1;
					// Connect busses
					rw_data <= alu_out;
					alu_in_1 <= rd_data_d;
					alu_in_2 <= {10'h000, pgm_data_int[7:6], pgm_data_int[3:0]};
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
				end
				if(SEL_S1_INSTRUCTION_POP_PUSH)
				begin
					if(tmp_pgm_data_switched[9])
					begin
						rd_addr_d <= tmp_pgm_data_switched[8:4];
						data_out_int <= rd_data_d;
						data_we_int <= 1'b1; // Put "data_we" to high to store the selected register.
					end
					else
					begin
						rd_addr_d <= tmp_pgm_data_switched[8:4];
						rw_addr <= tmp_pgm_data_switched[8:4];
						// Connect busses
						rw_data <= data_in_int;
						// Signalize write_to_reg;
						if(ram_read_delay == 0)
							write_to_reg <= 1'b1;
						data_re_int <= 1'b1;
					end
				end
				if(SEL_S1_INSTRUCTION_IJMP)
				begin
					rd_addr_d <= 5'h1e;
					rd_16bit_d <= 1'b1;
				end
			end/*!CORE_CONFIG != "REDUCED" || CORE_CONFIG != "MINIMAL"*/
			if(SEL_S1_INSTRUCTION_IN_OUT)
			begin
				rw_addr <= pgm_data_int[8:4];
				rd_addr_d <= pgm_data_int[8:4];
				if(!pgm_data_int[11])
				begin
					case({pgm_data_int[10:9], pgm_data_int[3:0]})
`ifdef USE_CCP_REG
					6'h34: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							rw_data <= CCP;
						end
					end
`endif
`ifdef USE_EXTENDED_RAMP_REGS
					6'h38: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							rw_data <= RAMPD;
						end
					end
					6'h39: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							rw_data <= RAMPX;
						end
					end
					6'h3A: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							rw_data <= RAMPY;
						end
					end
					6'h3B: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							rw_data <= RAMPZ;
						end
					end
					6'h3C: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							rw_data <= EIND;
						end
					end
`endif
					6'h3D: //SPL
					begin
						if(CORE_CONFIG != "REDUCED")
						begin
							rw_data <= SP[7:0];
						end
					end
					6'h3E: //SPH
					begin
						if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && BUS_ADDR_DATA_WIDTH > 8)
						begin
							rw_data <= {{BUS_ADDR_DATA_WIDTH-1-8{1'b0}}, SP[BUS_ADDR_DATA_WIDTH-1:8]};
						end
					end
					6'h3F: rw_data <= ALU_FLAGS;
					default:
					begin
						io_addr_int <= {pgm_data_int[10:9], pgm_data_int[3:0]};
						io_re_int <= 1'b1;
						rw_data <= io_in_int;
					end
					endcase
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
				end
				else
				begin
					case({pgm_data_int[10:9], pgm_data_int[3:0]})
`ifdef USE_CCP_REG
					6'h34,
`endif
`ifdef USE_EXTENDED_RAMP_REGS
					6'h38,
					6'h39,
					6'h3A,
					6'h3B,
					6'h3C,
`endif
					6'h3D,// SPL
					6'h3E,// SPH
					6'h3F:;//SREG
					default:
					begin
						io_addr_int <= {pgm_data_int[10:9], pgm_data_int[3:0]};
						io_out_int <= rd_data_d;
						io_we_int <= 1'b1; // Put "data_we" to high to store the selected register.
					end
					endcase
				end
			end
			if(CORE_CONFIG == "XMEGA")
			begin
				if(SEL_S1_INSTRUCTION_XCH |
				SEL_S1_INSTRUCTION_LAS |
				SEL_S1_INSTRUCTION_LAC |
				SEL_S1_INSTRUCTION_LAT)
				begin
					rd_addr_d <= pgm_data_int[8:4];
					rd_addr_r <= 5'h1e;
					rw_addr <= pgm_data_int[8:4];
					data_re_int <= 1'b1;
					if(SEL_S1_INSTRUCTION_XCH) data_out_int <= rd_data_d;
					else if(SEL_S1_INSTRUCTION_LAS) data_out_int <= data_in_int | rd_data_d;
					else if(SEL_S1_INSTRUCTION_LAC) data_out_int <= data_in_int & ~rd_data_d;
					else if(SEL_S1_INSTRUCTION_LAT) data_out_int <= data_in_int ^ rd_data_d;
					// Connect busses
					rw_data <= data_in_int;
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
				end
			end
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
			begin
				if((SEL_S1_INSTRUCTION_MUL | 
				SEL_S1_INSTRUCTION_MULS | 
				SEL_S1_INSTRUCTION_MULSU | 
				SEL_S1_INSTRUCTION_FMUL | 
				SEL_S1_INSTRUCTION_FMULS | 
				SEL_S1_INSTRUCTION_FMULSU))
				begin
					rw_16bit <= 1'b1;
					rd_addr_d <= pgm_data_int[8:4];
					rd_addr_r <= {pgm_data_int[9], pgm_data_int[3:0]};
					// Connect busses
					alu_in_1 <= rd_data_d;
					alu_in_2 <= rd_data_r;
					rw_data <= alu_out;
					// Signalize write_to_reg;
					//write_to_reg <= 1'b1;
					// Because the multiply unit has more latency, we will add an extra clock.
				end
			end
			if(SEL_S1_INSTRUCTION_LDI)
			begin
				rw_addr <= {1'b1, pgm_data_int[7:4]};
				// Connect busses
				rw_data <= {8'h00, pgm_data_int[11:8], pgm_data_int[3:0]};
				// Signalize write_to_reg;
				write_to_reg <= 1'b1;
			end
			if(SEL_S1_INSTRUCTION_CBI_SBI)
			begin
				io_addr_int <= {{11{1'b0}}, pgm_data_int[7:3]};
				case(pgm_data_int[2:0])
					3'h0: io_out_int <= {io_in_int[7:1], pgm_data_int[9]};
					3'h1: io_out_int <= {io_in_int[7:2], pgm_data_int[9], io_in_int[0]};
					3'h2: io_out_int <= {io_in_int[7:3], pgm_data_int[9], io_in_int[1:0]};
					3'h3: io_out_int <= {io_in_int[7:4], pgm_data_int[9], io_in_int[2:0]};
					3'h4: io_out_int <= {io_in_int[7:5], pgm_data_int[9], io_in_int[3:0]};
					3'h5: io_out_int <= {io_in_int[7:6], pgm_data_int[9], io_in_int[4:0]};
					3'h6: io_out_int <= {io_in_int[7], pgm_data_int[9], io_in_int[5:0]};
					3'h7: io_out_int <= {pgm_data_int[9], io_in_int[6:0]};
				endcase
				io_re_int <= 1'b1;
				io_we_int <= 1'b1;
			end
			if(SEL_S1_INSTRUCTION_BLD_BST)
			begin
				rd_addr_d <= pgm_data_int[8:4];
				if(~pgm_data_int[9])
				begin
					rw_addr <= pgm_data_int[8:4];
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
					case(pgm_data_int[2:0])
						3'h0: rw_data <= {rd_data_d[7:1], ALU_FLAGS[`ALU_FLAG_T]};
						3'h1: rw_data <= {rd_data_d[7:2], ALU_FLAGS[`ALU_FLAG_T], rd_data_d[0]};
						3'h2: rw_data <= {rd_data_d[7:3], ALU_FLAGS[`ALU_FLAG_T], rd_data_d[1:0]};
						3'h3: rw_data <= {rd_data_d[7:4], ALU_FLAGS[`ALU_FLAG_T], rd_data_d[2:0]};
						3'h4: rw_data <= {rd_data_d[7:5], ALU_FLAGS[`ALU_FLAG_T], rd_data_d[3:0]};
						3'h5: rw_data <= {rd_data_d[7:6], ALU_FLAGS[`ALU_FLAG_T], rd_data_d[4:0]};
						3'h6: rw_data <= {rd_data_d[7], ALU_FLAGS[`ALU_FLAG_T], rd_data_d[5:0]};
						3'h7: rw_data <= {ALU_FLAGS[`ALU_FLAG_T], rd_data_d[6:0]};
					endcase
				end
			end
			if(SEL_S1_INSTRUCTION_RCALL)
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= PC[7:0];// Put low byte of the PC.
				default : data_out_int <= PC_PLUS_ONE[7:0];// Put low byte of the PC.
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if(SEL_S1_INSTRUCTION_ICALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL"))
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= PC[7:0];// Put low byte of the PC.
				default : data_out_int <= PC_PLUS_ONE[7:0];// Put low byte of the PC.
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if(interrupt_registered && VECTOR_INT_TABLE_SIZE != 0)
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= PC_PLUS_ONE[7:0];
				default : data_out_int <= PC[7:0];
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if((SEL_S1_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")))
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= PC_PLUS_ONE[7:0];
				default : data_out_int <= PC_PLUS_TWO[7:0];
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if(SEL_S1_INSTRUCTION_RET |
			SEL_S1_INSTRUCTION_RETI)
			begin
				data_re_int <= 1'b1;
			end
			if(SEL_S1_INSTRUCTION_CPSE)
			begin
				rd_addr_d <= pgm_data_int[8:4];
				rd_addr_r <= {pgm_data_int[9], pgm_data_int[3:0]};
			end
			if(SEL_S1_INSTRUCTION_SBRC_SBRS)
			begin
				rd_addr_d <= pgm_data_int[8:4];
			end
			if(SEL_S1_INSTRUCTION_SBIC_SBIS)
			begin
				io_addr_int <= {{11{1'b0}}, pgm_data_int[7:3]};
				io_re_int <= 1'b1;
			end
		end
		`STEP2:
		begin
`ifdef USE_LPM
			if(CORE_CONFIG != "REDUCED")
			begin
				if(SEL_S2_INSTRUCTION_LPM_R |
				SEL_S2_INSTRUCTION_LPM_R_P |
				SEL_S2_INSTRUCTION_LPM_ELPM)
				begin
					if(~rom_read_delay || USE_BRAM_ROM == "FALSE")
					begin
						if(SEL_S2_INSTRUCTION_LPM_ELPM)
							rw_addr <= 0;
						else
							rw_addr <= tmp_pgm_data[8:4];
						rw_data <= pgm_indirect_addr[0] ? pgm_data_int[15:8] : pgm_data_int[7:0];
						rw_16bit <= 1'b0;
						// Signalize write_to_reg;
						write_to_reg <= 1'b1;
					end
				end
			end
`endif
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")
			begin
				if(SEL_S2_INSTRUCTION_ICALL)
				begin
					case(USE_BRAM_ROM)
					"TRUE" : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
					default : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC_PLUS_ONE[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
					endcase
					rd_addr_d <= 5'h1e;
					data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
					rd_16bit_d <= 1'b1;
				end
				if(SEL_S2_INSTRUCTION_LDS_STS)
				begin
					if(tmp_pgm_data[9])
					begin
						rd_addr_d <= tmp_pgm_data[8:4];
						if(select_io_in_stam)
						begin
							case(pgm_data_int[(CORE_CONFIG == "XMEGA" ? 5 : 6):0])
	`ifdef USE_CCP_REG
							'h34 + io_ports_displacement,
	`endif
	`ifdef USE_EXTENDED_RAMP_REGS
							'h38 + io_ports_displacement,
							'h39 + io_ports_displacement,
							'h3A + io_ports_displacement,
							'h3B + io_ports_displacement,
							'h3C + io_ports_displacement,
	`endif
							'h00, 'h01, 'h02, 'h03, 'h04, 'h05, 'h06, 'h07, 'h08, 'h09, 'h0A, 'h0B, 'h0C, 'h0D, 'h0E, 'h0F, 
							'h10, 'h11, 'h12, 'h13, 'h14, 'h15, 'h16, 'h17, 'h18, 'h19, 'h1A, 'h1B, 'h1C, 'h1D, 'h1E, 'h1F:
							begin
								if(CORE_CONFIG != "XMEGA")
								begin
									if(MAP_REGS_IN_TO_SRAM_SECTION == "TRUE")
									begin
										rw_addr <= tmp_pgm_data[4:0];
										rw_data <= rd_data_d;
									end
								end
							end 
							'h3D + io_ports_displacement,// SPL
							'h3E + io_ports_displacement,// SPH
							'h3F + io_ports_displacement:;//SREG
							default:
								begin
									data_out_int <= rd_data_d;
									data_we_int <= 1'b1;
								end
							endcase
						end
						else
						begin
							data_out_int <= rd_data_d;
							data_we_int <= 1'b1;
						end
					end
					else
					begin
						rw_addr <= tmp_pgm_data[8:4];
						// Signalize write_to_reg;
						//write_to_reg <= 1'b1;
						if(select_io_in_stam)
						begin
`ifdef USE_RAM_READ_DELAY
							if(ram_read_delay == `USE_RAM_READ_DELAY)
`endif
								write_to_reg <= 1'b1;
							case(pgm_data_int[(CORE_CONFIG == "XMEGA" ? 5 : 6):0])
`ifdef USE_CCP_REG
							'h34 + io_ports_displacement: rw_data <= CCP;
`endif
`ifdef USE_EXTENDED_RAMP_REGS
							'h38 + io_ports_displacement: rw_data <= RAMPD;
							'h39 + io_ports_displacement: rw_data <= RAMPX;
							'h3A + io_ports_displacement: rw_data <= RAMPY;
							'h3B + io_ports_displacement: rw_data <= RAMPZ;
							'h3C + io_ports_displacement: rw_data <= EIND;
`endif
							'h00, 'h01, 'h02, 'h03, 'h04, 'h05, 'h06, 'h07, 'h08, 'h09, 'h0A, 'h0B, 'h0C, 'h0D, 'h0E, 'h0F, 
							'h10, 'h11, 'h12, 'h13, 'h14, 'h15, 'h16, 'h17, 'h18, 'h19, 'h1A, 'h1B, 'h1C, 'h1D, 'h1E, 'h1F:
							begin
								if(CORE_CONFIG != "XMEGA")
								begin
									if(MAP_REGS_IN_TO_SRAM_SECTION == "TRUE")
									begin
										rd_addr_d <= tmp_pgm_data[4:0];
										rw_data <= rd_data_d;
									end
								end
							end 
							'h3D + io_ports_displacement: //SPL
							begin
								if(CORE_CONFIG != "REDUCED")
								begin
									rw_data <= SP[7:0];
								end
							end
							'h3E + io_ports_displacement: //SPH
							begin
								if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && BUS_ADDR_DATA_WIDTH > 8)
								begin
									rw_data <= {{BUS_ADDR_DATA_WIDTH-1-8{1'b0}}, SP[BUS_ADDR_DATA_WIDTH-1:8]};
								end
							end
							'h3F + io_ports_displacement: rw_data <= ALU_FLAGS;//SREG
							default:
							begin
								// Connect busses
								rw_data <= data_in_int;
								data_re_int <= 1'b1;
							end
							endcase
						end
						else
						begin
							//rd_addr_d <= tmp_pgm_data[4:0];
							//rw_data <= rd_data_d;
`ifdef USE_RAM_READ_DELAY
							if(ram_read_delay == 0)
`endif
								write_to_reg <= 1'b1;
							rw_data <= data_in_int;
							data_re_int <= 1'b1;
						end
					end
				end
				if(SEL_S2_INSTRUCTION_LD_ST_X |
					SEL_S2_INSTRUCTION_LD_ST_XP |
					SEL_S2_INSTRUCTION_LD_ST_XN)
				begin
					rd_addr_r <= 5'd26;
					rd_16bit_r <= 1'b1;
					rw_addr <= 5'd26;
					rw_16bit <= 1'b1;
					case(tmp_pgm_data[1:0])
					2'b00: rw_data <= rd_data_r;
					2'b01: rw_data <= rd_data_r_PLUS_ONE;
					2'b10: rw_data <= rd_data_r_MINUS_ONE;
					endcase
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
				end
				if(SEL_S2_INSTRUCTION_LD_ST_YZP |
				SEL_S2_INSTRUCTION_LD_ST_YZN)
				begin
					rd_addr_r <= {{3{1'b1}}, ~tmp_pgm_data[3], 1'b0};
					rd_16bit_r <= 1'b1;
					rw_addr <= {{3{1'b1}}, ~tmp_pgm_data[3], 1'b0};
					rw_16bit <= 1'b1;
					case(tmp_pgm_data[1:0])
					2'b01: rw_data <= rd_data_r_PLUS_ONE;
					2'b10: rw_data <= rd_data_r_MINUS_ONE;
					endcase
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
				end
			end/*!CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL"*/
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")
			begin
				if((SEL_S2_INSTRUCTION_MUL | 
				SEL_S2_INSTRUCTION_MULS | 
				SEL_S2_INSTRUCTION_MULSU | 
				SEL_S2_INSTRUCTION_FMUL | 
				SEL_S2_INSTRUCTION_FMULS | 
				SEL_S2_INSTRUCTION_FMULSU))
				begin
					rw_16bit <= 1'b1;
					rd_addr_d <= pgm_data_int[8:4];
					rd_addr_r <= {pgm_data_int[9], pgm_data_int[3:0]};
					// Connect busses
					alu_in_1 <= rd_data_d;
					alu_in_2 <= rd_data_r;
					rw_data <= alu_out;
					// Signalize write_to_reg;
					write_to_reg <= 1'b1;
				end
			end
			if(SEL_S2_INSTRUCTION_RET |
			SEL_S2_INSTRUCTION_RETI)
			begin
				data_re_int <= 1'b1;
			end
			if(interrupt_registered && VECTOR_INT_TABLE_SIZE != 0)
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC_PLUS_ONE[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
				default : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC[BUS_ADDR_PGM_WIDTH-1:8]};
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if(SEL_S2_INSTRUCTION_RCALL)
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
				default : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC_PLUS_ONE[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if((SEL_S2_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")))
			begin
				case(USE_BRAM_ROM)
				"TRUE" : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
				default : data_out_int <= {{BUS_ADDR_PGM_WIDTH-1-8{1'b0}}, PC_PLUS_ONE[BUS_ADDR_PGM_WIDTH-1:8]};// Put high byte of the PC.
				endcase
				data_we_int <= 1'b1; // Put "data_we" to high to store low byte of the PC.
			end
			if(SEL_S2_INSTRUCTION_CPSE)
			begin
				rd_addr_d <= tmp_pgm_data[8:4];
				rd_addr_r <= {tmp_pgm_data[9], tmp_pgm_data[3:0]};
			end
			if(SEL_S2_INSTRUCTION_SBRC_SBRS)
			begin
				rd_addr_d <= tmp_pgm_data[8:4];
			end
			if(SEL_S2_INSTRUCTION_SBIC_SBIS)
			begin
				io_addr_int <= {{11{1'b0}}, tmp_pgm_data[7:3]};
				io_re_int <= 1'b1;
			end
		end
		endcase
		end
	end
end
/*
 * !Busses switch.
 */

wire [15:0]relative_offset = (USE_BRAM_ROM == "TRUE") ? PC + {{5{tmp_pgm_data[11]}}, tmp_pgm_data[10:0]} : PC_PLUS_ONE + {{5{pgm_data_int[11]}}, pgm_data_int[10:0]};
wire [15:0]relative_offset_rjmp = PC + {{5{pgm_data_int[11]}}, pgm_data_int[10:0]};

reg [BUS_ADDR_PGM_WIDTH-1-8:0]PGM_HI_TMP;


/*
 * Instruction execution sequencer.
 */ 
always @ (posedge clk)
begin
	if((WATCHDOG_CNT_WIDTH != 'd0) ? core_rst : rst)
	begin
		reg_clr_cnt <= 0;
	end
	else
	if(~alu_rdy)
	begin
		ALU_FLAGS[0] <= 1'b0;	//Carry Flag
		ALU_FLAGS[1] <= 1'b0;	//Zero Flag
		ALU_FLAGS[2] <= 1'b0;	//Negative Flag
		ALU_FLAGS[3] <= 1'b0;	//Two's complement overflow indicator 
		ALU_FLAGS[4] <= 1'b0;	//N?V for signed tests
		ALU_FLAGS[5] <= 1'b0;	//Half Carry Flag
		ALU_FLAGS[6] <= 1'b0;	//Transfer bit used by BLD and BST instructions
		ALU_FLAGS[7] <= 1'b0;	//Global Interrupt Enable/Disable Flag
		SEL_S2_INSTRUCTION_CPSE <= 'h0;
		SEL_S2_INSTRUCTION_LDS_STS <= 'h0;
		SEL_S2_INSTRUCTION_LD_ST_YZP <= 'h0;
		SEL_S2_INSTRUCTION_LD_ST_YZN <= 'h0;
		SEL_S2_INSTRUCTION_LPM_ELPM <= 'h0;
		SEL_S2_INSTRUCTION_LPM_R <= 'h0;
		SEL_S2_INSTRUCTION_LPM_R_P <= 'h0;
		SEL_S2_INSTRUCTION_LD_ST_X <= 'h0;
		SEL_S2_INSTRUCTION_LD_ST_XP <= 'h0;
		SEL_S2_INSTRUCTION_LD_ST_XN <='h0 ;
		SEL_S2_INSTRUCTION_RET <= 'h0;
		SEL_S2_INSTRUCTION_RETI <= 'h0;
		SEL_S2_INSTRUCTION_ICALL <= 'h0;
		SEL_S2_INSTRUCTION_JMP <= 'h0;
		SEL_S2_INSTRUCTION_CALL <= 'h0;
		SEL_S2_INSTRUCTION_SBIC_SBIS <= 'h0;
		SEL_S2_INSTRUCTION_MUL <= 'h0;
		SEL_S2_INSTRUCTION_MULS <= 'h0;
		SEL_S2_INSTRUCTION_MULSU <= 'h0;
		SEL_S2_INSTRUCTION_FMUL <= 'h0;
		SEL_S2_INSTRUCTION_FMULS <= 'h0;
		SEL_S2_INSTRUCTION_FMULSU <= 'h0;
		SEL_S2_INSTRUCTION_RCALL <= 'h0;
		SEL_S2_INSTRUCTION_SBRC_SBRS <= 'h0;
		PC <= 'h0000;
		SP <= 'h0000;
		current_int_executed <= 1'b0;
		if (USE_BRAM_ROM == "TRUE")
			skip_execution <= 1'b0;
		if(CORE_CONFIG == "XMEGA")
		begin
`ifdef USE_CCP_REG
			CCP <= 8'h0;
`endif //!USE_CCP_REG
`ifdef USE_EXTENDED_RAMP_REGS
			RAMPD <= 8'h0;
			RAMPX <= 8'h0;
			RAMPY <= 8'h0;
			RAMPZ <= 8'h0;
			EIND <= 8'h0;
`endif //!USE_EXTENDED_RAMP_REGS
		end/*!CORE_CONFIG == "XMEGA"*/
		step_cnt <= `STEP1;
`ifdef USE_RAM_READ_DELAY
		ram_read_delay <= `USE_RAM_READ_DELAY;
`endif
		rom_read_delay <= 1'b1;
		reg_clr_cnt <= reg_clr_cnt + 1;
		wdt_rst_out <= 1'b0;
		interrupt_registered <= 1'b0;
	end
	else
	begin
		/*
		 * Preserve flags until otervice specified.
		 */
		ALU_FLAGS[0] <= ALU_FLAG_C_OUT;	//Carry Flag
		ALU_FLAGS[1] <= ALU_FLAG_Z_OUT;	//Zero Flag
		ALU_FLAGS[2] <= ALU_FLAG_N_OUT;	//Negative Flag
		ALU_FLAGS[3] <= ALU_FLAG_V_OUT;	//Two's complement overflow indicator 
		ALU_FLAGS[4] <= ALU_FLAG_S_OUT;	//N?V for signed tests
		ALU_FLAGS[5] <= ALU_FLAG_H_OUT;	//Half Carry Flag
		ALU_FLAGS[6] <= ALU_FLAG_T_OUT;	//Transfer bit used by BLD and BST instructions
		ALU_FLAGS[7] <= ALU_FLAG_I_OUT;	//Global Interrupt Enable/Disable Flag
		step_cnt <= `STEP1;
		PC <= PC_PLUS_ONE;// Increment PC by 1 if not specified otherwise.
		wdt_rst_out <= 1'b0;
		current_int_executed <= 1'b0;
		int_rst <= 'h00;
		
`ifdef USE_RAM_READ_DELAY
		if(ram_read_delay == `USE_RAM_READ_DELAY)
		begin
`endif
		SEL_S2_INSTRUCTION_CPSE <= SEL_S1_INSTRUCTION_CPSE;
		SEL_S2_INSTRUCTION_LDS_STS <= SEL_S1_INSTRUCTION_LDS_STS;
		SEL_S2_INSTRUCTION_LD_ST_YZP <= SEL_S1_INSTRUCTION_LD_ST_YZP;
		SEL_S2_INSTRUCTION_LD_ST_YZN <= SEL_S1_INSTRUCTION_LD_ST_YZN;
		SEL_S2_INSTRUCTION_LPM_R <= SEL_S1_INSTRUCTION_LPM_R;
		SEL_S2_INSTRUCTION_LPM_R_P <= SEL_S1_INSTRUCTION_LPM_R_P;
		SEL_S2_INSTRUCTION_LPM_ELPM <= SEL_S1_INSTRUCTION_LPM_ELPM;
		SEL_S2_INSTRUCTION_LD_ST_X <= SEL_S1_INSTRUCTION_LD_ST_X;
		SEL_S2_INSTRUCTION_LD_ST_XP <= SEL_S1_INSTRUCTION_LD_ST_XP;
		SEL_S2_INSTRUCTION_LD_ST_XN <=SEL_S1_INSTRUCTION_LD_ST_XN ;
		SEL_S2_INSTRUCTION_RET <= SEL_S1_INSTRUCTION_RET;
		SEL_S2_INSTRUCTION_RETI <= SEL_S1_INSTRUCTION_RETI;
		SEL_S2_INSTRUCTION_ICALL <= SEL_S1_INSTRUCTION_ICALL;
		SEL_S2_INSTRUCTION_JMP <= SEL_S1_INSTRUCTION_JMP;
		SEL_S2_INSTRUCTION_CALL <= SEL_S1_INSTRUCTION_CALL;
		SEL_S2_INSTRUCTION_SBIC_SBIS <= SEL_S1_INSTRUCTION_SBIC_SBIS;
		SEL_S2_INSTRUCTION_MUL <= SEL_S1_INSTRUCTION_MUL;
		SEL_S2_INSTRUCTION_MULS <= SEL_S1_INSTRUCTION_MULS;
		SEL_S2_INSTRUCTION_MULSU <= SEL_S1_INSTRUCTION_MULSU;
		SEL_S2_INSTRUCTION_FMUL <= SEL_S1_INSTRUCTION_FMUL;
		SEL_S2_INSTRUCTION_FMULS <= SEL_S1_INSTRUCTION_FMULS;
		SEL_S2_INSTRUCTION_FMULSU <= SEL_S1_INSTRUCTION_FMULSU;
		SEL_S2_INSTRUCTION_RCALL <= SEL_S1_INSTRUCTION_RCALL;
		SEL_S2_INSTRUCTION_SBRC_SBRS <= SEL_S1_INSTRUCTION_SBRC_SBRS;
`ifdef USE_RAM_READ_DELAY
		end
`endif 
`ifdef USE_RAM_READ_DELAY
		//if(int_request && step_cnt == `STEP1 && ram_read_delay == `USE_RAM_READ_DELAY && ALU_FLAGS[7] && VECTOR_INT_TABLE_SIZE != 0)
		if(int_request && ALU_FLAGS[7] && VECTOR_INT_TABLE_SIZE != 0)
		begin 
			case(step_cnt)
			/*`STEP1:
			begin
				if(ram_read_delay == 0 &&
					//(SEL_S1_INSTRUCTION_LDD_STD && ~tmp_pgm_data_switched[9]) ||
					(SEL_S1_INSTRUCTION_POP_PUSH && ~tmp_pgm_data_switched[9]))
				begin
					if(current_int_vect)
					begin
						interrupt_registered <= 1'b1;
						current_int_vect_int <= current_int_vect;
						PC <= PC_PLUS_ONE;
						int_rst <= 1'b1 << (current_int_vect - 1);
					end
				end
			end */
			`STEP2:
			begin
				if(ram_read_delay == 0 &&
				(SEL_S2_INSTRUCTION_LPM_R ||
				SEL_S2_INSTRUCTION_LPM_R_P ||
				SEL_S2_INSTRUCTION_LPM_ELPM ||
				(SEL_S2_INSTRUCTION_LDS_STS && ~pgm_data_int[9]) ||
				((SEL_S2_INSTRUCTION_MUL | 
					SEL_S2_INSTRUCTION_MULS | 
					SEL_S2_INSTRUCTION_MULSU | 
					SEL_S2_INSTRUCTION_FMUL | 
					SEL_S2_INSTRUCTION_FMULS | 
					SEL_S2_INSTRUCTION_FMULSU) && (CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K")) ||
				((SEL_S2_INSTRUCTION_LD_ST_YZP ||
				SEL_S2_INSTRUCTION_LD_ST_YZN ||
				SEL_S2_INSTRUCTION_LD_ST_X ||
				SEL_S2_INSTRUCTION_LD_ST_XP ||
				SEL_S2_INSTRUCTION_LD_ST_XN) && ~pgm_data_int[9]) ||
				(SEL_S2_INSTRUCTION_JMP && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) ||
				(SEL_S2_INSTRUCTION_ICALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")) ||
				(SEL_S2_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) ||
				SEL_S2_INSTRUCTION_RCALL ||
				SEL_S2_INSTRUCTION_RET ||
				SEL_S2_INSTRUCTION_RETI ||
				SEL_S2_INSTRUCTION_CPSE ||
				SEL_S2_INSTRUCTION_SBRC_SBRS ||
				SEL_S2_INSTRUCTION_SBIC_SBIS))
				begin
					if(current_int_vect)
					begin
						interrupt_registered <= 1'b1;
						current_int_vect_int <= current_int_vect;
						PC <= PC_PLUS_ONE;
						int_rst <= 1'b1 << (current_int_vect - 1);
					end
				end
			end
			endcase
		end
`else
		if(int_request && step_cnt == `STEP1 && ALU_FLAGS[7] && VECTOR_INT_TABLE_SIZE != 0)
		begin
			interrupt_registered <= 1'b1;
			current_int_vect_int <= current_int_vect;
			PC <= PC - 1;
			int_rst <= 1'b1 << (current_int_vect - 1);
		end
`endif
		if(skip_execution == 1'b0 || USE_BRAM_ROM != "TRUE")
		begin
		case(step_cnt)
		`STEP1:
		begin
			if(SEL_S1_INSTRUCTION_WDR)
			begin
				case(WATCHDOG_CNT_WIDTH)
				0:;
				default: wdt_rst_out <= 1'b1;
				endcase
			end
			if(SEL_S1_INSTRUCTION_IN_OUT)
			begin
				if(pgm_data_int[11])
					begin
					case({pgm_data_int[10:9], pgm_data_int[3:0]})
`ifdef USE_CCP_REG
					6'h34: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							CCP <= rd_data_d;
						end
					end
`endif
`ifdef USE_EXTENDED_RAMP_REGS
					6'h38: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							RAMPD <= rd_data_d;
						end
					end
					6'h39: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							RAMPX <= rd_data_d;
						end
					end
					6'h3A: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							RAMPY <= rd_data_d;
						end
					end
					6'h3B: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							RAMPZ <= rd_data_d;
						end
					end
					6'h3C: 
					begin
						if(CORE_CONFIG == "XMEGA")
						begin
							EIND <= rd_data_d;
						end
					end
`endif
					6'h3D: //SPL
					begin
						if(CORE_CONFIG != "REDUCED")
						begin
							SP[7:0] <= rd_data_d;
						end
					end
					6'h3E: //SPH
					begin
						if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && BUS_ADDR_DATA_WIDTH > 8)
						begin
							SP[BUS_ADDR_DATA_WIDTH-1:8] <= rd_data_d[BUS_ADDR_DATA_WIDTH-1-8:0];
						end
					end
					6'h3F: ALU_FLAGS <= rd_data_d;//SREG
					endcase
				end
			end
			if(CORE_CONFIG != "REDUCED")
			begin
`ifdef USE_RAM_READ_DELAY
				if(SEL_S1_INSTRUCTION_LDD_STD)
				begin
					if(~tmp_pgm_data_switched[9])
					begin
						if(ram_read_delay == `USE_RAM_READ_DELAY)
							tmp_pgm_data <= pgm_data_int;
						if(ram_read_delay)
						begin
							ram_read_delay <= ram_read_delay - 1;
							PC <= PC;
							step_cnt <= step_cnt;
						end
						else
						begin
							ram_read_delay <= `USE_RAM_READ_DELAY;
						end
					end
				end
`endif
`ifdef USE_LPM
				if(SEL_S1_INSTRUCTION_LPM_R |
					SEL_S1_INSTRUCTION_LPM_R_P |
					SEL_S1_INSTRUCTION_LPM_ELPM)
				begin
					tmp_pgm_data <= pgm_data_int;
					pgm_indirect_addr <= rd_data_d[BUS_ADDR_PGM_WIDTH-1:0];
					case(USE_BRAM_ROM)
					"TRUE" : PC <= PC;
					endcase
					step_cnt <= `STEP2;
				end
`endif
				if(SEL_S1_INSTRUCTION_POP_PUSH)
				begin
					if(tmp_pgm_data_switched[9])
						SP <= SP_MINUS_ONE;
					else
					begin
`ifdef USE_RAM_READ_DELAY
						if(ram_read_delay == `USE_RAM_READ_DELAY)
							tmp_pgm_data <= pgm_data_int;
						if(ram_read_delay)
						begin
							ram_read_delay <= ram_read_delay - 1;
							PC <= PC;
							step_cnt <= step_cnt;
						end
						else
						begin
							ram_read_delay <= `USE_RAM_READ_DELAY;
							SP <= SP_PLUS_ONE;
						end
`else
						SP <= SP_PLUS_ONE;
`endif
					end
				end
			end/*!CORE_CONFIG == "REDUCED"*/
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")
			begin
				if(SEL_S1_INSTRUCTION_IJMP)
				begin
					PC <= rd_data_d;
					case(USE_BRAM_ROM)
					"TRUE" : skip_execution <= 1'b1;
					endcase
				end
				if(SEL_S1_INSTRUCTION_LDS_STS)
				begin
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
				end
				if((SEL_S1_INSTRUCTION_MUL | 
				SEL_S1_INSTRUCTION_MULS | 
				SEL_S1_INSTRUCTION_MULSU | 
				SEL_S1_INSTRUCTION_FMUL | 
				SEL_S1_INSTRUCTION_FMULS | 
				SEL_S1_INSTRUCTION_FMULSU) && (CORE_CONFIG != "CLASSIC_8K" && CORE_CONFIG != "CLASSIC_128K"))
				begin
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
					PC <= PC;
				end
				if(SEL_S1_INSTRUCTION_LD_ST_YZP |
				SEL_S1_INSTRUCTION_LD_ST_YZN |
				SEL_S1_INSTRUCTION_LD_ST_X |
				SEL_S1_INSTRUCTION_LD_ST_XP |
				SEL_S1_INSTRUCTION_LD_ST_XN)
				begin
`ifdef USE_RAM_READ_DELAY
					if((~pgm_data_int[9] && ram_read_delay == `USE_RAM_READ_DELAY) || (~tmp_pgm_data[9] && ram_read_delay != `USE_RAM_READ_DELAY))
					begin
						if(ram_read_delay)
						begin
							if(ram_read_delay == `USE_RAM_READ_DELAY)
								tmp_pgm_data <= pgm_data_int;
							ram_read_delay <= ram_read_delay - 1;
							PC <= PC;
							step_cnt <= step_cnt;
						end
						else
						begin
							ram_read_delay <= `USE_RAM_READ_DELAY;
							case(USE_BRAM_ROM)
							"TRUE" :;
							default: tmp_pgm_data <= pgm_data_int;
							endcase
							step_cnt <= `STEP2;
							PC <= PC;
						end
					end
					else
					begin
							tmp_pgm_data <= pgm_data_int;
							step_cnt <= `STEP2;
							PC <= PC;
					end
`else
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
					PC <= PC;
`endif
				end
			end/*!CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL"*/
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")
			begin
				if(SEL_S1_INSTRUCTION_JMP)
				begin
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
				end
			end
			if(SEL_S1_INSTRUCTION_RJMP)
			begin
				case(USE_BRAM_ROM)
				"TRUE" : 
				begin
					skip_execution <= 1'b1;
					if(PC)
						PC <= relative_offset_rjmp;
					else
						PC <= relative_offset_rjmp + 1;
				end
				default : PC <= relative_offset;
				endcase
			end
			if((SEL_S1_INSTRUCTION_ICALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")) |
			(SEL_S1_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) |
			SEL_S1_INSTRUCTION_RCALL |
			interrupt_registered)
			begin
				step_cnt <= `STEP2;
				tmp_pgm_data <= pgm_data_int;
				SP <= SP_MINUS_ONE;
				if((SEL_S1_INSTRUCTION_ICALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")) |
				SEL_S1_INSTRUCTION_RCALL) PC <= PC;
				else if(interrupt_registered && VECTOR_INT_TABLE_SIZE != 0)
				begin
					ALU_FLAGS[7] <= 1'b0;
					PC <= PC;
				end
			end
			if(SEL_S1_INSTRUCTION_RET |
					SEL_S1_INSTRUCTION_RETI)
			begin
`ifdef USE_RAM_READ_DELAY
				if(ram_read_delay == `USE_RAM_READ_DELAY)
					tmp_pgm_data <= pgm_data_int;
				if(ram_read_delay)
				begin
					ram_read_delay <= ram_read_delay - 1;
					PC <= PC;
					step_cnt <= step_cnt;
				end
				else
				begin
					step_cnt <= `STEP2;
					SP <= SP_PLUS_ONE;
					PGM_HI_TMP <= data_in_int;
					ram_read_delay <= `USE_RAM_READ_DELAY;
				end
`else
				tmp_pgm_data <= pgm_data_int;
				step_cnt <= `STEP2;
				SP <= SP_PLUS_ONE;
				PGM_HI_TMP <= data_in_int;
				PC <= PC;
`endif
			end
			if(SEL_S1_INSTRUCTION_COND_BRANCH)
			begin
				if(~pgm_data_int[10] == ALU_FLAGS[pgm_data_int[2:0]])
				begin
					case(USE_BRAM_ROM)
					"TRUE" : 
					begin
						skip_execution <= 1'b1;
						PC <= PC + {{10{pgm_data_int[9]}}, pgm_data_int[8:3]};
					end
					default : PC <= PC + {{10{pgm_data_int[9]}}, pgm_data_int[8:3]} + 16'h0001;
					endcase
				end
			end
			if(SEL_S1_INSTRUCTION_CPSE)
			begin
				case(USE_BRAM_ROM)
				"TRUE" :
				begin
					if(rd_data_d != rd_data_r)
					begin
						tmp_pgm_data <= pgm_data_int;
						step_cnt <= `STEP2;
					end
				end
				default:
				begin
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
				end
				endcase
			end
			if(SEL_S1_INSTRUCTION_SBRC_SBRS)
			begin
				case(USE_BRAM_ROM)
				"TRUE" :
				begin
					if(rd_data_d[tmp_pgm_data[2:0]] != tmp_pgm_data[9])
					begin
						tmp_pgm_data <= pgm_data_int;
						step_cnt <= `STEP2;
					end
				end
				default:
				begin
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
				end
				endcase
			end
			if(SEL_S1_INSTRUCTION_SBIC_SBIS)
			begin
				case(USE_BRAM_ROM)
				"TRUE" :
				begin
					if(io_in_int[tmp_pgm_data[2:0]] != tmp_pgm_data[9])
					begin
						tmp_pgm_data <= pgm_data_int;
						step_cnt <= `STEP2;
					end
				end
				default:
				begin
					tmp_pgm_data <= pgm_data_int;
					step_cnt <= `STEP2;
				end
				endcase
			end
			if(SEL_S1_INSTRUCTION_BLD_BST)
			begin
				if(pgm_data_int[9])
					ALU_FLAGS[`ALU_FLAG_T] <= rd_data_d[pgm_data_int[2:0]];
			end
		end
		`STEP2:
		begin
			if(CORE_CONFIG != "REDUCED")
			begin
`ifdef USE_LPM
				if(SEL_S2_INSTRUCTION_LPM_R |
				SEL_S2_INSTRUCTION_LPM_R_P)
				begin
				case(USE_BRAM_ROM)
				"TRUE":
				begin
					if(rom_read_delay)
					begin
						rom_read_delay <= 1'b0;
						step_cnt <= `STEP2;
					end
					else
					begin
						rom_read_delay <= 1'b1;
						skip_execution <= 1'b1;
					end
				end
				endcase
				PC <= PC;
				end
`endif
			end
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL")
			begin
				if(SEL_S2_INSTRUCTION_LDS_STS)
				begin
					if(tmp_pgm_data[9])
					begin
						if(select_io_in_stam)
						begin
							case(pgm_data_int[(CORE_CONFIG == "XMEGA" ? 5 : 6):0])
`ifdef USE_CCP_REG
							'h34 + io_ports_displacement:
							begin 
								if(CORE_CONFIG == "XMEGA")
								begin
									CCP <= rd_data_d;
								end
							end
`endif
`ifdef USE_EXTENDED_RAMP_REGS
							'h38 + io_ports_displacement: 
							begin
								if(CORE_CONFIG == "XMEGA")
								begin
									RAMPD <= rd_data_d;
								end
							end
							'h39 + io_ports_displacement: 
							begin
								if(CORE_CONFIG == "XMEGA")
								begin
									RAMPX <= rd_data_d;
								end
							end
							'h3A + io_ports_displacement: 
							begin
								if(CORE_CONFIG == "XMEGA")
								begin
									RAMPY <= rd_data_d;
								end
							end
							'h3B + io_ports_displacement: 
							begin
								if(CORE_CONFIG == "XMEGA")
								begin
									RAMPZ <= rd_data_d;
								end
							end
							'h3C + io_ports_displacement: 
							begin
								if(CORE_CONFIG == "XMEGA")
								begin
									EIND <= rd_data_d;
								end
							end
`endif
							'h3D + io_ports_displacement: //SPL
							begin
								if(CORE_CONFIG != "REDUCED")
								begin
									SP[7:0] <= rd_data_d;
								end
							end
							'h3E + io_ports_displacement: //SPH
							begin
								if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && BUS_ADDR_DATA_WIDTH > 8)
								begin
									SP[BUS_ADDR_DATA_WIDTH-1:8] <= rd_data_d[BUS_ADDR_DATA_WIDTH-1-8:0];
								end
							end
							'h3F + io_ports_displacement: ALU_FLAGS <= rd_data_d;//SREG
							endcase
						end
					end
					else
					begin
`ifdef USE_RAM_READ_DELAY
						if(ram_read_delay)
						begin
							ram_read_delay <= ram_read_delay - 1;
							PC <= PC;
							step_cnt <= step_cnt;
							data_addr_int_tmp <= pgm_data_int;
						end
						else
						begin
							ram_read_delay <= `USE_RAM_READ_DELAY;
						end
`endif
					end
				end
				if(SEL_S2_INSTRUCTION_ICALL)
				begin
					SP <= SP_MINUS_ONE;
					PC <= rd_data_d;// Backup the reg Z value to a 16bit temporary register because the reading section of REG's is asynchronous.
					case(USE_BRAM_ROM)
					"TRUE" : skip_execution <= 1'b1;
					endcase
				end
			end/*!CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL"*/
			if(CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")
			begin
				if(SEL_S2_INSTRUCTION_JMP)
				begin
					PC <= pgm_data_int;
					case(USE_BRAM_ROM)
					"TRUE" : skip_execution <= 1'b1;
					endcase
				end
			end
			if((SEL_S2_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) |
			interrupt_registered)
			begin
				SP <= SP_MINUS_ONE;
				if(interrupt_registered && VECTOR_INT_TABLE_SIZE != 0)
				begin
					interrupt_registered <= 1'b0;
					current_int_executed <= 1'b1;
					if(CORE_CONFIG == "XMEGA")
					begin
						PC <= {current_int_vect_int, 1'b0};
					end
					else
					begin
						if(BUS_ADDR_PGM_WIDTH > 12)
							PC <= {current_int_vect_int, 1'b0};
						else
							PC <= current_int_vect_int;
					end
				end
				else
				begin
					PC <= pgm_data_int;
				end
				case(USE_BRAM_ROM)
				"TRUE" : skip_execution <= 1'b1;
				endcase
			end
			if(SEL_S2_INSTRUCTION_RCALL)
			begin
				SP <= SP_MINUS_ONE;
				PC <= relative_offset;// If is a relative CALL load the offset to "TEMP16".
				case(USE_BRAM_ROM)
				"TRUE" : skip_execution <= 1'b1;
				endcase
			end
			if(SEL_S2_INSTRUCTION_RET |
			SEL_S2_INSTRUCTION_RETI)
			begin
`ifdef USE_RAM_READ_DELAY
				if(ram_read_delay == `USE_RAM_READ_DELAY)
					tmp_pgm_data <= tmp_pgm_data;
				if(ram_read_delay)
				begin
					ram_read_delay <= ram_read_delay - 1;
					PC <= PC;
					step_cnt <= step_cnt;
				end
				else
				begin
`endif
					SP <= SP_PLUS_ONE;
					if(tmp_pgm_data[4])
						ALU_FLAGS[7] <= 1'b1;
					PC <= {PGM_HI_TMP, data_in_int};
					case(USE_BRAM_ROM)
					"TRUE" : skip_execution <= 1'b1;
					endcase
`ifdef USE_RAM_READ_DELAY
					ram_read_delay <= `USE_RAM_READ_DELAY;
				end
`endif
			end
			if(SEL_S2_INSTRUCTION_CPSE)
			begin
				if(rd_data_d == rd_data_r)
				begin
					if((SEL_S1_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) |
					SEL_S1_INSTRUCTION_LDS_STS |
					SEL_S1_INSTRUCTION_JMP) 
					begin
						PC <= PC_PLUS_TWO;
						case(USE_BRAM_ROM)
						"TRUE" : skip_execution <= 1'b1;
						endcase
					end
				end
				else
				begin
					case(USE_BRAM_ROM)
					"TRUE" :;
					default: PC <= PC;
					endcase
				end
			end
			if(SEL_S2_INSTRUCTION_SBRC_SBRS)
			begin
				if(rd_data_d[tmp_pgm_data[2:0]] == tmp_pgm_data[9])
				begin
					if((SEL_S1_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) |
					SEL_S1_INSTRUCTION_LDS_STS |
					SEL_S1_INSTRUCTION_JMP) 
					begin
						PC <= PC_PLUS_TWO;
						case(USE_BRAM_ROM)
						"TRUE" : skip_execution <= 1'b1;
						endcase
					end
				end
				else
				begin
					case(USE_BRAM_ROM)
					"TRUE" :;
					default: PC <= PC;
					endcase
				end
			end
			if(SEL_S2_INSTRUCTION_SBIC_SBIS)
			begin
				if(io_in_int[tmp_pgm_data[2:0]] == tmp_pgm_data[9])
				begin
					if((SEL_S1_INSTRUCTION_CALL && (CORE_CONFIG != "REDUCED" && CORE_CONFIG != "MINIMAL" && CORE_CONFIG != "CLASSIC_8K")) |
					SEL_S1_INSTRUCTION_LDS_STS |
					SEL_S1_INSTRUCTION_JMP) 
					begin
						PC <= PC_PLUS_TWO;
						case(USE_BRAM_ROM)
						"TRUE" : skip_execution <= 1'b1;
						endcase
					end
				end
				else
				begin
					case(USE_BRAM_ROM)
					"TRUE" :;
					default: PC <= PC;
					endcase
				end
			end
		end
		endcase
		end
		else
		begin
			case(USE_BRAM_ROM)
			"TRUE" : skip_execution <= 1'b0;
			endcase
		end
	end
end

mega_regs #(
	.PLATFORM(PLATFORM)
	)regs(
	.rst(rst),
	.clk(clk),
	.rw_addr(rw_addr),
	.rw_data(rw_data),
	.rw_16bit(rw_16bit),
	.write(write_to_reg),
	.rd_addr_d(rd_addr_d),
	.rd_data_d(rd_data_d),
	.rd_16bit_d(rd_16bit_d),
	.read_d(1'b1),
	.rd_addr_r(rd_addr_r),
	.rd_data_r(rd_data_r),
	.rd_16bit_r(rd_16bit_r),
	.read_r(1'b1)
);

mega_alu #(
	.CORE_CONFIG(CORE_CONFIG)
	)alu(
	.inst(pgm_data_int[7:4]),
	.in_addr_1(rd_addr_d),
	.in_addr_2(rd_addr_r),
	.in_1(alu_in_1),
	.in_2(alu_in_2),
	.out(alu_out),
	.ALU_FLAG_C_IN(ALU_FLAGS[0]),		//Carry Flag
	.ALU_FLAG_Z_IN(ALU_FLAGS[1]),		//Zero Flag
	.ALU_FLAG_N_IN(ALU_FLAGS[2]),		//Negative Flag
	.ALU_FLAG_V_IN(ALU_FLAGS[3]),		//Two's complement overflow indicator 
	.ALU_FLAG_S_IN(ALU_FLAGS[4]),		//N?V for signed tests
	.ALU_FLAG_H_IN(ALU_FLAGS[5]),		//Half Carry Flag
	.ALU_FLAG_T_IN(ALU_FLAGS[6]),		//Transfer bit used by BLD and BST instructions
	.ALU_FLAG_I_IN(ALU_FLAGS[7]),		//Global Interrupt Enable/Disable Flag

	.ALU_FLAG_C_OUT(ALU_FLAG_C_OUT),	//Carry Flag
	.ALU_FLAG_Z_OUT(ALU_FLAG_Z_OUT),	//Zero Flag
	.ALU_FLAG_N_OUT(ALU_FLAG_N_OUT),	//Negative Flag
	.ALU_FLAG_V_OUT(ALU_FLAG_V_OUT),	//Two's complement overflow indicator 
	.ALU_FLAG_S_OUT(ALU_FLAG_S_OUT),	//N?V for signed tests
	.ALU_FLAG_H_OUT(ALU_FLAG_H_OUT),	//Half Carry Flag
	.ALU_FLAG_T_OUT(ALU_FLAG_T_OUT),	//Transfer bit used by BLD and BST instructions
	.ALU_FLAG_I_OUT(ALU_FLAG_I_OUT),		//Global Interrupt Enable/Disable Flag
	
	.SEL_INSTRUCTION_MOVW(SEL_S1_INSTRUCTION_MOVW),
	.SEL_INSTRUCTION_MULS(SEL_S1_INSTRUCTION_MULS),
	.SEL_INSTRUCTION_MULSU(SEL_S1_INSTRUCTION_MULSU),
	.SEL_INSTRUCTION_FMUL(SEL_S1_INSTRUCTION_FMUL),
	.SEL_INSTRUCTION_FMULS(SEL_S1_INSTRUCTION_FMULS),
	.SEL_INSTRUCTION_FMULSU(SEL_S1_INSTRUCTION_FMULSU),
	.SEL_INSTRUCTION_CPC(SEL_S1_INSTRUCTION_CPC),
	.SEL_INSTRUCTION_CP(SEL_S1_INSTRUCTION_CP),
	.SEL_INSTRUCTION_SBC(SEL_S1_INSTRUCTION_SBC),
	.SEL_INSTRUCTION_SUB(SEL_S1_INSTRUCTION_SUB),
	.SEL_INSTRUCTION_ADD(SEL_S1_INSTRUCTION_ADD),
	.SEL_INSTRUCTION_ADC(SEL_S1_INSTRUCTION_ADC),
	.SEL_INSTRUCTION_AND(SEL_S1_INSTRUCTION_AND),
	.SEL_INSTRUCTION_ANDI_CBR(SEL_S1_INSTRUCTION_ANDI_CBR),
	.SEL_INSTRUCTION_EOR(SEL_S1_INSTRUCTION_EOR),
	.SEL_INSTRUCTION_OR(SEL_S1_INSTRUCTION_OR),
	.SEL_INSTRUCTION_ORI_SBR(SEL_S1_INSTRUCTION_ORI_SBR),
	.SEL_INSTRUCTION_MOV(SEL_S1_INSTRUCTION_MOV),
	.SEL_INSTRUCTION_CPI(SEL_S1_INSTRUCTION_CPI),
	.SEL_INSTRUCTION_SUBI(SEL_S1_INSTRUCTION_SUBI),
	.SEL_INSTRUCTION_SBCI(SEL_S1_INSTRUCTION_SBCI),
	.SEL_INSTRUCTION_LPM_R_P(SEL_S1_INSTRUCTION_LPM_R_P),
	.SEL_INSTRUCTION_COM(SEL_S1_INSTRUCTION_COM),
	.SEL_INSTRUCTION_NEG(SEL_S1_INSTRUCTION_NEG),
	.SEL_INSTRUCTION_SWAP(SEL_S1_INSTRUCTION_SWAP),
	.SEL_INSTRUCTION_INC(SEL_S1_INSTRUCTION_INC),
	.SEL_INSTRUCTION_ASR(SEL_S1_INSTRUCTION_ASR),
	.SEL_INSTRUCTION_LSR(SEL_S1_INSTRUCTION_LSR),
	.SEL_INSTRUCTION_ROR(SEL_S1_INSTRUCTION_ROR),
	.SEL_INSTRUCTION_SEx_CLx(SEL_S1_INSTRUCTION_SEx_CLx),
	.SEL_INSTRUCTION_DEC(SEL_S1_INSTRUCTION_DEC),
	.SEL_INSTRUCTION_ADIW(SEL_S1_INSTRUCTION_ADIW),
	.SEL_INSTRUCTION_SBIW(SEL_S1_INSTRUCTION_SBIW),
	.SEL_INSTRUCTION_MUL(SEL_S1_INSTRUCTION_MUL)
);

watchdog # (
	.CNT_WIDTH(WATCHDOG_CNT_WIDTH)
	)wdt_inst(
		.rst(rst),
		.clk(clk),
		.wdt_clk(clk_wdt),
		.wdt_rst_in(wdt_rst_out),
		.wdt_rst_out(core_rst)
);

endmodule

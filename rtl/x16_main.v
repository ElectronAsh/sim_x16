`timescale 1 ns / 1 ns

module x16_main (
	input clock,
	input reset_n,
	
	output [15:0] cpu_addr,
	input [7:0] cpu_din,
	output [7:0] cpu_dout,
	output cpu_we,
	
	//input cpu_irq,
	input cpu_nmi,
	
	output [3:0] vga_r,
	output [3:0] vga_g,
	output [3:0] vga_b,
	output vga_hsync,
	output vga_vsync,
	
	output audio_lrck,
	output audio_bck,
	output audio_data,
	
	output spi_sclk,
	output spi_mosi,
	input spi_miso,
	output spi_ssel_n_sd
);


// Commander X16 RAM usage Map.
//
// 0x0002-0x0021	32 bytes	 16 bit ABI registers
// 0x0022-0x007F	94 bytes	 User zero page
// 0x0080-0x00FF	128 bytes	 KERNAL and BASIC zero page variables
// 0x0100-0x01FF	256 bytes	 Accumulator stack
// 0x0200-0x03FF	512 bytes	 KERNAL and BASIC variables, vectors
// 0x0400-0x07FF	1024 bytes	 User space
// 0x0800-0x9EFF	38,656 bytes BASIC program/variable RAM
// 

// Main CPU decoding...
wire bank_cs		= (cpu_addr >= 16'h0000) && (cpu_addr <= 16'h0001);		// 0x0000-0x0001	2 bytes	RAM, ROM bank control bytes.
wire low_ram_cs		= (cpu_addr >= 16'h0002) && (cpu_addr <= 16'h9eff);		// 0x0002-0x9EFF    (ABI "Registers" are just locations in Low RAM 0x02-0x21).
wire io_cs			= (cpu_addr >= 16'h9f00) && (cpu_addr <= 16'h9fff);		// 0x9F00-0x9FFF	256 bytes	I/O registers
wire hi_ram_cs		= (cpu_addr >= 16'hA000) && (cpu_addr <= 16'hbfff);		// 0xA000-0xBFFF	8Kbytes*	RAM Bank window (512K total, expandable to 2MB)
wire banked_rom_cs	= (cpu_addr >= 16'hC000) /*&& (cpu_addr <= 16'hffff)*/;	// 0xC000-0xFFFF	16Kbytes*	ROM Bank window (512K total)


// IO Decoding...
wire via_1_cs	= (cpu_addr >= 16'h9f00) && (cpu_addr <= 16'h9f0f);		// 0x9F00-0x9F0F	VIA I/O controller #1	8 MHz
wire via_2_cs	= (cpu_addr >= 16'h9f10) && (cpu_addr <= 16'h9f1f);		// 0x9F10-0x9F1F	VIA I/O controller #2	8 MHz
wire vera_cs	= (cpu_addr >= 16'h9f20) && (cpu_addr <= 16'h9f3f);		// 0x9F20-0x9F3F	VERA video controller	8 MHz
wire ym_cs		= (cpu_addr >= 16'h9f40) && (cpu_addr <= 16'h9f41);		// 0x9F40-0x9F41	YM2151 audio controller	2 MHz
wire unavail_cs	= (cpu_addr >= 16'h9f42) && (cpu_addr <= 16'h9f5f);		// 0x9F42-0x9F5F	Unavailable	/ Reserved?
wire io3_cs		= (cpu_addr >= 16'h9f60) && (cpu_addr <= 16'h9f7f);		// 0x9F60-0x9F7F	Expansion Card Memory Mapped IO3	8 MHz
wire io4_cs		= (cpu_addr >= 16'h9f80) && (cpu_addr <= 16'h9f9f);		// 0x9F80-0x9F9F	Expansion Card Memory Mapped IO4	8 MHz
wire io5_cs		= (cpu_addr >= 16'h9fa0) && (cpu_addr <= 16'h9fbf);		// 0x9FA0-0x9FBF	Expansion Card Memory Mapped IO5	2 MHz
wire io6_cs		= (cpu_addr >= 16'h9fc0) && (cpu_addr <= 16'h9fdf);		// 0x9FC0-0x9FDF	Expansion Card Memory Mapped IO6	2 MHz
wire io7_cs		= (cpu_addr >= 16'h9fe0) && (cpu_addr <= 16'h9fff);		// 0x9FE0-0x9FFF	Cartridge/Expansion Memory Mapped IO7	2 MHz


reg [7:0] ram_bank;
reg [7:0] rom_bank;

reg [7:0] cpu_din_int;

always @(posedge clock or negedge reset_n)
if (!reset_n) begin
	ram_bank <= 8'd0;
	rom_bank <= 8'd0;
end
else begin
	if (bank_cs && cpu_we) begin
		if (!cpu_addr[0]) ram_bank <= cpu_dout;
		else rom_bank <= cpu_dout;
	end
	cpu_din_int <= cpu_din;
end

cpu_65c02 cpu_inst (
	.clk( clock ),			// input
	.reset( !reset_n ),		// input
	.AB( cpu_addr ),		// output [15:0]
	.DI( cpu_din_int ),		// input [7:0]
	.DO( cpu_dout ),		// output [7:0]
	.WE( cpu_we ),			// output
	.RDY( 1'b1 ),			// input
	.IRQ( vera_irq_n & !via_irq ),		// input
	.NMI( cpu_nmi )			// input 
);


wire [7:0] vera_data = (vera_cs && cpu_we) ? cpu_dout : 8'hzz;

wire vera_irq_n;

// VERA.
//
top top_inst (
    .clk25( clock ),	// input  clk25

    // External bus interface
    .extbus_cs_n( !vera_cs ),		// input  Chip select
    .extbus_rd_n( cpu_we ),			// input  Read strobe
    .extbus_wr_n( !cpu_we ),		// input  Write strobe
    .extbus_a( cpu_addr[4:0] ),		// input  [4:0] Address
    .extbus_d( vera_data ),			// inout  [7:0] Data (bi-directional)
    .extbus_irq_n( vera_irq_n ),	// output  IRQ

    // VGA interface
    .vga_r( vga_r ),			// output  [3:0] vga_r  synthesis syn_useioff = 1
    .vga_g( vga_g ),			// output  [3:0] vga_g  synthesis syn_useioff = 1
    .vga_b( vga_b ),			// output  [3:0] vga_b  synthesis syn_useioff = 1
    .vga_hsync( vga_hsync ),	// output  vga_hsync  synthesis syn_useioff = 1
    .vga_vsync( vga_vsync ),	// output  vga_vsync  synthesis syn_useioff = 1

    // SPI interface
    .spi_sck( spi_sck ),				// output
    .spi_mosi( spi_mosi ),				// output 
    .spi_miso( spi_miso ),				// input
    .spi_ssel_n_sd( spi_ssel_n_sd ),	// output 

    // Audio output
    .audio_lrck( audio_lrck ),		// output 
    .audio_bck( audio_bck ),		// output 
    .audio_data( audio_data )		// output 
);


wire via_1_cs_pulse = (!via_1_cs_d & via_1_cs);

reg via_1_cs_d;
always @(posedge clock) via_1_cs_d <= via_1_cs;

reg [2:0] clk_div;
always @(posedge clock) clk_div <= clk_div + 1;

via6522_x12  via_1_inst(
	.rst_i( !reset_n ),		// input
	.clk_i( clock ),		// input
	
	.wc_clk_i( clk_div[2] ),// input
	
	.irq_o( via_irq ),		// output 
	.cs_i( via_1_cs ),		// input
	.cyc_i( 1'b1 ),			// input
	.stb_i( 1'b1 ),			// input
	.ack_o( via_ack_o ),	// output 
	.we_i( cpu_we ),		// input
	.adr_i( cpu_addr[4:0] ),// input [4:0]
	.dat_i( cpu_dout ),		// input [7:0]
	.dat_o( via_dout ),		// output [7:0]

	.ca1( via_ca1 ),		// input
	
	.ca2_i( via_ca2_i ),	// input
	.ca2_o( via_ca2_o ),	// output 
	.ca2_t( via_ca2_t ),	// output 
	
	.cb1_i( via_cb1_i ),	// input
	.cb1_o( via_cb1_o ),	// output 
	.cb1_t( via_cb1_t ),	// output 
	
	.cb2_i( via_cb2_i ),	// input
	.cb2_o( via_cb2_o ),	// output 
	.cb2_t( via_cb2_t ),	// output 
	
	.pa_i( via_pa_i ),		// input [7:0]
	.pa_o( via_pa_o ),		// output [7:0]
	.pa_t( via_pa_t ),		// output [7:0]
	
	.pb_i( via_pb_i ),		// input [7:0]
	.pb_o( via_pb_o ),		// output [7:0]
	.pb_t( via_pb_t ),		// output [7:0]

	.t1_if( via_t1_if ),	// output timer 1 interrupt flag
	.t2_if( via_t2_if ),	// output timer 2 interrupt flag
	.t3_if( via_t3_if )		// output timer 3 interrupt flag
);


wire [7:0] via_dout;

wire via_ca1;

wire via_ca2_i;
wire via_ca2_o;
wire via_ca2_t;

wire via_cb1_i;
wire via_cb1_o;
wire via_cb1_t;

wire via_cb2_i;
wire via_cb2_o;
wire via_cb2_t;

wire [7:0] via_pa_i;
wire [7:0] via_pa_o;
wire [7:0] via_pa_t;
// Simulate "pull-ups" when output enable bits are Low.
assign via_pa_i[7] = via_pa_t[7] ? via_pa_o[7] : 1'b1;
assign via_pa_i[6] = via_pa_t[6] ? via_pa_o[6] : 1'b1;
assign via_pa_i[5] = via_pa_t[5] ? via_pa_o[5] : 1'b1;
assign via_pa_i[4] = via_pa_t[4] ? via_pa_o[4] : 1'b1;
assign via_pa_i[3] = via_pa_t[3] ? via_pa_o[3] : 1'b1;
assign via_pa_i[2] = via_pa_t[2] ? via_pa_o[2] : 1'b1;
assign via_pa_i[1] = via_pa_t[1] ? via_pa_o[1] : 1'b1;
assign via_pa_i[0] = via_pa_t[0] ? via_pa_o[0] : 1'b1;

wire [7:0] via_pb_i;
wire [7:0] via_pb_o;
wire [7:0] via_pb_t;
// Simulate "pull-ups" when output enable bits are Low.
assign via_pb_i[7] = via_pb_t[7] ? via_pb_o[7] : 1'b1;
assign via_pb_i[6] = via_pb_t[6] ? via_pb_o[6] : 1'b1;
assign via_pb_i[5] = via_pb_t[5] ? via_pb_o[5] : 1'b1;
assign via_pb_i[4] = via_pb_t[4] ? via_pb_o[4] : 1'b1;
assign via_pb_i[3] = via_pb_t[3] ? via_pb_o[3] : 1'b1;
assign via_pb_i[2] = via_pb_t[2] ? via_pb_o[2] : 1'b1;
assign via_pb_i[1] = via_pb_t[1] ? via_pb_o[1] : 1'b1;
assign via_pb_i[0] = via_pb_t[0] ? via_pb_o[0] : 1'b1;

wire via_t1_if;
wire via_t2_if;
wire via_t3_if;

wire [13:0] avr_pgm_addr;
wire [15:0] avr_pgm_data;

wire [12:0] avr_data_addr;
reg [7:0] avr_data_in;
wire [7:0] avr_data_out;
wire avr_data_we;
wire avr_data_re;

wire [5:0] avr_io_addr;
wire [7:0] avr_io_in;
wire [7:0] avr_io_out;
wire avr_io_we;
wire avr_io_re;

reg [7:0] avr_ram [0:511];
always @(posedge clock) begin
	if (avr_data_we) avr_ram[ avr_data_addr ] <= avr_data_out;
	avr_data_in <= avr_ram[ avr_data_addr ];
end

mega_core  attiny_inst (
	.rst( !reset_n ),		// input
	//.sys_rst(),			// output
	
	.clk( clock ),			// input
	.clk_wdt( clk_div ),	// input
	
	.pgm_addr( avr_pgm_addr ),	// output [13:0] ??
	.pgm_data( avr_pgm_data ),	// input [15:0]
	
	.data_addr( avr_data_addr ),// output [12:0] ??
	.data_in( avr_data_in ),	// input [7:0]
	.data_out( avr_data_out ),	// output [7:0]
	.data_we( avr_data_we ),	// output
	.data_re( avr_data_re ),	// output
	
	.io_addr( avr_io_addr ),	// output [5:0]
	.io_in( avr_io_in ),		// input [7:0]
	.io_out( avr_io_out ),		// output [7:0]
	.io_we( avr_io_we ),		// output
	.io_re( avr_io_re )			// output
	
	//.int_sig(),		// input
	//.int_rst(),		// output
	//.wdt_rst_out()	// output
);

endmodule

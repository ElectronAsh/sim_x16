# 25MHz system clock
create_clock -name {clk25} -period 40 [get_ports clk25]

#create_clock -name {wrclk} -period 125 [get_pins -hierarchical wraddr_r/clock]
#create_clock -name {rdclk} -period 125 [get_pins rdaddr_r/clock]
#create_clock -name {buscs} -period 125 [get_ports extbus_cs_n]
create_clock -name {buswr} -period 125 [get_ports extbus_wr_n]
create_clock -name {busrd} -period 125 [get_ports extbus_rd_n]
#set_input_delay -clock [get_clocks buswr] -10 -clock_fall [get_ports {extbus_d[0] extbus_d[1] extbus_d[2] extbus_d[3] extbus_d[4] extbus_d[5] extbus_d[6] extbus_d[7]}]
#set_clock_latency 10 -source -late [get_clocks buswr]
set_clock_latency 10 -source -early [get_clocks buswr]
set_clock_latency 10 -source -early [get_clocks busrd]

# Define clock domains to be independent
set_clock_groups -group [get_clocks clk25] -group [get_clocks {buscs buswr busrd}] -asynchronous

set_output_delay -clock [get_clocks clk25] 10 [get_ports {vga_r[0] vga_r[1] vga_r[2] vga_r[3] vga_g[0] vga_g[1] vga_g[2] vga_g[3] vga_b[0] vga_b[1] vga_b[2] vga_b[3] vga_hsync vga_vsync}]

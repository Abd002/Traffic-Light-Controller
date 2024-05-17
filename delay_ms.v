`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:34 05/16/2024 
// Design Name: 
// Module Name:    delay_s 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module delay_s (
	input [31:0]delay,
	input reset,clk,
	output timeout
    );
	 
	localparam [31:0]frequency = 50000000;
	localparam [31:0]one_ms_value    = frequency/1;
	 
	reg [31:0] ms_reg;
	wire[31:0] ms_nxt;
	
	reg [31:0] seconds_reg;
	wire[31:0] seconds_nxt;
	
	wire one_second_pass_flag;	 
	
	always @(posedge clk, posedge reset)
		if(reset)
			ms_reg <= 0;
		else 
			ms_reg <= ms_nxt;
			
	always @(posedge clk, posedge reset)
		if(reset)
			seconds_reg<=0;
		else 
			seconds_reg<=seconds_nxt;
			
	assign ms_nxt = (one_ms_value == ms_reg )? 1'b0 : ms_reg + 1;
	
	assign one_second_pass_flag = (one_ms_value==ms_reg)? 1'b1: 1'b0;
	
	assign seconds_nxt = (one_second_pass_flag)? seconds_reg+1: seconds_reg;
	
	assign timeout = (seconds_reg >= delay)? 1'b1 : 1'b0;
	
endmodule

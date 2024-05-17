`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:53:47 05/16/2024
// Design Name:   delay_ms
// Module Name:   D:/3rd/VLSI/Traffic_light_controller/delay.v
// Project Name:  Traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: delay_ms
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module delay;

	// Inputs
	reg [31:0] delay;
	reg reset;
	reg clk;

	// Outputs
	wire timeout;

	// Instantiate the Unit Under Test (UUT)
	delay_s uut (
		.delay(delay), 
		.reset(reset), 
		.clk(clk), 
		.timeout(timeout)
	);
	
	localparam T=20;
	
	initial begin
		reset=1'b1;
		#(T/2) reset=0;
	end
	
	initial begin
		clk=1'b0;
		forever
			#(T/2) clk=~clk;
	end
	
	initial begin
		@(negedge(reset));
		delay = 1;

		// Wait 100 ns for global reset to finish
		#1000000;
        
		// Add stimulus here

	end
      
endmodule


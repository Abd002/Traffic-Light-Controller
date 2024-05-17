`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:16:38 05/17/2024
// Design Name:   debounce
// Module Name:   D:/3rd/VLSI/Traffic_light_controller/debounce_TF.v
// Project Name:  Traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: debounce
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module debounce_TF;

	// Inputs
	reg button_bressed;
	reg clk;
	reg reset;

	// Outputs
	wire button_state;

	// Instantiate the Unit Under Test (UUT)
	debounce uut (
		.button_bressed(button_bressed), 
		.clk(clk), 
		.reset(reset), 
		.button_state(button_state)
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
		// Initialize Inputs
		button_bressed = 0;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 1;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 0;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 1;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 0;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 1;
		#20000000;
		button_bressed = 0;
		#1000000;
		button_bressed = 1;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 0;
		// Wait 100 ns for global reset to finish
		#1000000;
		button_bressed = 0;
		#20000000;
		button_bressed = 1;
		// Add stimulus here

	end
      
endmodule


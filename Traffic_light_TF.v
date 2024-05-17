`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:20:41 05/16/2024
// Design Name:   Traffic_light
// Module Name:   D:/3rd/VLSI/Traffic_light_controller/Traffic_light_TF.v
// Project Name:  Traffic_light_controller
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Traffic_light
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Traffic_light_TF;

	// Inputs
	reg button_bressed;
	reg clk;
	reg reset;

	// Outputs
	wire green_led;
	wire yellow_led;
	wire red_led;

	// Instantiate the Unit Under Test (UUT)
	Traffic_light uut (
		.button_bressed(button_bressed), 
		.clk(clk), 
		.reset(reset), 
		.green_led(green_led), 
		.yellow_led(yellow_led), 
		.red_led(red_led)
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
		
		button_bressed = 0;

		// Wait 100 ns for global reset to finish
		#500;
		button_bressed = 1;
		// Wait 100 ns for global reset to finish
		#100;
		button_bressed = 0;
		

		
		#1000;
		button_bressed = 1;
		// Add stimulus here

	end
      
endmodule


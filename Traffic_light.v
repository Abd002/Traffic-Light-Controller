`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:03:44 05/16/2024 
// Design Name: 
// Module Name:    Traffic_light 
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
module Traffic_light(
	input button_bressed, clk, reset,
	output green_led, yellow_led, red_led
    );
	
	reg [2:0]state_reg, state_nxt;
	
	reg [31:0]delay;
	wire timeout;
	delay_s uut (
		.delay(delay), 
		.reset(reset), 
		.clk(clk), 
		.timeout(timeout)
	);
	
	wire button_state;
	debounce uut1 (
		.button_bressed(button_bressed), 
		.clk(clk), 
		.reset(reset), 
		.button_state(button_state)
	);
	
	always @(posedge clk, posedge reset)
		if(reset)
			state_reg<=3'b000;
		else if(timeout|| state_nxt == 3'b011)
			state_reg<=state_nxt; 
			
	reg Green, Red, Yellow;
	
	always @*
		case(state_reg)
			3'b000:
			begin
				delay<=0;
				Green <= 1'b1;
				Yellow <= 1'b0;
				Red <= 1'b0;
			end
			3'b001:
			begin
				delay<=15000;
				Green <= 1'b0;
				Yellow <= 1'b1;
				Red <= 1'b0;
			end
			3'b010:
			begin
				delay<=30000;
				Green <= 1'b0;
				Yellow <= 1'b0;
				Red <= 1'b1;
			end
			3'b011:
			begin
			end
			3'b100:
			begin
				delay<=30000;
				Green <= 1'b0;
				Yellow <= 1'b0;
				Red <= 1'b1;
			end
		endcase
		
	always @*
		if(state_reg == 3'b000 &&  button_state)
			state_nxt<=3'b001;
		else if(state_reg == 3'b001)
			state_nxt<=3'b010;
		else if(state_reg == 3'b010 &&  button_state)
		begin
			state_nxt<=3'b011;
		end
		else if(state_reg == 3'b010)
			state_nxt<=3'b000;
		else if(state_reg == 3'b011)
			state_nxt<=3'b100;
		else if(state_reg == 3'b100)
			state_nxt<=3'b000;
		else state_nxt <= state_reg;
			
	assign green_led = Green;
	assign yellow_led = Yellow;
	assign red_led = Red;
	
endmodule

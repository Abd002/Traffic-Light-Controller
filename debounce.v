`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:54:54 05/17/2024 
// Design Name: 
// Module Name:    debounce 
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
module debounce(
	input button_bressed, clk, reset,
	output button_state
    );
	 
	reg [1:0]state_reg, state_nxt;
	reg button;
	
	reg [31:0]delay;
	wire timeout;
	
	delay_s uut (
		.delay(delay), 
		.reset(reset), 
		.clk(clk), 
		.timeout(timeout)
	);
	
	always @(posedge clk, posedge reset)
		if(reset)
			state_reg<=2'b00;
		else if(timeout)
			state_reg<=state_nxt; 
	
	always @*
		case(state_reg)
			2'b00:
			begin
				delay<=0;
				button<=0;
			end
			2'b01:
			begin
				delay<=20;
			end
			2'b10:
			begin
				delay<=0;
				button<=1;
			end
			2'b11:
			begin
				delay<=20;
			end
		endcase
		
	always @*
		if(state_reg==2'b00 && button_bressed)
			state_nxt<=2'b01;
		else if(state_reg==2'b01 && !button_bressed && timeout)
			state_nxt<=2'b00;
		else if(state_reg==2'b01 && button_bressed && timeout)
			state_nxt<=2'b10;
		else if(state_reg==2'b10 && !button_bressed)
			state_nxt<=2'b11;
		else if(state_reg==2'b11 && button_bressed && timeout)
			state_nxt<=2'b10;
		else if(state_reg==2'b11 && !button_bressed && timeout)
			state_nxt<=2'b00;
		else 
			state_nxt<=state_reg;
				
			
		
	assign button_state= button;
		
endmodule

module seg(
  
  input  [3:0] b,
  output reg [6:0] h
);
always @(*) begin
  	case(b[3:0])
      4'd0 : h = ~7'b0111111;
      4'd1 : h = ~7'b0000110;
      4'd2 : h = ~7'b1011011;
      4'd3 : h = ~7'b1001111;
      4'd4 : h = ~7'b1100110;
      4'd5 : h = ~7'b1101101;
      4'd6 : h = ~7'b1111101;
      4'd7 : h = ~7'b0000111;
      4'd8 : h = ~7'b1111111;
      4'd9 : h = ~7'b1101111;
      4'd10 : h = ~7'b1110111;//a
	  4'd11 : h = ~7'b1111100;//b
	  4'd12 : h = ~7'b0111001;//c
	  4'd13 : h = ~7'b1011110;//d
	  4'd14 : h = ~7'b1111001;//e
	  4'd15 : h = ~7'b1110001;//f
      default : h = ~7'b1111111;//空
    endcase
end
endmodule

module LFSR(
	input clk,//BTNC indicates clk
	input rst,
	output [13:0]lfsr_seg 

 );
 reg [7:0] state=8'b00000001;
  always @(posedge clk or posedge rst) begin
    if (rst) 
      state <= 8'b1111111;
    else begin
      state <= {state[4] ^ state[3] ^ state[2] ^ state[0],state[7:1]} ;
    end
  end
 seg seg1(.b(state[7:4]),.h(lfsr_seg[13:7]));
 seg seg0(.b(state[3:0]),.h(lfsr_seg[6:0]));
endmodule //LFSR


module bcd7seg(
  input  [2:0] b,
  output reg [6:0] h
);
  
  always @(b) begin
    case(b)
      3'b000: h = ~7'b1111110; // 0
      3'b001: h = ~7'b0110000; // 1
      3'b010: h = ~7'b1101101; // 2
      3'b011: h = ~7'b1111001; // 3
      3'b100: h = ~7'b0110011; // 4
      3'b101: h = ~7'b1011011; // 5
      3'b110: h = ~7'b1011111; // 6
      3'b111: h = ~7'b1110000; // 7
      default: h = ~7'b1111111; // All segments off for other values
    endcase
  end

endmodule

module encode83(x,flag,en,y,h);
	input [7:0] x;
	output reg flag;
	input en;
	output reg[2:0] y;
	output reg [6:0] h;
	
	integer i;
	always@(en or x) begin
		if(en)begin
			y=0;
			flag=0;
			for(i=0;i<=7;i=i+1)
				if(x[i] == 1)begin
					y = i[2:0];
					flag =1;
				end
			end
		else begin
			y=0;
			flag =0;
		end
	end
	bcd7seg bcd7seg_endcode83( .b(y),.h(h));
endmodule


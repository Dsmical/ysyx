module seg(
  /*输入输出定义,输入4位编码值,输出7位数码管的显示控制*/
  input  [3:0] b,
  output reg [6:0] h
);
/*每当b发生变化,都会重新更新输出*/
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
      4'd14 : h = 7'b0111111;//负号
      default : h = 7'b1111111;//空
    endcase
end
endmodule

module Button(
    input  [2:0]button,
    output reg [2:0]mode,
	output reg enable);
 always @( posedge button[1]or posedge button[0]or posedge button[2] ) begin
		if(button[2]) begin
			enable <= ~enable;
		end
        else 
			case(button)
			3'b010:  begin mode <= mode+1; enable <= 0;end
			3'b001:  begin mode <= mode-1; enable <= 0;end
			default:   enable <= 1;
			endcase
	end
endmodule


module Alu(
	input [3:0] a_in,
	input [3:0] b_in,
	input [2:0] button,
	
	output reg OF,//溢出标志
	output reg CF,//进位标志
	output reg ZF,//0标志
	output reg [2:0] mode,
	output [6:0] mode_seg,
	output [13:0] a_seg,
	output [13:0] b_seg,
	output [20:0] value_seg
);


wire en;
wire [3:0]a= a_in[3]? {a_in[3],~a_in[2:0]+3'b1}:a_in;
wire [3:0]b= b_in[3]? {b_in[3],~b_in[2:0]+3'b1}:b_in;
wire [3:0]b_comp = {4{mode[0]}}^b;//根据操作码来对b进行处理，0：加法b_comp=b,1:减法b_comp=b按位取反
reg [3:0] value;				 //注意①：这里为什么不是按位取反+1（-b）。因为考虑到最小负数溢出问题，+1会在后面求和中添加					

Button Button_1 (.button(button),.mode(mode),.enable(en));
seg seg7(.b({1'b0,mode}),.h(mode_seg));

seg seg6(.b({1'b1,a_in[3],2'b10}),.h(a_seg[13:7]));
seg seg5(.b({1'b0,a_in[2:0]}),.h(a_seg[6:0]));

seg seg4(.b({1'b1,b_in[3],2'b10}),.h(b_seg[13:7]));
seg seg3(.b({1'b0,b_in[2:0]}),.h(b_seg[6:0]));

seg seg2(.b(value_sign),.h(value_seg[20:14]));
seg seg1(.b(value_num[7:4]),.h(value_seg[13:7]));
seg seg0(.b(value_num[3:0]),.h(value_seg[6:0]));

 always @(*) begin
	if (en) begin
		case (mode)
		3'd0, 3'd1: begin
			value =  b_comp + {1'b0,mode};//注意②不能把a+b_comp+{1'b0,instr}直接赋给{CF,value},否则当b=0时,b_comp+1会错误的进位/
			{CF,value} = value +a;
			OF = (a[3] == b_comp[3]) && (value[3] != a[3]);
			end
		3'd2 : begin  value = a[3]?(~a+1):{1'b1,~a[2:0]+3'b1};    {CF,  OF} =2'd0;  end
		3'd3 : begin  value = a & b; {CF,  OF} =2'd0;  end
		3'd4 : begin  value = a | b; {CF,  OF} =2'd0;  end
		3'd5 : begin  value = a ^ b; {CF,  OF} =2'd0;  end
		3'd6 : begin  value = {3'b000,a<b}; {CF, OF} =2'd0; end
		3'd7 : begin  value = {3'b000,a==b};{CF, OF} =2'd0; end
		endcase	
		ZF=value==0;
		end
	else begin
    value = 0;
    {CF, ZF, OF} =3'd0;
	end
end

wire [3:0] value_abs;
wire [3:0] value_sign;
wire [7:0] value_num;

assign value_abs = value[3] ?(~value+1):value;
assign value_sign =  {1'b1,value[3],2'b10};
assign value_num[7:4]=value_abs/10;
assign value_num[3:0]=value_abs % 10;



endmodule

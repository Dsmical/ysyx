module top(
    input clk,
    input rst_n,
    input ps2_clk,
    input ps2_data,
    output [7:0]data,
    output [7:0]ascii_code,
    output [41:0]value_seg
);
reg [1:0]state;
reg [7:0]buff;
reg [7:0]count;
reg [15:0] ps2_value;
reg flag_temp;
wire flag;


always @(posedge clk) begin
  if (rst_n)begin
    state <= 2'b0;buff<=0;count<=0;
    end
  else begin
    case(state)
      2'b0: begin
       if(data==8'b11110000)begin
                count<=count+1;
                 state<=2'b1;
             end
            else begin
                buff<=data;
                state <=2'b0;   
            end
            ps2_value<={ascii_code,data};
            
      end
      2'b1:begin
       if(buff==data)begin
                state <=2'b11;
                buff <=0;
                flag_temp<=flag;
            end
            else begin
                state<=state;
                buff<=buff;
            end
            ps2_value<=16'h00;
            
      end
     2'b11:begin
      if(flag_temp==flag)begin
        state<=state;
        buff <=0;
      end
      else begin
        buff<=data;
        state<=2'b0;
      end
      ps2_value<=16'h00;
     
     end


      default: state <=2'b0;
    
    endcase
     
  end
end



ps2_keyboard ps2_keyboard_init(
    .clk(clk),
    .resetn(rst_n),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .data(data),
    .flag(flag)
    );


 ScanCodeToASCII  ScanCodeToASCII_init(
 .clk(clk),
 .scan_code(data),
 .ascii_code(ascii_code)
 );

seg seg5(.b(count[7:4]),.h(value_seg[41:35]));//test
seg seg4(.b(count[3:0]),.h(value_seg[34:28]));//test
seg seg3(.b(ps2_value[15:12]),.h(value_seg[27:21]));
seg seg2(.b(ps2_value[11:8]),.h(value_seg[20:14]));
seg seg1(.b(ps2_value[7:4]),.h(value_seg[13:7]));
seg seg0(.b(ps2_value[3:0]),.h(value_seg[6:0]));

endmodule //top
`include "defines.v"
module regfile (
  input                         i_clk   ,//时钟信号
  input                         i_wen   ,//写使能信号。当该信号为高电平时，允许写入操作。
  input        [`REG_ADDRW-1:0] i_waddr ,//写地址信号，指示将数据写入哪个寄存器。
  input        [`CPU_WIDTH-1:0] i_wdata ,//写数据信号，待写入的数据。
  input        [`REG_ADDRW-1:0] i_raddr1,//指示要读取的第一个寄存器地址。
  input        [`REG_ADDRW-1:0] i_raddr2,//指示要读取的第二个寄存器地址。
  output       [`CPU_WIDTH-1:0] o_rdata1,//对应i_raddr1地址的寄存器数据。
  output       [`CPU_WIDTH-1:0] o_rdata2,//对应i_raddr2地址的寄存器数据。
  output                        s_a0zero //use for sim, good trap or bad trap.
);

  reg  [`CPU_WIDTH-1:0] rf  [`REG_COUNT-1:0];
  
  always @(posedge i_clk) begin
    if (i_wen) begin
      if(i_waddr == `REG_ADDRW'b0)
        rf[i_waddr] <= `CPU_WIDTH'b0;//零号寄存器特性
      else
        rf[i_waddr] <= i_wdata;
    end
    // $display("Register file contents:");
    // for (int i = 0; i < `REG_COUNT; i++) begin
    //   $display("rf[%0d] = %h", i, rf[i]);
    // end
  end

  assign o_rdata1 = rf[i_raddr1];
  assign o_rdata2 = rf[i_raddr2];

  //for sim:  ////////////////////////////////////////////////////////////////////////////////////////////
  assign s_a0zero = ~|rf[10]; // if x[10]/a0 is zero, o_a0zero == 1
  import "DPI-C" function void set_reg_ptr(input logic [31:0] a []);
  initial set_reg_ptr(rf);

endmodule

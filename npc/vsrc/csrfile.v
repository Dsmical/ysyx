`include "defines.v"
module csrfile (
  input                         i_clk   ,//时钟信号
  input                         i_rst_n ,
  input                         i_wen   ,
  input        [`CPU_WIDTH-1:0] i_ins   ,
  input        [`CPU_WIDTH-1:0] i_pc    ,
  input        [`CPU_WIDTH-1:0] i_imm   ,//csrs[imm]
  input        [`CPU_WIDTH-1:0] i_src1  ,
  output       [`CPU_WIDTH-1:0] o_pc    ,
  output   reg                   o_ecall ,
  output       [`CPU_WIDTH-1:0] o_csr   //csr

);
  reg [`CPU_WIDTH-1:0] csr  [`CSR_REG_COUNT-1:0];
  reg [`CPU_WIDTH-1:0] pc_temp  ;
  reg [`CPU_WIDTH-1:0] csr_temp ;
  
  wire [6:0] func7  = i_ins[31:25];
  wire [2:0] func3  = i_ins[14:12];

  assign o_pc   = pc_temp ;
  assign o_csr  = csr[i_imm];

  always @(posedge i_clk) begin
    if(i_ins == `CPU_WIDTH'h00000073)begin
      o_ecall<=1'b1;
    end
    else
    o_ecall <=1'b0;
  end

  always @(posedge i_clk) begin
 //    $display("cpu_ins =0x%x",i_ins);
    if (!i_rst_n) begin
      csr[`CSRS_MSTATUS]=32'h1800;
    end
    else if(i_ins == `CPU_WIDTH'h00000073)begin//ecall
      csr[`CSRS_MSTATUS][7]     <=csr[`CSRS_MSTATUS][3]  ;
      csr[`CSRS_MSTATUS][3]     <=1'b0                   ;
      csr[`CSRS_MSTATUS][12:11] <=2'b11                  ;

      csr[`CSRS_MEPC]           <=i_pc                   ;
      csr[`CSRS_MCAUSE]         <=`CPU_WIDTH'h000b       ;
      pc_temp                   <=csr[`CSRS_MTVEC]       ;
    end
    else if(func7==`TYPE_I_EBRK)begin
      case(func3)
      `FUNC3_CSRRS:   csr[i_imm]   <= i_src1 | csr[i_imm];
      `FUNC3_CSRRW:   csr[i_imm]   <= i_src1;
      default     :   ;//
      endcase
    end
  end
  // always @(*) begin
  //   $display("csr[`CSRS_MCAUSE] =0x%x csr[`CSRS_MEPC]=0x%x  pc_temp=%x",csr[`CSRS_MCAUSE],csr[`CSRS_MEPC],pc_temp  );
  // end

  

  //for sim:  ////////////////////////////////////////////////////////////////////////////////////////////
  import "DPI-C" function void set_csr_reg_ptr(input logic [31:0] a []);
  initial set_csr_reg_ptr(csr);


endmodule

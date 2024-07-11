`include "defines.v"
module pcu (
    input                         i_clk  ,
    input                         i_rst_n,
    input                         i_brch ,
    input                         i_jal  ,
    input                         i_jalr ,
    input                         i_ecall,    
    input                         i_zero ,
    input        [`CPU_WIDTH-1:0] i_rs1  ,
    input        [`CPU_WIDTH-1:0] i_imm  ,
    input        [`CPU_WIDTH-1:0] i_ecall_pc ,
    output       [`CPU_WIDTH-1:0] o_pc
);
  // always @(*)begin
  //   $display("i_ecall=%x i_ecall_pc=%x pc_next=%x o_pc=%x" ,i_ecall,i_ecall_pc,pc_next,o_pc);
  // end
  // always @(posedge i_clk)begin
  //   $display("i_jal=%x i_imm=%x pc_next=%x o_pc=%x" ,i_jal,i_imm,pc_next,o_pc);
  // end
  
  wire [`CPU_WIDTH-1:0] pc_next;

  assign pc_next =  ((i_brch && ~i_zero) || i_jal) ? (o_pc + i_imm) : 
                    i_jalr ? (i_rs1 + i_imm) : 
                    i_ecall ? i_ecall_pc://`CPU_WIDTH'h80000000 : 
                    (o_pc + 4);

  stdreg #(
    .WIDTH     (`CPU_WIDTH  ),
    .RESET_VAL (`RESET_PC   )
  )u_stdreg(
    .i_clk   (i_clk   ),
    .i_rst_n (i_rst_n ),
    .i_wen   (1       ),
    .i_din   (pc_next ),
    .o_dout  (o_pc    )
  );

endmodule

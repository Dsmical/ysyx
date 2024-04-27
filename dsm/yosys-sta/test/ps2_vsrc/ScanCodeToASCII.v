module ScanCodeToASCII(
	 input clk,
    input [7:0] scan_code,
    output reg [7:0] ascii_code
);

// 键盘扫描码到ASCII码的查找表
reg [7:0] lookup_table [0:255];
generate
    // 声明 genvar 用于循环索引
    genvar i;

    // 初始化查找表
    for (i = 0; i < 256; i = i + 1) begin : init_table
        // 将查找表中的所有元素初始化为0
        initial begin
            lookup_table[i] = 8'h00;
        end
    end

endgenerate
// 初始化查找表
initial begin
  
 //  for (int i = 0; i < 256; i = i + 1) begin
 //      lookup_table[i] = 8'h00;
 //  end
   
    // 进行常见键的映射
    lookup_table[8'h76] = 8'd27; // ESC键
    lookup_table[8'h05] = 8'd112; // F1
    lookup_table[8'h06] = 8'd113; // F2
    lookup_table[8'h04] = 8'd114; // F3
    lookup_table[8'h0C] = 8'd115; // F4
    lookup_table[8'h03] = 8'd116; // F5
    lookup_table[8'h0B] = 8'd117; // F6
    lookup_table[8'h83] = 8'd118; // F7
	 lookup_table[8'h0A] = 8'd119; //F8
	 lookup_table[8'h01] = 8'd120; //F9
	 lookup_table[8'h09] = 8'd121; //F10
	 lookup_table[8'h78] = 8'd122; //F11
	 lookup_table[8'h07] = 8'd123; //F12
	 lookup_table[8'h1C] = 8'd65; //A
	 lookup_table[8'h32] = 8'd66; // 
	 lookup_table[8'h21] = 8'd67; //
	 lookup_table[8'h23] = 8'd68; //
	 lookup_table[8'h24] = 8'd69; //
	 lookup_table[8'h2B] = 8'd70; //
	 lookup_table[8'h34] = 8'd71; //
	 lookup_table[8'h33] = 8'd72; //
	 lookup_table[8'h43] = 8'd73; //
	 lookup_table[8'h3B] = 8'd74; //
	 lookup_table[8'h42] = 8'd75; //
	 lookup_table[8'h4B] = 8'd76; //
	 lookup_table[8'h3A] = 8'd77; //
	 lookup_table[8'h31] = 8'd78; //
	 lookup_table[8'h44] = 8'd79; //
	 lookup_table[8'h4D] = 8'd80; //
	 lookup_table[8'h15] = 8'd81; //
	 lookup_table[8'h2D] = 8'd82; //
	 lookup_table[8'h1B] = 8'd83; //
	 lookup_table[8'h2C] = 8'd84; //
	 lookup_table[8'h3C] = 8'd85; //
	 lookup_table[8'h2A] = 8'd86; //
	 lookup_table[8'h1D] = 8'd87; //
	 lookup_table[8'h22] = 8'd88; //
	 lookup_table[8'h35] = 8'd89; //
	 lookup_table[8'h1A] = 8'd90; //Z
	 lookup_table[8'h0E] = 8'd192; //~
	 lookup_table[8'h16] = 8'd96; //1
	 lookup_table[8'h1E] = 8'd97; //2
	 lookup_table[8'h26] = 8'd98; //3
	 lookup_table[8'h25] = 8'd99; //4
	 lookup_table[8'h2E] = 8'd100; //5
	 lookup_table[8'h36] = 8'd101; //6
	 lookup_table[8'h3D] = 8'd102; //7
	 lookup_table[8'h3E] = 8'd103; //8
	 lookup_table[8'h46] = 8'd104; //9
	 lookup_table[8'h45] = 8'd105; //0
	 lookup_table[8'h4E] = 8'd189; //-——
	 lookup_table[8'h55] = 8'd187; //+=
	 lookup_table[8'h5D] = 8'd220; //|\
	 lookup_table[8'h66] = 8'd46; //delete
	 lookup_table[8'h0D] = 8'd09; //TAB
	 lookup_table[8'h58] = 8'd20; //CAP
	 lookup_table[8'h12] = 8'd16; //Shift
	 lookup_table[8'h14] = 8'd17; //Ctrl
	 lookup_table[8'h11] = 8'd18; //ALT
	 lookup_table[8'h29] = 8'd32; //SPACE
	 lookup_table[8'h41] = 8'd188; //<,
	 lookup_table[8'h49] = 8'd190; //>.
	 lookup_table[8'h4A] = 8'd191; ///?
	 lookup_table[8'h4C] = 8'd186; //:;
	 lookup_table[8'h52] = 8'd222; //"'
	 lookup_table[8'h54] = 8'd219; //[{
	 lookup_table[8'h5B] = 8'd221; //}]
	 lookup_table[8'h5A] = 8'd108; //ENTER

end
// 从查找表中查找并输出ASCII码
always @(posedge clk) begin
    ascii_code = lookup_table[scan_code];
end
endmodule

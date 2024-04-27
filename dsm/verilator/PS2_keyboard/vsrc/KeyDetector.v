module KeyDetector (
    input wire clk,            // 时钟信号
    input wire reset,          // 复位信号
    input wire [7:0] data,     // 按键扫描码输入
    output reg key_status,     // 按键状态输出
    output reg [7:0] key_press_count // 按键按下次数输出
);

// 状态枚举
parameter IDLE_STATE = 2'b00; // 空闲状态
parameter PRESS_STATE = 2'b01; // 按键按下状态

reg [1:0] state;            // 状态寄存器
reg [7:0] press_count;      // 按键按下次数寄存器
reg [7:0] prev_data;        // 上一个按键扫描码寄存器
reg [7:0] press_data;       // 按键按下时的扫描码寄存器

always @(posedge clk or posedge reset) begin
    if (reset) begin
        state <= IDLE_STATE;
        press_count <= 8'b0;
        prev_data <= 8'b0;
        press_data <= 8'b0;
        key_status <= 1'b0; // 初始状态为松开
    end else begin
        case (state)
            IDLE_STATE: begin
                if (data != 8'b11110000) begin // 检测按键是否按下
                    state <= PRESS_STATE;
                    press_data <= data; // 记录按键按下时的扫描码
                end
            end
            PRESS_STATE: begin
                if (data == 8'b11110000) begin // 检测按键是否松开
                    state <= IDLE_STATE;
                    key_status <= 1'b1; // 设置按键状态为按下
                    press_count <= press_count + 1; // 按键按下次数加1
                end
            end
        endcase
    end
end

assign key_press_count = press_count; // 输出按键按下次数

endmodule

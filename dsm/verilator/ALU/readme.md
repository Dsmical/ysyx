使用说明：
按键L 操作码-1,R 操作码 +1 案件C执行（每次更换命令之后都需要按下执行）
led[2:0]表示操作码 led[6:4]表示 溢出，进位，结果0标志
开关 [7:4]表示a输入，开关[3:0]表示b输入
数码管分别表示操作码，a，b，计算结果。

0 加法
1 减法
2 a取反
3 按位与
4 按位或
5 按位异或
6 a<b
7 a==b









重点就是两点，

+ **第一个就是最小负数溢出问题。**

比如四位有符号数最小负数-8，补码表示为1000.(相反数的补码，就是原来补码取反+1)也是1000.这样会导致溢出位判断的时候出现问题。 所以方法一是对的。先取反保证符号正确，求和的时候再将1加上。

方法一：

```verilog
assign t_no_Cin = {n{ Cin }}^B;
assign {Carry,Result} = A + t_no_Cin + Cin;
assign Overflow = (A[n-1] == t_no_Cin[n-1]) && (Result [n-1] != A[n-1]);
```

方法二：

```verilog
assign t_add_Cin =( {n{Cin}}^B )+ Cin;  //  在这里请注意^运算和+运算的顺序
assign { Carry, Result } = A + t_add_Cin;
assign Overflow = (A[n-1] == t_add_Cin[n-1]) && (Result [n-1] != A[n-1]);
```

+ **第二个就是减法过程中减数为0，会造成错误进位**

主要就是b=0，取反之后b_comp=1111。直接判断 a+b_comp+{1'b0,instr}必然会进位，所以需要中间变量 value =  b_comp + {1'b0,instr}将固有的进位消除。

```
  /*加减法*/
    3'd0, 3'd1: begin
    /*不能把a+b_comp+{1'b0,instr}直接赋给{CF,value},否则当b=0时,b_comp+1会错误的进位*/
    value =  b_comp + {1'b0,instr};
    {CF,value} = value +a;
```

+ 完整的代码展示

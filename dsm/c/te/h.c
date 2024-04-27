#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // 使用当前时间作为随机数种子，确保每次运行生成不同的随机数

    int num = rand() % 1000; // 生成小于1000的随机数
    char str[4]; // 字符串数组，存储最多3位数的整数及结尾的'\0'

    sprintf(str, "%d", num); // 将整数num转换为字符串存储在str中

    printf("随机数为：%d，转换后的字符串为：%s\n", num, str);

    return 0;
}

#include <stdio.h>
#include <stdint.h> // 添加头文件 <stdint.h>

#define SEXT(x, len) ({ struct { int64_t n : len; } __x = { .n = x }; (uint64_t)__x.n; })

int main() {
    int8_t signedValue = -7; // 使用 int8_t 而不是 __int8_t
    uint16_t extendedValue = SEXT(signedValue, 8); // 使用 uint16_t 而不是 __uint16_t，长度改为 8 位

    printf("Signed Value: %d\n", signedValue);
    printf("Extended Value: %u\n", extendedValue); // 打印无符号整数应使用 %u 格式

    return 0;
}



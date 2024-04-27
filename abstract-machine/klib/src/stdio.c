#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
void int2string(int num , char * value) {
  char reverse_value[100] = {0};
  int index = 0;
  if(num == 0)
    reverse_value[index++] = '0';
  while(num != 0) {
    reverse_value [index++]  = num % 10 + '0';
    num = num / 10;
  }
  for(int i = 0;i < index;i++) {
    value[i] =  reverse_value [ index - i-1 ];
  }
  value [index ]  = '\0';
} 

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char *p = out; // 指向输出字符串的指针
  const char *fp = fmt; // 指向格式字符串的指针
  int printed = 0; // 记录已输出的字符数

  while (*fp) {
    if (*fp == '%') {
      fp++; // 跳过 '%'
      if (*fp == 's') {// 处理字符串参数
        char *str_arg = va_arg(ap, char*);
        while (*str_arg) {
          *p++ = *str_arg++;
          printed++;
        }
      } else if (*fp == 'd') {// 处理整数参数
        char s[100] = {0};
        int int_arg = va_arg(ap,int);
        int2string(int_arg,s);
        p=memcpy(p,s,strlen(s));
        p+=strlen(s);
        printed+=strlen(s);
      }
      fp++;        //跳过格式符
    } else {
        *p++ = *fp++;
        printed++;
    }

  }
  *p = '\0'; // 在字符串末尾添加结束符
  return printed; // 返回输出字符数
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;  // 定义一个参数列表
  int ret;       // 保存返回值
  va_start(args, fmt); // 初始化参数列表                       
  ret = vsprintf(out, fmt, args);// 使用vsprintf函数格式化字符串到out中
  va_end(args); // 结束参数列表
  return ret;   // 返回格式化后的字符串长度
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

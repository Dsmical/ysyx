#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t t=0;
  while(*s++ != '\0'){
    t++;
  }
  return t;
}

char *strcpy(char *dst, const char *src) {
  char *tmp=dst;        //保存目标字符串的起始地址
  while(*src !='\0')
  *dst++=*src++;
  *dst='\0';        //字符串结束符
  return tmp;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for(i=0;i<n && src[i] != '\0';i++)
    dst[i]=src[i];
  for(;i<n;i++)
    dst[i]='\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t dst_len = strlen(dst);
  size_t i;
  for(i=0;src[i] != '\0';i++)
  dst[dst_len+i]=src[i];
  dst[dst_len+i]='\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1 && *s2 && *s1==*s2){
    s1++;
    s2++;
  }
  return (*s1-*s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i=0;
  while(*s1 && *s2 && *s1==*s2 && i<n){
    s1++;
    s2++;
    i++;
  }
  return (*s1-*s2);  
}

void *memset(void *s, int c, size_t n) {
  char *tmp =s;
  while(n--)
  *tmp++=c;
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  char *d=dst;
  const char *s = src;        //涉及内存重叠问题
  if(d<s){
    for(size_t i=0;i<n;i++)
    d[i]=s[i];
  }
  else{
    for(size_t i=n;i>0;i--)
    d[i-1]=s[i-1];
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
 char *d = out;
  const char *s = in;
  for (size_t i = 0; i < n; i++)
    d[i] = s[i];
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *p1 = s1;
  const unsigned char *p2 = s2;
  for (size_t i = 0; i < n; i++) {
    if (p1[i] != p2[i]) {
      return (p1[i] < p2[i]) ? -1 : 1;
    }
  }
  return 0; 
}

#endif

/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static int  index_buf=0;
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static uint32_t choose(uint32_t num){
 
  return rand()% num;
}

static void gen_num(){ 
  uint32_t num = rand() % 100;
  if(num ==0)num =1; 
  char str[3]; 
  sprintf(str, "%d", num);
  for(int i=0;i<strlen(str);i++){
    buf[index_buf++]= str[i];
 }
}

static void gen(char c){
  buf[index_buf++]=c;
}
static void gen_rand_op(){
  switch(choose(4)){
    case 0:buf[index_buf++]='+';break;
    case 1:buf[index_buf++]='-';break;
    case 2:buf[index_buf++]='*';break;
    default:{
      // 生成除法操作时，需要避免除数为0的情况
      uint32_t divisor;
      do {
        divisor = rand() % 100;  // 生成随机除数
      } while (divisor == 0);   // 避免除数为0
      char str[3];
      sprintf(str, "%d", divisor);
      buf[index_buf++] = '/';
      for (int i = 0; i < strlen(str); i++) {
        buf[index_buf++] = str[i];
      }
      gen_rand_op();//再随机生成一个运算符
      break;
    }
  }
}

static void gen_rand_expr() {
   if(index_buf > 65530)
       	printf("overSize\n");
   switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  } 
  int i;
  for (i = 0; i < loop; i ++) {
    index_buf = 0;              // 重置缓冲区索引
    memset(buf, 0, sizeof(buf)); //清空缓冲区内容
    gen_rand_expr();


    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    if (ret == 1) {
    // 检查表达式计算结果是否溢出
    if (result >= 0) {
        unsigned int final_result = (unsigned int)result;
        printf("%u %s\n", final_result, buf);
    }  else continue;
    } else printf("Error: Unable to read result\n");
    pclose(fp);

    //printf("%u %s\n", result, buf);
  }
  return 0;
}

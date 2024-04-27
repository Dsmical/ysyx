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
#include <common.h>

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  /*test expr()*/
  // FILE *fp = fopen("/home/dsm/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  //   assert(fp != NULL);
  //   word_t expr(char *e, bool *success);
  //   char line[65530];
  //   int result=0;
  //   int i=1;
  //   word_t value=0;
  //   bool flag =false;
  //   char expression[65536];
  //   while (fgets(line, sizeof(line), fp)) {
  //   if (sscanf(line, "%d %65530[^\n]", &result, expression) == 2) {
  //     value= expr(expression,&flag);
  //     //printf("Value:%d Result: %d, Expression: %s\n", value,(word_t)result, expression);
  //     printf("%d: Value:%u Result: %d\n", i++,value,result);       
  //   }else {printf("Error reading line\n");}
  //   }
  //   fclose(fp);

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}

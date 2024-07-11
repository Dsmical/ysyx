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

#include "sdb.h"

#define NR_WP 32
#include <utils.h>
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char exp[32];
  uint32_t value;
  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP *new_wp(char *exp){
  assert(free_!=NULL);
  WP *temp =free_;
  free_=free_->next;
  temp->next=NULL;

  bool success=false;
  strcpy(temp->exp,exp);
  temp->value=expr(temp->exp,&success);
  if(success)printf("watchpoint %d: %s = "FMT_WORD"  is set!\n", temp->NO, temp->exp,temp->value);
  assert(success);

  if(head==NULL){
    head=temp;
  }else{
    WP *p=head;
    while(p->next)
      p=p->next;
    p->next=temp;
  }
  return temp;
}

void free_wp(WP *wp){
  if(wp==NULL)printf("Error:no watchpoint!\n");
  if(wp==head)head=head->next;
  else{
    WP *p=head;
    while(p->next!=wp)p=p->next;
    p->next=wp->next;
  }
  wp->next=free_;
  free_=wp;
}

void delete_wp(int N){
  WP *p=head;
  while(p->NO!=N)p=p->next;
  if(p==NULL){
      printf("Erro:There is no watchpoint whose NO. is%d\n",N);
      assert(0);
    }
  else{
    free_wp(p);
    printf("Delete watchpoint NO.%d = %s successfully!\n",N,p->exp);
  }
}
void creat_wp(char *arg){
  new_wp(arg);
}
void wp_display(){
  WP *p=head;
  if(head==NULL)Log(ANSI_FG_RED"There is no watchpoint!"ANSI_NONE);
   while(p!=NULL){
    printf("Watchpoint: NO.%d: %s value:"FMT_WORD"\n",p->NO,p->exp,p->value);
    p=p->next;
   }
}
bool check_wp(){
  bool check = false;
  bool success = true;
  WP *tmp = head;//创建一个链表指向监视点
  word_t ans, pc;
  while(tmp != NULL) {//遍历链表所有的监视点
    ans = expr(tmp->exp, &success);//计算监视点表达式的当前值
    if(ans != tmp->value) {//如果当前值与之前值不相等
      check = true;
      pc = expr("$pc", &success);//打印程序pc
      Log(ANSI_FG_RED"Hit watchpoint %d at address "FMT_WORD ANSI_NONE, tmp->NO, pc);
      printf("Watchpoint %d: %s\n", tmp->NO, tmp->exp);//打印命中的监视点
      printf("Old value = "FMT_WORD"\n", tmp->value);//打印之前值
      printf("New value = "FMT_WORD"\n", ans);//打印当前值
      tmp->value = ans;//更新监视点表达式的值
    }
    tmp = tmp->next;//遍历所有监视点，指向下一个监视点
  }
  return check;
}

void _check_wp() {
  if (check_wp()) {
    if (npc_state.state == NPC_RUNNING)
      npc_state.state = NPC_STOP;
  }
}
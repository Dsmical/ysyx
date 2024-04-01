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
  if(success)printf("Creat wtachpoint successfull!\n");
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
    printf("Delete watchpoint %d successfully!\n",N);
  }
}
void creat_wp(char *arg){
  new_wp(arg);
}
void wp_display(){
  WP *p=head;
  if(head==NULL)printf("There is no watchpoint!\n");
   while(p!=NULL){
    printf("Watchpoint: NO.%d exp=%s value=%d\n",p->NO,p->exp,p->value);
    p=p->next;
   }
}
void check_wp(){
  WP *p=head;
  while(p!=NULL){
    bool success=false;
    int temp=expr(p->exp,&success);
    printf("temp=%d exp=%s value%d\n",temp,p->exp,p->value);
    if(success){
      void sdb_mainloop();
      if(temp!=p->value){
        nemu_state.state=NEMU_STOP;
        printf("Trigger watchpoint program to stop\n");
        sdb_mainloop();
        return;
      }
    }
    else{
      printf("expr error\n");
      assert(0);
    }
    p=p->next;
  }
}
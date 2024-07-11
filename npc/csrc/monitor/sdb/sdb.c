/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NPC is licensed under Mulan PSL v2.
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

#include <isa.h>
// #include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;
void cpu_exec(uint64_t n);
void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(NPC) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args)
{
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args)
{
  npc_state.state = NPC_QUIT;
  return -1;
}
/* Function declaration*/
static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);

static struct
{
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NPC", cmd_q},
    {"si", "Let the program step through N instructions and then pause execution,default:N=1", cmd_si},
    {"info", "r:Print register status w:Print watch information", cmd_info},
    {"x", "Output N consecutive 4 bytes in hexadecimal form starting from the start address", cmd_x},
    {"p", "Evaluate the expression", cmd_p},
    {"w", "Add the watchpoint", cmd_w},
    {"d", "Delete the watchpoint",cmd_d},
    /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_w(char *args){
  char *arg = strtok(NULL, " ");
  creat_wp(arg);
  return 0;
}
static int cmd_d(char *args){
  char *arg = strtok(NULL, " ");
  int N=0;
  sscanf(arg,"%d",&N);
  delete_wp(N);
  return 0;
}
static int cmd_p(char *args)
{
  char *arg = strtok(NULL, " ");
  bool state = false;
  if (arg == NULL)
  {
    /* no argument given */
    printf("Error:please enter argument !\n");
    return 0;
  }
  else
  {
    printf("value=%x\n",expr(arg, &state));
  }
  return 0;
}

static int cmd_info(char *args)
{
  char *arg = strtok(NULL, " ");
  if (arg == NULL){
  /* no argument given */
    printf("Error:please enter argument r or w!\n");
    return 0;
  }else if (strcmp(arg, "r") == 0){
    isa_reg_display();
    return 0;
  }else if (strcmp(arg, "w") == 0){
    wp_display();
    return 0;
  }else{
    printf("Unknown argument '%s'\n", arg);
    return 0;
    }
}

static int cmd_x(char *args)
{
  char *arg = strtok(NULL, " ");
  char *arg2 = strtok(NULL, " ");
  int i;
  int N;
  vaddr_t EXPR;
  if (arg == NULL || arg2 == NULL)
  {
    /* no argument given */
    printf("Error:please enter argument(x N EXPR) !\n");
    return 0;
  }
  sscanf(arg, "%d", &N);
  sscanf(arg2, "%x", &EXPR);
  for (i = 0; i < N; i++)
  {
    printf("%x:%08x\n", EXPR, paddr_read(EXPR, 4));
    EXPR += 4;
  }
  return 0;
}

static int cmd_help(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL)
  {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
    {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else
  {
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(arg, cmd_table[i].name) == 0)
      {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  uint64_t n = 0;
  char ch;
  if (arg == NULL)
  {
    /* no argument given */
    cpu_exec(1);
    return 0;
  }
  while (*arg != '\0')
  {
    ch = *arg++;
    if (ch < '0' || ch > '9')
    {
      printf("Error:N is not a number!\n");
      return 0;
    }
    n = n * 10 + (ch - '0');
  }
  if (n == 0)
    n = 1;
  cpu_exec(n);
  return 0;
}

void sdb_set_batch_mode()
{
  is_batch_mode = true;
}

void sdb_mainloop()
{
  if (is_batch_mode)
  {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL;)
  {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL)
    {
      continue;
    }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end)
    {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(cmd, cmd_table[i].name) == 0)
      {
        if (cmd_table[i].handler(args) < 0)
        {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD)
    {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}

void init_sdb()
{
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
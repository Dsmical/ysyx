
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

int main () {
    for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);
     printf("str:%s\n",str);
    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }
    printf("cmd:%s\n",cmd);
   
    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    printf("arg:%s\n",args);
    if (args >= str_end) {
      args = NULL;
    }
    
    }
    return 0;
}

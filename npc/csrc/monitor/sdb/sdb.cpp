#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "expr.h"
#include "../../cpu/cpu.h"
#include "../../reg/reg.h"
#include "../../memory/mem.h"
// #include "sdb.h"
// #include "Vtop.h"

#define MAX_LEN 10

extern Vtop *top;

static int is_batch_mode = false;

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int str2int(char *arg, int max_len) {
  int num_step = 0;
  char ch = 0;
  int i = 0;
  int len_arg = strlen(arg); 
  if(len_arg > max_len) {
    printf("Exceed maximum digit.\n");
    return -1;
  }
  else
  for(i = 0; i < len_arg; i ++) {
    ch = arg[i];
    if(ch >= '0' && ch <= '9') {
      num_step = (ch - '0') + num_step * 10; 
    }
    else
    {
      printf("Unidentified argument.\n");
      break;
    }
  }
  return (i == len_arg) ? num_step : -1;
}

static int cmd_help(char *args);
static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}
static int cmd_q(char *args) {
    return -1;
}
static int cmd_info(char *args);
static int cmd_si(char *args);
static int cmd_x(char *args);

static struct {
    const char* name;
    const char *description;
    int (*handler) (char *);
} cmd_tbl[] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NPC", cmd_q },
  { "si", "Step into instruction, steps = N", cmd_si},
  { "x", "Examine N 4-byte words in hexadecimal starting from address EXPR", cmd_x},
  { "info", "Display the state of reg or watch point info", cmd_info}
};
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_tbl) 

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_tbl[i].name, cmd_tbl[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_tbl[i].name) == 0) {
        printf("%s - %s\n", cmd_tbl[i].name, cmd_tbl[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char* args) {
  /* extract the first argument*/
  char *arg = strtok(NULL, "\0");
  int num_step = 0;

  if(arg == NULL)
    /* no argument given, default value*/
    cpu_exec(1);
  else {
    /* string to int */
    int ret = 0;
    ret = str2int(arg, MAX_LEN);
    if(ret >= 0) {
      num_step = ret;
      cpu_exec(num_step);
    }
  }
  return 0;
}

static int cmd_x(char* args) {
  /* extract two arguments*/
  char *arg1 = strtok(NULL, " ");
  char *arg2 = strtok(NULL, "\0");

  int num_words = 0;
  uint32_t inst;

  if(arg1 != NULL) {
    /* filter first argument*/
    int ret = 0;
    ret = str2int(arg1, MAX_LEN);
    if(ret >= 0) {
      /* string to int */
      num_words = ret;

      /* filter second argument*/
      //printf("arg2 = %s\n", arg2);
      static int idx = 1;
      uint32_t buf = 0;
      uint32_t exp = 0;
      bool success = true;

      if(arg2 != NULL) {
        /*evaluate the expression*/
        buf = expr(arg2, &success);
        // buf = 0x80000000;

        if(success == true) {
          exp = buf; 
          idx ++;
        }
        else {
          printf("A syntax error in expression!\n");
          return 0;
        }
        uint32_t exp_index;
        for(int i = 0; i < num_words; i ++) {
          exp_index = exp + 4 * i;
          inst = paddr_read(exp_index, 4);
          printf("0x%08x: 0x%02x 0x%02x 0x%02x 0x%02x\n", \
          exp_index, (inst>>24) & 0xFF, (inst>>16) & 0xFF, (inst>>8) & 0xFF, inst & 0xFF);
        }
        return 0;
      }
    }
  }
  printf("Argument required or unidentified.\n" );
  printf("x N EXPR        (Example: x 1 0x80000000)\n");
  return 0;
}

static int cmd_info(char* args) {
  /* extract the first argument*/
  char *arg = strtok(NULL, " ");

  if(arg != NULL)
  if(strlen(arg) == 1) {
    switch (arg[0])
    {
    case 'r':
      /* state of register */
      isa_reg_display();
      break;
    // case 'w':
    //   /* info of watch point*/
    //   wp_all_display();
    //   break;
    default:
      printf("Argument required\n");
      printf("info r      display the state of regs\n");
      printf("info w      display the info of watch point\n");
      break;
    }
    return 0;
  }
  printf("Argument required\n");
  printf("info r      display the state of regs\n");
  printf("info w      display the info of watch point\n");
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    // cmd_c(NULL);
    return;
  }

  printf("\n");
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_tbl[i].name) == 0) {
        if (cmd_tbl[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
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

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char* args);

static int cmd_info(char* args);

static int cmd_x(char* args);

static int cmd_p(char* args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Step into instruction, steps = N", cmd_si},
  { "info", "Display the state of reg or watch point info", cmd_info},
  { "x", "Examine N 4-byte words in hexadecimal starting from address EXPR", cmd_x},
  { "p", "Evaluate the value of the expression", cmd_p},

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char* args) {
  /* extract the first argument*/
  char *arg = strtok(NULL, " ");
  char ch;

  int i;
  int len_arg;
  int num_step = 0;

  if(arg == NULL)
    /* no argument given, default value*/
    cpu_exec(1);
  else {
    len_arg = strlen(arg);
    if(len_arg > 10) {
      printf("Exceed maximum digit.\n");
    }
    else {
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
      if(i == len_arg) {
        cpu_exec(num_step);
      }
    }
  }
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
    case 'w':
      /* info of watch point*/
      break;
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

static int cmd_x(char* args) {
  /* extract two arguments*/
  char *arg1 = strtok(NULL, " ");
  char *arg2 = strtok(NULL, "\0");

  int num_words = 0;
  int len_arg;
  int i;
  char ch;
  word_t inst;

  if(arg1 != NULL) {
    /* filter first argument*/
    len_arg = strlen(arg1); 
    if(len_arg > 10) {
      printf("Exceed maximum digit.\n");
    }
    else {
      for (i = 0; i < len_arg; i++)
      {
        ch = arg1[i];
        if(ch >= '0' && ch <= '9') {
          /* get first argument*/
          num_words = (ch - '0') + num_words * 10;
        }
        else
        {
          printf("Unidentified argument.\n");
          break;
        }
      }
      if(i == len_arg) {
        /* filter second argument*/
        //printf("arg2 = %s\n", arg2);
        static int idx = 1;
        uint32_t buf = 0;
        uint32_t exp = 0;
        bool success;

        if(arg2 != NULL) {
          /*evaluate the expression*/
          buf = expr(arg2, &success);

          if(success == true) {
            exp = buf; 
            idx ++;
          }
          else {
            printf("A syntax error in expression!\n");
            return 0;
          }
        }
        word_t exp_index;
        for(i = 0; i < num_words; i ++) {
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

static int cmd_p(char* args) {
  bool success;
  static int idx = 1;
  unsigned int result;

  char *arg = strtok(NULL, "\0");
  if(arg != NULL) {
    result = expr(arg, &success);

    if(success == true) {
      printf("$%d = %d\n", idx, result);
      idx ++;
    }
    else {
      printf("A syntax error in expression!\n");
    }
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

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

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

#define LEN_BUF 65535
#define LEN_DIVI_BUF 65535

int sign_divi_by_zero = 0;

// this should be enough
static char buf[LEN_BUF] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static void gen_num() {
  char str[20];
  sprintf(str, "%d", rand() % 100);
  if((strlen(buf) + strlen(str)) < LEN_BUF)
  strcat(buf, str);
}

static void gen(char ch) {
  char str[] = {ch, '\0'};
  if((strlen(buf) + strlen(str)) < LEN_BUF)
  strcat(buf, str);
}

static void gen_rand_op() {
  const char operator[] = {'+', '-', '*', '/'};
  char rand_op = operator[rand() % 4];
  char str[] = {rand_op, '\0'};
  if((strlen(buf) + strlen(str)) < LEN_BUF) {
    strcat(buf, str);
  }
}

static void gen_rand_space() {
  switch (rand() % 2) {
    case 0:
      break;
    case 1:
      gen(' '); 
      gen_rand_space();
      break;
    default:
      gen_rand_space();
      break;
    }
}

static void gen_rand_expr() {
  //buf[0] = '\0';
  switch(rand() % 3) {
    case 0: 
      gen_rand_space();
      gen_num(); 
      gen_rand_space();
      break;
    case 1: 
      gen_rand_space();
      gen('('); 
      gen_rand_expr(); 
      gen(')'); 
      gen_rand_space();
      break;
    default: 
      gen_rand_expr(); 
      gen_rand_op(); 
      gen_rand_expr(); 
      break;
  }
}

static int figure_divi_zero(int i) {
  static int check_state = 0;
  static char sub_result[100];
  static char code_sub_result[228];
  memset(code_sub_result, 0, sizeof(code_sub_result));
  memset(sub_result, 0, sizeof(sub_result));
  static int state_parens = 0;
  static int substr_start_index = 0;

  int local_state_parens  = state_parens;
  static int local_state_parens_2 = 0;
  int local_substr_start_index = 0;

  
  // printf("%d: %d\n", i, check_state);
  if(buf[i] == '/' && check_state != 2) { 
    memset(sub_result, 0, sizeof(sub_result));
    check_state = 1; 
    return 0;
  }
  /* Figure token after division*/
  if(check_state == 1) {
    switch (buf[i])
    {
    case '0':
      check_state = 0;
      buf[i] ++;
      return 2;
      break;
    case '(':
      check_state = 2;
      substr_start_index = i;
      //local_substr_start_index = i;
      break;
    case ' ':
      break;
    default:
      check_state = 0;
      return 2;
      break;
    }
  }
  /* Surrounded by pair of parens*/
  if(check_state == 2) {      
    if(buf[i] == '(') state_parens ++;
    else if(buf[i] == ')') state_parens --;

    if(buf[i ] == '/') {
      /* Store the start index of sub str */
      local_substr_start_index = substr_start_index;
      local_state_parens_2 = state_parens;
      int j = 0;
      check_state = 1;
      
      for (; j < 100; j ++)
      {
        if(figure_divi_zero(i + j) == 2) break;
      }
      substr_start_index = local_substr_start_index;
    }
    printf("buf[%d] = %c \t parens = %d \t local_parens = %d \t substr_start = %d, local%d, check_state = %d)\n", 
    i, buf[i], state_parens, local_state_parens_2, substr_start_index, local_substr_start_index, check_state);
    /* completely surrounded by pair of parens*/
    if(local_state_parens_2 == state_parens && local_state_parens == state_parens + 1) {
      strncpy(sub_result, buf + substr_start_index, i - substr_start_index + 1);
      sub_result[i - substr_start_index + 1] = '\0';
      //printf("%d: sub_result = %s\n", i, sub_result);
      //check_state = 0;
    }
    if(state_parens == 0) check_state = 0;
  }
  /* evaluate express after division*/
  if(sub_result[0] != '\0') {
    sprintf(code_sub_result, code_format, sub_result);
    //printf("%s\n", sub_result);
    FILE *fp = fopen("/tmp/.code_sub.c", "w");
    assert(fp != NULL);
    fputs(code_sub_result, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code_sub.c -o /tmp/.expr_sub");
    if (ret != 0) return 1;

    fp = popen("/tmp/.expr_sub", "r");
    assert(fp != NULL);

    unsigned int result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

    printf("sub_result:%u %s\n", result, sub_result);
    if(result == 0) {
      memset(buf + substr_start_index, ' ', strlen(sub_result) - 1);
      memset(buf + substr_start_index + strlen(sub_result) - 1, '1', 1);
    }
    printf("buf = %s\n", buf);
    memset(sub_result, 0, sizeof(sub_result));
    memset(code_sub_result, 0, sizeof(code_sub_result));

    return 2;
  }
  return 0;
}

static void check_divi_zero() {
  
  for (int i = 0; buf[i] != '\0'; i++)
  {
    figure_divi_zero(i);
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
    gen_rand_expr();
    memset(buf, 0, sizeof(buf));
    strcpy(buf, "32/((1/((9-9)) / 0)) + 2");

    check_divi_zero();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    unsigned int result;
    ret = fscanf(fp, "%u", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
    memset(buf, 0, sizeof(buf));
  }
  return 0;
}

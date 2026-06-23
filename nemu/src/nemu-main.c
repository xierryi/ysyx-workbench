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

#include <common.h>
#include "../src/monitor/sdb/sdb.h"

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

void expr_test() {
  bool suceess = false;
  FILE *fp = fopen("tools/gen-expr/input", "r");
  assert(fp != NULL);

  unsigned int result;
  char express[65535];
  #define NUM_EXP 10000
  unsigned int i = 0;
  uint32_t expr_result = 0;
  while(fscanf(fp, "%u %[^\n]", &result, express) == 2) {
    expr_result = expr(express, &suceess);
      if(result == expr_result) {
        // printf("√\n");
        i ++;
      }
      else {
        printf("×××××××××××××××××××××\n");
    
        printf("结果: %u\n", expr_result);
        printf("正确结果: %u\n", result);
        printf("表达式: %s\n", express);
        printf("---\n");
      }
  }
  printf("rate: %d/%d\n", i, NUM_EXP);

  //expr();
}

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Test expr*/
  // expr_test();

  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}

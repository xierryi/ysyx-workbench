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

#include "sdb.h"

#define NR_WP 32
#define EXP_LENGTH 64

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char exp[EXP_LENGTH];
  unsigned int old_val;

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

  head = NULL; // in use
  free_ = wp_pool; // unused
}

void new_wp(char *str) {
  bool success;
  unsigned int buf;
  WP* wp_new = free_;
  if(wp_new == NULL) assert(0);
  else {
    /* save data in wp_new*/
    if(strlen(str) > EXP_LENGTH) {
      printf("Exceed maximum length of expr!\n");
    }
    strcpy(wp_new->exp, str);

    buf = expr(str, &success);
    if(success == false) {
      printf("A syntax error in expression!\n");
      return;
    }
    wp_new->old_val = buf;
    /* delete the top one in free_ */
    free_ = free_->next;

    /* add into the end of head */
    if(head == NULL) {
      head = wp_new;
    }
    else {
      WP* wp_head_end = head;
      for (; wp_head_end->next != NULL; wp_head_end = wp_head_end->next);
      wp_head_end->next = wp_new;
    }
    
    wp_new->next = NULL;
    printf("Hardware watchpoint %d: %s\n", wp_new->NO, wp_new->exp);
  }
}

bool diff_wp_val() {
  bool success, isdiff;
  unsigned int buf, result;

  WP *wp_buf = head; // get used pools
  isdiff = false;
  
  if(wp_buf == NULL) return false;

  while(wp_buf != NULL) {
    buf = expr(wp_buf->exp, &success);
    if(success == false) {
      printf("A syntax erroe in expression!\n");
      assert(0);
    }
    result = buf;
    /* estimate whether the val of expr changes*/
    if(result == wp_buf->old_val);
    else {
      printf("\nHardware watchpoint %d: %s\n\nOld value = %d\nNew value = %d\n",
      wp_buf->NO, wp_buf->exp, wp_buf->old_val, result);

      wp_buf->old_val = result;
      isdiff = true;
    }
    wp_buf = wp_buf->next;
  }
  return isdiff;
}

static void free_wp(WP *wp) {
  /* delete wp in head */
  WP *wp_last = head;
  if(wp_last == wp) {
    head = NULL;
  }
  else {
    while (wp_last->next != wp) {
      wp_last = wp_last->next;
    }
    wp_last->next = wp->next;
  }

  /* add into free_*/
  wp->next = free_;
  free_ = wp;
}

void delete_wp(int N) {
  if (head == NULL || N >= NR_WP) printf("No breakpoint number %d.\n",N);
  else {
    WP* wp_del = head;
    for (; wp_del != NULL; wp_del = wp_del->next) {
      if (wp_del->NO == N) {
        free_wp(wp_del);
        break;
      }
    }
    if(wp_del == NULL) {
      printf("No breakpoint number %d.\n",N);
    }
  }
}

void wp_all_display() {
  if(head == NULL) printf("No watchpoints.\n");
  else {
    printf("Num\tWhat\n");
    for (WP* wp_buf = head; wp_buf != NULL; wp_buf = wp_buf->next) {
      printf("%d\t%s\n", wp_buf->NO, wp_buf->exp);  
    }
  }
}
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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#define LEN_TOKES 65535

const int op_low_preced[] = {'+', '-', '*', '/'};

enum {
  TK_NOTYPE = 256, TK_EQ, TK_INTDEC

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"-", '-'},           // minus
  {"\\*", '*'},         // times
  {"\\/", '/'},         // divide
  {"\\(", '('},         // left parens 
  {"\\)", ')'},         // right parens 
  {"[0-9]+", TK_INTDEC},// decimal integer 
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[LEN_TOKES] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;


  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case '+': tokens[nr_token].type = '+'; nr_token ++; break;
          case '-': tokens[nr_token].type = '-'; nr_token ++; break;
          case '*': tokens[nr_token].type = '*'; nr_token ++; break;
          case '/': tokens[nr_token].type = '/'; nr_token ++; break;
          case '(': tokens[nr_token].type = '('; nr_token ++; break;
          case ')': tokens[nr_token].type = ')'; nr_token ++; break;
          case TK_EQ: tokens[nr_token].type = TK_EQ; nr_token ++; break;
          case TK_INTDEC: 
            tokens[nr_token].type = TK_INTDEC;
            if(substr_len > sizeof(tokens[nr_token].str)) Assert(0, "substr_len exceed dest len");
            strncpy(tokens[nr_token].str, substr_start, substr_len);

            nr_token ++;
            break;

          default: Assert(0, "ERROR");//TODO();
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static bool check_parentheses(Token *p, Token *q) {
  /* state of parentheses matching
   * left parens: +1 
   * right parens: -1
  */
  int state_parens = 0;
  /* whether surrounded by a matched pair of parentheses */
  if (p->type == '(' && q->type == ')') {
    /* eliminate error matching*/
    for (Token *pos_parens = p; pos_parens <= q; pos_parens ++)
    {
      if (pos_parens->type == '(') state_parens ++;
      else if (pos_parens->type == ')') state_parens --;

      if (pos_parens < q && state_parens < 1) return false;
    }
    if (state_parens == 0) return true;
  }
  return false;
}

static uint32_t eval(Token *p, Token *q) {
  if(p > q) {
    Assert(0, "Bad expression");
    return 0;
    /* Bad expression*/
  }
  else if(p == q) {
    /* Single token. 
     * For now this token should be a number.
     * Return the value of number.
    */
    return atoi(p->str);
  }
  else if(check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is a case, just throw away the parentheses.
     */
    
    return eval(p + 1, q - 1);
  }
  else {
    /* Find the main operator, which is the lowest precedence level */
    /* state of parentheses matching
    * left parens: +1 
    * right parens: -1
    */
    int state_parens = 0;

    Token *main_op = NULL;
    int op_type = 0;
    uint32_t val1, val2;

    bool isbreak = false;

    for (int i = 0; i < sizeof(op_low_preced); i++)
    {
      /* From left to right*/
      for(Token *op = q; op >= p; op --) {
        /* order: +,-,*,/ */
        if(op->type == ')') state_parens --;
        else if(op->type == '(') state_parens ++;
        else if(op->type == op_low_preced[i] && state_parens == 0)
        {
          op_type = op->type;
          main_op = op;

          isbreak = true;
          break;
        }
      }
      if(isbreak == true) {
        isbreak = false;
        break;
      }
    }

    /* evaluate sub-expression*/
    val1 = eval(p, main_op - 1);
    val2 = eval(main_op + 1, q);
    
    switch (op_type)
    {
      case '+': return val1 + val2; break;
      case '-': return (val1 - val2 >= 0) ? val1 - val2 : 0; break;
      case '*': return val1 * val2; break;
      case '/': return val1 / val2; break;
      
      default: Assert(0, "Error operator type");
    }
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  uint32_t result;
  
  //printf("tokens->type = %d, tokens->str = %s\n", tokens->type, tokens->str);
  /* left bound pointer, and right bound pointer minus '\0'*/
  result = eval(tokens, tokens + nr_token - 1);

  /* clear buffer */
  memset(tokens, 0, sizeof(tokens));
  nr_token = 0;

  printf("result: %u\n", result);

  return result;
}

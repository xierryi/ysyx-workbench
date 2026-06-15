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
#include <memory/paddr.h>


#define LEN_TOKES 65535

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NEQ, TK_LGAND, TK_LGOR, \
  TK_INTDEC, TK_INTHEX, TK_REGVAL, TK_DEREF, TK_NEGA,

  /* TODO: Add more token types */

};

const int op_low_preced[][4] = {
  {TK_LGOR},
  {TK_LGAND}, 
  {TK_EQ, TK_NEQ},
  {'+', '-'},
  {'*', '/'},
  {TK_DEREF},
  {TK_NEGA},
};

/* For reg name regex */
char reg_name_regex[256];

static void reg_name_config() {
  char regex_buf[256] = "\\$(";
  char temp[8];
  bool first = true;
  
  // 从 isa.h 或外部获取 regs 数组
  extern const char *regs[];
  extern int size;
  
  for (int i = 0; i < size; i++) {
    if (!first) {
      strcat(regex_buf, "|");
    }
    first = false;
    
    /* Be aware of $0 */
    const char *p = regs[i];
    if(*p == '$') {
      sprintf(temp, "\\%s", regs[i]);
    }
    else
    sprintf(temp, "%s", regs[i]);
   
    strcat(regex_buf, temp);
  }
  
  strcat(regex_buf, ")");
  
  strcpy(reg_name_regex, regex_buf);  // 注意需要释放内存
}

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},           // minus
  {"\\*", '*'},         // times or deref
  {"\\/", '/'},         // divide
  {"\\(", '('},         // left parens 
  {"\\)", ')'},         // right parens 
  {"==", TK_EQ},        // equal
  {"!=", TK_NEQ},       // not equal
  {"&&", TK_LGAND},     // logical and
  {"\\|\\|", TK_LGOR},  // logical or
  {"0x[0-9a-fA-F]+", TK_INTHEX}, // hex integer, before decimal in order to figure 0 firstly
  {"[0-9]+", TK_INTDEC},// decimal integer 
  {reg_name_regex, TK_REGVAL}, //reg value
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

  reg_name_config(); // To generate the rule of matching reg name 

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

static void set_deref_tokens() {
  for (int i = 0; i < nr_token; i++)
  {
    if(tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == '(' || \
      tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || \
      tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || \
      tokens[i - 1].type == TK_LGAND || tokens[i - 1].type == TK_LGOR || \
      tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NEQ  )) { 
      tokens[i].type = TK_DEREF;
    }
  }
}

static void set_nega_tokens() {
  for (int i = 0; i < nr_token; i++)
  {
    if(tokens[i].type == '-' && (i == 0 || tokens[i - 1].type == '(' || \
      tokens[i - 1].type == '+' || tokens[i - 1].type == '-' || \
      tokens[i - 1].type == '*' || tokens[i - 1].type == '/' || \
      tokens[i - 1].type == TK_LGAND || tokens[i - 1].type == TK_LGOR || \
      tokens[i - 1].type == TK_EQ || tokens[i - 1].type == TK_NEQ  )) { 
      tokens[i].type = TK_NEGA;
    }
  }
}

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

        /* for test */
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
          case TK_NEQ: tokens[nr_token].type = TK_NEQ; nr_token ++; break;
          case TK_LGAND: tokens[nr_token].type = TK_LGAND; nr_token ++; break;
          case TK_LGOR: tokens[nr_token].type = TK_LGOR; nr_token ++; break;
          case TK_INTHEX: tokens[nr_token].type = TK_INTHEX;
            if(substr_len > sizeof(tokens[nr_token].str)) Assert(0, "substr_len exceed dest len");
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            nr_token ++;
            break;
          case TK_INTDEC: tokens[nr_token].type = TK_INTDEC;
            if(substr_len > sizeof(tokens[nr_token].str)) Assert(0, "substr_len exceed dest len");
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            nr_token ++;
            break;
          case TK_REGVAL:
            bool success; 
            unsigned int reg_val = 0;

            char reg_name[8];

            substr_start ++; //ignore $
            strncpy(reg_name, substr_start, substr_len - 1); // ignore $
            reg_name[substr_len - 1] = '\0'; // prevent unpredictable error

            reg_val = isa_reg_str2val(reg_name, &success);
            if (success == true) {
              tokens[nr_token].type = TK_REGVAL;
              if(substr_len > sizeof(tokens[nr_token].str)) Assert(0, "substr_len exceed dest len");

              char str[16];
              sprintf(str, "%d", reg_val);
              strncpy(tokens[nr_token].str, str, strlen(str));
              nr_token ++;
            }
            else {
              
            }
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
  // printf("nr_token: %d\n", nr_token);

  return true;
}

static bool check_parentheses(Token *p, Token *q, bool* success) {
  /* state of parentheses matching
   * left parens: +1 
   * right parens: -1
  */
  int state_parens = 0;
  bool is_fake_surrounded = false;
  
  /* eliminate error matching*/
  for (Token *pos_parens = p; pos_parens <= q; pos_parens ++)
  {
    if (pos_parens->type == '(') state_parens ++;
    else if (pos_parens->type == ')') state_parens --;

    /* exclude format like: () + ()*/
    if (pos_parens < q && state_parens < 1) is_fake_surrounded = true;
  }
  /* parentheses match fails */
  if(state_parens != 0) {
    *success = false;
    printf("Parentheses do not match!\n");
  }
  /* whether surrounded by a matched pair of parentheses */
  if (p->type == '(' && q->type == ')')
  if (state_parens == 0 && is_fake_surrounded == false) return true;

  return false;
}

static unsigned int eval(Token *p, Token *q, bool *success) {
  if(*success == false) return 0;
  else {
    if(p > q) {
      //Assert(0, "Bad expression");
      *success = false;
      return 0;
      /* Bad expression*/
    }
    else if(p == q) {
      /* Single token. 
      * For now this token should be a number.
      * Return the value of number.
      */
      char *endptr;
      return (unsigned int)strtol(p->str, &endptr, 0);
    }
    else if(check_parentheses(p, q, success) == true) {
      /* The expression is surrounded by a matched pair of parentheses.
      * If that is a case, just throw away the parentheses.
      */
      
      return eval(p + 1, q - 1, success);
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
      unsigned int val1 = 0, val2 = 0;

      bool isbreak = false;

      for (int i = 0; i < sizeof(op_low_preced)/ sizeof(op_low_preced[0]); i ++)
      {
        /* From left to right*/
        for(Token *op = q; op >= p; op --) {
          /* order: +,-,*,/ */
          // if(op->type == TK_INTDEC || op->type == TK_INTHEX)
          //   printf("p->type = %d, q->type = %d, op_str = %s\n", p->type,q->type, op->str);
          // else {
          //   printf("p->type = %d, q->type = %d, op_type = %d\n", p->type,q->type, op->type);
          // }
          if(op->type == ')') state_parens --;
          else if(op->type == '(') state_parens ++;
          else if(state_parens == 0) {
            for (int j = 0; op_low_preced[i][j] != 0; j++)
            {
              if(op->type == op_low_preced[i][j]){
                op_type = op->type;
                main_op = op;

                isbreak = true;
                break;
              }
            }
            if(isbreak == true) {
              break;
            }
          }
        }
        if(isbreak == true) {
          isbreak = false;
          break;
        }
      }
      //printf("main_op: %c\n", main_op->type);

      /* evaluate sub-expression*/
      if(!(op_type == TK_NEGA || op_type == TK_DEREF)) 
      val1 = eval(p, main_op - 1, success);
      val2 = eval(main_op + 1, q, success);
      
      switch (op_type)
      {
        case '+': return (val1 + val2); break;
        case '-': return (val1 - val2 >= 0) ? val1 - val2 : 0; break;
        case '*': return (val1 * val2); break;
        case '/': 
          if(val2 == 0) {
            printf("Zero can't used as a divisor!\n");
            *success = false;
            return 0;
          }
          else {
            return val1/val2;
          }
          break;
        case TK_EQ: return (val1 == val2); break;
        case TK_NEQ: return (val1 != val2); break;
        case TK_LGAND: return (val1 && val2); break;
        case TK_LGOR: return (val1 || val2); break;
        case TK_DEREF: return (paddr_read(val2, 1)); break;
        case TK_NEGA: return (-val2); break;
        
        default: *success = false; return 0 ;break;
      }
    }
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    /* clear buffer */
    memset(tokens, 0, sizeof(tokens));
    nr_token = 0;

    return 0;
  }

  unsigned int result;

  /* DEREF figure*/
  set_deref_tokens();
  /* NEGATIVE figure*/
  set_nega_tokens();
  
  /* left bound pointer, and right bound pointer minus '\0'*/
  *success = true;
  result = eval(tokens, tokens + nr_token - 1, success);

  /* clear buffer */
  memset(tokens, 0, sizeof(tokens));
  nr_token = 0;

  //printf("result: %u\n", result);

  return result;
}

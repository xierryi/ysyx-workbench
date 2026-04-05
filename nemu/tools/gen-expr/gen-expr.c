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

int sign_divi_by_zero = 0;

// this should be enough
static char buf[LEN_BUF] = {};
static char code_buf[LEN_BUF + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned int result = 0U + %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static void gen_num() {
  char str[20];
  sprintf(str, "%uU", rand() % 100);
  if((strlen(buf) + strlen(str)) < LEN_BUF - 200)
  strcat(buf, str);
}

static void gen(char ch) {
  char str[] = {ch, '\0'};
  if((strlen(buf) + strlen(str)) < LEN_BUF - 200)
  strcat(buf, str);
}

static void gen_rand_op() {
  const char operator[] = {'+', '-', '*', '/'};
  char rand_op = operator[rand() % 4];
  char str[] = {rand_op, '\0'};
  if((strlen(buf) + strlen(str)) < LEN_BUF - 200) {
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

// Forward declaration
static void gen_rand_expr();

/**
 * Evaluate a sub-expression by compiling and running it
 * @param expr The expression to evaluate
 * @return The evaluated result
 */
static unsigned int evaluate_expression(const char *expr) {
    char temp_code[5128];
    sprintf(temp_code, code_format, expr);
    
    FILE *fp = fopen("/tmp/.code_sub.c", "w");
    assert(fp != NULL);
    fputs(temp_code, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code_sub.c -o /tmp/.expr_sub 2>/dev/null");
    if (ret != 0) return 1;  // Compilation error, assume non-zero

    fp = popen("/tmp/.expr_sub", "r");
    assert(fp != NULL);

    unsigned int result = 1;  // Default to non-zero
    int items_read = fscanf(fp, "%u", &result);
    pclose(fp);
    
    // If fscanf failed, return 1 (non-zero) to avoid false positive
    if (items_read != 1) return 1;
    
    return result;
}

/**
 * Generate a non-zero expression (for divisor position)
 * Recursively generates and checks if the value is zero, regenerates if zero
 * This is called DURING expression generation, right after a '/' operator
 */
static void gen_nonzero_expr() {
    // Save current buffer position
    int saved_len = strlen(buf);
    
    // Generate an expression (may include nested divisions)
    gen_rand_expr();
    
    // Extract the generated sub-expression
    char sub_expr[LEN_BUF];
    strcpy(sub_expr, buf + saved_len);
    
    // Evaluate the generated expression
    unsigned int result = evaluate_expression(sub_expr);

    // Extract the first non-space token of sub_expr
    char *first_token = sub_expr;
    while(*first_token == ' ') {
        first_token ++;
    }
    
    // If result is zero, or first non-space token is zero, roll back and try again
    if (result == 0 || *first_token == '0') {
        buf[saved_len] = '\0';  // Roll back to before this expression
        sign_divi_by_zero = 1;   // Mark that we fixed division by zero
        gen_nonzero_expr();      // Try generating a different expression
    }
}

/**
 * Generate a random expression with division-by-zero prevention
 * When generating a division operator, it ensures the divisor is non-zero
 */
static void gen_rand_expr() {
    switch(rand() % 4) {
        case 0:  // Binary operation: left op right
            gen_rand_expr(); 
            gen_rand_op();
            
            // Check if the operator is division
            // We need to look at the last character added to buf
            int len = strlen(buf);
            if (len > 0 && buf[len-1] == '/') {
                // Division operator - generate non-zero divisor
                gen('(');
                gen_nonzero_expr();
                gen(')');
            } else {
                // Not division - generate normal expression
                gen_rand_expr();
            }
            break;
            
        case 1:  // Parenthesized expression
            gen_rand_space();
            gen('('); 
            gen_rand_expr(); 
            gen(')'); 
            gen_rand_space();
            break;
            
        default:  // Number
            gen_rand_space();
            gen_num(); 
            gen_rand_space();
            break;
    }
}

static void remove_U(char *str) {
    char *read = str;
    char *write = str;
    while(*read) {
        if(*read != 'U') {
            *write ++ = *read; 
        }
        read ++;
    }
    *write = '\0';
}
/**
 * Main function to generate and test expressions
 * All division by zero is prevented during generation
 */
int main(int argc, char *argv[]) {
    int seed = time(0);
    srand(seed);
    int loop = 1;
    if (argc > 1) {
        sscanf(argv[1], "%d", &loop);
    }
    
    int i;
    for (i = 0; i < loop; i++) {
        buf[0] = '\0';  // Clear buffer
        sign_divi_by_zero = 0;
        
        // Generate expression with built-in division-by-zero prevention
        gen_rand_expr();
        /* TEST */
        //memset(buf, 0, sizeof(buf));
        // strcpy(buf, "( 33)*(4) * 97     /(17)/31");
        // Compile and run the generated expression
        sprintf(code_buf, code_format, buf);
        
        FILE *fp = fopen("/tmp/.code.c", "w");
        assert(fp != NULL);
        fputs(code_buf, fp);
        fclose(fp);
        
        int ret = system("gcc /tmp/.code.c -o /tmp/.expr 2>/dev/null");
        if (ret != 0) {
            printf("Compilation failed for expression: %s\n", buf);
            memset(buf, 0, sizeof(buf));
            continue;
        }
        
        fp = popen("/tmp/.expr", "r");
        assert(fp != NULL);
        
        unsigned int result = 0;
        int items_read = fscanf(fp, "%u", &result);
        pclose(fp);
        
        if (items_read != 1) {
            printf("Failed to read result for expression: %s\n", buf);
        } else {
            remove_U(buf);

            printf("%u %s\n", result, buf);
        }
        
        memset(buf, 0, sizeof(buf));
    }
    return 0;
}
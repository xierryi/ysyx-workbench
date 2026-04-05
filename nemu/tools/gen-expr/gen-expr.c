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
"  unsigned int result = (unsigned)(%s); "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static void gen_num() {
  char str[20];
  sprintf(str, "%u", rand() % 100);
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

static void gen_rand_expr() {
  //buf[0] = '\0';
  switch(rand() % 4) {
    case 0: 
      gen_rand_expr(); 
      gen_rand_op(); 
      gen_rand_expr(); 
      break;
    case 1: 
      gen_rand_space();
      gen('('); 
      gen_rand_expr(); 
      gen(')'); 
      gen_rand_space();
      break;
    default: 
      gen_rand_space();
      gen_num(); 
      gen_rand_space();
      break;
  }
}

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
 * Recursively process expression to fix division by zero from inside out
 * @param expr_start Start position in buf
 * @param expr_len Length of expression to process
 * @return 1 if any fix was applied
 */
static int fix_division_by_zero(int expr_start, int expr_len) {
    int fixed = 0;
    int i = 0;
    
    while (i < expr_len) {
        // Look for division operator
        if (buf[expr_start + i] == '/') {
            // Found division operator, find the divisor
            int divisor_start = i + 1;
            
            // Skip whitespace
            while (divisor_start < expr_len && buf[expr_start + divisor_start] == ' ') {
                divisor_start++;
            }
            
            if (divisor_start >= expr_len) {
                i++;
                continue;
            }
            
            // Case 1: Divisor is literal '0'
            if (buf[expr_start + divisor_start] == '0') {
                // Check if it's a standalone '0' (not part of 10, 20, etc.)
                if (divisor_start + 1 >= expr_len || 
                    buf[expr_start + divisor_start + 1] < '0' || 
                    buf[expr_start + divisor_start + 1] > '9') {
                    buf[expr_start + divisor_start] = '1';  // Change '0' to '1'
                    fixed = 1;
                    sign_divi_by_zero = 1;
                }
            }
            // Case 2: Divisor is a parenthesized expression
            else if (buf[expr_start + divisor_start] == '(') {
                // Find the matching closing parenthesis for divisor
                int depth = 1;
                int divisor_end = divisor_start + 1;
                while (divisor_end < expr_len && depth > 0) {
                    if (buf[expr_start + divisor_end] == '(') depth++;
                    else if (buf[expr_start + divisor_end] == ')') depth--;
                    divisor_end++;
                }
                divisor_end--;  // Point to closing parenthesis
                
                int len = divisor_end - divisor_start + 1;
                
                // CRITICAL: First recursively process inside the divisor expression
                // This ensures inner divisions are fixed before evaluating
                if (fix_division_by_zero(expr_start + divisor_start + 1, len - 2)) {
                    fixed = 1;
                }
                
                // Extract and evaluate the (possibly fixed) divisor expression
                char divisor_expr[5000] = {0};
                strncpy(divisor_expr, buf + expr_start + divisor_start, len);
                divisor_expr[len] = '\0';
                
                // Evaluate the divisor expression
                unsigned int result = evaluate_expression(divisor_expr);
                
                // If divisor evaluates to zero, replace it with "1"
                if (result == 0) {
                    // Replace the entire parenthesized expression with "1"
                    memset(buf + expr_start + divisor_start, ' ', len);
                    buf[expr_start + divisor_start] = '1';
                    fixed = 1;
                    sign_divi_by_zero = 1;
                }
            }
            // Case 3: Divisor is normal number or variable - nothing to do
        }
        i++;
    }
    
    return fixed;
}

/**
 * Main function to check and fix division by zero
 * Scans the entire expression repeatedly until no more fixes are needed
 */
static void check_divi_zero(void) {
    int len = strlen(buf);
    // Keep processing until no more changes are made
    while (fix_division_by_zero(0, len)) {
        // Continue fixing
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
    buf[0] = '\0';  // Clear buffer
    gen_rand_expr();  // Generate random expression
    
    // For testing specific cases
    if (i == 0) {
      strcpy(buf, "32/((1/((9-9/1)) / 1)) + 2");
    }
    
    //printf("Original: %s\n", buf);
    
    sign_divi_by_zero = 0;
    check_divi_zero();  // Fix division by zero issues
    
    //printf("Fixed:    %s\n", buf);
    
    // Compile and run the fixed expression
    sprintf(code_buf, code_format, buf);
    
    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);
    
    int ret = system("gcc /tmp/.code.c -o /tmp/.expr 2>/dev/null");
    if (ret != 0) {
      printf("  -> Compilation failed!\n");
      memset(buf, 0, sizeof(buf));
      continue;
    }
    
    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);
    
    unsigned int result = 0;
    int items_read = fscanf(fp, "%u", &result);
    pclose(fp);
    
    if (items_read != 1) {
      printf("Result:   (failed to read)\n");
    }
    
    // if (sign_divi_by_zero) {
    //   printf("  -> Division by zero was detected and fixed\n");
    // }
    //printf("\n");
    printf("%u %s\n", result, buf);
    memset(buf, 0, sizeof(buf));
  }
  return 0;
}
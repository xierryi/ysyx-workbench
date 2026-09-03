#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static long int my_abs(long int input) {
  return (input >= 0) ? (unsigned long int)input : -(unsigned long int)input;
}

static int fmt2str(char *str, const char *fmt, va_list ap) { 
  enum {
    FMT_NOTYPE = 256, FMT_LD, FMT_LLU,
  };
  int str_len = 0;
  int d = 0; 
  long int ld = 0;
  unsigned long long llu = 0;
  unsigned int x = 0x0;
  char c;
  char *s;
  #define LENGTH_TYPE 5
  const char fmt_type[LENGTH_TYPE] = {'c','s','d','x','u'}; // TODO: const char => enum
  while (*fmt)
    switch (*fmt)
    {
    case '%'://"%" prefix match
      int placeholder_len = 0;
      const char *placeholder_r = fmt + 1;
      const char *placeholder_l = fmt + 1;
      int placeholder_type = 0;
      for (; placeholder_r - placeholder_l < 10; placeholder_r ++) 
      {
        if(*placeholder_r){
          for(int j = 0; j < LENGTH_TYPE; j ++) {
            if(fmt_type[j] == *placeholder_r) {
              /* track the bound of long prefix, so move p_r to the bound*/
              int long_count = 0;
              const char *place_type_l = placeholder_r;
              while(*(place_type_l - 1) == 'l' && long_count < 2) {
                place_type_l --;
                long_count ++;
              }
              if(long_count == 0) {/* no long prefix */
                placeholder_type = *place_type_l;
              }
              else {
                if(strncmp(place_type_l, "llu", 3) == 0){
                  placeholder_type = FMT_LLU;
                }
                else if(strncmp(place_type_l, "ld", 2) == 0){
                  placeholder_type = FMT_LD;
                }
              }
              placeholder_len = place_type_l - placeholder_l + 1;
              // TODO: in order to implement %llu and %ld, char length of placeholder_type should inc

              int fmt_len = 0;
              char place_type = ' ';
              bool is_left_align = false;
              // collect the length of placeholder format 
              // support %02d %2d
              // BUGFIX: illegal input figure
              if(placeholder_len == 2) {
                if(*(place_type_l - 1) >= '0' && *(place_type_l - 1))
                fmt_len = *(place_type_l - 1) - '0';
              }
              if(placeholder_len > 2) {
                const char *p_len = placeholder_l; 
                while(p_len != place_type_l) {
                  if(p_len == placeholder_l) {
                    if(*placeholder_l == '0') 
                      place_type = '0';
                    else if(*placeholder_l == '-') 
                      is_left_align = true;
                  }
                  if(*p_len <= '9' && *p_len >= '0')
                    fmt_len = fmt_len * 10 + (int)(*p_len - '0');
                  p_len ++;
                }
              }
              switch (placeholder_type)
              {
              case 'c':
                c = va_arg(ap, int);
                fmt += placeholder_len + 1;
                *str ++ = c;
                break;
              case 's':
                s = va_arg(ap, char *);
                fmt += placeholder_len + 1;
                while(*s){
                  *str ++ = *s ++;
                  str_len ++;
                }
                break;
              case 'd':
                d = va_arg(ap, int);
                fmt += placeholder_len + 1;
                int is_neg = 0;
                if(d < 0) is_neg = 1;

                /* inverted seq */
                char buf_d[32] = {0};
                memset(buf_d, 0, 32);
                int i = 0;

                /* int2srt */
                do {
                  buf_d[i] = (unsigned int)my_abs(d % 10) + 48;
                  d = (unsigned int)my_abs(d / 10);
                  i ++;
                } while(d);

                /* neg sign with ' '*/
                if(is_neg && place_type == ' '){
                  buf_d[i] = '-'; 
                  is_neg = 0;
                  i ++;
                }

                /* placeholder */
                char align_place[32] = {0};
                memset(align_place, 0, 32);
                if(i < fmt_len) {
                  /* left align */
                  if(is_left_align) {
                    for(int j = 0; j < fmt_len - i; j ++) {
                      align_place[j] = place_type;
                    }
                  }
                  else
                  for(; i < fmt_len; i ++){
                    buf_d[i] = place_type;
                  }
                }

                /* neg sign without ' '*/
                if(is_neg && place_type != ' '){
                  if(buf_d[i - 1] == place_type) i --;
                  buf_d[i] = '-'; 
                  is_neg = 0;
                  i ++;
                }

                /* buf2str */
                for (; i > 0; i--)
                {
                  *str++ = buf_d[i - 1];
                  str_len ++;
                }
                if(is_left_align) {
                  for(int j = 0; j < strlen(align_place); j ++) {
                    *str ++ = align_place[j];
                    str_len ++;
                  }
                  is_left_align = false;
                }
                break;
              case 'x':
                x = va_arg(ap, int);
                fmt += placeholder_len + 1;
                // if(x < 0) {
                //   x = 0xffffffff -(x + 1);
                // }
                x = (unsigned int)x;
                char buf_x[32] = {0};  
                memset(buf_x , 0, 32);
                i = 0;
                do {
                  buf_x[i] = (x % 16 < 10) ? ((x % 16) + 48) : ((x % 16) + 87);
                  x /= 16;
                  i ++;
                } while(x);

                memset(align_place, 0, 32);
                if(i < fmt_len) {
                  /* left align */
                  if(is_left_align) {
                    for(int j = 0; j < fmt_len - i; j ++) {
                      align_place[j] = place_type;
                    }
                  }
                  else
                  for(; i < fmt_len; i ++){
                    buf_x[i] = place_type;
                  }
                }
                
                for (; i > 0; i--)
                {
                  *str++ = buf_x[i - 1];
                  str_len ++;
                }
                if(is_left_align) {
                  for(int j = 0; j < strlen(align_place); j ++) {
                    *str ++ = align_place[j];
                    str_len ++;
                  }
                  is_left_align = false;
                }
                break;
              case FMT_LD:
                ld = va_arg(ap, long int);
                fmt += placeholder_len + long_count + 1;
                is_neg = 0;
                if(ld < 0) is_neg = 1;

                /* inverted seq */
                char buf_ld[32] = {0};
                memset(buf_ld, 0, 32);
                // int i = 0;

                /* int2srt */
                do {
                  buf_ld[i] = my_abs(ld % 10) + 48;
                  ld = my_abs(ld / 10);
                  i ++;
                } while(ld);

                /* neg sign with ' '*/
                if(is_neg && place_type == ' '){
                  buf_ld[i] = '-'; 
                  is_neg = 0;
                  i ++;
                }

                /* placeholder */
                // char align_place[32] = {0};
                memset(align_place, 0, 32);
                if(i < fmt_len) {
                  /* left align */
                  if(is_left_align) {
                    for(int j = 0; j < fmt_len - i; j ++) {
                      align_place[j] = place_type;
                    }
                  }
                  else
                  for(; i < fmt_len; i ++){
                    buf_ld[i] = place_type;
                  }
                }

                /* neg sign without ' '*/
                if(is_neg && place_type != ' '){
                  if(buf_ld[i - 1] == place_type) i --;
                  buf_ld[i] = '-'; 
                  is_neg = 0;
                  i ++;
                }

                /* buf2str */
                for (; i > 0; i--)
                {
                  *str++ = buf_ld[i - 1];
                  str_len ++;
                }
                if(is_left_align) {
                  for(int j = 0; j < strlen(align_place); j ++) {
                    *str ++ = align_place[j];
                    str_len ++;
                  }
                  is_left_align = false;
                }
                break;
              case FMT_LLU:
                llu = va_arg(ap, unsigned long long);
                fmt += placeholder_len + long_count + 1;
                // if(x < 0) {
                //   x = 0xffffffff -(x + 1);
                // }
                char buf_llu[32] = {0};  
                memset(buf_llu , 0, 32);
                i = 0;
                do {
                  buf_llu[i] = llu % 10 + 48;
                  llu /= 10;
                  i ++;
                } while(llu);

                memset(align_place, 0, 32);
                if(i < fmt_len) {
                  /* left align */
                  if(is_left_align) {
                    for(int j = 0; j < fmt_len - i; j ++) {
                      align_place[j] = place_type;
                    }
                  }
                  else
                  for(; i < fmt_len; i ++){
                    buf_llu[i] = place_type;
                  }
                }
                
                for (; i > 0; i--)
                {
                  *str++ = buf_llu[i - 1];
                  str_len ++;
                }
                if(is_left_align) {
                  for(int j = 0; j < strlen(align_place); j ++) {
                    *str ++ = align_place[j];
                    str_len ++;
                  }
                  is_left_align = false;
                }
                break;
              default:
                break;
              }
              break;
            }
          } 
          if(placeholder_len > 0) break; // stop scope 's', 'd' ...
        }
        else break;
      }
      break;
    default:
      str_len ++;
      *str++ = *fmt ++;
      break;
    }
  *str= '\0';
  return str_len;
}

int printf(const char *fmt, ...) {
  char out[5120];
  int str_len = 0;
  va_list ap;

  va_start(ap, fmt);
  str_len = fmt2str(out, fmt, ap);
  va_end(ap);
  for (char *p = out; *p; p++) putch(*p);

  return str_len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  int str_len = 0;
  va_list ap;

  va_start(ap, fmt);
  str_len = fmt2str(out, fmt, ap);
  va_end(ap);

  return str_len;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif

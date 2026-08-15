#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static int fmt2str(char *str, const char *fmt, va_list ap) { 
  int str_len = 0;
  int d = 0;
  int x = 0x0;
  char c;
  char *s;
  #define LENGTH_TYPE 4
  const char fmt_type[LENGTH_TYPE] = {'c','s', 'd', 'x'}; 
  while (*fmt)
    switch (*fmt)
    {
    case '%'://"%" prefix match
      int placeholder_len = 0;
      const char *placeholder_r = fmt + 1;
      const char *placeholder_l = fmt + 1;
      char placeholder_type;
      for (; placeholder_r - placeholder_l < 10; placeholder_r ++) 
      {
        if(*placeholder_r){
          for(int j = 0; j < LENGTH_TYPE; j ++) {
            if(fmt_type[j] == *placeholder_r) {
              placeholder_type = *placeholder_r;
              placeholder_len = placeholder_r - placeholder_l + 1;

              int fmt_len = 0;
              char place_type = ' ';
              // collect the length of placeholder format 
              // support %02d
              // BUGFIX: illegal input figure
              if(placeholder_len > 1) {fmt_len = *(placeholder_r - 1) - '0';}
              if(placeholder_len > 2) {place_type = *(placeholder_r - 2);}
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
                if(d < 0) {
                  *str++ = '-'; 
                  d = -d;
                  str_len ++;
                }
                char buf_d[32] = {};
                int i = 0;
                do {
                  buf_d[i] = d % 10 + 48;
                  d /= 10;
                  i ++;
                } while(d);
                if(i < fmt_len) {
                  for(; i < fmt_len; i ++){
                    buf_d[i] = place_type;
                  }
                }
                for (; i > 0; i--)
                {
                  *str++ = buf_d[i - 1];
                  str_len ++;
                }
                break;
              case 'x':
                x = va_arg(ap, int);
                fmt += placeholder_len + 1;
                char buf_x[32] = {};  
                i = 0;
                do {
                  buf_x[i] = (x % 16 < 10) ? ((x % 16) + 48) : ((x % 16) + 87);
                  x /= 16;
                  i ++;
                } while(x);
                if(i < fmt_len) {
                  for(; i < fmt_len; i ++){
                    buf_x[i] = place_type;
                  }
                }
                for (; i > 0; i--)
                {
                  *str++ = buf_x[i - 1];
                  str_len ++;
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
      }
    default:
      str_len ++;
      *str++ = *fmt ++;
      break;
    }
  *str= '\0';
  return str_len;
}
// static int fmt2str(char *str, const char *fmt, va_list ap) { 

//   int str_len = 0;
//   int d;
//   char *s;

//   while (*fmt) { 
//     switch (*fmt)
//     {
//     case '%'://"%" prefix match
//       switch (*(fmt + 1))
//       {
//       case '\0':
//         return str_len;
//         break;
//       case 's':
//         s = va_arg(ap, char *);
//         fmt += 2;
//         while(*s){
//           str_len ++;
//           *str ++ = *s ++;
//         }
//         break;
//       case 'd':
//         d = va_arg(ap, int);
//         fmt += 2;
//         if(d < 0) {
//           *str++ = '-'; 
//           d = -d;
//           str_len ++;
//         }
//         char buf[20] = {};
//         int i = 0;
//         do {
//           buf[i] = d % 10 + 48;
//           d /= 10;
//           i ++;
//         } while(d);
//         for (; i > 0; i--)
//         {
//             *str++ = buf[i - 1];
//         }
//         break;
//       default:
//         str_len ++;
//         *str++ = *fmt ++;
//         break;
//       }
//       break;
//     default:
//       str_len ++;
//       *str++ = *fmt ++;
//       break;
//     }
//   }
//   *str= '\0';
//   return str_len;
// }

int printf(const char *fmt, ...) {
  char out[100];
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

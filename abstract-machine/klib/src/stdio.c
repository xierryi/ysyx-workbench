#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static int fmt2str(char *str, const char *fmt, va_list ap) { 

  int str_len = 0;
  int d;
  char *s;

  while (*fmt)
    switch (*fmt)
    {
    case '%'://"%" prefix match
      switch (*(fmt + 1))
      {
      case '\0':
        return str_len;
        break;
      case 's':
        s = va_arg(ap, char *);
        strcat(str, s);
        fmt += 2;
        str_len += strlen(s);
        str += strlen(s);
        break;
      case 'd':
        d = va_arg(ap, int);
        fmt += 2;
        if(d < 0) {
          *str++ = '-'; 
          d = -d;
          str_len ++;
        }
        char buf[20] = {};
        int i = 0;
        do {
          buf[i] = d % 10 + 48;
          d /= 10;
          i ++;
        } while(d);
        for (; i > 0; i--)
        {
            *str++ = buf[i - 1];
        }
        break;
      default:
        str_len ++;
        *str++ = *fmt ++;
        break;
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
  int str_len = 0;
  char buf[200]; 
  va_list ap;

  va_start(ap, fmt);
  fmt2str(buf, fmt, ap);
  va_end(ap);

  for (const char *p = buf; *p; p++) putch(*p);
  return str_len;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  int str_len = 0;
  va_list ap;

  va_start(ap, fmt);
  fmt2str(out, fmt, ap);
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

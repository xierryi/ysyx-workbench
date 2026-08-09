#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  int str_len = 0;
  int d;
  char *s;

  va_start(ap, fmt);
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
        strcat(out, s);
        fmt += 2;
        str_len += strlen(s);
        out += strlen(s);
        break;
      case 'd':
        d = va_arg(ap, int);
        fmt += 2;
        if(d < 0) {
          *out ++ = '-'; 
          d = -d;
          str_len ++;
        }
        char buf[20] = {};
        int i;
        for (i = 0; d; i++)
        {
            buf[i] = d % 10 + 48;
            d /= 10;
        }
        for (; i > 0; i--)
        {
            *out ++ = buf[i - 1];
        }
        break;
      default:
        str_len ++;
        *out ++ = *fmt ++;
        break;
      }
      break;
    default:
      str_len ++;
      *out ++ = *fmt ++;
      break;
    }
  *out = '\0';
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

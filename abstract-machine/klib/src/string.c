#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i;
  for(i = 0; s[i] != '\0'; i ++); 
  return i;
}

char *strcpy(char *dst, const char *src) {
  size_t i;
  for (i = 0; src[i] != '\0'; i++) {
    dst[i] = src[i];
  }
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;

  for(i = 0; i < n && src[i] != '\0'; i ++) {
    dst[i] = src[i];
  }
  for(; i < n; i ++) {
    dst[i] = '\0';
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t dst_len = strlen(dst);
  size_t i;
  for (i = 0; src[i] != '\0' ; i++)
  {
    dst[dst_len + i] = src[i];
  }
  dst[dst_len + i] = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  const char* p1 = s1;
  const char* p2 = s2;
  while(*p1 != '\0' || *p2 != '\0') {
    if(*p1 != *p2) return *(unsigned char *)p1 - *(unsigned char *)p2;
    p1 ++;
    p2 ++;
  } 
  return 0;
  // while (*s1 && (*s1 == *s2)) {
  //       s1++;
  //       s2++;
  //   }
  //   return *(unsigned char*)s1 - *(unsigned char*)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;
  for (i = 0; i < n; i++)
  {
    if(*(s1 + i) == '\0' || (*(s1 + i) != *(s2 + i)))
    return *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i);
  }
  return 0;
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *)s;
  unsigned char ch = (unsigned char)c;

  size_t i;
  for(i = 0; i < n; i ++) {
    p[i] = ch;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  unsigned char *ch_dst = (unsigned char *)dst;
  unsigned char *ch_src = (unsigned char *)src;
  size_t i;
  if(ch_dst < ch_src + n && ch_dst > ch_src) for (i = n; i > 0; i--) ch_dst[i - 1] = ch_src[i - 1];
  else for (i = 0; i < n; i++) ch_dst[i] = ch_src[i];
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  unsigned char *ch_out = (unsigned char *)out;
  const unsigned char *ch_in = (const unsigned char *)in;
  size_t i;
  for (i = 0; i < n; i++)
  {
    ch_out[i] = ch_in[i];
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *p1 = (const unsigned char *) s1;
  const unsigned char *p2 = (const unsigned char *) s2;
  
  size_t i;
  for (i = 0; i < n; i++) {
    if(p1[i] != p2[i]) return p1[i] - p2[i];
  } 
  return 0;
}

#endif

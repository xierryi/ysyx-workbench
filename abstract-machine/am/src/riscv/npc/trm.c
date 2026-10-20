#include <am.h>
#include <klib-macros.h>
#include <klib.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

#define SERIAL_PORT 0x10000000U

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER); // defined in CFLAGS

void putch(char ch) {
  volatile char *serial_port = (char *)SERIAL_PORT;
  *serial_port = ch;
}

void halt(int code) {
  asm volatile ("mv a0, %0; ebreak" : :"r"(code));

  while (1);
}

void _trm_init() {
  union {
    uint32_t vendorid;
    uint8_t id[4];
  } u;
  uint32_t archid;
  asm volatile ("csrr %0, mvendorid" : "=r"(u.vendorid));
  asm volatile ("csrr %0, marchid" : "=r"(archid));
  printf("My ID is:");
  printf("%c%c%c%c_",u.id[3], u.id[2], u.id[1], u.id[0]);
  printf("%d\n",archid);

  int ret = main(mainargs);
  halt(ret);
}

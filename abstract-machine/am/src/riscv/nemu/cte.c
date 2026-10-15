#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

#ifndef __riscv_e
#define NR_REGS 32
#else
#define NR_REGS 16
#endif

#define XLEN  8
#define CONTEXT_SIZE  ((NR_REGS + 3) * XLEN)

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11: 
        ev.event = EVENT_YIELD; 
        c->mepc += 4;
        break;
      default: ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize mstatus for difftest
  // asm volatile("csrw mstatus, %0" : : "r"(0x1800));
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  Context *cp = NULL;

  // initialize stack structure
  int stack_size = kstack.end - kstack.start;
  memset(kstack.start, 0, stack_size);

  // put context into bottom of the stack(aka top in addr)
  cp = kstack.end - CONTEXT_SIZE;

  // set return pc for kernel thread
  cp->mepc = (uintptr_t)entry;
  
  return cp;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}

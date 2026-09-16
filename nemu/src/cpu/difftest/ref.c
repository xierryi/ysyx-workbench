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
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

#define NR_GPR 16

typedef struct
{
    int pc;
    int gpr[NR_GPR];

} diff_cpu_state;

void diff_get_regs(void* diff_context) {
  diff_cpu_state *ctx = (diff_cpu_state *)diff_context;
  for (int i = 0; i < NR_GPR; i++)
  {
    ctx->gpr[i] = cpu.gpr[i];
  }
  ctx->pc = cpu.pc;
}

void diff_set_regs(void* diff_context) {
  diff_cpu_state *ctx = (diff_cpu_state *)diff_context;
  for (int i = 0; i < NR_GPR; i++)
  {
    cpu.gpr[i] = ctx->gpr[i];
  }
  cpu.pc = ctx->pc;
}


void diff_memcpy(paddr_t addr, void *buf, size_t n) {
  uint8_t* pinst = 0;
  for(size_t i = 0; i < n; i ++) {
    pinst = guest_to_host(addr + i);
    *pinst = *((uint8_t *)buf + i);
  }
}

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction == DIFFTEST_TO_REF) {
    diff_memcpy(addr, buf, n);
  }
  else {
    assert(0);
  }
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    diff_set_regs(dut);
  }
  else {
    diff_get_regs(dut);
  }
}

__EXPORT void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}

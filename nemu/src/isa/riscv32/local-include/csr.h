// csr
#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include <common.h>
enum {
  CSR_MTVEC  = 0x305,
  CSR_MEPC   = 0x341,
  CSR_MCAUSE = 0x342,
  CSR_MSTATUS= 0x300,
  // ...
  CSR_NUM    = 0x400,   // 足够覆盖
};

extern word_t csr[CSR_NUM]; 

#endif

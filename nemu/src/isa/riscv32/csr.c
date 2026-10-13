#include <isa.h>
#include "local-include/csr.h"

word_t csr[CSR_NUM] = {[CSR_MSTATUS] = 0x1800};
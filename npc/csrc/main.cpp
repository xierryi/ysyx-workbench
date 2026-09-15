#include <stdio.h>

#include "monitor/sdb/sdb.h"
#include "memory/mem.h"
#include "cpu/cpu.h"
#include "monitor/sdb/expr.h"
#include "monitor/utils/disasm.h"
#include "monitor/trace/ftrace.h"

int main(int argc, char** argv) {
  /* init the verilator config */
  system_init(argc, argv);

  /* argv[1] is $(img).bin file */
  printf("file_img:%s\n",argv[1]);

  /* load $(img).bin */
  load_img(argc, argv);

  /* load $(img).elf for ftrace */
  load_elf(argv[2]);

  /* init the regex for sdb */
  init_regex();

  /* open the batch mode of sdb */
  sdb_set_batch_mode(); 

  /* init the disasm for itrace */
  init_disasm(); 

  /* state initialize */
  cpu_init();

  /* sdb loop */
  sdb_mainloop();

  // while(!contextp->gotFinish())
  // // for(int i=0; i < 40; i ++)
  // {
  //   top->clk = ~top->clk;
  //   top->eval();
  // }

  system_free();

  /* return 0 is good */
  return system_isGoodret();
}

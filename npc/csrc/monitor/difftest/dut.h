#ifndef __DUT_H__
#define __DUT_H__

void init_difftest(char *ref_so_file, long img_size, int port); 

#ifdef __cplusplus
extern "C" {
#endif

void difftest_step(int pc, int npc); 

#ifdef __cplusplus
}
#endif
#endif

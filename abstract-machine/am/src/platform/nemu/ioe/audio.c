#include <am.h>
#include <nemu.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

static uint32_t sbuf_size = 0;
// static uint32_t sbuf_count = 0;

void __am_audio_init() {
  
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
  sbuf_size = cfg->bufsize;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR     , ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR , ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR  , ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
  // sbuf_count = stat->count;
}
#include <stdio.h>
void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  uint8_t *sbuf_start  = (uint8_t *)ctl->buf.start;
  uint8_t *sbuf_end    = (uint8_t *)ctl->buf.end;
  uint16_t sbuf_len = sbuf_end - sbuf_start;
  uint32_t sbuf_count = inl(AUDIO_COUNT_ADDR);
  static uint32_t write_count = 0; // local write count, linear increase circularly

  uint16_t subf_offset;
  if(sbuf_size - sbuf_count >= sbuf_len) {
    for (subf_offset = 0; subf_offset < sbuf_len; subf_offset ++)
    {
      outb((AUDIO_SBUF_ADDR + write_count + subf_offset), sbuf_start[subf_offset]);
    }
    sbuf_count += subf_offset;
    write_count += subf_offset;
    if(write_count + subf_offset > sbuf_size) write_count = 0; // next offset circularly increase figure
    // printf("sbuf_size:%d\n",sbuf_size);
    // printf("sbuf_count:%d\n",sbuf_count);
    // printf("sbuf_len:%d\n",sbuf_len);
    outl(AUDIO_COUNT_ADDR, sbuf_count);
  }
}

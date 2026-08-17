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

#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;

// static void audio_play(void *userdata, uint8_t *stream, int len){
//   printf("reg_count:%d\n", audio_base[reg_count]);
//   printf("len: %d\n",len);

//   int nread = len; 
//   static int play_pos = 0;
//   if(audio_base[reg_count] < len) nread = audio_base[reg_count];
//   // printf("nread:%d\n",nread);

//   SDL_memcpy(stream, sbuf + play_pos, nread);
//   audio_base[reg_count] -= nread;
//   play_pos += nread;


//   if(nread < len) memset(stream + nread, 0, (len - nread));
// }

static void audio_play(void *userdata, Uint8 *stream, int len) {
  // printf("len:%d\n",len); 
  //printf("count:%d\n", audio_base[reg_count]);
    int nread = len;
    static int play_pos = 0;
    int sbuf_size = CONFIG_SB_SIZE; 
    
    // make sure play_pos in valid range
    if (play_pos >= sbuf_size) {
        play_pos = 0;  // or play_pos %= sbuf_size;
    }
    // printf("sbuf[0..7]: %02x %02x %02x %02x %02x %02x %02x %02x\n",
    //        sbuf[play_pos + 0], sbuf[play_pos + 1], sbuf[play_pos + 2], sbuf[play_pos + 3],
    //        sbuf[play_pos + 4], sbuf[play_pos + 5], sbuf[play_pos + 6], sbuf[play_pos + 7]);
    // // read available data
    int available = audio_base[reg_count];
    if (available < len) {
        nread = available;
    }
    // printf("nread:%d\n",nread);
    if (nread > 0 && play_pos + nread <= sbuf_size) {
        SDL_memcpy(stream, sbuf + play_pos, nread);
        //printf("%d\n", play_pos);
        play_pos += nread;
        audio_base[reg_count] -= nread;
    } else { // read at beginning if reads at end
        nread = 0;
        play_pos = 0;
    }
    
    // mute
    if (nread < len) {
        SDL_memset(stream + nread, 0, len - nread);
    }
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  static int call_once = 1;
  audio_base[reg_sbuf_size] = CONFIG_SB_SIZE;
  if(audio_base[reg_init] && call_once) {
    // printf("11111\n");
    // audio_base[reg_count] = 0;
    SDL_AudioSpec s = {};
    s.freq = audio_base[reg_freq];
    s.channels = audio_base[reg_channels];
    s.samples = audio_base[reg_samples];
    s.format = AUDIO_S16SYS;  // 假设系统中音频数据的格式总是使用16位有符号数来表示
    s.callback = audio_play;
    s.userdata = NULL;        // 不使用
    SDL_InitSubSystem(SDL_INIT_AUDIO);
    SDL_OpenAudio(&s, NULL);
    SDL_PauseAudio(0);
    call_once = 0;
  }
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);
}

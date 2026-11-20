/* VRAM destinations for the six FM channels plus PSG and for the DAC ring. */
#include <stdint.h>

int16_t *fm_pcm_vram_base = (int16_t *)0x06000000;
int16_t *dac_pcm_vram_base = (int16_t *)0x06007000;

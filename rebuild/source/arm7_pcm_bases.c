/* VRAM destinations for the six FM channels plus PSG and for the DAC ring. */
#include <nds/memory.h>
#include <stdint.h>

int16_t *fm_pcm_vram_base = (int16_t *)VRAM;
int16_t *dac_pcm_vram_base = (int16_t *)VRAM + 0x7000 / sizeof(int16_t);

/* Clear the VRAM PCM rings and reset the chips before notifying ARM9. */
#include <stdint.h>

typedef struct {
    unsigned state_before_fm_cursor[2];
    int16_t *fm_cursor;
    unsigned state_before_dac_cursor[3];
    int16_t *dac_cursor;
    unsigned state_before_ring_size;
    int fm_psg_samples;
    unsigned clock_state[3];
    unsigned fm_psg_sample_rate;
    unsigned fm_psg_previous_timer_count;
    unsigned dac_previous_timer_count;
    unsigned audio_refills_enabled;
    unsigned audio_reset_requested;
} AudioResetState;

extern AudioResetState pcm_rings;
extern int16_t *fm_pcm_vram_base;
extern int16_t *dac_pcm_vram_base;
extern unsigned psg_chip_clock_hz;
extern unsigned dac_staged_byte_count;

void reset_psg_channel_state(int clock, int legacy_gain, int sample_rate);
void reset_ym2612_registers(void);
int send_fifo_command_and_payload(unsigned command, unsigned payload);

static inline void clear_pcm(int16_t *cursor, int halfwords)
{
    if (halfwords > 0) {
        do {
            --halfwords;
            *cursor++ = 0;
        } while (halfwords != 0);
    }
}

void clear_audio_pcm_buffers(void)
{
    clear_pcm(fm_pcm_vram_base, pcm_rings.fm_psg_samples * 14);
    clear_pcm(dac_pcm_vram_base, 4096);
}

void reset_audio_buffers_and_chips(void)
{
    clear_audio_pcm_buffers();
    reset_psg_channel_state(psg_chip_clock_hz, 100, pcm_rings.fm_psg_sample_rate);
    reset_ym2612_registers();
    int16_t *fm_cursor = (int16_t *)((uintptr_t)fm_pcm_vram_base + (pcm_rings.fm_psg_samples & ~1));
    int16_t *dac_cursor = dac_pcm_vram_base + 2048;
    dac_staged_byte_count = 0;
    pcm_rings.fm_cursor = fm_cursor;
    pcm_rings.dac_cursor = dac_cursor;
    pcm_rings.fm_psg_previous_timer_count = 0;
    pcm_rings.dac_previous_timer_count = 0;
    pcm_rings.audio_reset_requested = 0;
    send_fifo_command_and_payload(0x11, 0);
}

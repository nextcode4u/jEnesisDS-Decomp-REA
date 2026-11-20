/* Read the emulated YM2612 timer status through the ARM9 context. */
typedef struct {
    unsigned char state_before_timer_status[0x480];
    unsigned char timer_status;
} Ym2612State;

typedef struct {
    unsigned char state_before_ym2612[0x2c];
    Ym2612State *ym2612;
} SoundContext;

extern SoundContext sound_context;

unsigned read_ym2612_timer_status(void)
{
    return sound_context.ym2612->timer_status & 3;
}

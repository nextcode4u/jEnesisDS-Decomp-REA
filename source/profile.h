#ifndef JENESIS_PROFILE_H
#define JENESIS_PROFILE_H

#ifdef JENESIS_PROFILE
#include <nds.h>

// Both processors report elapsed ticks from timers with the divide-by-64 clock.
enum { PROFILE_FRAME_TIMER = 0, PROFILE_AUDIO_FIFO = FIFO_USER_03 };

struct audio_profile {
    unsigned received, mixed, starved, deferred, missed, max_mix_ticks;
};

extern unsigned profile_z80_ticks;
#endif

#endif

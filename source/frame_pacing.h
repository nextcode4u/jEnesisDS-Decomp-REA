#ifndef JENESIS_FRAME_PACING_H
#define JENESIS_FRAME_PACING_H

#include <stdbool.h>

enum { DS_REFRESH = 5983, PAL_REFRESH = 4970 };

struct frame_pacing {
    unsigned pending_frames;
    unsigned pal_phase;
};

static inline unsigned frame_pacing_batch(struct frame_pacing *pacing, unsigned elapsed_vblanks,
                                          bool running, bool was_running, bool pal)
{
    enum { MAX_PENDING_FRAMES = 8, MAX_FRAMES_PER_BATCH = 2 };
    if (!running || !was_running) {
        pacing->pending_frames = 0;
        pacing->pal_phase = DS_REFRESH - PAL_REFRESH;
    }
    if (!running)
        return 0;

    unsigned due = was_running ? elapsed_vblanks : 1;
    if (due > MAX_PENDING_FRAMES)
        due = MAX_PENDING_FRAMES;
    if (pal) {
        pacing->pal_phase += PAL_REFRESH * due;
        due = pacing->pal_phase / DS_REFRESH;
        pacing->pal_phase %= DS_REFRESH;
    }
    pacing->pending_frames += due;
    if (pacing->pending_frames > MAX_PENDING_FRAMES)
        pacing->pending_frames = MAX_PENDING_FRAMES;

    // Keep overdue frames across batches and poll input between batches.
    unsigned batch = pacing->pending_frames < MAX_FRAMES_PER_BATCH ?
                     pacing->pending_frames : MAX_FRAMES_PER_BATCH;
    pacing->pending_frames -= batch;
    return batch;
}

#endif

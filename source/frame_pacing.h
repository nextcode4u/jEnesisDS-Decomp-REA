#ifndef JENESIS_FRAME_PACING_H
#define JENESIS_FRAME_PACING_H

#include <stdbool.h>
#include <stdint.h>

enum { DS_REFRESH = 5983, PAL_REFRESH = 4970 };

struct frame_pacing {
    unsigned pending_frames;
    unsigned pal_phase;
};

struct video_pacing {
    int credit;
    unsigned draw_ticks;
    uint32_t last_vblank;
    unsigned lateness;
    bool limit_draws;
};

static inline void video_pacing_observe(struct video_pacing *video, unsigned elapsed)
{
    enum { LATE_LIMIT = 8 };
    if (elapsed > 1) {
        unsigned late = elapsed > LATE_LIMIT ? LATE_LIMIT : elapsed - 1;
        video->lateness += 3 * late;
        if (video->lateness >= LATE_LIMIT) {
            video->lateness = LATE_LIMIT;
            video->limit_draws = true;
        }
    } else if (elapsed && video->lateness) {
        --video->lateness;
    }
}

static inline void video_pacing_advance(struct video_pacing *video, unsigned ticks,
                                        unsigned budget)
{
    // Save available CPU time across guest frames, with bounded debt after
    // a busy frame. The timer is independent of the ARM9 clock speed.
    int limit = 4 * (int)budget;
    int credit = video->credit + (int)budget - (int)ticks;
    video->credit = credit > limit ? limit : credit < -limit ? -limit : credit;
}

static inline bool video_pacing_due(const struct video_pacing *video, uint32_t vblank)
{
    enum { MAX_VBLANKS_BETWEEN_DRAWS = 5 };
    unsigned age = vblank - video->last_vblank;
    return age && (!video->limit_draws || video->credit >= (int)video->draw_ticks ||
                   age >= MAX_VBLANKS_BETWEEN_DRAWS);
}

static inline void video_pacing_drawn(struct video_pacing *video, unsigned ticks,
                                      uint32_t vblank, unsigned budget)
{
    video->credit -= (int)ticks;
    if (video->credit < -4 * (int)budget)
        video->credit = -4 * (int)budget;
    video->draw_ticks = (video->draw_ticks + ticks + 1) / 2;
    video->last_vblank = vblank;
}

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

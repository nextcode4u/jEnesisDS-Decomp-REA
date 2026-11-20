#include "dac.h"
#include "megadrive.h"

#include <string.h>

void dac_begin(struct megadrive *md, struct dac_frame *frame)
{
    md->dac_capture = (struct dac_capture){.frame = frame};
    frame->fm_count = 0;
    frame->fm_overflow = false;
    memcpy(frame->fm_registers, md->ym_registers, sizeof(frame->fm_registers));
    memcpy(frame->fm_keys, md->ym_fm_keys, sizeof(frame->fm_keys));
}

void dac_sync(struct megadrive *md, unsigned cycle)
{
    struct dac_capture *capture = &md->dac_capture;
    struct dac_frame *frame = capture->frame;
    if (!frame)
        return;

    unsigned end = cycle >= md->frame_cycles ? frame->count :
                   cycle * frame->count / md->frame_cycles;
    if (end <= capture->position)
        return;

    int level = (md->ym_registers[0][0x2b] & 0x80) ?
                (int)md->ym_registers[0][0x2a] - 128 : 0;
    unsigned pan = md->ym_registers[1][0xb6];
    struct dac_sample sample = {
        .left = pan & 0x80 ? level : 0,
        .right = pan & 0x40 ? level : 0,
    };
    while (capture->position < end)
        frame->samples[capture->position++] = sample;
}

void capture_fm_write(struct megadrive *md, unsigned reg, uint8_t value, unsigned cycle)
{
    struct dac_frame *frame = md->dac_capture.frame;
    if (!frame)
        return;
    if (frame->fm_count == FM_FRAME_WRITES) {
        frame->fm_overflow = true;
        return;
    }

    unsigned sample = cycle >= md->frame_cycles ? frame->count - 1U :
                      cycle * frame->count / md->frame_cycles;
    if (frame->fm_count && sample < frame->fm_writes[frame->fm_count - 1].sample)
        sample = frame->fm_writes[frame->fm_count - 1].sample;
    frame->fm_writes[frame->fm_count++] = (struct fm_write_event){sample, reg, value};
}

void dac_end(struct megadrive *md)
{
    dac_sync(md, md->frame_cycles);
    md->dac_capture.frame = 0;
}

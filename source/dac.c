#include "dac.h"
#include "megadrive.h"

void dac_begin(struct megadrive *md, struct dac_frame *frame)
{
    md->dac_capture = (struct dac_capture){.frame = frame};
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

void dac_end(struct megadrive *md)
{
    dac_sync(md, md->frame_cycles);
    md->dac_capture.frame = 0;
}

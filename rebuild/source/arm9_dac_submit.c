/* Publish the queued YM2612 DAC samples to the ARM7 sound driver. */
#include "arm9_fifo.h"

#include <nds/ipc.h>
#include <nds/arm9/cache.h>

typedef struct {
    unsigned sample_data;
    unsigned byte_count;
} DacDescriptor;

extern unsigned dac_buffer_ready;
extern unsigned dac_queue_bytes;

int submit_arm7_dac_sample_buffer(void)
{
    while (IPC_GetSync() == 0) {
    }
    if (dac_buffer_ready)
        ((DacDescriptor *)IPC->soundData)->byte_count = dac_queue_bytes;
    else
        ((DacDescriptor *)IPC->soundData)->byte_count = 0;

    DacDescriptor *descriptor = (DacDescriptor *)IPC->soundData;
    dac_buffer_ready = 0;
    dac_queue_bytes = 0;
    DC_FlushRange(descriptor, 0x104);
    return send_arm9_fifo_command_and_payload(0x10, 0);
}

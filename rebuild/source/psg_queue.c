/* Buffer PSG register writes for ARM7 and maintain the ARM9 register mirror. */
#include <nds/ipc.h>

extern unsigned psg_queue_bytes;
extern unsigned char *psg_write_buffer;
extern unsigned psg_register_mirror[8];
extern int psg_latched_register;

void queue_psg_register_write(unsigned value)
{
    while (IPC_GetSync() == 0) {
    }
    unsigned byte_count = psg_queue_bytes;
    if (byte_count < 256) {
        psg_write_buffer[byte_count] = value;
        psg_queue_bytes = byte_count + 1;
    }

    if (value & 0x80) {
        int reg = (int)(value & 0x70) >> 4;
        psg_register_mirror[reg] = (psg_register_mirror[reg] & 0x3f0) | (value & 0xf);
        psg_latched_register = reg;
    } else {
        int reg = psg_latched_register;
        if ((reg & 1) == 0)
            psg_register_mirror[reg] = (psg_register_mirror[reg] & 0xf) | ((value & 0x3f) << 4);
    }
}

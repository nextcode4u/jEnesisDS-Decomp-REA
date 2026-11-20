/* Return a value from the recovered PSG table through the hardware FIFO. */
#include <nds.h>

extern const int psg_attenuation_table[16];

int main(void)
{
    irqInit();
    irqEnable(IRQ_VBLANK);
    REG_IPC_FIFO_CR = IPC_FIFO_ENABLE | IPC_FIFO_SEND_CLEAR;

    for (;;) {
        while (!(REG_IPC_FIFO_CR & IPC_FIFO_RECV_EMPTY)) {
            u32 word = REG_IPC_FIFO_RX;

            if ((word >> 24) == 0x51 && !(REG_IPC_FIFO_CR & IPC_FIFO_SEND_FULL))
                REG_IPC_FIFO_TX = (0x52u << 24) | psg_attenuation_table[0];
        }
        swiWaitForVBlank();
    }
}

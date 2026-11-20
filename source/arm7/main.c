#include <nds.h>

int main(void)
{
    irqInit();
    fifoInit();

    // Storage requests and firmware access arrive through the system FIFO.
    installSystemFIFO();
    readUserSettings();
    touchInit();

    // The ARM9 frontend receives keys and touchscreen samples every VBlank.
    irqSet(IRQ_VBLANK, inputGetAndSend);
    irqEnable(IRQ_VBLANK);

    for (;;)
        swiWaitForVBlank();
}

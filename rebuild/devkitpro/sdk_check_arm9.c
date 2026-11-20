/* Exercise real SDK calls and the recovered ARM9 FIFO routines. */
#include <nds.h>
#include <fat.h>
#include <stdio.h>

#include "arm9_fifo.h"

ReceiveCallback ipc_receive_callback;
unsigned ipc_received_command;
unsigned ipc_received_payload;

static volatile bool arm7_replied;

static void receive_reply(unsigned command, unsigned *payload)
{
    if (command == 0x52 && *payload == 6553)
        arm7_replied = true;
}

int main(void)
{
    unsigned frame;
    bool storage_ready;

    irqInit();
    irqEnable(IRQ_VBLANK);
    videoSetModeSub(MODE_0_2D | DISPLAY_BG0_ACTIVE);
    vramSetBankC(VRAM_C_SUB_BG);
    SUB_BG0_CR = BG_MAP_BASE(31);
    BG_PALETTE_SUB[255] = RGB15(31, 31, 31);
    consoleInitDefault((u16 *)SCREEN_BASE_BLOCK_SUB(31),
                       (u16 *)CHAR_BASE_BLOCK_SUB(0), 16);

    iprintf("devkitARM r20 SDK check\n");
    set_arm9_fifo_receive_callback(receive_reply);
    initialize_arm9_fifo_receive_interrupt();
    for (frame = 0; frame < 120 && !arm7_replied; ++frame) {
        send_arm9_fifo_command_and_payload(0x51, 0);
        swiWaitForVBlank();
    }
    iprintf("ARM7 FIFO: %s\n", arm7_replied ? "OK" : "no reply");

    storage_ready = fatInitDefault();
    iprintf("libfat: %s\n", storage_ready ? "mounted" : "no FAT device");
    if (storage_ready) {
        FILE *file = fopen("fat:/sdkcheck.txt", "rb");

        if (file) {
            int first_byte = fgetc(file);
            fclose(file);
            iprintf("FAT file: %s\n", first_byte == 'R' ? "OK" : "unexpected data");
        }
    }

    for (;;)
        swiWaitForVBlank();
}

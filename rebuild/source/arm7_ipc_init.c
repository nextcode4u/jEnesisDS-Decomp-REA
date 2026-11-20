/* Register the ARM7 audio command handler after enabling the FIFO. */
#include "arm7_ipc.h"

void handle_arm9_audio_command(unsigned command, unsigned *payload);

void initialize_sound_message_handler(void)
{
    enable_fifo_receive_interrupt();
    set_fifo_message_callback(handle_arm9_audio_command);
}

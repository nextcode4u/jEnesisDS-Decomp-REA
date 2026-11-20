#include "arm9_fifo.h"

int request_arm7_audio_start(void)
{
    return send_arm9_fifo_command_and_payload(5, 0);
}

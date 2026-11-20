/* Send ARM7 audio control messages and reset the ARM9 sound mirrors. */
int send_arm9_fifo_command_and_payload(unsigned command, unsigned payload);
void clear_sound_mirrors_before_state_load(void);

int request_arm7_audio_stop(void)
{
    return send_arm9_fifo_command_and_payload(6, 0);
}

void reset_fm_and_clear_queued_sound_writes(void)
{
    send_arm9_fifo_command_and_payload(2, 0);
    clear_sound_mirrors_before_state_load();
}

int set_arm7_audio_muted(int muted)
{
    return muted ? send_arm9_fifo_command_and_payload(0xe, 0)
                 : send_arm9_fifo_command_and_payload(0xf, muted);
}

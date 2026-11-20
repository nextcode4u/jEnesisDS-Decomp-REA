/* ARM7 ipc — grouped REA pseudocode.
 * FIFO receive and message decoding, including ARM9 audio commands.
 */

// 0x037fc0cc  initialize_sound_message_handler

void initialize_sound_message_handler(void)

{
  enable_fifo_receive_interrupt();
  set_fifo_message_callback(handle_arm9_audio_command);
  return;
}


// 0x037fc218  handle_arm9_audio_command

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_arm9_audio_command(undefined4 command_id,undefined4 *payload)

{
  undefined2 *destination_halfword_cursor;
  undefined4 *puVar2;
  int bytes_or_halfwords_remaining;
  undefined2 *source_or_pcm_cursor;
  undefined4 *puVar3;
  
  puVar2 = IPC->soundData;
  switch(command_id) {
  case 0:
    source_or_pcm_cursor = (undefined2 *)&DAT_06000000;
    DAT_0380bde0 = 0x1cb;
    fm_psg_ring_samples = 0x800;
    fm_psg_sample_rate_hz = 0x6bab;
    audio_reset_requested = 0;
    fm_psg_previous_timer_count = 0;
    dac_previous_timer_count = 0;
    audio_refills_enabled = 0;
    DAT_0380bddc = 0x200;
    DAT_0380bde4 = 1;
    bytes_or_halfwords_remaining = 0x7000;
    destination_halfword_cursor = source_or_pcm_cursor;
    do {
      bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + -1;
      *destination_halfword_cursor = 0;
      destination_halfword_cursor = destination_halfword_cursor + 1;
    } while (bytes_or_halfwords_remaining != 0);
    puVar2 = &fm_channel_pcm_bases;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = source_or_pcm_cursor;
      source_or_pcm_cursor = source_or_pcm_cursor + 0x800;
      puVar2 = puVar3;
    } while (puVar3 != &dac_staged_byte_count);
    bytes_or_halfwords_remaining = 0x1000;
    destination_halfword_cursor = (undefined2 *)&DAT_06007000;
    do {
      bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + -1;
      *destination_halfword_cursor = 0;
      destination_halfword_cursor = destination_halfword_cursor + 1;
    } while (bytes_or_halfwords_remaining != 0);
    dac_pcm_end = 0x6009000;
    fm_channel_0_pcm_end = fm_psg_ring_samples * 2 + 0x6000000;
    psg_chip_clock_hz = 0x369e99;
    dac_pcm_write_cursor = &DAT_06007000;
    DAT_0380bdc4 = 0x6000000;
    ym2612_chip_clock_hz = 0x750ab5;
    fm_pcm_base = 0x6000000;
    fm_pcm_write_cursor = 0x6000000;
    dac_pcm_base = &DAT_06007000;
    DAT_0380bdc8 = fm_channel_0_pcm_end;
    initialize_psg_clock_and_state(0x369e99,100,fm_psg_sample_rate_hz,fm_psg_ring_samples);
    initialize_ym2612_tables_and_channels(ym2612_chip_clock_hz,fm_psg_sample_rate_hz,fm_psg_ring_samples);
    dac_staged_byte_count = 0;
    fm_psg_refill_limit = DAT_0380bde0 << 1;
    dac_refill_limit = 0x42a;
    return;
  case 1:
    audio_reset_requested = 1;
    break;
  case 2:
    reset_ym2612_registers();
    break;
  case 5:
    SOUND_CR = 0x807f;
    configure_ds_audio_channels_and_timers();
    audio_refills_enabled = 1;
    break;
  case 6:
    SOUND_CR = 0x8000;
    audio_refills_enabled = 0;
    SCHANNEL_CR(0) = 0;
    SCHANNEL_CR(1) = 0;
    SCHANNEL_CR(2) = 0;
    SCHANNEL_CR(3) = 0;
    SCHANNEL_CR(4) = 0;
    SCHANNEL_CR(5) = 0;
    SCHANNEL_CR(6) = 0;
    SCHANNEL_CR(7) = 0;
    SCHANNEL_CR(8) = 0;
    SCHANNEL_CR(9) = 0;
    SCHANNEL_CR(10) = 0;
    SCHANNEL_CR(11) = 0;
    SCHANNEL_CR(12) = 0;
    SCHANNEL_CR(13) = 0;
    SCHANNEL_CR(14) = 0;
    SCHANNEL_CR(15) = 0;
    TIMER0_CR = 0;
    TIMER1_CR = 0;
    TIMER2_CR = 0;
    TIMER3_CR = 0;
    return;
  case 0xb:
    bytes_or_halfwords_remaining = IPC->soundData[5];
    if (bytes_or_halfwords_remaining != 0) {
      if (0 < bytes_or_halfwords_remaining) {
        bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + 1 >> 1;
        destination_halfword_cursor = &chip_write_staging_buffer;
        source_or_pcm_cursor = (undefined2 *)IPC->soundData[4];
        do {
          bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + -1;
          *destination_halfword_cursor = *source_or_pcm_cursor;
          destination_halfword_cursor = destination_halfword_cursor + 1;
          source_or_pcm_cursor = source_or_pcm_cursor + 1;
        } while (bytes_or_halfwords_remaining != 0);
      }
      apply_ym2612_bank0_writes(&chip_write_staging_buffer);
    }
    bytes_or_halfwords_remaining = IPC->soundData[9];
    if (bytes_or_halfwords_remaining != 0) {
      if (0 < bytes_or_halfwords_remaining) {
        bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + 1 >> 1;
        destination_halfword_cursor = &chip_write_staging_buffer;
        source_or_pcm_cursor = (undefined2 *)IPC->soundData[8];
        do {
          bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + -1;
          *destination_halfword_cursor = *source_or_pcm_cursor;
          destination_halfword_cursor = destination_halfword_cursor + 1;
          source_or_pcm_cursor = source_or_pcm_cursor + 1;
        } while (bytes_or_halfwords_remaining != 0);
      }
      apply_ym2612_bank1_writes(&chip_write_staging_buffer);
    }
    bytes_or_halfwords_remaining = IPC->soundData[0xd];
    if (bytes_or_halfwords_remaining != 0) {
      if (0 < bytes_or_halfwords_remaining) {
        bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + 1 >> 1;
        destination_halfword_cursor = &chip_write_staging_buffer;
        source_or_pcm_cursor = (undefined2 *)IPC->soundData[0xc];
        do {
          bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + -1;
          *destination_halfword_cursor = *source_or_pcm_cursor;
          destination_halfword_cursor = destination_halfword_cursor + 1;
          source_or_pcm_cursor = source_or_pcm_cursor + 1;
        } while (bytes_or_halfwords_remaining != 0);
      }
      apply_psg_latch_and_data_bytes(&chip_write_staging_buffer);
    }
    audio_refills_enabled = 1;
    break;
  case 0xc:
    swiWaitForVBlank(command_id,*payload);
    break;
  case 0xe:
    SOUND_CR = 0x8000;
    break;
  case 0xf:
    SOUND_CR = 0x807f;
    break;
  case 0x10:
    dac_staged_byte_count = IPC->soundData[1];
    if ((dac_staged_byte_count != 0) && (0 < dac_staged_byte_count)) {
      bytes_or_halfwords_remaining = dac_staged_byte_count + 1 >> 1;
      destination_halfword_cursor = &dac_staged_bytes;
      source_or_pcm_cursor = (undefined2 *)*IPC->soundData;
      do {
        bytes_or_halfwords_remaining = bytes_or_halfwords_remaining + -1;
        *destination_halfword_cursor = *source_or_pcm_cursor;
        destination_halfword_cursor = destination_halfword_cursor + 1;
        source_or_pcm_cursor = source_or_pcm_cursor + 1;
      } while (bytes_or_halfwords_remaining != 0);
    }
    puVar2[1] = 0;
  }
  return;
}


// 0x037fc468  dispatch_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_fifo_receive_interrupt(void)

{
  REG_IPC_SYNC = 0;
  do {
    if ((REG_IPC_FIFO_CR & 0x100) != 0) {
      REG_IPC_SYNC = 0x100;
      return;
    }
    while( true ) {
      ipc_received_payload = REG_IPC_FIFO_RX & 0xffffff;
      ipc_received_command = REG_IPC_FIFO_RX >> 0x18;
      if (ipc_receive_callback == (code *)0x0) break;
      (*ipc_receive_callback)(ipc_received_command,&ipc_received_payload);
      if ((REG_IPC_FIFO_CR & 0x100) != 0) {
        REG_IPC_SYNC = 0x100;
        return;
      }
    }
  } while( true );
}


// 0x037fc504  set_fifo_message_callback

void set_fifo_message_callback(undefined4 callback)

{
  ipc_receive_callback = callback;
  return;
}


// 0x037fc514  send_fifo_command_and_payload

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void send_fifo_command_and_payload(int command_id,uint payload)

{
  do {
  } while ((REG_IPC_FIFO_CR & 2) != 0);
  REG_IPC_FIFO_TX = payload & 0xffffff | command_id << 0x18;
  return;
}


// 0x037fc544  enable_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enable_fifo_receive_interrupt(void)

{
  REG_IPC_FIFO_CR = 0x8008;
  irqSet(0x40000,dispatch_fifo_receive_interrupt);
  irqEnable(0x40000);
  REG_IPC_FIFO_CR = 0x8408;
  REG_IPC_SYNC = 0;
  return;
}


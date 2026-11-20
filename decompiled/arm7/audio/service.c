/* ARM7 service — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f81f4  run_arm7_audio_service

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_arm7_audio_service(void)

{
  rtcReset();
  _DAT_04000304 = _DAT_04000304 | 1;
  _DAT_04000500 = 0x807f;
  shared_audio_descriptor = 0;
  irqInit();
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0x5000;
  irqSet(4,&LAB_037f831c);
  irqEnable(4);
  initialize_audio_buffers_and_clocks();
  initialize_sound_message_handler();
  reset_audio_buffers_and_chips(1);
  irqSet(1,0);
  irqEnable(1);
  ds_ipc_sync = 0x100;
  while (audio_refills_enabled == 0) {
    if (audio_reset_requested != 0) {
      reset_audio_buffers_and_chips();
    }
    swiWaitForVBlank();
  }
  if (audio_refills_enabled != 0) goto LAB_037f82f4;
LAB_037f82d4:
  if (audio_reset_requested != 0) goto LAB_037f8308;
  do {
    swiWaitForVBlank();
    while( true ) {
      if (audio_refills_enabled == 0) goto LAB_037f82d4;
LAB_037f82f4:
      update_audio_from_hardware_timers();
      if (audio_reset_requested == 0) break;
LAB_037f8308:
      reset_audio_buffers_and_chips();
      swiWaitForVBlank();
    }
  } while( true );
}


// 0x037fb9fc  configure_ds_audio_channels_and_timers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_ds_audio_channels_and_timers(void)

{
  undefined2 uVar1;
  int paired_ds_channel;
  undefined4 fm_channel_pcm_base;
  int iVar4;
  undefined4 *fm_buffer_pointer_cursor;
  
  fm_buffer_pointer_cursor = &fm_channel_pcm_bases;
  iVar4 = 0;
  do {
    uVar1 = __divsi3(0xff000000,fm_psg_sample_rate_hz);
    fm_channel_pcm_base = *fm_buffer_pointer_cursor;
    *(undefined2 *)(iVar4 * 0x10 + 0x4000408) = uVar1;
    *(undefined4 *)(iVar4 * 0x10 + 0x4000404) = fm_channel_pcm_base;
    *(int *)(iVar4 * 0x10 + 0x400040c) = fm_psg_ring_samples >> 1;
    *(undefined4 *)(&DAT_04000400 + iVar4 * 0x10) = 0xa83f007f;
    uVar1 = __divsi3(0xff000000,fm_psg_sample_rate_hz);
    paired_ds_channel = iVar4 + 6;
    *(undefined2 *)(paired_ds_channel * 0x10 + 0x4000408) = uVar1;
    *(undefined4 *)(paired_ds_channel * 0x10 + 0x4000404) = fm_channel_pcm_base;
    iVar4 = iVar4 + 1;
    *(int *)(paired_ds_channel * 0x10 + 0x400040c) = fm_psg_ring_samples >> 1;
    *(undefined4 *)(&DAT_04000400 + paired_ds_channel * 0x10) = 0xa83f007f;
    fm_buffer_pointer_cursor = fm_buffer_pointer_cursor + 1;
  } while (iVar4 != 6);
  iVar4 = __divsi3(0xff000000,fm_psg_sample_rate_hz);
  _DAT_040004c8 = (short)iVar4;
  _DAT_040004c4 = psg_pcm_base;
  _DAT_040004cc = fm_psg_ring_samples >> 1;
  _DAT_040004c0 = 0xa800007f;
  _DAT_040004d8 = (short)iVar4;
  _DAT_040004d4 = psg_pcm_base;
  _DAT_040004dc = fm_psg_ring_samples >> 1;
  _DAT_040004d0 = 0xa87f007f;
  _DAT_040004e8 = 0xfdf4;
  _DAT_040004e4 = dac_pcm_base;
  _DAT_040004ec = 0x800;
  _DAT_040004e0 = 0xa800007f;
  _DAT_040004f8 = 0xfdf4;
  _DAT_040004f4 = dac_pcm_base;
  _DAT_040004fc = 0x800;
  _DAT_040004f0 = 0xa87f007f;
  _DAT_04000100 = (short)((uint)(iVar4 << 0x11) >> 0x10);
  _DAT_04000102 = 0x80;
  ds_timer_1_count = 0;
  _DAT_04000106 = 0x84;
  _DAT_04000108 = 0xfbe8;
  _DAT_0400010a = 0x80;
  ds_timer_3_count = 0;
  _DAT_0400010e = 0x84;
  return;
}


// 0x037fbeb8  update_audio_from_hardware_timers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_audio_from_hardware_timers(void)

{
  int samples_before_ring_end;
  uint dac_or_fm_psg_sample_count;
  uint fm_psg_elapsed_samples;
  int pcm_byte_count;
  
  fm_psg_elapsed_samples = ds_timer_1_count - fm_psg_previous_timer_count;
  if ((int)fm_psg_elapsed_samples < 0) {
    fm_psg_elapsed_samples = fm_psg_elapsed_samples + 0x10000;
  }
  if (fm_psg_refill_limit <= fm_psg_elapsed_samples) {
    fm_psg_elapsed_samples = fm_psg_refill_limit;
  }
  dac_or_fm_psg_sample_count = ds_timer_3_count - dac_previous_timer_count;
  if ((int)dac_or_fm_psg_sample_count < 0) {
    dac_or_fm_psg_sample_count = dac_or_fm_psg_sample_count + 0x10000;
  }
  if (dac_refill_limit <= dac_or_fm_psg_sample_count) {
    dac_or_fm_psg_sample_count = dac_refill_limit;
  }
  fm_psg_previous_timer_count = (uint)ds_timer_1_count;
  dac_previous_timer_count = (uint)ds_timer_3_count;
  service_dac_buffer(dac_or_fm_psg_sample_count);
  dac_or_fm_psg_sample_count = fm_psg_ring_samples;
  if ((int)fm_psg_elapsed_samples <= (int)fm_psg_ring_samples) {
    dac_or_fm_psg_sample_count = fm_psg_elapsed_samples;
  }
  pcm_byte_count = dac_or_fm_psg_sample_count * 2;
  samples_before_ring_end = (int)(fm_channel_0_pcm_end - fm_pcm_write_cursor) >> 1;
  if (fm_channel_0_pcm_end < (uint)(fm_pcm_write_cursor + pcm_byte_count)) {
    render_psg_samples(fm_pcm_write_cursor + fm_psg_ring_samples * 0xc,samples_before_ring_end);
    render_six_fm_channels(fm_pcm_write_cursor,samples_before_ring_end);
    dac_or_fm_psg_sample_count = dac_or_fm_psg_sample_count - samples_before_ring_end;
    fm_pcm_write_cursor = fm_pcm_base;
    pcm_byte_count = dac_or_fm_psg_sample_count * 2;
  }
  render_psg_samples(fm_pcm_write_cursor + fm_psg_ring_samples * 0xc,dac_or_fm_psg_sample_count);
  render_six_fm_channels(fm_pcm_write_cursor,dac_or_fm_psg_sample_count);
  fm_pcm_write_cursor = fm_pcm_write_cursor + pcm_byte_count;
  return;
}


// 0x037fbf5c  initialize_audio_buffers_and_clocks

void initialize_audio_buffers_and_clocks(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar3;
  
  puVar5 = (undefined2 *)&DAT_06000000;
  DAT_0380bde0 = 0x1cb;
  fm_psg_ring_samples = 0x800;
  fm_psg_sample_rate_hz = 0x6bab;
  audio_reset_requested = 0;
  fm_psg_previous_timer_count = 0;
  dac_previous_timer_count = 0;
  audio_refills_enabled = 0;
  DAT_0380bddc = 0x200;
  DAT_0380bde4 = 1;
  iVar4 = 0x7000;
  puVar1 = puVar5;
  do {
    iVar4 = iVar4 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 0);
  puVar2 = &fm_channel_pcm_bases;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = puVar5;
    puVar5 = puVar5 + 0x800;
    puVar2 = puVar3;
  } while (puVar3 != &dac_staged_byte_count);
  iVar4 = 0x1000;
  puVar1 = (undefined2 *)&DAT_06007000;
  do {
    iVar4 = iVar4 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 0);
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
}


// 0x037fc14c  reset_audio_buffers_and_chips

void reset_audio_buffers_and_chips(void)

{
  undefined2 *pcm_halfword_cursor;
  int halfwords_remaining;
  
  halfwords_remaining = fm_psg_ring_samples * 0xe;
  pcm_halfword_cursor = (undefined2 *)&DAT_06000000;
  if (0 < halfwords_remaining) {
    do {
      halfwords_remaining = halfwords_remaining + -1;
      *pcm_halfword_cursor = 0;
      pcm_halfword_cursor = pcm_halfword_cursor + 1;
    } while (halfwords_remaining != 0);
  }
  halfwords_remaining = 0x1000;
  pcm_halfword_cursor = (undefined2 *)&DAT_06007000;
  do {
    halfwords_remaining = halfwords_remaining + -1;
    *pcm_halfword_cursor = 0;
    pcm_halfword_cursor = pcm_halfword_cursor + 1;
  } while (halfwords_remaining != 0);
  reset_psg_channel_state(psg_chip_clock_hz,100,fm_psg_sample_rate_hz);
  reset_ym2612_registers();
  fm_pcm_write_cursor = (fm_psg_ring_samples & 0xfffffffe) + 0x6000000;
  dac_pcm_write_cursor = 0x6008000;
  dac_staged_byte_count = 0;
  audio_reset_requested = 0;
  fm_psg_previous_timer_count = 0;
  dac_previous_timer_count = 0;
  send_fifo_command_and_payload(0x11,0);
  return;
}


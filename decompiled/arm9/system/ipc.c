/* ARM9 ipc — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02005b7c  read_ym2612_timer_status

byte read_ym2612_timer_status(void)

{
  return *(byte *)(z80_context_pointer + 0x480) & 3;
}


// 0x02005ba0  queue_ym2612_register_or_dac_write

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void queue_ym2612_register_or_dac_write(uint port_address,uint write_value)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 write_byte;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = ym2612_bank_1_register;
  iVar1 = ym2612_bank_0_register;
  uVar6 = ym2612_bank_1_queue_bytes;
  do {
  } while ((ds_ipc_sync & 0xf) == 0);
  write_byte = (undefined1)write_value;
  switch(port_address & 3) {
  case 0:
    ym2612_selected_bank = 0;
    ym2612_bank_0_register = write_value;
    return;
  case 1:
    break;
  case 2:
    ym2612_selected_bank = 1;
    ym2612_bank_1_register = write_value;
    return;
  case 3:
    if (ym2612_selected_bank == 0) {
      return;
    }
    if (((&DAT_0209927c)[ym2612_bank_1_register] != '\0') && ((byte)(&ym2612_bank_1_mirror)[ym2612_bank_1_register] == write_value))
    {
      return;
    }
    (&ym2612_bank_1_mirror)[ym2612_bank_1_register] = write_byte;
    if (0x1fd < uVar6) {
      return;
    }
    ym2612_bank_1_queue_bytes = uVar6 + 2;
    *(char *)(uVar6 + ym2612_bank_1_write_buffer) = (char)iVar5;
    *(undefined1 *)(uVar6 + 1 + ym2612_bank_1_write_buffer) = write_byte;
  default:
    return;
  }
  if (ym2612_bank_0_register == 0x2a) {
    if (0x3ff < dac_queue_bytes) {
      return;
    }
    DAT_0209904c = write_value & 0x7f | DAT_0209904c;
    *(undefined1 *)(dac_queue_bytes + dac_write_buffer) = write_byte;
    dac_queue_bytes = dac_queue_bytes + 1;
    return;
  }
  if (ym2612_selected_bank == 0) {
    if (((&DAT_0209927c)[ym2612_bank_0_register] != '\0') && ((byte)(&ym2612_bank_0_mirror)[ym2612_bank_0_register] == write_value))
    {
      return;
    }
    (&ym2612_bank_0_mirror)[ym2612_bank_0_register] = write_byte;
    iVar5 = z80_context_pointer;
    switch(iVar1) {
    case 0x24:
      uVar6 = DAT_023db784 & 3 | write_value << 2;
      if (DAT_023db784 == uVar6) {
        return;
      }
      break;
    case 0x25:
      uVar6 = DAT_023db784 & 0x3fc | write_value & 3;
      if (DAT_023db784 == uVar6) {
        return;
      }
      break;
    case 0x26:
      if (DAT_023db790 == write_value) {
        return;
      }
      iVar1 = (uint)(ushort)(&DAT_023dbf98)[write_value] << 5;
      DAT_023db788 = iVar1;
      DAT_023db790 = write_value;
      *(undefined1 *)(z80_context_pointer + 0x48f) = 0;
      *(char *)(iVar5 + 0x48d) = (char)((uint)iVar1 >> 8);
      *(char *)(iVar5 + 0x48e) = (char)((uint)iVar1 >> 0x10);
      *(char *)(iVar5 + 0x48c) = (char)iVar1;
      iVar1 = z80_context_pointer;
      *(undefined1 *)(z80_context_pointer + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar1 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar1 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar1 + 0x493) = DAT_023db788._3_1_;
      return;
    case 0x27:
      DAT_023db778 = write_value;
      if ((write_value & 0x20) != 0) {
        DAT_023db794 = DAT_023db794 & 0xfffffffd;
        puVar2 = (uint *)(z80_context_pointer + 0x480);
        uVar6 = *puVar2 & 0xfffffffd;
        *(char *)(z80_context_pointer + 0x483) = (char)(uVar6 >> 0x18);
        *(byte *)(iVar5 + 0x480) = (byte)*puVar2 & 0xfd;
        *(char *)(iVar5 + 0x481) = (char)(uVar6 >> 8);
        *(char *)(iVar5 + 0x482) = (char)(uVar6 >> 0x10);
      }
      iVar5 = z80_context_pointer;
      if ((write_value & 0x10) != 0) {
        DAT_023db794 = DAT_023db794 & 0xfffffffe;
        puVar2 = (uint *)(z80_context_pointer + 0x480);
        uVar6 = *puVar2 & 0xfffffffe;
        *(char *)(z80_context_pointer + 0x483) = (char)(uVar6 >> 0x18);
        *(byte *)(iVar5 + 0x480) = (byte)*puVar2 & 0xfe;
        *(char *)(iVar5 + 0x481) = (char)(uVar6 >> 8);
        *(char *)(iVar5 + 0x482) = (char)(uVar6 >> 0x10);
      }
      iVar5 = z80_context_pointer;
      bVar3 = *(byte *)(z80_context_pointer + 0x480);
      *(undefined1 *)(z80_context_pointer + 0x481) = 0;
      *(undefined1 *)(iVar5 + 0x483) = 0;
      *(undefined1 *)(iVar5 + 0x482) = 0;
      *(byte *)(iVar5 + 0x480) = bVar3 & 3;
      iVar5 = z80_context_pointer;
      uVar6 = *(uint *)(z80_context_pointer + 0x480);
      uVar7 = uVar6 | write_value << 8;
      *(char *)(z80_context_pointer + 0x483) = (char)(uVar7 >> 0x18);
      *(char *)(iVar5 + 0x481) = (char)(uVar7 >> 8);
      *(char *)(iVar5 + 0x482) = (char)(uVar7 >> 0x10);
      *(char *)(iVar5 + 0x480) = (char)uVar6;
    default:
      if (0x1fd < ym2612_bank_0_queue_bytes) {
        return;
      }
      *(char *)(ym2612_bank_0_queue_bytes + DAT_023db644) = (char)iVar1;
      *(undefined1 *)(ym2612_bank_0_queue_bytes + 1 + DAT_023db644) = write_byte;
      ym2612_bank_0_queue_bytes = ym2612_bank_0_queue_bytes + 2;
      return;
    }
    iVar1 = (uint)(ushort)(&DAT_023db798)[uVar6] << 1;
    DAT_023db77c = iVar1;
    DAT_023db784 = uVar6;
    *(undefined1 *)(z80_context_pointer + 0x487) = 0;
    *(char *)(iVar5 + 0x485) = (char)((uint)iVar1 >> 8);
    *(char *)(iVar5 + 0x486) = (char)((uint)iVar1 >> 0x10);
    *(char *)(iVar5 + 0x484) = (char)iVar1;
    iVar1 = z80_context_pointer;
    *(undefined1 *)(z80_context_pointer + 0x488) = (undefined1)DAT_023db77c;
    *(undefined1 *)(iVar1 + 0x489) = DAT_023db77c._1_1_;
    *(undefined1 *)(iVar1 + 0x48a) = DAT_023db77c._2_1_;
    *(undefined1 *)(iVar1 + 0x48b) = DAT_023db77c._3_1_;
    return;
  }
  return;
}


// 0x020061a8  submit_arm7_dac_sample_buffer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool submit_arm7_dac_sample_buffer(void)

{
  ushort uVar1;
  bool bVar2;
  
  do {
  } while ((ds_ipc_sync & 0xf) == 0);
  if (DAT_0209904c == 0) {
    *(undefined4 *)(shared_audio_descriptor + 4) = 0;
  }
  else {
    *(undefined4 *)(shared_audio_descriptor + 4) = dac_queue_bytes;
  }
  DAT_0209904c = 0;
  dac_queue_bytes = 0;
  DC_FlushRange(shared_audio_descriptor,0x104);
  bVar2 = (ds_ipc_fifo_control & 2) != 0;
  uVar1 = ds_ipc_fifo_control;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    ds_ipc_fifo_send = 0x10000000;
    uVar1 = ds_ipc_fifo_control;
  }
  ds_ipc_fifo_control = uVar1;
  return !bVar2;
}


// 0x02006228  submit_fm_and_psg_write_buffers_to_arm7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void submit_fm_and_psg_write_buffers_to_arm7(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = shared_audio_descriptor;
  do {
  } while ((ds_ipc_sync & 0xf) == 0);
  *(undefined4 *)(shared_audio_descriptor + 0x14) = ym2612_bank_0_queue_bytes;
  iVar2 = shared_audio_descriptor;
  *(undefined4 *)(iVar1 + 0x24) = ym2612_bank_1_queue_bytes;
  *(undefined4 *)(iVar1 + 0x34) = psg_queue_bytes;
  ym2612_bank_0_queue_bytes = 0;
  ym2612_bank_1_queue_bytes = 0;
  psg_queue_bytes = 0;
  DC_FlushRange(iVar2,0x104);
  send_arm9_fifo_command_and_payload(0xb,0);
  DAT_0209905c = DAT_0209905c + 1;
  return;
}


// 0x020062c4  request_arm7_audio_stop

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool request_arm7_audio_stop(void)

{
  ushort uVar1;
  bool bVar2;
  
  bVar2 = (ds_ipc_fifo_control & 2) != 0;
  uVar1 = ds_ipc_fifo_control;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    ds_ipc_fifo_send = 0x6000000;
    uVar1 = ds_ipc_fifo_control;
  }
  ds_ipc_fifo_control = uVar1;
  return !bVar2;
}


// 0x020062d0  reset_fm_and_clear_queued_sound_writes

void reset_fm_and_clear_queued_sound_writes(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  send_arm9_fifo_command_and_payload(2,0);
  dac_queue_bytes = 0;
  puVar3 = &ym2612_bank_1_mirror;
  ym2612_bank_1_queue_bytes = 0;
  DAT_023db788 = 0;
  ym2612_bank_0_queue_bytes = 0;
  DAT_02099230 = 0xc0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_02099132 = 0xc0;
  DAT_02099232 = 0xc0;
  DAT_02099131 = 0xc0;
  DAT_02099231 = 0xc0;
  DAT_02099130 = 0xc0;
  puVar1 = &ym2612_bank_0_mirror;
  do {
    puVar2 = puVar1;
    puVar2[0xb2] = 0;
    puVar3[0xb2] = 0;
    puVar3 = puVar3 + -1;
    puVar1 = puVar2 + -1;
  } while (puVar2 + -1 != (undefined1 *)0x2098ff9);
  puVar2[0xad] = 0;
  puVar2[0xa8] = 0;
  puVar2[0xa7] = 0;
  puVar2[0xa6] = 0;
  puVar2[0xa5] = 0;
  puVar2[0xa4] = 0;
  puVar2[0xa3] = 0;
  puVar2[0xa2] = 0;
  return;
}


// 0x020062f0  set_arm7_audio_muted

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool set_arm7_audio_muted(int param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0xe;
  if (param_1 == 0) {
    iVar2 = 0xf;
  }
  bVar3 = (ds_ipc_fifo_control & 2) != 0;
  uVar1 = ds_ipc_fifo_control;
  if (bVar3) {
    uVar1 = 0x8408;
  }
  iVar2 = iVar2 << 0x18;
  if (bVar3) {
    ds_ipc_fifo_control = uVar1;
    iVar2 = ds_ipc_fifo_send;
  }
  ds_ipc_fifo_send = iVar2;
  return !bVar3;
}


// 0x02006308  clear_audio_queues_and_reset_or_stop_arm7_audio

/* WARNING: Removing unreachable block (ram,0x020063a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint clear_audio_queues_and_reset_or_stop_arm7_audio(int param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  
  dac_queue_bytes = 0;
  ym2612_bank_1_queue_bytes = 0;
  ym2612_bank_0_queue_bytes = 0;
  DAT_0209939c = 0;
  psg_queue_bytes = 0;
  ym2612_bank_0_register = 0;
  DAT_023db794 = 0;
  ym2612_bank_1_register = 0;
  ym2612_selected_bank = 0;
  DAT_0209906c = 0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_023db788 = 0;
  if (param_1 == 0) {
    bVar3 = (ds_ipc_fifo_control & 2) != 0;
    uVar1 = ds_ipc_fifo_control;
    if (bVar3) {
      uVar1 = 0x8408;
    }
    if (!bVar3) {
      ds_ipc_fifo_send = 0x6000000;
      uVar1 = ds_ipc_fifo_control;
    }
    ds_ipc_fifo_control = uVar1;
    return (uint)!bVar3;
  }
  uVar2 = send_arm9_fifo_command_and_payload(1,0);
  do {
  } while (DAT_0209906c == 0);
  return uVar2;
}


// 0x020063dc  request_arm7_audio_start

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool request_arm7_audio_start(void)

{
  ushort uVar1;
  bool bVar2;
  
  bVar2 = (ds_ipc_fifo_control & 2) != 0;
  uVar1 = ds_ipc_fifo_control;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    ds_ipc_fifo_send = &DAT_05000000;
    uVar1 = ds_ipc_fifo_control;
  }
  ds_ipc_fifo_control = uVar1;
  return !bVar2;
}


// 0x020063e8  restart_arm7_audio_and_replay_fm_registers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool restart_arm7_audio_and_replay_fm_registers(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  
  irqEnable(1);
  request_arm7_audio_stop();
  swiWaitForVBlank();
  swiWaitForVBlank();
  clear_audio_queues_and_reset_or_stop_arm7_audio(1);
  swiWaitForVBlank();
  swiWaitForVBlank();
  irqDisable(1);
  uVar3 = 0;
  do {
    queue_ym2612_register_or_dac_write(0,uVar3 & 0xff);
    queue_ym2612_register_or_dac_write(1,(&ym2612_bank_0_mirror)[uVar3]);
    queue_ym2612_register_or_dac_write(2,uVar3 & 0xff);
    puVar1 = &ym2612_bank_1_mirror + uVar3;
    uVar3 = uVar3 + 1;
    queue_ym2612_register_or_dac_write(3,*puVar1);
  } while (uVar3 != 0x100);
  irqEnable(1);
  swiWaitForVBlank();
  swiWaitForVBlank();
  bVar4 = (ds_ipc_fifo_control & 2) != 0;
  uVar2 = ds_ipc_fifo_control;
  if (bVar4) {
    uVar2 = 0x8408;
  }
  if (!bVar4) {
    ds_ipc_fifo_send = &DAT_05000000;
    uVar2 = ds_ipc_fifo_control;
  }
  ds_ipc_fifo_control = uVar2;
  return !bVar4;
}


// 0x0200c4a8  dispatch_arm9_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_arm9_fifo_receive_interrupt(void)

{
  do {
    if ((ds_ipc_fifo_control & 0x100) != 0) {
      return;
    }
    while( true ) {
      ipc_received_payload = ds_ipc_fifo_receive & 0xffffff;
      ipc_received_command = ds_ipc_fifo_receive >> 0x18;
      if (ipc_receive_callback == (code *)0x0) break;
      (*ipc_receive_callback)(ipc_received_command,&ipc_received_payload);
      if ((ds_ipc_fifo_control & 0x100) != 0) {
        return;
      }
    }
  } while( true );
}


// 0x0200c520  set_arm9_fifo_receive_callback

void set_arm9_fifo_receive_callback(undefined4 callback)

{
  ipc_receive_callback = callback;
  return;
}


// 0x0200c55c  send_arm9_fifo_command_and_payload

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool send_arm9_fifo_command_and_payload(int command_id,uint payload)

{
  ushort uVar1;
  uint fifo_word;
  bool send_fifo_full;
  
  send_fifo_full = (ds_ipc_fifo_control & 2) != 0;
  uVar1 = ds_ipc_fifo_control;
  if (send_fifo_full) {
    uVar1 = 0x8408;
  }
  fifo_word = payload & 0xffffff | command_id << 0x18;
  if (send_fifo_full) {
    ds_ipc_fifo_control = uVar1;
    fifo_word = ds_ipc_fifo_send;
  }
  ds_ipc_fifo_send = fifo_word;
  return !send_fifo_full;
}


// 0x0200c59c  initialize_arm9_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_arm9_fifo_receive_interrupt(void)

{
  irqSet(0x40000,dispatch_arm9_fifo_receive_interrupt);
  irqEnable(0x40000);
  ds_ipc_fifo_control = 0x8408;
  return;
}


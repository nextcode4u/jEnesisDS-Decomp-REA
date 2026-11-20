/* ARM9 ipc — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02005b7c  read_ym2612_timer_status

byte FUN_02005b7c(void)

{
  return *(byte *)(DAT_0b00002c + 0x480) & 3;
}


// 0x02005ba0  queue_ym2612_register_or_dac_write

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02005ba0(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = DAT_02099068;
  iVar1 = DAT_02099064;
  uVar6 = DAT_02099054;
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  uVar4 = (undefined1)param_2;
  switch(param_1 & 3) {
  case 0:
    DAT_02099060 = 0;
    DAT_02099064 = param_2;
    return;
  case 1:
    break;
  case 2:
    DAT_02099060 = 1;
    DAT_02099068 = param_2;
    return;
  case 3:
    if (DAT_02099060 == 0) {
      return;
    }
    if (((&DAT_0209927c)[DAT_02099068] != '\0') && ((byte)(&DAT_0209917c)[DAT_02099068] == param_2))
    {
      return;
    }
    (&DAT_0209917c)[DAT_02099068] = uVar4;
    if (0x1fd < uVar6) {
      return;
    }
    DAT_02099054 = uVar6 + 2;
    *(char *)(uVar6 + DAT_023db760) = (char)iVar5;
    *(undefined1 *)(uVar6 + 1 + DAT_023db760) = uVar4;
  default:
    return;
  }
  if (DAT_02099064 == 0x2a) {
    if (0x3ff < DAT_02099048) {
      return;
    }
    DAT_0209904c = param_2 & 0x7f | DAT_0209904c;
    *(undefined1 *)(DAT_02099048 + DAT_023db774) = uVar4;
    DAT_02099048 = DAT_02099048 + 1;
    return;
  }
  if (DAT_02099060 == 0) {
    if (((&DAT_0209927c)[DAT_02099064] != '\0') && ((byte)(&DAT_0209907c)[DAT_02099064] == param_2))
    {
      return;
    }
    (&DAT_0209907c)[DAT_02099064] = uVar4;
    iVar5 = DAT_0b00002c;
    switch(iVar1) {
    case 0x24:
      uVar6 = DAT_023db784 & 3 | param_2 << 2;
      if (DAT_023db784 == uVar6) {
        return;
      }
      break;
    case 0x25:
      uVar6 = DAT_023db784 & 0x3fc | param_2 & 3;
      if (DAT_023db784 == uVar6) {
        return;
      }
      break;
    case 0x26:
      if (DAT_023db790 == param_2) {
        return;
      }
      iVar1 = (uint)(ushort)(&DAT_023dbf98)[param_2] << 5;
      DAT_023db788 = iVar1;
      DAT_023db790 = param_2;
      *(undefined1 *)(DAT_0b00002c + 0x48f) = 0;
      *(char *)(iVar5 + 0x48d) = (char)((uint)iVar1 >> 8);
      *(char *)(iVar5 + 0x48e) = (char)((uint)iVar1 >> 0x10);
      *(char *)(iVar5 + 0x48c) = (char)iVar1;
      iVar1 = DAT_0b00002c;
      *(undefined1 *)(DAT_0b00002c + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar1 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar1 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar1 + 0x493) = DAT_023db788._3_1_;
      return;
    case 0x27:
      DAT_023db778 = param_2;
      if ((param_2 & 0x20) != 0) {
        DAT_023db794 = DAT_023db794 & 0xfffffffd;
        puVar2 = (uint *)(DAT_0b00002c + 0x480);
        uVar6 = *puVar2 & 0xfffffffd;
        *(char *)(DAT_0b00002c + 0x483) = (char)(uVar6 >> 0x18);
        *(byte *)(iVar5 + 0x480) = (byte)*puVar2 & 0xfd;
        *(char *)(iVar5 + 0x481) = (char)(uVar6 >> 8);
        *(char *)(iVar5 + 0x482) = (char)(uVar6 >> 0x10);
      }
      iVar5 = DAT_0b00002c;
      if ((param_2 & 0x10) != 0) {
        DAT_023db794 = DAT_023db794 & 0xfffffffe;
        puVar2 = (uint *)(DAT_0b00002c + 0x480);
        uVar6 = *puVar2 & 0xfffffffe;
        *(char *)(DAT_0b00002c + 0x483) = (char)(uVar6 >> 0x18);
        *(byte *)(iVar5 + 0x480) = (byte)*puVar2 & 0xfe;
        *(char *)(iVar5 + 0x481) = (char)(uVar6 >> 8);
        *(char *)(iVar5 + 0x482) = (char)(uVar6 >> 0x10);
      }
      iVar5 = DAT_0b00002c;
      bVar3 = *(byte *)(DAT_0b00002c + 0x480);
      *(undefined1 *)(DAT_0b00002c + 0x481) = 0;
      *(undefined1 *)(iVar5 + 0x483) = 0;
      *(undefined1 *)(iVar5 + 0x482) = 0;
      *(byte *)(iVar5 + 0x480) = bVar3 & 3;
      iVar5 = DAT_0b00002c;
      uVar6 = *(uint *)(DAT_0b00002c + 0x480);
      uVar7 = uVar6 | param_2 << 8;
      *(char *)(DAT_0b00002c + 0x483) = (char)(uVar7 >> 0x18);
      *(char *)(iVar5 + 0x481) = (char)(uVar7 >> 8);
      *(char *)(iVar5 + 0x482) = (char)(uVar7 >> 0x10);
      *(char *)(iVar5 + 0x480) = (char)uVar6;
    default:
      if (0x1fd < DAT_02099050) {
        return;
      }
      *(char *)(DAT_02099050 + DAT_023db644) = (char)iVar1;
      *(undefined1 *)(DAT_02099050 + 1 + DAT_023db644) = uVar4;
      DAT_02099050 = DAT_02099050 + 2;
      return;
    }
    iVar1 = (uint)(ushort)(&DAT_023db798)[uVar6] << 1;
    DAT_023db77c = iVar1;
    DAT_023db784 = uVar6;
    *(undefined1 *)(DAT_0b00002c + 0x487) = 0;
    *(char *)(iVar5 + 0x485) = (char)((uint)iVar1 >> 8);
    *(char *)(iVar5 + 0x486) = (char)((uint)iVar1 >> 0x10);
    *(char *)(iVar5 + 0x484) = (char)iVar1;
    iVar1 = DAT_0b00002c;
    *(undefined1 *)(DAT_0b00002c + 0x488) = (undefined1)DAT_023db77c;
    *(undefined1 *)(iVar1 + 0x489) = DAT_023db77c._1_1_;
    *(undefined1 *)(iVar1 + 0x48a) = DAT_023db77c._2_1_;
    *(undefined1 *)(iVar1 + 0x48b) = DAT_023db77c._3_1_;
    return;
  }
  return;
}


// 0x020061a8  submit_arm7_dac_sample_buffer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_020061a8(void)

{
  ushort uVar1;
  bool bVar2;
  
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  if (DAT_0209904c == 0) {
    *(undefined4 *)(_DAT_027ff028 + 4) = 0;
  }
  else {
    *(undefined4 *)(_DAT_027ff028 + 4) = DAT_02099048;
  }
  DAT_0209904c = 0;
  DAT_02099048 = 0;
  FUN_020802c4(_DAT_027ff028,0x104);
  bVar2 = (_DAT_04000184 & 2) != 0;
  uVar1 = _DAT_04000184;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    _DAT_04000188 = 0x10000000;
    uVar1 = _DAT_04000184;
  }
  _DAT_04000184 = uVar1;
  return !bVar2;
}


// 0x02006228  submit_fm_and_psg_write_buffers_to_arm7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006228(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_027ff028;
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  *(undefined4 *)(_DAT_027ff028 + 0x14) = DAT_02099050;
  iVar2 = _DAT_027ff028;
  *(undefined4 *)(iVar1 + 0x24) = DAT_02099054;
  *(undefined4 *)(iVar1 + 0x34) = DAT_02099058;
  DAT_02099050 = 0;
  DAT_02099054 = 0;
  DAT_02099058 = 0;
  FUN_020802c4(iVar2,0x104);
  FUN_0200c55c(0xb,0);
  DAT_0209905c = DAT_0209905c + 1;
  return;
}


// 0x020062c4  request_arm7_audio_stop

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_020062c4(void)

{
  ushort uVar1;
  bool bVar2;
  
  bVar2 = (_DAT_04000184 & 2) != 0;
  uVar1 = _DAT_04000184;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    _DAT_04000188 = 0x6000000;
    uVar1 = _DAT_04000184;
  }
  _DAT_04000184 = uVar1;
  return !bVar2;
}


// 0x020062d0  reset_fm_and_clear_queued_sound_writes

void FUN_020062d0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  FUN_0200c55c(2,0);
  DAT_02099048 = 0;
  puVar3 = &DAT_0209917c;
  DAT_02099054 = 0;
  DAT_023db788 = 0;
  DAT_02099050 = 0;
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
  puVar1 = &DAT_0209907c;
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

bool FUN_020062f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0xe;
  if (param_1 == 0) {
    iVar2 = 0xf;
  }
  bVar3 = (_DAT_04000184 & 2) != 0;
  uVar1 = _DAT_04000184;
  if (bVar3) {
    uVar1 = 0x8408;
  }
  iVar2 = iVar2 << 0x18;
  if (bVar3) {
    _DAT_04000184 = uVar1;
    iVar2 = _DAT_04000188;
  }
  _DAT_04000188 = iVar2;
  return !bVar3;
}


// 0x02006308  clear_audio_queues_and_reset_or_stop_arm7_audio

/* WARNING: Removing unreachable block (ram,0x020063a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02006308(int param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  
  DAT_02099048 = 0;
  DAT_02099054 = 0;
  DAT_02099050 = 0;
  DAT_0209939c = 0;
  DAT_02099058 = 0;
  DAT_02099064 = 0;
  DAT_023db794 = 0;
  DAT_02099068 = 0;
  DAT_02099060 = 0;
  DAT_0209906c = 0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_023db788 = 0;
  if (param_1 == 0) {
    bVar3 = (_DAT_04000184 & 2) != 0;
    uVar1 = _DAT_04000184;
    if (bVar3) {
      uVar1 = 0x8408;
    }
    if (!bVar3) {
      _DAT_04000188 = 0x6000000;
      uVar1 = _DAT_04000184;
    }
    _DAT_04000184 = uVar1;
    return (uint)!bVar3;
  }
  uVar2 = FUN_0200c55c(1,0);
  do {
  } while (DAT_0209906c == 0);
  return uVar2;
}


// 0x020063dc  request_arm7_audio_start

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_020063dc(void)

{
  ushort uVar1;
  bool bVar2;
  
  bVar2 = (_DAT_04000184 & 2) != 0;
  uVar1 = _DAT_04000184;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    _DAT_04000188 = &DAT_05000000;
    uVar1 = _DAT_04000184;
  }
  _DAT_04000184 = uVar1;
  return !bVar2;
}


// 0x020063e8  restart_arm7_audio_and_replay_fm_registers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_020063e8(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  
  thunk_FUN_020801fc(1);
  FUN_020062c4();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006308(1);
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  thunk_FUN_0208024c(1);
  uVar3 = 0;
  do {
    FUN_02005ba0(0,uVar3 & 0xff);
    FUN_02005ba0(1,(&DAT_0209907c)[uVar3]);
    FUN_02005ba0(2,uVar3 & 0xff);
    puVar1 = &DAT_0209917c + uVar3;
    uVar3 = uVar3 + 1;
    FUN_02005ba0(3,*puVar1);
  } while (uVar3 != 0x100);
  thunk_FUN_020801fc(1);
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  bVar4 = (_DAT_04000184 & 2) != 0;
  uVar2 = _DAT_04000184;
  if (bVar4) {
    uVar2 = 0x8408;
  }
  if (!bVar4) {
    _DAT_04000188 = &DAT_05000000;
    uVar2 = _DAT_04000184;
  }
  _DAT_04000184 = uVar2;
  return !bVar4;
}


// 0x0200c4a8  dispatch_arm9_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200c4a8(void)

{
  do {
    if ((_DAT_04000184 & 0x100) != 0) {
      return;
    }
    while( true ) {
      DAT_020b4c3c = _DAT_04100000 & 0xffffff;
      DAT_020b4c38 = _DAT_04100000 >> 0x18;
      if (DAT_023ddeb8 == (code *)0x0) break;
      (*DAT_023ddeb8)(DAT_020b4c38,&DAT_020b4c3c);
      if ((_DAT_04000184 & 0x100) != 0) {
        return;
      }
    }
  } while( true );
}


// 0x0200c520  set_arm9_fifo_receive_callback

void FUN_0200c520(undefined4 param_1)

{
  DAT_023ddeb8 = param_1;
  return;
}


// 0x0200c55c  send_arm9_fifo_command_and_payload

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0200c55c(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = (_DAT_04000184 & 2) != 0;
  uVar1 = _DAT_04000184;
  if (bVar3) {
    uVar1 = 0x8408;
  }
  uVar2 = param_2 & 0xffffff | param_1 << 0x18;
  if (bVar3) {
    _DAT_04000184 = uVar1;
    uVar2 = _DAT_04000188;
  }
  _DAT_04000188 = uVar2;
  return !bVar3;
}


// 0x0200c59c  initialize_arm9_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200c59c(void)

{
  thunk_FUN_02080098(0x40000,FUN_0200c4a8);
  thunk_FUN_020801fc(0x40000);
  _DAT_04000184 = 0x8408;
  return;
}


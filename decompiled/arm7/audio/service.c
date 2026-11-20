/* ARM7 service — grouped REA pseudocode.
 * ARM7 audio initialization and timer-driven refill of looping PCM buffers.
 */

// 0x037f81f4  run_arm7_audio_service

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm7_main(void)

{
  thunk_FUN_03801200();
  _DAT_04000304 = _DAT_04000304 | 1;
  _DAT_04000500 = 0x807f;
  _DAT_027ff028 = 0;
  thunk_FUN_038015d0();
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0x5000;
  thunk_FUN_03801564(4,&LAB_037f831c);
  thunk_FUN_038016d8(4);
  FUN_037fbf5c();
  FUN_037fc0cc();
  FUN_037fc14c(1);
  thunk_FUN_03801564(1,0);
  thunk_FUN_038016d8(1);
  _DAT_04000180 = 0x100;
  while (DAT_0380bdf4 == 0) {
    if (DAT_0380bdf8 != 0) {
      FUN_037fc14c();
    }
    thunk_FUN_0380178c();
  }
  if (DAT_0380bdf4 != 0) goto LAB_037f82f4;
LAB_037f82d4:
  if (DAT_0380bdf8 != 0) goto LAB_037f8308;
  do {
    thunk_FUN_0380178c();
    while( true ) {
      if (DAT_0380bdf4 == 0) goto LAB_037f82d4;
LAB_037f82f4:
      FUN_037fbeb8();
      if (DAT_0380bdf8 == 0) break;
LAB_037f8308:
      FUN_037fc14c();
      thunk_FUN_0380178c();
    }
  } while( true );
}


// 0x037fb9fc  write_timer_registers_and_sound_channel_registers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fb9fc(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_2c;
  
  local_2c = &DAT_0380b884;
  iVar4 = 0;
  do {
    uVar1 = FUN_038019ec(0xff000000,DAT_0380bde8);
    uVar3 = *local_2c;
    *(undefined2 *)(iVar4 * 0x10 + 0x4000408) = uVar1;
    *(undefined4 *)(iVar4 * 0x10 + 0x4000404) = uVar3;
    *(int *)(iVar4 * 0x10 + 0x400040c) = DAT_0380bdd8 >> 1;
    *(undefined4 *)(&DAT_04000400 + iVar4 * 0x10) = 0xa83f007f;
    uVar1 = FUN_038019ec(0xff000000,DAT_0380bde8);
    iVar2 = iVar4 + 6;
    *(undefined2 *)(iVar2 * 0x10 + 0x4000408) = uVar1;
    *(undefined4 *)(iVar2 * 0x10 + 0x4000404) = uVar3;
    iVar4 = iVar4 + 1;
    *(int *)(iVar2 * 0x10 + 0x400040c) = DAT_0380bdd8 >> 1;
    *(undefined4 *)(&DAT_04000400 + iVar2 * 0x10) = 0xa83f007f;
    local_2c = local_2c + 1;
  } while (iVar4 != 6);
  iVar4 = FUN_038019ec(0xff000000,DAT_0380bde8);
  _DAT_040004c8 = (short)iVar4;
  _DAT_040004c4 = DAT_0380b89c;
  _DAT_040004cc = DAT_0380bdd8 >> 1;
  _DAT_040004c0 = 0xa800007f;
  _DAT_040004d8 = (short)iVar4;
  _DAT_040004d4 = DAT_0380b89c;
  _DAT_040004dc = DAT_0380bdd8 >> 1;
  _DAT_040004d0 = 0xa87f007f;
  _DAT_040004e8 = 0xfdf4;
  _DAT_040004e4 = DAT_0380bdcc;
  _DAT_040004ec = 0x800;
  _DAT_040004e0 = 0xa800007f;
  _DAT_040004f8 = 0xfdf4;
  _DAT_040004f4 = DAT_0380bdcc;
  _DAT_040004fc = 0x800;
  _DAT_040004f0 = 0xa87f007f;
  _DAT_04000100 = (short)((uint)(iVar4 << 0x11) >> 0x10);
  _DAT_04000102 = 0x80;
  _DAT_04000104 = 0;
  _DAT_04000106 = 0x84;
  _DAT_04000108 = 0xfbe8;
  _DAT_0400010a = 0x80;
  _DAT_0400010c = 0;
  _DAT_0400010e = 0x84;
  return;
}


// 0x037fbeb8  update_audio_from_hardware_timers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fbeb8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = _DAT_04000104 - DAT_0380bdec;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0x10000;
  }
  if (DAT_0380b870 <= uVar3) {
    uVar3 = DAT_0380b870;
  }
  uVar2 = _DAT_0400010c - DAT_0380bdf0;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x10000;
  }
  if (DAT_0380b874 <= uVar2) {
    uVar2 = DAT_0380b874;
  }
  DAT_0380bdec = (uint)_DAT_04000104;
  DAT_0380bdf0 = (uint)_DAT_0400010c;
  FUN_037fbda8(uVar2);
  uVar2 = DAT_0380bdd8;
  if ((int)uVar3 <= (int)DAT_0380bdd8) {
    uVar2 = uVar3;
  }
  iVar4 = uVar2 * 2;
  iVar1 = (int)(DAT_0380bdbc - DAT_0380bdc0) >> 1;
  if (DAT_0380bdbc < (uint)(DAT_0380bdc0 + iVar4)) {
    FUN_037f86f4(DAT_0380bdc0 + DAT_0380bdd8 * 0xc,iVar1);
    FUN_037f9d9c(DAT_0380bdc0,iVar1);
    uVar2 = uVar2 - iVar1;
    DAT_0380bdc0 = DAT_0380bdb8;
    iVar4 = uVar2 * 2;
  }
  FUN_037f86f4(DAT_0380bdc0 + DAT_0380bdd8 * 0xc,uVar2);
  FUN_037f9d9c(DAT_0380bdc0,uVar2);
  DAT_0380bdc0 = DAT_0380bdc0 + iVar4;
  return;
}


// 0x037fbf5c  initialize_audio_buffers_and_clocks

void FUN_037fbf5c(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar3;
  
  puVar5 = (undefined2 *)&DAT_06000000;
  DAT_0380bde0 = 0x1cb;
  DAT_0380bdd8 = 0x800;
  DAT_0380bde8 = 0x6bab;
  DAT_0380bdf8 = 0;
  DAT_0380bdec = 0;
  DAT_0380bdf0 = 0;
  DAT_0380bdf4 = 0;
  DAT_0380bddc = 0x200;
  DAT_0380bde4 = 1;
  iVar4 = 0x7000;
  puVar1 = puVar5;
  do {
    iVar4 = iVar4 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 0);
  puVar2 = &DAT_0380b884;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = puVar5;
    puVar5 = puVar5 + 0x800;
    puVar2 = puVar3;
  } while (puVar3 != &DAT_0380b8a0);
  iVar4 = 0x1000;
  puVar1 = (undefined2 *)&DAT_06007000;
  do {
    iVar4 = iVar4 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 0);
  DAT_0380bdd4 = 0x6009000;
  DAT_0380bdbc = DAT_0380bdd8 * 2 + 0x6000000;
  DAT_0380bafc = 0x369e99;
  DAT_0380bdd0 = &DAT_06007000;
  DAT_0380bdc4 = 0x6000000;
  DAT_0380bb00 = 0x750ab5;
  DAT_0380bdb8 = 0x6000000;
  DAT_0380bdc0 = 0x6000000;
  DAT_0380bdcc = &DAT_06007000;
  DAT_0380bdc8 = DAT_0380bdbc;
  FUN_037f8a30(0x369e99,100,DAT_0380bde8,DAT_0380bdd8);
  FUN_037f93e8(DAT_0380bb00,DAT_0380bde8,DAT_0380bdd8);
  DAT_0380b8a0 = 0;
  DAT_0380b870 = DAT_0380bde0 << 1;
  DAT_0380b874 = 0x42a;
  return;
}


// 0x037fc14c  reset_audio_buffers_and_chips

void FUN_037fc14c(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0380bdd8 * 0xe;
  puVar1 = (undefined2 *)&DAT_06000000;
  if (0 < iVar2) {
    do {
      iVar2 = iVar2 + -1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  iVar2 = 0x1000;
  puVar1 = (undefined2 *)&DAT_06007000;
  do {
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  FUN_037f89bc(DAT_0380bafc,100,DAT_0380bde8);
  FUN_037f9238();
  DAT_0380bdc0 = (DAT_0380bdd8 & 0xfffffffe) + 0x6000000;
  DAT_0380bdd0 = 0x6008000;
  DAT_0380b8a0 = 0;
  DAT_0380bdf8 = 0;
  DAT_0380bdec = 0;
  DAT_0380bdf0 = 0;
  FUN_037fc514(0x11,0);
  return;
}


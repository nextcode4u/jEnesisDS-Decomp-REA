/* ARM7 ipc — grouped REA pseudocode.
 * FIFO receive and message decoding, including ARM9 audio commands.
 */

// 0x037fc0cc  initialize_sound_message_handler

void FUN_037fc0cc(void)

{
  FUN_037fc544();
  FUN_037fc504(FUN_037fc218);
  return;
}


// 0x037fc218  handle_arm9_audio_command

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc218(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar3;
  
  puVar2 = _DAT_027ff028;
  switch(param_1) {
  case 0:
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
  case 1:
    DAT_0380bdf8 = 1;
    break;
  case 2:
    FUN_037f9238();
    break;
  case 5:
    _DAT_04000500 = 0x807f;
    FUN_037fb9fc();
    DAT_0380bdf4 = 1;
    break;
  case 6:
    _DAT_04000500 = 0x8000;
    DAT_0380bdf4 = 0;
    _DAT_04000400 = 0;
    _DAT_04000410 = 0;
    _DAT_04000420 = 0;
    _DAT_04000430 = 0;
    _DAT_04000440 = 0;
    _DAT_04000450 = 0;
    _DAT_04000460 = 0;
    _DAT_04000470 = 0;
    _DAT_04000480 = 0;
    _DAT_04000490 = 0;
    _DAT_040004a0 = 0;
    _DAT_040004b0 = 0;
    _DAT_040004c0 = 0;
    _DAT_040004d0 = 0;
    _DAT_040004e0 = 0;
    _DAT_040004f0 = 0;
    _DAT_04000102 = 0;
    _DAT_04000106 = 0;
    _DAT_0400010a = 0;
    _DAT_0400010e = 0;
    return;
  case 0xb:
    iVar4 = _DAT_027ff028[5];
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = iVar4 + 1 >> 1;
        puVar1 = &DAT_0380bb38;
        puVar5 = (undefined2 *)_DAT_027ff028[4];
        do {
          iVar4 = iVar4 + -1;
          *puVar1 = *puVar5;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
      FUN_037f9afc(&DAT_0380bb38);
    }
    iVar4 = _DAT_027ff028[9];
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = iVar4 + 1 >> 1;
        puVar1 = &DAT_0380bb38;
        puVar5 = (undefined2 *)_DAT_027ff028[8];
        do {
          iVar4 = iVar4 + -1;
          *puVar1 = *puVar5;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
      FUN_037f9394(&DAT_0380bb38);
    }
    iVar4 = _DAT_027ff028[0xd];
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = iVar4 + 1 >> 1;
        puVar1 = &DAT_0380bb38;
        puVar5 = (undefined2 *)_DAT_027ff028[0xc];
        do {
          iVar4 = iVar4 + -1;
          *puVar1 = *puVar5;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
      FUN_037f8504(&DAT_0380bb38);
    }
    DAT_0380bdf4 = 1;
    break;
  case 0xc:
    thunk_FUN_0380178c(param_1,*param_2);
    break;
  case 0xe:
    _DAT_04000500 = 0x8000;
    break;
  case 0xf:
    _DAT_04000500 = 0x807f;
    break;
  case 0x10:
    DAT_0380b8a0 = _DAT_027ff028[1];
    if ((DAT_0380b8a0 != 0) && (0 < DAT_0380b8a0)) {
      iVar4 = DAT_0380b8a0 + 1 >> 1;
      puVar1 = &DAT_0380b8a4;
      puVar5 = (undefined2 *)*_DAT_027ff028;
      do {
        iVar4 = iVar4 + -1;
        *puVar1 = *puVar5;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar4 != 0);
    }
    puVar2[1] = 0;
  }
  return;
}


// 0x037fc468  dispatch_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc468(void)

{
  _DAT_04000180 = 0;
  do {
    if ((_DAT_04000184 & 0x100) != 0) {
      _DAT_04000180 = 0x100;
      return;
    }
    while( true ) {
      DAT_0380bb08 = _DAT_04100000 & 0xffffff;
      DAT_0380bb04 = _DAT_04100000 >> 0x18;
      if (DAT_0380be00 == (code *)0x0) break;
      (*DAT_0380be00)(DAT_0380bb04,&DAT_0380bb08);
      if ((_DAT_04000184 & 0x100) != 0) {
        _DAT_04000180 = 0x100;
        return;
      }
    }
  } while( true );
}


// 0x037fc504  set_fifo_message_callback

void FUN_037fc504(undefined4 param_1)

{
  DAT_0380be00 = param_1;
  return;
}


// 0x037fc514  send_fifo_command_and_payload

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc514(int param_1,uint param_2)

{
  do {
  } while ((_DAT_04000184 & 2) != 0);
  _DAT_04000188 = param_2 & 0xffffff | param_1 << 0x18;
  return;
}


// 0x037fc544  enable_fifo_receive_interrupt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc544(void)

{
  _DAT_04000184 = 0x8008;
  thunk_FUN_03801564(0x40000,FUN_037fc468);
  thunk_FUN_038016d8(0x40000);
  _DAT_04000184 = 0x8408;
  _DAT_04000180 = 0;
  return;
}


/* ARM9 emulator — grouped REA pseudocode.
 * Cartridge reset, frame schedulers, main loop and controller sampling.
 */

// 0x02000868  run_frame_h_int_off

void FUN_02000868(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = DAT_0b000018;
  iVar2 = DAT_0b000014;
  uVar1 = DAT_0b000004;
  iVar5 = DAT_0b000000;
  FUN_0200b438();
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 0x10;
      FUN_0200b284(0x24);
      for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        DAT_0b00000c = uVar4;
        FUN_020090e8(uVar4);
        (*DAT_023dcea8)(uVar4);
      }
      (*DAT_0b000040)(iVar2 << 4);
      if ((((DAT_023cb610 & 2) == 0) && (DAT_02099001 == '\x01')) && (DAT_02099000 == '\0')) {
        FUN_0200df50(&DAT_0b000158,iVar3 << 4);
      }
      uVar4 = uVar6;
    } while (uVar6 < uVar1);
  }
  DAT_0b00000c = uVar6;
  FUN_02009144(uVar6);
  FUN_0200b284(0);
  DAT_0b000080 = 4;
  DAT_0b00007c = 8;
  (*DAT_0b000040)(0x4a);
  FUN_020004e0(6);
  FUN_02004ef4(&DAT_0b000158,1,1);
  DAT_0b000080 = 0;
  (*DAT_0b000040)(iVar2 + -0x4a);
  iVar5 = (iVar5 - uVar6) + -1;
  (*DAT_0b000040)(iVar5 * iVar2);
  if ((((DAT_023cb610 & 2) == 0) && (DAT_02099001 == '\x01')) && (DAT_02099000 == '\0')) {
    FUN_0200df50(&DAT_0b000158,iVar5 * iVar3);
  }
  FUN_020061a8();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


// 0x02000a2c  run_frame_h_int_on

void FUN_02000a2c(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_0200b438();
  uVar2 = DAT_0b000010;
  uVar4 = DAT_0b000004;
  uVar1 = DAT_0b000000;
  FUN_020090e8();
  DAT_0b000080 = 4;
  FUN_02000568(0x22);
  DAT_0b000080 = 0;
  (*DAT_023dcea8)(0);
  FUN_02000538(uVar2);
  FUN_020006b8(0);
  FUN_02004ef4(&DAT_0b000158,1,0);
  if (uVar4 < 2) {
    uVar5 = 2;
    uVar4 = (uint)(uVar4 < 2);
  }
  else {
    uVar5 = 1;
    do {
      FUN_020090e8(uVar5);
      DAT_0b000080 = 4;
      FUN_02000568(0x22);
      DAT_0b000080 = 0;
      (*DAT_023dcea8)(uVar5);
      FUN_02000538(uVar2);
      uVar3 = uVar5 + 1;
      FUN_020006b8(uVar5);
      uVar5 = uVar3;
    } while (uVar4 != uVar3);
    uVar5 = uVar4 + 1;
  }
  FUN_02009144(uVar4);
  DAT_0b00007c = 8;
  DAT_0b000080 = 4;
  FUN_02000538(0x4a);
  FUN_02004ef4(&DAT_0b000158,1,1);
  DAT_0b000080 = 0;
  FUN_02000538(uVar2);
  FUN_020006b8(uVar4);
  if (uVar5 < uVar1) {
    do {
      FUN_020091ec(uVar5);
      DAT_0b000080 = 4;
      FUN_02000568(0x22);
      DAT_0b000080 = 0;
      FUN_02000538(uVar2);
      FUN_020006b8(uVar5);
      DAT_0b000080 = 4;
      uVar5 = uVar5 + 1;
      FUN_02000538(0x26);
      DAT_0b000080 = 0;
    } while (uVar1 != uVar5);
  }
  FUN_02000588();
  FUN_020061a8();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


// 0x02000c08  reset_emulation_for_cartridge

void FUN_02000c08(void)

{
  DAT_0b000000 = 0x106;
  if (DAT_0b000020 == 0) {
    DAT_0b000000 = 0x138;
  }
  DAT_0b000004 = 0xe0;
  DAT_0b000014 = 0x1e7;
  DAT_0b000018 = 0xe3;
  DAT_0b000010 = 0x19d;
  DAT_0b00000c = 0;
  DAT_0b000008 = 0;
  DAT_0b000024 = 0;
  DAT_0b0000a8 = 0;
  FUN_020054d4(&DAT_0b0000ac);
  FUN_02004dcc(&DAT_0b000158);
  if ((DAT_023cb610 & 1) == 0) {
    FUN_02003a50(DAT_0b000030,0);
    FUN_02003a50(DAT_0b000034,0);
  }
  else {
    FUN_02003a50(DAT_0b000030);
    FUN_02003a50(DAT_0b000034,1);
  }
  FUN_020037b4(DAT_0b000030);
  FUN_020037b4(DAT_0b000034);
  FUN_02004bf0();
  FUN_02004d94();
  FUN_0200b6a8();
  FUN_020062c4();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006308(1);
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_020063dc();
  if ((DAT_023cb610 & 4) == 0) {
    DAT_023dcea8 = FUN_0200c280;
  }
  else {
    switch(DAT_023dcdb0) {
    case 0:
      DAT_023dcea8 = (code *)&LAB_0200bbd0;
      return;
    case 1:
      DAT_023dcea8 = (code *)&LAB_0200c0cc;
      return;
    case 2:
      DAT_023dcea8 = (code *)&LAB_0200bf18;
      return;
    case 3:
      DAT_023dcea8 = (code *)&LAB_0200bd6c;
      return;
    }
  }
  return;
}


// 0x02000dac  initialize_emulator_state_and_shared_audio

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000dac(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  
  FUN_02005780(&DAT_0b0000ac,0x2003b34,0x2003b60,0x2003b8c,0x2003cf8,&LAB_02003d24,0x2003d50,
               0x2003d98,&LAB_02009214,&LAB_02003c88);
  FUN_020050a8(&DAT_0b000158);
  uVar4 = FUN_02004c18();
  DAT_0b000559 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b00055a = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b00055b = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000558 = (undefined1)uVar4;
  uVar4 = FUN_02003ca4();
  DAT_0b000609 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b00060a = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b00060b = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000608 = (undefined1)uVar4;
  uVar4 = FUN_02003cbc();
  DAT_0b000600 = 0x78;
  DAT_0b000605 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b000606 = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b000601 = 0xb7;
  DAT_0b000602 = 0x3d;
  DAT_0b000604 = (undefined1)uVar4;
  DAT_0b000607 = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000603 = 2;
  FUN_02003af0();
  FUN_02004bf0();
  FUN_02004d94();
  if (DAT_0b000030 == 0) {
    DAT_0b000030 = FUN_02003ad4();
  }
  if (DAT_0b000034 == 0) {
    DAT_0b000034 = FUN_02003ad4();
  }
  DAT_0b00002c = &DAT_0b000158;
  DAT_0b000028 = &DAT_0b0000ac;
  FUN_02000d10();
  if (DAT_02099070 == 0) {
    FUN_0200c59c(1);
    FUN_0200c520(&LAB_020059a4);
    uVar5 = FUN_02082560(0x20,0x400);
    DAT_023db774 = uVar5 | 0x400000;
    uVar5 = FUN_02082560(0x20,0x400);
    DAT_023db644 = uVar5 | 0x400000;
    uVar5 = FUN_02082560(0x20,0x400);
    DAT_023db760 = uVar5 | 0x400000;
    uVar5 = FUN_02082560(0x20,0x100);
    DAT_023db648 = DAT_023db774 | 0x400000;
    DAT_023db66c = DAT_023db644 | 0x400000;
    DAT_023db634 = DAT_023db760 | 0x400000;
    DAT_023db658 = uVar5 | 0x400000;
    DAT_023db64c = 0;
    DAT_023db768 = 0;
    DAT_023db638 = 0;
    DAT_023dc19c = 0;
    DAT_023db660 = 0;
    DAT_023db664 = DAT_023db650;
    DAT_023db668 = DAT_023db654;
    DAT_023db670 = 0;
    DAT_023db674 = DAT_023db76c;
    DAT_023db678 = DAT_023db770;
    DAT_023db680 = 0;
    DAT_023db684 = DAT_023db63c;
    DAT_023db688 = DAT_023db640;
    DAT_023db690 = 0;
    DAT_023db694 = DAT_023dc1a0;
    DAT_023db698 = DAT_023dc1a4;
    _DAT_027ff028 = &DAT_023db65c;
    DAT_023db75c = 4;
    puVar1 = &DAT_0209927c;
    DAT_023db65c = DAT_023db648;
    DAT_023db67c = DAT_023db634;
    DAT_023db68c = DAT_023db658;
    DAT_023db764 = DAT_023db66c;
    DAT_023dc198 = DAT_023db658;
    do {
      puVar6 = puVar1;
      *puVar6 = 1;
      puVar1 = puVar6 + 1;
    } while (puVar6 + 1 != &DAT_0209937c);
    puVar8 = &DAT_023db778;
    DAT_02099070 = 1;
    puVar6[-0x56] = 0;
    puVar6[-0xdb] = 0;
    puVar6[-0xda] = 0;
    puVar6[-0xd9] = 0;
    puVar6[-0xd8] = 0;
    puVar6[-0xd5] = 0;
    puVar6[-0x5f] = 0;
    puVar6[-0x5e] = 0;
    puVar6[-0x5d] = 0;
    puVar6[-0x5c] = 0;
    puVar6[-0x5b] = 0;
    puVar6[-0x5a] = 0;
    puVar6[-0x59] = 0;
    puVar6[-0x58] = 0;
    puVar6[-0x57] = 0;
    iVar2 = 0;
    do {
      iVar7 = iVar2;
      uVar11 = FUN_02080958(iVar7);
      if (iVar7 < 0) {
        uVar11 = FUN_02080624((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x41f00000);
      }
      uVar11 = FUN_02080620(0,0x40900000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      FUN_02080a34((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc669057d,0x40401ba2);
      uVar3 = FUN_02080ed0();
      *(undefined2 *)(puVar8 + 8) = uVar3;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      iVar2 = iVar7 + 1;
    } while (iVar7 + 1 != 0x400);
    iVar7 = iVar7 + -0x3ff;
    puVar9 = &DAT_023dbf98;
    do {
      uVar11 = FUN_02080958(iVar7);
      bVar10 = iVar7 < 0;
      iVar7 = iVar7 + 1;
      if (bVar10) {
        uVar11 = FUN_02080624((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x41f00000);
      }
      uVar11 = FUN_02080620(0,0x40700000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      FUN_02080a34((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc669057d,0x40401ba2);
      uVar3 = FUN_02080ed0();
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    } while (iVar7 != 0x100);
  }
  return;
}


// 0x020011e4  run_emulator_and_file_menu

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm9_main(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02002068();
  FUN_020011b0();
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  thunk_FUN_02006bb0();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  iVar1 = FUN_020034b0((undefined1)DAT_02098fb0);
joined_r0x02001238:
  if (iVar1 == 1) {
    FUN_0200d8c4();
    FUN_020027d0();
  }
  else {
    if (iVar1 == 2) {
      FUN_020027d0();
      FUN_020062f0(0);
      goto LAB_0200126c;
    }
    FUN_020023e0("Error accessing file system...shutting down!\n");
    FUN_020027d0();
  }
  FUN_02000dac();
switchD_020012ec_caseD_3:
  FUN_02000c08();
  DAT_02098fa4 = 0;
  DAT_02098fa0 = 0;
  FUN_0200106c();
LAB_0200126c:
  DAT_02098fb0 = 1;
  DAT_02098fa8 = 0;
LAB_02001288:
  DAT_02098fac = DAT_02098fac + 1;
  if (DAT_02098fac == 8) {
    if ((*(char *)(DAT_02098fc8 + 0x261) != '\0') && (*(char *)(DAT_02098fc8 + 0x263) != '\0')) {
      if (0x78 < (uint)(DAT_0b000008 - DAT_02098fb4)) {
        FUN_0200163c();
      }
      DAT_02098fb4 = DAT_0b000008;
    }
    do {
      DAT_02098fac = 0;
      uVar2 = FUN_020025a8();
      switch(uVar2) {
      case 1:
        thunk_FUN_0208031c();
        thunk_FUN_02006bb0();
        FUN_020027d0();
        thunk_FUN_02006908(DAT_02098fc0);
        FUN_0200da3c("-= PAUSED =-",0xe,10);
        FUN_0200d9ec(0x10);
        FUN_0200da3c("Continue with [SELECT]",0x10,5);
        FUN_0200da3c("   or TOUCH BOTTOM",0x11,5);
        FUN_0200da3c("Use [D-Pad] to adjust screen",0x13,2);
        DAT_02098fa8 = 1;
        break;
      case 2:
        goto switchD_020012ec_caseD_2;
      case 3:
        goto switchD_020012ec_caseD_3;
      default:
        if (DAT_02098fa8 == 0) goto LAB_020013bc;
        break;
      case 6:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        thunk_FUN_02006bb0();
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
        iVar1 = FUN_020034b0((undefined1)DAT_02098fb0);
        goto joined_r0x02001238;
      case 8:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        FUN_02002c68((undefined1)DAT_02098fb0);
        FUN_020062f0(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      case 9:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        FUN_02002e54(1);
        FUN_020062f0(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      case 10:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        FUN_02002e54(2);
        FUN_020062f0(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      }
      FUN_02002150();
      thunk_FUN_0208031c();
      FUN_020062f0(1);
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      (*DAT_0b00003c)();
    } while( true );
  }
  goto LAB_020013bc;
switchD_020012ec_caseD_2:
  FUN_0200d8c4();
  thunk_FUN_02006bb0();
  FUN_020027d0();
  FUN_020062f0(0);
  DAT_02098fa8 = 0;
LAB_020013bc:
  (*DAT_0b000038)();
  FUN_020021cc();
  if (((DAT_023cb610 & 0x40) != 0) && (DAT_02098fa4 < DAT_02098fa0)) {
    thunk_FUN_0208031c();
  }
  (*DAT_0b00003c)();
  DAT_02098fbc = DAT_02098fbc + 1;
  DAT_02098fa0 = DAT_02098fa0 + 1;
  goto LAB_02001288;
}


// 0x02002068  helper_for_run_emulator_and_file_menu

void FUN_02002068(void)

{
  DAT_023cb610 = DAT_023cb610 & 0xfffccfff | 0x205c;
  return;
}


// 0x02002150  adjust_paused_viewport

void FUN_02002150(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  thunk_FUN_0207fb90();
  uVar2 = thunk_FUN_0207fb70();
  if ((uVar2 & 1) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 4;
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_02007358(iVar3);
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_02007358(-iVar3);
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_020073a4(iVar3);
  }
  iVar1 = DAT_020993b4;
  if ((uVar2 & 0x80) != 0) {
    DAT_020993b4 = DAT_020993b4 - iVar3;
    if (DAT_020993b4 < -0x18) {
      DAT_020993b4 = -0x18;
    }
    else if (0x18 < DAT_020993b4) {
      DAT_020993b4 = 0x18;
    }
    DAT_020993ac = (uint)(iVar1 != DAT_020993b4);
    return;
  }
  return;
}


// 0x020021cc  update_genesis_controller_state

void FUN_020021cc(void)

{
  int iVar1;
  uint uVar2;
  
  thunk_FUN_0207fb90();
  uVar2 = thunk_FUN_0207fb70();
  *(byte *)(DAT_0b000030 + 0x20) = ((byte)(uVar2 >> 0xb) ^ 1) & 1;
  *(byte *)(DAT_0b000030 + 0x21) = ((byte)(uVar2 >> 1) ^ 1) & 1;
  *(byte *)(DAT_0b000030 + 0x22) = (byte)uVar2 & 1 ^ 1;
  *(byte *)(DAT_0b000030 + 0x24) = ((byte)(uVar2 >> 7) ^ 1) & 1;
  *(byte *)(DAT_0b000030 + 0x23) = ((byte)(uVar2 >> 6) ^ 1) & 1;
  *(bool *)(DAT_0b000030 + 0x25) = (uVar2 & 0x20) == 0;
  *(bool *)(DAT_0b000030 + 0x26) = (uVar2 & 0x10) == 0;
  if ((DAT_023cb610 & 1) == 0) {
    *(byte *)(DAT_0b000030 + 0x2a) = ((byte)(uVar2 >> 3) ^ 1) & 1;
    if ((uVar2 & 0x400) == 0) {
      if ((uVar2 & 0x200) == 0) {
        if ((uVar2 & 0x100) != 0) {
          FUN_02007358(0xfffffffc);
        }
      }
      else {
        FUN_02007358(4);
      }
    }
    else {
      FUN_020073f0();
    }
  }
  else {
    *(byte *)(DAT_0b000030 + 0x27) = ((byte)(uVar2 >> 10) ^ 1) & 1;
    if ((uVar2 & 0x308) == 0x308) {
      *(undefined1 *)(DAT_0b000030 + 0x2b) = 0;
      return;
    }
    *(undefined1 *)(DAT_0b000030 + 0x2b) = 1;
    *(byte *)(DAT_0b000030 + 0x2a) = ((byte)(uVar2 >> 3) ^ 1) & 1;
    *(byte *)(DAT_0b000030 + 0x29) = ((byte)(uVar2 >> 9) ^ 1) & 1;
    *(byte *)(DAT_0b000030 + 0x28) = ((byte)(uVar2 >> 8) ^ 1) & 1;
  }
  if ((DAT_023cb610 & 0x200) != 0) {
    if ((uVar2 & 0x400) != 0) {
      DAT_02098ff8 = 0;
      FUN_020073f0();
    }
    if ((uVar2 & 0x20) != 0) {
      if (-0x200 < DAT_02098ff8) {
        DAT_02098ff8 = DAT_02098ff8 + -0x40;
      }
      if (DAT_02098ff8 < 0) {
        FUN_02007358(DAT_02098ff8 >> 8);
      }
    }
    iVar1 = DAT_020993b0;
    if ((uVar2 & 0x10) != 0) {
      if (DAT_02098ff8 < 0x200) {
        DAT_02098ff8 = DAT_02098ff8 + 0x40;
      }
      if (0 < DAT_02098ff8) {
        DAT_020993b0 = DAT_020993b0 + (DAT_02098ff8 >> 8);
        if (DAT_020993b0 < -0x20) {
          DAT_020993b0 = -0x20;
        }
        else if (0x20 < DAT_020993b0) {
          DAT_020993b0 = 0x20;
        }
        DAT_020993ac = (uint)(iVar1 != DAT_020993b0);
        return;
      }
    }
  }
  return;
}


// 0x020037b4  emulator_unresolved_routine

void FUN_020037b4(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x1b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x23) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x27) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  return;
}


// 0x02003828  emulator_transform_bit_fields

uint FUN_02003828(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      if (*(int *)(param_1 + 0xc) == 3) {
        bVar1 = *(byte *)(param_1 + 0x21);
        bVar2 = *(byte *)(param_1 + 0x27);
        bVar3 = *(byte *)(param_1 + 0x2b);
        bVar4 = *(byte *)(param_1 + 0x22);
        bVar5 = *(byte *)(param_1 + 0x28);
        bVar6 = *(byte *)(param_1 + 0x29);
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x21);
        bVar2 = *(byte *)(param_1 + 0x25);
        bVar3 = *(byte *)(param_1 + 0x26);
        bVar4 = *(byte *)(param_1 + 0x22);
        bVar5 = *(byte *)(param_1 + 0x23);
        bVar6 = *(byte *)(param_1 + 0x24);
      }
      DAT_02098ffc = (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)bVar1 << 4 | (uint)bVar4 << 5 | (uint)bVar6 << 1 |
                     (uint)bVar2 << 2 | (uint)bVar3 << 3 | (uint)bVar5) &
                     ~(uint)*(byte *)(param_1 + 0x1a);
      return DAT_02098ffc;
    }
    return (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
           ((uint)*(byte *)(param_1 + 0x21) << 4 | (uint)*(byte *)(param_1 + 0x22) << 5 |
            (uint)*(byte *)(param_1 + 0x24) << 1 |
           (uint)*(byte *)(param_1 + 0x25) << 2 | (uint)*(byte *)(param_1 + 0x26) << 3 |
           (uint)*(byte *)(param_1 + 0x23)) & ~(uint)*(byte *)(param_1 + 0x1a);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(int *)(param_1 + 0xc) == 3) {
      DAT_02098ffc = ((uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5) &
                     ~(uint)*(byte *)(param_1 + 0x1a)) & 0xf0;
    }
    else if (*(int *)(param_1 + 0xc) == 4) {
      DAT_02098ffc = ((uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5) &
                     ~(uint)*(byte *)(param_1 + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      DAT_02098ffc = (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5 |
                      (uint)*(byte *)(param_1 + 0x23) | (uint)*(byte *)(param_1 + 0x24) << 1) &
                     ~(uint)*(byte *)(param_1 + 0x1a) & 0xff;
    }
    return DAT_02098ffc;
  }
  return (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
         ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5 |
          (uint)*(byte *)(param_1 + 0x23) | (uint)*(byte *)(param_1 + 0x24) << 1) &
         ~(uint)*(byte *)(param_1 + 0x1a) & 0xff;
}


// 0x02003a50  emulator_unresolved_routine

void FUN_02003a50(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}


// 0x02003ad4  emulator_unresolved_routine

undefined4 FUN_02003ad4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_02082724(0x2c);
  FUN_020037b4();
  return uVar1;
}


// 0x02003af0  emulator_access_shared_state

void FUN_02003af0(void)

{
  DAT_023cb628 = 0x3fffff;
  DAT_023cb630 = 0xffff;
  DAT_023cb624 = &DAT_020b4cec;
  DAT_023cb62c = &DAT_023cb634;
  return;
}


// 0x02003ca4  emulator_return_computed_value

undefined * FUN_02003ca4(void)

{
  return &DAT_020b4cec;
}


// 0x02003cb0  emulator_return_computed_value

undefined * FUN_02003cb0(void)

{
  return &DAT_023cb634;
}


// 0x02003cbc  emulator_return_computed_value

undefined4 * FUN_02003cbc(void)

{
  return &DAT_02099008;
}


// 0x02003cc8  emulator_transform_bit_fields

undefined * FUN_02003cc8(uint param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  bVar2 = (param_1 & 0xc00000) == 0;
  puVar1 = &DAT_023cb634 + (param_1 & 0xffff);
  if (bVar2) {
    puVar1 = &DAT_020b4cec;
  }
  if (bVar2) {
    puVar1 = puVar1 + (param_1 & 0xffffff);
  }
  return puVar1;
}


// 0x02003f30  emulator_dispatch_selector_cases

code * FUN_02003f30(uint param_1)

{
  code *pcVar1;
  
  switch(param_1 >> 4 & 0xf) {
  case 0:
  case 1:
  case 3:
    pcVar1 = (code *)&LAB_02003df0;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003de8;
    }
    return pcVar1;
  case 2:
    pcVar1 = (code *)&LAB_02003df0;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003de0;
    }
    break;
  default:
    return FUN_02004378;
  case 10:
    pcVar1 = FUN_02004a1c;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = FUN_02004adc;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = FUN_02004378;
      }
    }
    break;
  case 0xc:
  case 0xd:
    return FUN_02004aa8;
  case 0xe:
  case 0xf:
    return (code *)&LAB_02003df8;
  }
  return pcVar1;
}


// 0x0200402c  emulator_dispatch_selector_cases

code * FUN_0200402c(uint param_1)

{
  code *pcVar1;
  
  switch((param_1 & 0xffffff) >> 4 & 0xf) {
  case 0:
  case 1:
  case 3:
    pcVar1 = (code *)&LAB_02003e20;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003e08;
    }
    return pcVar1;
  case 2:
    pcVar1 = (code *)&LAB_02003e20;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003e00;
    }
    break;
  default:
    return FUN_020043a4;
  case 10:
    pcVar1 = (code *)&LAB_0200497c;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = (code *)&UNK_02004908;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = FUN_020043a4;
      }
    }
    break;
  case 0xc:
  case 0xd:
    return (code *)&LAB_020048d4;
  case 0xe:
  case 0xf:
    return (code *)&LAB_02003e28;
  }
  return pcVar1;
}


// 0x0200412c  emulator_loop_over_state

void FUN_0200412c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar3 = &DAT_0b000a1c;
  puVar4 = &DAT_0b00061c;
  do {
    uVar1 = FUN_02003f30(iVar2);
    *puVar4 = uVar1;
    uVar1 = FUN_0200402c(iVar2);
    iVar2 = iVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != 0x40);
  return;
}


// 0x0200416c  emulator_dispatch_selector_cases

undefined * FUN_0200416c(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  switch((param_1 & 0xffffff) >> 4 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar1 = &LAB_02003e38;
    break;
  default:
    return &DAT_02003e30;
  case 10:
    puVar1 = &DAT_02004784;
    if ((param_1 & 0xf) != 0) {
      puVar2 = &DAT_020047f0;
      if ((param_1 & 0xf) != 1) {
        puVar2 = &DAT_02003e30;
      }
      return puVar2;
    }
    break;
  case 0xc:
  case 0xd:
    return &DAT_020044a4;
  case 0xe:
  case 0xf:
    return &LAB_02003eb8;
  }
  return puVar1;
}


// 0x02004230  emulator_dispatch_selector_cases

undefined * FUN_02004230(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  switch(param_1 >> 4 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar1 = &LAB_02003ed4;
    break;
  default:
    return &DAT_02003e34;
  case 10:
    puVar1 = &DAT_02004714;
    if ((param_1 & 0xf) != 0) {
      puVar2 = &DAT_020046c0;
      if ((param_1 & 0xf) != 1) {
        puVar2 = &DAT_02003e34;
      }
      return puVar2;
    }
    break;
  case 0xc:
  case 0xd:
    return &DAT_02004484;
  case 0xe:
  case 0xf:
    return (undefined *)0x1000000;
  }
  return puVar1;
}


// 0x020042f0  emulator_iterate_and_store_values

void FUN_020042f0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = FUN_02003f30(iVar2);
    *(undefined4 *)((int)&DAT_0b00061c + iVar3) = uVar1;
    uVar1 = FUN_0200402c(iVar2);
    *(undefined4 *)((int)&DAT_0b000a1c + iVar3) = uVar1;
    uVar1 = FUN_0200416c(iVar2);
    *(undefined4 *)((int)&DAT_0b000e1c + iVar3) = uVar1;
    uVar1 = FUN_02004230(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)&DAT_0b00121c + iVar3) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar2 != 0x100);
  return;
}


// 0x02004368  emulator_transform_bit_fields

undefined4 FUN_02004368(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0x71;
  }
  else {
    uVar1 = 0x4e;
  }
  return uVar1;
}


// 0x02004378  emulator_return_computed_value

void FUN_02004378(void)

{
  FUN_02004368();
  return;
}


// 0x0200438c  emulator_unresolved_routine

undefined4 FUN_0200438c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x4e71;
  if (param_1 != 0) {
    uVar1 = 0x4e00;
  }
  return uVar1;
}


// 0x020043a4  emulator_return_computed_value

void FUN_020043a4(void)

{
  FUN_0200438c(1);
  return;
}


// 0x020043cc  emulator_transform_bit_fields

byte FUN_020043cc(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = DAT_02099004;
  DAT_02099004 = DAT_02099004 + 1;
  bVar2 = DAT_0208f349 & 1;
  if (10 < uVar1) {
    bVar2 = bVar2 ^ 1;
  }
  DAT_0b0000a8 = 1;
  return bVar2;
}


// 0x02004458  emulator_transform_bit_fields

undefined1 switchD_02004d20::default(uint param_1)

{
  return (&DAT_020b4cec)[(param_1 | DAT_02099008) & 0x3fffff ^ 1];
}


// 0x02004a1c  emulator_transform_bit_fields

uint FUN_02004a1c(uint param_1)

{
  uint uVar1;
  
  if (DAT_0208f349 != '\x01') {
    uVar1 = param_1 & 0x6000;
    if (uVar1 == 0x2000) {
LAB_02004a70:
      uVar1 = FUN_02004c24(param_1 & 0x1fff);
      return uVar1;
    }
    if (uVar1 < 0x2001) {
      if (uVar1 == 0) goto LAB_02004a70;
    }
    else {
      if (uVar1 == 0x4000) {
        uVar1 = FUN_02005b7c();
        return uVar1 & 0xff;
      }
      if (uVar1 == 0x6000) {
        if ((param_1 & 0xff00) == 0x7f00) {
          uVar1 = FUN_020043bc(param_1);
          return uVar1;
        }
        return 0xff;
      }
    }
  }
  uVar1 = FUN_02004368(param_1);
  return uVar1;
}


// 0x02004aa8  emulator_transform_bit_fields

void FUN_02004aa8(uint param_1)

{
  if ((param_1 & 0xe700e0) == 0xc00000) {
    FUN_020094b4(param_1 & 0x1f);
  }
  else {
    FUN_020043bc();
  }
  return;
}


// 0x02004adc  emulator_transform_bit_fields

uint FUN_02004adc(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xa10020) {
    uVar1 = FUN_020003f4(param_1 & 0xff);
    uVar1 = uVar1 & 0xff;
  }
  else if (param_1 == 0xa11100) {
    uVar1 = FUN_020043cc();
  }
  else if (param_1 == 0xa130f1) {
    uVar1 = DAT_0208f34a & 1;
  }
  else if (param_1 - 0xa130f3 < 0xd) {
    uVar1 = (uint)(byte)(&DAT_02099014)[((param_1 & 0xf) >> 1) * 4];
  }
  else {
    uVar1 = FUN_02004368();
  }
  return uVar1;
}


// 0x02004c24  emulator_return_computed_value

undefined1 FUN_02004c24(int param_1)

{
  return (&DAT_0b00161c)[param_1];
}


// 0x02004d14  emulator_dispatch_selector_cases

byte FUN_02004d14(uint param_1)

{
  switch((int)param_1 >> 0xd & 7) {
  case 0:
  case 1:
    return (&DAT_0b00161c)[param_1 & 0x1fff];
  case 2:
    return *(byte *)(DAT_0b00002c + 0x480) & 3;
  case 3:
    return 0;
  default:
    return (&DAT_020b4cec)[(param_1 & 0x7fff | DAT_02099008 & 0x3fffff) ^ 1];
  }
}


// 0x02004d68  emulator_transform_bit_fields

uint FUN_02004d68(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_02004d14();
  iVar2 = FUN_02004d14(param_1 + 1);
  return uVar1 & 0xff | iVar2 << 8;
}


// 0x02004d94  emulator_iterate_and_store_values

/* WARNING: Removing unreachable block (ram,0x02083074) */
/* WARNING: Removing unreachable block (ram,0x02083070) */

void FUN_02004d94(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)&DAT_0b00161c;
  uVar2 = 0x2000;
  DAT_02099034 = 0;
  DAT_02099038 = 0;
  do {
    uVar2 = uVar2 - 0x10;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  } while (0xf < uVar2);
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar3 = 0;
  do {
    *(undefined1 *)(uVar3 + (int)puVar1) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 != uVar2);
  return;
}


// 0x02004dcc  emulator_transform_bit_fields

void FUN_02004dcc(int param_1)

{
  undefined3 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined3 *)(param_1 + 0x400);
  uVar2 = (undefined1)((uint3)uVar1 >> 8);
  uVar3 = (undefined1)((uint3)uVar1 >> 0x10);
  *(undefined1 *)(param_1 + 0x409) = 0;
  *(undefined1 *)(param_1 + 0x40a) = 0;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  *(char *)(param_1 + 0x424) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x425) = uVar2;
  *(undefined1 *)(param_1 + 0x426) = uVar3;
  *(undefined1 *)(param_1 + 0x427) = *(undefined1 *)(param_1 + 0x403);
  *(undefined1 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined1 *)(param_1 + 0x43a) = 0;
  *(undefined1 *)(param_1 + 0x43b) = 0;
  *(undefined1 *)(param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x43d) = 0;
  *(undefined1 *)(param_1 + 0x43e) = 0;
  *(undefined1 *)(param_1 + 0x43f) = 0;
  *(undefined1 *)(param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x445) = 0;
  *(undefined1 *)(param_1 + 0x446) = 0;
  *(undefined1 *)(param_1 + 0x447) = 0;
  *(undefined1 *)(param_1 + 0x408) = *(undefined1 *)(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x4a5) = 0;
  *(undefined1 *)(param_1 + 0x4a6) = 0;
  *(undefined1 *)(param_1 + 0x4a7) = 0;
  *(char *)(param_1 + 0x420) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x421) = uVar2;
  *(undefined1 *)(param_1 + 0x422) = uVar3;
  *(undefined1 *)(param_1 + 0x423) = *(undefined1 *)(param_1 + 0x403);
  *(undefined1 *)(param_1 + 0x474) = 0;
  *(undefined1 *)(param_1 + 0x483) = 0;
  *(undefined1 *)(param_1 + 0x475) = 0;
  *(undefined1 *)(param_1 + 0x476) = 0;
  *(undefined1 *)(param_1 + 0x477) = 0;
  *(undefined1 *)(param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x485) = 0;
  *(undefined1 *)(param_1 + 0x486) = 0;
  *(undefined1 *)(param_1 + 0x487) = 0;
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(undefined1 *)(param_1 + 0x489) = 0;
  *(undefined1 *)(param_1 + 0x48a) = 0;
  *(undefined1 *)(param_1 + 0x48b) = 0;
  *(undefined1 *)(param_1 + 0x48c) = 0;
  *(undefined1 *)(param_1 + 0x48d) = 0;
  *(undefined1 *)(param_1 + 0x48e) = 0;
  *(undefined1 *)(param_1 + 0x48f) = 0;
  *(undefined1 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x491) = 0;
  *(undefined1 *)(param_1 + 0x492) = 0;
  *(undefined1 *)(param_1 + 0x493) = 0;
  *(undefined1 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x47d) = 0;
  *(undefined1 *)(param_1 + 0x47e) = 0;
  *(undefined1 *)(param_1 + 0x47f) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined1 *)(param_1 + 0x481) = 0;
  *(undefined1 *)(param_1 + 0x482) = 0;
  return;
}


// 0x02004ef4  emulator_transform_bit_fields

void FUN_02004ef4(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(uint *)(param_1 + 0x4a4) & ~param_2;
  }
  else {
    param_2 = param_2 | *(uint *)(param_1 + 0x4a4);
  }
  *(char *)(param_1 + 0x4a7) = (char)(param_2 >> 0x18);
  *(char *)(param_1 + 0x4a5) = (char)(param_2 >> 8);
  *(char *)(param_1 + 0x4a6) = (char)(param_2 >> 0x10);
  *(char *)(param_1 + 0x4a4) = (char)param_2;
  return;
}


// 0x02005144  emulator_return_computed_value

undefined4 FUN_02005144(int param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}


// 0x020052ec  emulator_dispatch_selector_cases

int FUN_020052ec(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  if (DAT_0b000008 < 0x5a) {
    return 0;
  }
  uVar5 = param_1[-1];
  if (uVar5 >> 0xc != 6) {
    return 0;
  }
  if (uVar5 != 0x60fe) {
    uVar4 = (int)(char)uVar5 & 0xfffffffe;
    if (!CARRY4((uint)param_1,uVar4)) {
switchD_02005354_caseD_5:
      uVar5 = uVar5 & 0xfff | 0xf000;
      iVar3 = 0;
      goto LAB_020053c0;
    }
    uVar1 = *(ushort *)((int)param_1 + uVar4);
    puVar2 = (ushort *)((int)param_1 + uVar4);
    while (puVar7 = puVar2 + 1, param_1 != puVar7) {
      switch(uVar1 >> 0xc) {
      case 0:
        if ((uVar1 & 0xf1c0) != 0x100) {
          if ((uVar1 & 0xffc0) != 0x800) {
            if ((((uVar1 & 0xff00) == 0xc00) || ((uVar1 & 0xff00) == 0x200)) &&
               ((uVar1 & 0xc0) != 0xc0)) {
              puVar7 = puVar2 + 2;
              if ((uVar1 & 0xc0) == 0x80) {
                puVar7 = puVar2 + 3;
              }
              break;
            }
            if ((uVar1 & 0xffc0) != 0x880) goto switchD_02005354_caseD_5;
          }
          puVar7 = puVar2 + 2;
        }
        break;
      case 1:
      case 2:
      case 3:
        if ((uVar1 & 0x180) != 0) goto switchD_02005354_caseD_5;
        break;
      case 4:
        if (uVar1 == 0x4e71) goto LAB_02005468;
        if (((uVar1 & 0xff00) == 0x4a00) && ((uVar1 & 0xc0) != 0xc0)) break;
      default:
        goto switchD_02005354_caseD_5;
      case 0xb:
        if ((uVar1 & 0xf100) != 0xb000) goto switchD_02005354_caseD_5;
      }
      if ((uVar1 & 0x38) == 0x20 || (uVar1 & 0x38) == 0x18) goto switchD_02005354_caseD_5;
      uVar6 = uVar1 >> 3 & 7;
      if (uVar6 < 5) {
        iVar3 = 0;
      }
      else {
        iVar3 = 2;
      }
      if (uVar6 == 7 && (uVar1 & 7) == 1) {
        if (iVar3 == 0) {
          iVar3 = 2;
        }
        else {
          iVar3 = 4;
        }
      }
      puVar7 = (ushort *)(iVar3 + (int)puVar7);
LAB_02005468:
      if (param_1 <= puVar7) goto switchD_02005354_caseD_5;
      uVar1 = *puVar7;
      puVar2 = puVar7;
    }
  }
  uVar5 = uVar5 & 0xfff | 0xa000;
  iVar3 = 1;
LAB_020053c0:
  param_1[-1] = uVar5;
  DAT_0209903c = DAT_0209903c + iVar3;
  return iVar3;
}


// 0x020054d4  emulator_iterate_and_store_values

void FUN_020054d4(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + iVar6 * 4) = 0;
    iVar8 = param_1 + iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar8 + 0x20) = 0;
    *(undefined1 *)(iVar8 + 1) = 0;
    *(undefined1 *)(iVar8 + 2) = 0;
    *(undefined1 *)(iVar8 + 3) = 0;
    *(undefined1 *)(iVar8 + 0x23) = 0;
    *(undefined1 *)(iVar8 + 0x21) = 0;
    *(undefined1 *)(iVar8 + 0x22) = 0;
  } while (iVar6 != 8);
  uVar4 = (**(code **)(param_1 + 0x70))(0);
  uVar1 = (undefined1)((uint)uVar4 >> 0x18);
  *(undefined1 *)(param_1 + 0x3f) = uVar1;
  *(undefined1 *)(param_1 + 0x4b) = uVar1;
  *(char *)(param_1 + 0x3c) = (char)uVar4;
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  uVar2 = (undefined1)((uint)uVar4 >> 0x10);
  *(undefined1 *)(param_1 + 0x3e) = uVar2;
  *(char *)(param_1 + 0x48) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x49) = uVar1;
  *(undefined1 *)(param_1 + 0x4a) = uVar2;
  uVar4 = (**(code **)(param_1 + 0x70))(4);
  *(char *)(param_1 + 0x45) = (char)((uint)uVar4 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 0x47) = (char)((uint)uVar4 >> 0x18);
  *(undefined1 *)(param_1 + 0x51) = 0x27;
  *(char *)(param_1 + 0x44) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  uVar4 = FUN_02003ca4();
  *(char *)(param_1 + 0x61) = (char)((uint)uVar4 >> 8);
  *(char *)(param_1 + 0x62) = (char)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 99) = (char)((uint)uVar4 >> 0x18);
  *(char *)(param_1 + 0x60) = (char)uVar4;
  uVar4 = FUN_02003cb0();
  uVar3 = (undefined1)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 0x58) = (char)uVar4;
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  *(undefined1 *)(param_1 + 0x5a) = uVar3;
  uVar2 = (undefined1)((uint)uVar4 >> 0x18);
  *(undefined1 *)(param_1 + 0x5b) = uVar2;
  *(char *)(param_1 + 100) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x65) = uVar1;
  *(undefined1 *)(param_1 + 0x66) = uVar3;
  *(undefined1 *)(param_1 + 0x67) = uVar2;
  piVar5 = (int *)(**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x44));
  DAT_02099044 = piVar5;
  *(char *)(param_1 + 0x54) = (char)*piVar5;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)((int)piVar5 + 1);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)((int)piVar5 + 2);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)((int)piVar5 + 3);
  uVar7 = CONCAT13(*(undefined1 *)(param_1 + 0x47),
                   CONCAT12(*(undefined1 *)(param_1 + 0x46),
                            CONCAT11(*(undefined1 *)(param_1 + 0x45),*(undefined1 *)(param_1 + 0x44)
                                    )));
  uVar9 = uVar7 & ~piVar5[1];
  *(char *)(param_1 + 0x9e) = (char)(uVar9 >> 0x10);
  *(char *)(param_1 + 0x9c) = (char)uVar9;
  *(char *)(param_1 + 0x9d) = (char)(uVar9 >> 8);
  *(char *)(param_1 + 0x9f) = (char)(uVar9 >> 0x18);
  uVar7 = uVar7 & piVar5[1];
  *(char *)(param_1 + 0x46) = (char)(uVar7 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar7;
  *(char *)(param_1 + 0x45) = (char)(uVar7 >> 8);
  *(char *)(param_1 + 0x47) = (char)(uVar7 >> 0x18);
  iVar6 = uVar7 + *piVar5;
  *(char *)(param_1 + 0x47) = (char)((uint)iVar6 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)((uint)iVar6 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)iVar6 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)iVar6;
  DAT_02099040 = 0;
  DAT_0209903c = 0;
  return;
}


// 0x02005780  emulator_iterate_and_store_values

void FUN_02005780(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  uint uVar1;
  
  if (((param_3 != 0 && param_2 != 0) && (param_5 != 0 && param_4 != 0)) &&
     (param_7 != 0 && param_6 != 0)) {
    *(char *)(param_1 + 0x85) = (char)((uint)param_9 >> 8);
    *(char *)(param_1 + 0x87) = (char)((uint)param_9 >> 0x18);
    *(char *)(param_1 + 0x86) = (char)((uint)param_9 >> 0x10);
    *(char *)(param_1 + 0x8a) = (char)((uint)param_10 >> 0x10);
    *(char *)(param_1 + 0x89) = (char)((uint)param_10 >> 8);
    *(char *)(param_1 + 0x8b) = (char)((uint)param_10 >> 0x18);
    *(char *)(param_1 + 0x69) = (char)((uint)param_2 >> 8);
    *(char *)(param_1 + 0x6a) = (char)((uint)param_2 >> 0x10);
    *(char *)(param_1 + 0x6b) = (char)((uint)param_2 >> 0x18);
    *(char *)(param_1 + 0x6d) = (char)((uint)param_3 >> 8);
    *(char *)(param_1 + 0x6e) = (char)((uint)param_3 >> 0x10);
    *(char *)(param_1 + 0x6f) = (char)((uint)param_3 >> 0x18);
    *(char *)(param_1 + 0x71) = (char)((uint)param_4 >> 8);
    *(char *)(param_1 + 0x72) = (char)((uint)param_4 >> 0x10);
    *(char *)(param_1 + 0x73) = (char)((uint)param_4 >> 0x18);
    *(char *)(param_1 + 0x75) = (char)((uint)param_5 >> 8);
    *(char *)(param_1 + 0x76) = (char)((uint)param_5 >> 0x10);
    *(char *)(param_1 + 0x77) = (char)((uint)param_5 >> 0x18);
    *(char *)(param_1 + 0x79) = (char)((uint)param_6 >> 8);
    *(bool *)(param_1 + 0xa5) = param_9 != 0;
    *(char *)(param_1 + 0x83) = (char)((uint)param_8 >> 0x18);
    *(char *)(param_1 + 0x7a) = (char)((uint)param_6 >> 0x10);
    *(char *)(param_1 + 0x7d) = (char)((uint)param_7 >> 8);
    *(char *)(param_1 + 0x7b) = (char)((uint)param_6 >> 0x18);
    *(char *)(param_1 + 0x7f) = (char)((uint)param_7 >> 0x18);
    *(char *)(param_1 + 0x7e) = (char)((uint)param_7 >> 0x10);
    *(char *)(param_1 + 0x84) = (char)param_9;
    *(char *)(param_1 + 0x88) = (char)param_10;
    *(char *)(param_1 + 0x68) = (char)param_2;
    *(char *)(param_1 + 0x6c) = (char)param_3;
    *(char *)(param_1 + 0x70) = (char)param_4;
    *(char *)(param_1 + 0x74) = (char)param_5;
    *(char *)(param_1 + 0x78) = (char)param_6;
    *(char *)(param_1 + 0x81) = (char)((uint)param_8 >> 8);
    *(char *)(param_1 + 0x82) = (char)((uint)param_8 >> 0x10);
    *(char *)(param_1 + 0x7c) = (char)param_7;
    *(char *)(param_1 + 0x80) = (char)param_8;
                    /* WARNING: Read-only address (ram,0x0204b020) is written */
    m68k_dispatch[0x60fe] = (dword)&DAT_01003c4c;
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa600] = (dword)&DAT_01003364;
      m68k_dispatch[uVar1 | 0xf600] = (dword)&DAT_0100334c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa700] = (dword)&DAT_010033f8;
      m68k_dispatch[uVar1 | 0xf700] = (dword)&DAT_010033e0;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa500] = (dword)&DAT_010032d0;
      m68k_dispatch[uVar1 | 0xf500] = (dword)&DAT_010032b8;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa300] = (dword)&DAT_010031a8;
      m68k_dispatch[uVar1 | 0xf300] = (dword)&DAT_01003190;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa400] = (dword)&DAT_0100323c;
      m68k_dispatch[uVar1 | 0xf400] = (dword)&DAT_01003224;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xaa00] = (dword)&DAT_01003544;
      m68k_dispatch[uVar1 | 64000] = (dword)&DAT_0100352c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xac00] = (dword)&DAT_01003640;
      m68k_dispatch[uVar1 | 0xfc00] = (dword)&DAT_01003624;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    return;
  }
  m68k_dispatch[0x60fe] = 0x1003c34;
  return;
}


// 0x02005b7c  emulator_transform_bit_fields

byte FUN_02005b7c(void)

{
  return *(byte *)(DAT_0b00002c + 0x480) & 3;
}


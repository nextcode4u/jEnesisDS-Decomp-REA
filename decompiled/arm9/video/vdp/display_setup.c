/* ARM9 display setup — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000f3c  advance_ds_display_compare_irq_phase

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000f3c(void)

{
  if (DAT_020b4ce8 == 1) {
    FUN_020083ec(0);
    DAT_020b4ce8 = 2;
  }
  else if (DAT_020b4ce8 == 2) {
    thunk_FUN_020801fc(2);
    DAT_020b4ce8 = 0;
  }
  else if (DAT_020b4ce8 == 0) {
    thunk_FUN_0208024c(2);
    DAT_020b4ce8 = 1;
  }
  _DAT_04000004 =
       _DAT_04000004 & 0x7f | (&DAT_02085a08)[DAT_020b4ce8] << 8 |
       (ushort)(((ushort)(&DAT_02085a08)[DAT_020b4ce8] & 0x100) >> 1);
  return;
}


// 0x0200106c  configure_gameplay_display_interrupts

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200106c(void)

{
  if (DAT_02098fc4 == 0) {
    thunk_FUN_02080100();
  }
  else if (DAT_02098fc4 == 1) {
    thunk_FUN_0208024c(1);
    thunk_FUN_0208014c(1);
  }
  DAT_02098fc4 = 2;
  thunk_FUN_02080098(2,&LAB_02000f1c);
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0xc000;
  DAT_020b4ce8 = 0;
  thunk_FUN_02080098(4,FUN_02000f3c);
  thunk_FUN_02080098(1,&LAB_02000fdc);
  _DAT_04000004 = _DAT_04000004 | 0x38;
  _DAT_04000210 = _DAT_04000210 | 7;
  _DAT_04000208 = 1;
  return;
}


// 0x02001118  configure_menu_vblank_interrupt

/* WARNING: Removing unreachable block (ram,0x02080216) */
/* WARNING: Removing unreachable block (ram,0x02080228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02001118(void)

{
  if (DAT_02098fc4 == 0) {
    thunk_FUN_02080100();
  }
  else if (DAT_02098fc4 == 2) {
    thunk_FUN_0208024c(2);
    thunk_FUN_0208014c(2);
  }
  DAT_02098fc4 = 1;
  thunk_FUN_02080098(1,&DAT_02000f18);
  _DAT_04000004 = _DAT_04000004 | 8;
  _DAT_04000210 = _DAT_04000210 | 1;
  _DAT_04000208 = 1;
  return;
}


// 0x02006d20  show_startup_graphics_and_run_scanline_transition

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006d20(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  int iVar6;
  
  thunk_FUN_0208031c();
  _DAT_04000000 = 0x10801;
  thunk_FUN_0207fc98(1,9,4,2);
  _DAT_0400000e = 0x42c8;
  _DAT_04000030 = 0x100;
  _DAT_04000036 = 0x100;
  _DAT_04000038 = 0;
  _DAT_0400003c = 0;
  _DAT_04000050 = 200;
  _DAT_04001000 = 0x10100;
  puVar2 = &DAT_0208a1a8;
  puVar3 = (undefined2 *)&DAT_05000000;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined2 *)&DAT_05000200);
  thunk_FUN_0208033e(&DAT_0208a3a8,&DAT_06008000,16000);
  thunk_FUN_0208033e(&DAT_0208e228,&DAT_06001000,0x300);
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    thunk_FUN_0208031c();
  } while (iVar5 != 0x78);
  uVar7 = iVar6 - 0x77;
  uVar8 = uVar7;
  while( true ) {
    do {
      uVar1 = _DAT_04000006 & 0x1ff;
    } while ((_DAT_04000006 & 0x1ff) != 0);
    do {
      if ((uVar8 & 1) == 0) {
        _DAT_04000038 = 0;
      }
      else {
        iVar5 = uVar1 - 0x60;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = (iVar5 / 10) * (iVar5 / 10);
        if ((uVar1 & 1) == 0) {
          _DAT_04000038 = (-iVar5 - uVar7) * 0x80;
        }
        else {
          _DAT_04000038 = (iVar5 + uVar7) * 0x80;
        }
      }
      do {
      } while (uVar1 == (_DAT_04000006 & 0x1ff));
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0xc0);
    _DAT_04000054 = (undefined2)uVar8;
    if (0x1f < uVar8 + 1) break;
    uVar7 = uVar7 + 3;
    uVar8 = uVar8 + 1;
  }
  thunk_FUN_0208031c();
  puVar2 = (undefined2 *)&DAT_05000000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)&DAT_05000200);
  puVar2 = (undefined2 *)&DAT_06008000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x600be80);
  puVar2 = (undefined2 *)&DAT_06001000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x6001300);
  _DAT_04000054 = 0;
  _DAT_04000050 = 0;
  return;
}


// 0x02006f2c  select_background_tilemap_layout

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006f2c(int param_1)

{
  if (param_1 != 0xff) {
    DAT_020993c4 = 0;
    switch(param_1) {
    case 0:
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      DAT_023dc6a0 = FUN_02007ed8;
      _DAT_04000008 = 0x820;
      _DAT_0400000a = 0xc29;
      _DAT_0400000c = 0x22;
      DAT_023dc6a4 = 0x22;
      DAT_023dc6a8 = 0x820;
      _DAT_0400000e = 0x42b;
      break;
    case 1:
    case 3:
      DAT_023dc6a8 = 0x8820;
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      _DAT_04000008 = 0x8820;
      DAT_023dc6a0 = FUN_02007ed8;
      _DAT_0400000a = 0x8c29;
      DAT_023dc6a4 = 0x8022;
      _DAT_0400000c = 0x8022;
      _DAT_0400000e = 0x842b;
      break;
    default:
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      DAT_023dc6a0 = FUN_02007ed8;
      break;
    case 0x10:
      DAT_023dc69c = FUN_02007830;
      DAT_023dc6ac = FUN_02007c04;
      DAT_023dc6a0 = FUN_02007f94;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      DAT_023dc6a4 = 0x4022;
      DAT_023dc6a8 = 0x4820;
      _DAT_0400000e = 0x442b;
      break;
    case 0x11:
    case 0x13:
      DAT_023dc6a8 = 0xc820;
      DAT_023dc69c = FUN_020078c8;
      DAT_023dc6ac = FUN_02007ce4;
      DAT_023dc6a0 = FUN_02008078;
      DAT_023dc6a4 = 0xc022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = param_1;
      _DAT_0400000e = 0xc42b;
      _DAT_04000008 = 0xc820;
      _DAT_0400000a = 0xcc29;
      _DAT_0400000c = 0xc022;
      return;
    case 0x30:
    case 0x31:
      DAT_023dc69c = FUN_0200797c;
      DAT_023dc6ac = FUN_02007ddc;
      DAT_023dc6a0 = FUN_02008174;
      DAT_023dc6a8 = 0x4820;
      DAT_020993c4 = 1;
      DAT_023dc6a4 = 0x4022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = param_1;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      _DAT_0400000e = 0x442b;
      return;
    }
                    /* WARNING (jumptable): Read-only address (ram,0x0208f350) is written */
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
    DAT_0208f350 = param_1;
    return;
  }
  DAT_0208f350 = 0xff;
  return;
}


// 0x020072a8  select_window_tilemap_layout

void FUN_020072a8(int param_1)

{
  if (DAT_0208f34c != param_1) {
    if (param_1 != 0) {
      DAT_023dc5b0 = 0x5430;
      DAT_023dc5a8 = FUN_02007aac;
      DAT_023dc5b8 = FUN_02008320;
      DAT_023dc5ac = 0x5032;
      DAT_0208f34c = param_1;
      return;
    }
    DAT_023dc5b0 = 0x1430;
    DAT_023dc5a8 = FUN_02007a2c;
    DAT_023dc5b8 = FUN_02008270;
    DAT_023dc5ac = 0x1032;
  }
  DAT_0208f34c = param_1;
  return;
}


// 0x02007420  clear_and_initialize_renderer_vram

void FUN_02007420(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)&DAT_06000000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x600c000);
  puVar2 = (undefined2 *)&DAT_06020000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_06030000);
  puVar2 = (undefined2 *)&DAT_06028000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6038000);
  puVar2 = (undefined2 *)&DAT_06030000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6040000);
  puVar2 = (undefined2 *)&DAT_06400000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6410000);
  return;
}


// 0x020083ec  apply_prepared_scanline_display_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020083ec(int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  short *psVar3;
  
  param_1 = param_1 + DAT_020993a8 + 1;
  _DAT_05000000 = (&DAT_023dcbca)[param_1];
  if ((&DAT_023dceb4)[param_1] != '\0') {
    _DAT_04000000 = _DAT_04000000 & 0xe0ff;
    return;
  }
  _DAT_04000014 =
       (undefined2)(((uint)(ushort)(&DAT_023dd924)[param_1] + DAT_020993a4) * 0x10000 >> 0x10);
  _DAT_0400001c = _DAT_04000014;
  _DAT_04000016 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd564)[param_1]) * 0x10000 >> 0x10);
  _DAT_0400001e = _DAT_04000016;
  if ((&DAT_023dc7b0)[param_1] == '\x01') {
    puVar1 = &DAT_023dc5ac;
  }
  else {
    puVar1 = &DAT_023dc6a4;
  }
  _DAT_04000008 = (undefined2)puVar1[1];
  _DAT_0400000c = (undefined2)*puVar1;
  _DAT_04000010 =
       (undefined2)((DAT_020993a4 + (uint)(ushort)(&DAT_023dd744)[param_1]) * 0x10000 >> 0x10);
  _DAT_04000018 = _DAT_04000010;
  _DAT_04000012 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd384)[param_1]) * 0x10000 >> 0x10);
  _DAT_0400001a = _DAT_04000012;
  _DAT_04000000 = _DAT_04000000 | 0x1f00;
  if ((&DAT_023dc5bc)[param_1] == DAT_023dc5b4) {
    _DAT_04000048 = 0xf;
  }
  else {
    _DAT_04000048 = 0x1f;
  }
  psVar3 = (short *)(&DAT_023ddb0c)[param_1];
  if (psVar3 != (short *)0x0) {
    psVar2 = (short *)&DAT_05000002;
    do {
      psVar3 = psVar3 + 1;
      if (*psVar3 != -0x8000) {
        *psVar2 = *psVar3;
        *psVar3 = -0x8000;
      }
      psVar2 = psVar2 + 1;
    } while (psVar2 != (short *)0x5000080);
    (&DAT_023ddb0c)[param_1] = 0;
    return;
  }
  return;
}


// 0x02008f7c  configure_ds_display_windows

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02008f7c(void)

{
  undefined4 *puVar1;
  undefined2 *puVar3;
  undefined4 *puVar2;
  
  FUN_02006f2c(0);
  FUN_020072a8(0);
  puVar3 = &DAT_020993cc;
  FUN_02007420();
  DAT_04000041 = 0;
  DAT_04000040 = 0xff;
  DAT_04000045 = 0;
  DAT_04000044 = 0xc4;
  _DAT_04000048 = 0x1f;
  _DAT_0400004a = 0x1f;
  do {
    puVar3[1] = 0x2000;
    puVar3[0x801] = 0x2000;
    puVar3[0x1001] = 0x2000;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined2 *)0x209a3ca);
  puVar2 = (undefined4 *)&DAT_023dc5bc;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_023dc69c);
  DAT_0209b3cc = 0x8000;
  DAT_020993c0 = 0x50;
  DAT_0209a3cc = 0x8000;
  DAT_0209c3d0 = 1;
  DAT_0209c3cc = 1;
  DAT_0209c3ce = 1;
  DAT_0209c3dc = 0;
  DAT_020993cc = 0x8000;
  DAT_0209c3d4 = 0;
  DAT_0209c3d8 = 0;
  puVar2 = (undefined4 *)&DAT_0209c3e0;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 1;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_0209cbe0);
  DAT_023dc5b4 = 1;
  coproc_moveto_Domain_Access_Control(7);
  return 7;
}


// 0x0200b6a8  reset_vdp_memory_and_renderer_state

void FUN_0200b6a8(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined2 *puVar12;
  
  puVar5 = &DAT_0209cbec;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != &DAT_020acbec);
  puVar4 = (undefined4 *)&DAT_020acbec;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_020b4bec);
  puVar8 = &DAT_023dc6b0;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_023dc7b0);
  puVar8 = &DAT_0b00364c;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)0xb0036ec);
  DAT_023ddeac = 0;
  DAT_023ddea0 = 0;
  DAT_023ddea4 = 0;
  DAT_023ddea8 = 0;
  puVar4 = (undefined4 *)&DAT_020b4c18;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_020b4c38);
  puVar1 = &DAT_023dc8ca;
  puVar12 = &DAT_023dc94a;
  puVar3 = &DAT_023dcaca;
  puVar8 = &DAT_023dc730;
  do {
    puVar1 = puVar1 + 1;
    puVar12[-0x40] = 0x8000;
    *puVar12 = 0x8000;
    puVar12[0x40] = 0x8000;
    *puVar8 = 0x8000;
    puVar3[-0x40] = 0x8000;
    *puVar3 = 0x8000;
    puVar3[0x40] = 0x8000;
    puVar12 = puVar12 + 1;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (puVar1 != &DAT_023dc94a);
  puVar4 = &DAT_023ddb0c;
  do {
    puVar7 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_023dde8c);
  DAT_023dde90 = 0;
  DAT_023dde8c = 0;
  puVar5 = &DAT_023dde95;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined1 *)0x23dde9d);
  DAT_0b000084 = 0x200;
  DAT_020b4c14 = 0;
  DAT_0b000098 = 0x10;
  DAT_020b4bf5 = 0;
  DAT_020b4bf4 = 0;
  DAT_020b4bf0 = 0;
  DAT_020b4bf1 = 0;
  DAT_0b003644 = 0;
  DAT_0b00362c = 0;
  DAT_023ddeb4 = 0;
  DAT_0b000074 = &DAT_0209cbec;
  DAT_0b0000a0 = 0;
  DAT_0b000044 = 0;
  DAT_0b000054 = 0;
  DAT_0b000064 = 0;
  DAT_0b000048 = 0;
  DAT_0b000058 = 0;
  DAT_0b000068 = 0;
  DAT_0b00004c = 0;
  DAT_0b00005c = 0;
  DAT_0b00006c = 0;
  DAT_0b000050 = 0;
  DAT_0b000060 = 0;
  DAT_0b000070 = 0;
  DAT_0b000078 = 0;
  DAT_0b00007c = 0;
  DAT_0b000080 = 0;
  DAT_0b000088 = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  DAT_0b00009c = 0;
  DAT_023dde94 = 0;
  DAT_023ddb05 = 0;
  DAT_0b003630 = 2;
  DAT_023ddb06 = 0;
  DAT_020b4bf2 = 0;
  DAT_0b00362f = 0;
  DAT_020b4c05 = 0;
  DAT_020b4c04 = 0;
  DAT_023dcdb0 = 0;
  DAT_023dcfac = 0;
  DAT_023ddeb0 = 0;
  DAT_023ddb04 = 0;
  DAT_020b4bfc = 0;
  DAT_0b003638 = 0;
  DAT_0b003634 = 0;
  DAT_023dcea6 = 0;
  DAT_023dd372._0_1_ = 0;
  DAT_023dcdaa = 0;
  DAT_023dcea4 = 0;
  DAT_020b4bf8 = 0;
  DAT_020b4bf7 = 0;
  DAT_020b4bf6 = 0;
  DAT_020b4c08 = 0;
  DAT_0b00363c = 0;
  DAT_020b4c0a = 0;
  DAT_023dc8ae = 0x140;
  DAT_023dc8b2 = 0x140;
  DAT_023dd370 = 0xf0;
  DAT_023dc8ac = 0xf0;
  DAT_023dc8c8 = 0;
  DAT_023dc8b0 = 0;
  DAT_023dcfa8 = 0;
  DAT_023dceac = 0;
  DAT_023ddb08 = 0;
  DAT_020b4c07 = 0;
  DAT_020b4c00 = 0;
  DAT_020b4c06 = 0;
  DAT_023dceb0 = &DAT_020acbec;
  DAT_023dcdac = &DAT_0209cbec;
  DAT_0b003648 = &DAT_0209cbec;
  DAT_023dc8c4 = 0;
  FUN_02008f7c();
  puVar1 = &DAT_023dd744;
  puVar3 = &DAT_023dd384;
  DAT_023dc8a0 = 0x800;
  DAT_023dc8a8 = 0;
  DAT_023dc8a4 = 0;
  DAT_023dcfa4 = 0;
  puVar8 = &DAT_023dcbca;
  puVar5 = &DAT_023dceb4;
  do {
    *puVar1 = 0;
    puVar12 = puVar1 + 0xf0;
    puVar1 = puVar1 + 1;
    *puVar3 = 0;
    *puVar12 = 0;
    puVar3[0xf0] = 0;
    *puVar5 = 0;
    *puVar8 = 0;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (puVar1 != &DAT_023dd924);
  iVar9 = 0;
  do {
    *(undefined4 *)((int)&DAT_023dd372 + iVar9 + 2) = 0;
    *(undefined4 *)((int)&DAT_023dc8b4 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 != 0x10);
  uVar2 = 0;
  cVar11 = '\0';
  DAT_023dcdb4 = 0;
  do {
    cVar11 = cVar11 + '\x01';
    pcVar10 = &DAT_023dcdb4 + uVar2;
    do {
      uVar2 = uVar2 + 1;
      if (0xef < uVar2) {
        return;
      }
      pcVar10 = pcVar10 + 1;
      *pcVar10 = cVar11;
    } while (uVar2 % 7 != 0);
  } while( true );
}


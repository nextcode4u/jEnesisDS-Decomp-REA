/* ARM9 graphics — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02006a44  invalidate_viewport_mode_cache

void FUN_02006a44(void)

{
  DAT_020993a0 = 0xff;
  return;
}


// 0x02007358  adjust_horizontal_viewport_offset

void FUN_02007358(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_020993b0;
  DAT_020993b0 = DAT_020993b0 + param_1;
  if (DAT_020993b0 < -0x20) {
    DAT_020993b0 = -0x20;
  }
  else if (0x20 < DAT_020993b0) {
    DAT_020993b0 = 0x20;
  }
  DAT_020993ac = (uint)(iVar1 != DAT_020993b0);
  return;
}


// 0x020073a4  adjust_vertical_viewport_offset

void FUN_020073a4(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_020993b4;
  DAT_020993b4 = DAT_020993b4 + param_1;
  if (DAT_020993b4 < -0x18) {
    DAT_020993b4 = -0x18;
  }
  else if (0x18 < DAT_020993b4) {
    DAT_020993b4 = 0x18;
  }
  DAT_020993ac = (uint)(iVar1 != DAT_020993b4);
  return;
}


// 0x020073f0  center_viewport

void FUN_020073f0(void)

{
  DAT_020993ac = 1;
  DAT_020993b4 = 0;
  DAT_020993b0 = 0;
  return;
}


// 0x020086d8  copy_sprite_tiles_for_sprite_shape

void FUN_020086d8(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar4;
  uint uVar5;
  uint uVar3;
  
  uVar5 = ((param_1[3] & 0xffff01ff) - DAT_020993a4) - 0x80;
  uVar4 = (ushort)uVar5;
  uVar3 = ((*param_1 & 0xffff01ff) - DAT_020993a8) - 0x80 & 0xffff;
  if (((DAT_023cb610 & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&DAT_023dcdb4)[uVar3] & 0xffff;
  }
  uVar2 = (ushort)uVar3;
  switch(param_1[1] >> 8 & 0xc | (param_1[1] & 0x3ff) >> 8) {
  case 0:
    FUN_010042c0();
    break;
  case 1:
    FUN_010044d0();
    break;
  case 2:
    FUN_010048c0();
    if ((param_1[2] & 0x1000) == 0) break;
    goto LAB_02008824;
  case 3:
    FUN_01004f30();
    break;
  case 4:
    FUN_01004300();
    break;
  case 5:
    FUN_01004530();
    break;
  case 6:
    FUN_01004970();
    uVar1 = param_1[2];
    goto joined_r0x02008820;
  case 7:
    FUN_01004ff0();
    break;
  case 8:
    FUN_01004360();
    uVar1 = param_1[2];
    goto joined_r0x02008894;
  case 9:
    FUN_010045f0();
    uVar1 = param_1[2];
joined_r0x02008894:
    if ((uVar1 & 0x800) != 0) {
LAB_02008854:
      uVar4 = (ushort)(((uVar5 & 0xffff) - 8) * 0x10000 >> 0x10);
    }
    break;
  case 10:
    FUN_01004ab0();
    uVar1 = param_1[2];
    if ((uVar1 & 0x1000) != 0) {
      uVar2 = uVar2 - 8;
    }
    goto joined_r0x02008850;
  case 0xb:
    FUN_01005160();
    uVar1 = param_1[2];
joined_r0x02008850:
    if ((uVar1 & 0x800) == 0) break;
    goto LAB_02008854;
  case 0xc:
    FUN_01004410();
    break;
  case 0xd:
    FUN_01004750();
    break;
  case 0xe:
    FUN_01004ce0();
    uVar1 = param_1[2];
joined_r0x02008820:
    if ((uVar1 & 0x1000) != 0) {
LAB_02008824:
      uVar2 = uVar2 - 8;
    }
    break;
  case 0xf:
    FUN_01005410(param_2 + (param_1[2] & 0x7ff) * 0x20,&DAT_06400000 + param_3 * 0x200);
  }
  (&DAT_023dc1a8)[param_3 * 4] = (&DAT_023dc1a8)[param_3 * 4] | uVar2 & 0xff;
  (&DAT_023dc1aa)[param_3 * 4] = (&DAT_023dc1aa)[param_3 * 4] | uVar4 & 0x1ff;
  return;
}


// 0x020090e8  tick_vdp_horizontal_interrupt_counter

void FUN_020090e8(undefined4 param_1)

{
  DAT_020b4bec = param_1;
  DAT_0b003620 = DAT_0b003620 + -1;
  DAT_0b003628 = 0;
  if (-1 < DAT_0b003620) {
    return;
  }
  DAT_0b003620 = (int)DAT_020b4bf8;
  DAT_0b00362d = 1;
  return;
}


// 0x02009144  begin_vdp_vertical_blanking

void FUN_02009144(int param_1)

{
  DAT_0b003620 = DAT_0b003620 + -1;
  DAT_0b003628 = 0;
  DAT_020b4bec = param_1;
  if (DAT_0b003620 < 0) {
    DAT_0b003620 = (int)DAT_020b4bf8;
    DAT_0b00362d = 1;
    if (param_1 != DAT_0b000004) {
      return;
    }
  }
  else if (param_1 != DAT_0b000004) {
    return;
  }
  DAT_0b00008c = 0x80;
  DAT_0b00362e = 1;
  DAT_0b00007c = 8;
  return;
}


// 0x020091ec  reload_vdp_counter_during_vertical_blanking

void FUN_020091ec(undefined4 param_1)

{
  DAT_020b4bec = param_1;
  DAT_0b003620 = (int)DAT_020b4bf8;
  return;
}


// 0x02009570  select_vdp_scanline_render_callback

void FUN_02009570(void)

{
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


// 0x02009614  write_vdp_register_and_update_render_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009614(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 1 - (uint)DAT_020b4c06;
  if (1 < DAT_020b4c06) {
    iVar2 = 0;
  }
  if (param_1 < 0xc) {
    iVar2 = 0;
  }
  bVar1 = (byte)param_2;
  (&DAT_020b4c18)[param_1] = bVar1;
  if (iVar2 == 0) {
    switch(param_1) {
    case 0:
      DAT_0b003644 = (byte)(param_2 >> 4) & 1;
      DAT_020b4bf1 = ((byte)(param_2 >> 1) ^ 1) & 1;
      return;
    case 1:
      DAT_020b4c06 = bVar1 & 4;
      DAT_0b00362f = (byte)(param_2 >> 6) & 1;
      uVar3 = param_2 >> 3 & 1;
      DAT_0b00362c = (byte)(param_2 >> 5) & 1;
      DAT_020b4bf2 = (byte)(param_2 >> 4) & 1;
      DAT_023ddb06 = (char)uVar3;
      if (uVar3 == 0) {
        DAT_023dd370 = 0xe0;
        DAT_0b000004 = 0xe0;
      }
      else {
        DAT_023dd370 = 0xf0;
        DAT_0b000004 = 0xf0;
      }
      return;
    case 2:
      DAT_023ddea0 = (param_2 & 0x38) * 0x400;
      DAT_023dde8c = &DAT_020acbec + (param_2 & 0x38) * 0x200;
      if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
        DAT_023dc8a4 = 1;
      }
      ram0x023dd374 = DAT_023ddea0;
      DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
      return;
    case 3:
      DAT_023ddea8 = (param_2 & 0x3e) * 0x400;
      if (DAT_023ddb05 == '\0') {
        iVar2 = 0x800;
      }
      else {
        iVar2 = 0x1000;
      }
      DAT_023dc8bc = iVar2 + DAT_023ddea8;
      return;
    case 4:
      DAT_023ddea4 = (param_2 & 7) * 0x2000;
      DAT_023dde90 = &DAT_020acbec + (param_2 & 7) * 0x1000;
      if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
        DAT_023dc8a8 = 1;
      }
      DAT_023dd378 = DAT_023ddea4;
      DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
      return;
    case 5:
      iVar2 = (param_2 & 0x7f) * 0x200;
      DAT_0209cbe0 = DAT_023ddeac;
      DAT_023dcdac = &DAT_0209cbec + iVar2;
      DAT_023ddeac = iVar2;
      return;
    case 7:
      DAT_0b003640 = param_2 & 0x3f;
      DAT_020b4bf7 = (char)(param_2 & 0x3f);
      return;
    case 10:
      DAT_020b4bf8 = (short)param_2;
      return;
    case 0xb:
      DAT_020b4bf0 = (byte)(param_2 >> 3) & 1;
      DAT_023dcfac = (byte)(param_2 >> 2) & 1;
      DAT_023dcdb0 = bVar1 & 3;
      if ((DAT_023cb610 & 4) == 0) {
        DAT_023dcea8 = FUN_0200c280;
      }
      else {
        switch(bVar1 & 3) {
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
    case 0xc:
      uVar3 = (uint)DAT_020b4bf4;
      DAT_023ddb05 = (param_2 & 0x81) != 0;
      if ((uVar3 != (param_2 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar3)) {
        DAT_020b4bf4 = 0;
      }
      if ((bool)DAT_023ddb05) {
        DAT_023dc8bc = DAT_023ddea8 + 0x1000;
        DAT_020b4c0c = 0xf000;
        DAT_020b4c0a = 0x50;
        DAT_023ddeb2 = 0x28;
        DAT_023dc8ae = 0x140;
        DAT_023dc8c8 = 0x40;
      }
      else {
        DAT_020b4c0c = 0xf800;
        DAT_023dc8bc = DAT_023ddea8 + 0x800;
        DAT_020b4c14 = 1;
        DAT_020b4c0a = 0x40;
        DAT_023ddeb2 = 0x20;
        DAT_023dc8ae = 0x100;
        DAT_023dc8c8 = 0x20;
      }
      if (DAT_023ddeb4 == '\0') {
        DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
      }
      else {
        DAT_023dcfa8 = 1 - DAT_023ddb04;
        if (1 < DAT_023ddb04) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0xd:
      DAT_023dcea4 = (short)((param_2 << 0x1a) >> 0x10);
      DAT_023dcdaa = DAT_023dcea4 + 0x380;
      return;
    case 0xf:
      DAT_0b003630 = param_2;
      return;
    case 0x10:
      uVar4 = param_2 >> 4 & 3;
      param_2 = param_2 & 3;
      uVar3 = uVar4 | param_2 << 4;
      if (uVar3 != (DAT_023dcfa4 & 0xff)) {
        DAT_0208f358 = 1;
      }
      DAT_023dcfa4 = uVar3;
      DAT_023dc8a0 = *(int *)(&DAT_0208e59c + (uVar4 + param_2 * 4) * 4);
      DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
      DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
      DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
      DAT_023dcea6 = (char)param_2;
      DAT_023dd372._0_1_ = (char)uVar4;
      return;
    case 0x11:
      uVar3 = (param_2 & 0x1f) * 2;
      DAT_023ddeb4 = (char)(param_2 >> 7);
      DAT_023ddb04 = (char)uVar3;
      if (param_2 >> 7 == 0) {
        DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar3);
      }
      else {
        DAT_023dcfa8 = (param_2 & 0x1f) * -2 + 1;
        if (1 < uVar3) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0x12:
      DAT_023dde94 = (char)(param_2 >> 7);
      DAT_020b4c10 = (param_2 & 0x1f) << 3;
      DAT_023ddeb0 = (char)(param_2 & 0x1f);
      return;
    case 0x13:
      DAT_020b4bfc = DAT_020b4bfc & 0xff00 | param_2;
      return;
    case 0x14:
      DAT_020b4bfc = DAT_020b4bfc & 0xff | param_2 << 8;
      return;
    case 0x15:
      DAT_0b003634 = DAT_0b003634 & 0xfffe00 | param_2 << 1;
      return;
    case 0x16:
      DAT_0b003634 = DAT_0b003634 & 0xfe01ff | param_2 << 9;
      return;
    case 0x17:
      DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_2 & 0x7f) << 0x11;
      DAT_020b4c05 = (undefined1)(param_2 >> 6);
    }
    return;
  }
  return;
}


// 0x0200b284  update_vdp_line_cycles_and_queue_m68k_interrupts

/* WARNING: Removing unreachable block (ram,0x020050e0) */
/* WARNING: Removing unreachable block (ram,0x020050e4) */

void FUN_0200b284(uint param_1)

{
  int iVar1;
  
  DAT_0b003624 = param_1;
  if ((((DAT_0b003644 != '\0') && (DAT_0b00362d != '\0')) && (DAT_0b003628 == 0)) &&
     (0x22 < param_1)) {
    FUN_020004e0(4);
    DAT_0b003628 = 1;
  }
  if (((DAT_0b00362c != '\0') && (DAT_0b00362e != '\0')) &&
     ((0x8e < DAT_0b003624 || ((DAT_0b00362d == '\0' && (0xc < DAT_0b003624)))))) {
    DAT_0b00014d = 1;
    DAT_0b00014c = 6;
    iVar1 = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
    DAT_0b000143 = (char)((uint)iVar1 >> 0x18);
    DAT_0b000141 = (char)((uint)iVar1 >> 8);
    DAT_0b000142 = (char)((uint)iVar1 >> 0x10);
    DAT_0b000140 = (char)iVar1;
    return;
  }
  return;
}


// 0x0200b438  begin_vdp_frame_and_refresh_backgrounds

void FUN_0200b438(void)

{
  int iVar1;
  
  DAT_0b003620 = (int)DAT_020b4bf8;
  DAT_0b000098 = DAT_0b000098 ^ 0x10;
  DAT_0b003624 = 0;
  DAT_0b00361c = 0;
  DAT_0b00007c = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  if ((DAT_023dc8b0 != DAT_023dc8c8) || (iVar1 = FUN_020075ac(2), iVar1 != 0)) {
    if (DAT_023ddb05 == '\0') {
      FUN_020072a8();
      FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x800,2);
    }
    else {
      FUN_020072a8(1);
      FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x1000,2);
    }
  }
  DAT_023dceac = DAT_023ddeb2;
  DAT_023dc8b2 = DAT_023dc8ae;
  DAT_023dc8ac = DAT_023dd370;
  DAT_023dc8b0 = DAT_023dc8c8;
  if (DAT_0208f358 == 0) {
    iVar1 = FUN_020075ac(0);
    if ((iVar1 != 0) || (DAT_023dc8a4 != 0)) {
      FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
      DAT_023dc8a4 = 0;
    }
    iVar1 = FUN_020075ac(1);
    if ((iVar1 != 0) || (DAT_023dc8a8 != 0)) {
      FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
      DAT_023dc8a8 = 0;
    }
  }
  else {
    DAT_0208f358 = 0;
    FUN_02006f2c(DAT_023dcfa4);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
  }
  DAT_020b4c15 = 1;
  FUN_02008984(&DAT_0209cbec,(int)DAT_020b4c0a);
  DAT_020b4c15 = 0;
  return;
}


// 0x0200c280  record_unscaled_scanline_scroll_and_backdrop

void FUN_0200c280(uint param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = DAT_0b00362f == '\0';
  (&DAT_023dcbca)[param_1] = (&DAT_023dc730)[DAT_020b4bf7];
  if (bVar4) {
    (&DAT_023dceb4)[param_1] = 1;
    return;
  }
  bVar4 = DAT_023dde94 == '\0';
  (&DAT_023dceb4)[param_1] = 0;
  cVar1 = DAT_023dcfac;
  if (bVar4) {
    if (DAT_020b4c10 <= param_1) {
LAB_0200c3a8:
      if (DAT_023dcfa8 == 0) {
        uVar3 = (uint)DAT_023dcea4;
        if (DAT_023dcdb0 == '\x02') {
          uVar3 = uVar3 + (param_1 & 0xfffffff8) * 4;
        }
        else if (DAT_023dcdb0 == '\x03') {
          uVar3 = uVar3 + param_1 * 4;
        }
        else if (DAT_023dcdb0 == '\x01') {
          uVar3 = uVar3 + (param_1 & 7) * 4;
        }
        bVar4 = DAT_023dcfac == '\0';
        (&DAT_023dd744)[param_1] = -(*(ushort *)(&DAT_0209cbec + (uVar3 & 0xfffffffe)) & 0x3fff);
        if ((bVar4) || (uVar2 = 0, cVar1 == '\x01')) {
          uVar2 = DAT_0b00364c;
        }
        (&DAT_023dc7b0)[param_1] = 0;
        (&DAT_023dd384)[param_1] = uVar2;
        goto LAB_0200c31c;
      }
    }
  }
  else if (param_1 < DAT_020b4c10) goto LAB_0200c3a8;
  (&DAT_023dc7b0)[param_1] = 1;
  (&DAT_023dd744)[param_1] = 0;
  (&DAT_023dd384)[param_1] = 0;
LAB_0200c31c:
  cVar1 = DAT_023dcfac;
  uVar3 = DAT_023dcea4 + 2;
  if (DAT_023dcdb0 == '\x02') {
    uVar3 = uVar3 + (param_1 & 0xfffffff8) * 4;
  }
  else if (DAT_023dcdb0 == '\x03') {
    uVar3 = uVar3 + param_1 * 4;
  }
  else if (DAT_023dcdb0 == '\x01') {
    uVar3 = uVar3 + (param_1 & 7) * 4;
  }
  bVar4 = DAT_023dcfac != '\0';
  (&DAT_023dd924)[param_1] = -(*(ushort *)(&DAT_0209cbec + (uVar3 & 0xfffffffe)) & 0x3fff);
  if ((bVar4) && (cVar1 != '\x01')) {
    (&DAT_023dd564)[param_1] = 0;
    return;
  }
  (&DAT_023dd564)[param_1] = DAT_0b00364e;
  return;
}


/* ARM9 display updates — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020090a0  copy_prepared_palette_to_main_bg_and_obj

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020090a0(void)

{
  FUN_020802c4(&DAT_023dc730,0x80);
  _DAT_040000d4 = &DAT_023dc730;
  _DAT_040000d8 = &DAT_05000200;
  _DAT_040000dc = 0x80000040;
  return;
}


// 0x02009cf0  rebuild_display_from_vdp_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009cf0(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  uVar6 = 0;
  do {
    uVar3 = uVar6 & 0xff;
    puVar1 = &DAT_020b4c18 + uVar6;
    uVar6 = uVar6 + 1;
    FUN_02009614(uVar3,*puVar1);
  } while (uVar6 != 0x18);
  uVar3 = 0;
  uVar6 = (uint)DAT_020b4bf7;
  iVar4 = 0;
  do {
    uVar5 = (uint)*(ushort *)((int)&DAT_023dc6b0 + iVar4);
    uVar2 = (ushort)((uVar5 & 0xe0) << 2) | (ushort)((uVar5 & 0xe00) << 3) | 0x8000 |
            (ushort)((uVar5 & 0xe) << 1);
    *(ushort *)((int)&DAT_023dc730 + iVar4) = uVar2;
    if (uVar3 != 0) {
      *(ushort *)(&DAT_05000000 + iVar4) = uVar2;
    }
    bVar7 = uVar6 == uVar3;
    uVar3 = uVar3 + 1;
    *(ushort *)(&DAT_05000200 + iVar4) = uVar2;
    if (bVar7) {
      _DAT_05000200 = uVar2;
    }
    iVar4 = iVar4 + 2;
  } while (uVar3 != 0x40);
  if (DAT_023ddb05 == '\0') {
    FUN_020072a8();
    FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x800,2);
  }
  else {
    FUN_020072a8(1);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x1000,2);
  }
  FUN_02006f2c(DAT_023dcfa4);
  FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
  FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
  DAT_020993bc = 1;
  FUN_02008984(DAT_0b003648,DAT_020993c0,&DAT_020993c0,1,unaff_r4,in_lr);
  DAT_020993bc = 0;
  return;
}


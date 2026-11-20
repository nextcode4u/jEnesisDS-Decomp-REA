/* ARM9 shifts — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x020128f4  z80_ix_iy_cb_sla_indexed_memory_to_b

undefined8 z80_dispatch_020128f4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012948  z80_ix_iy_cb_sla_indexed_memory_to_c

undefined8 z80_dispatch_02012948(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x0201299c  z80_ix_iy_cb_sla_indexed_memory_to_d

undefined8 z80_dispatch_0201299c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020129e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x020129f0  z80_ix_iy_cb_sla_indexed_memory_to_e

undefined8 z80_dispatch_020129f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012a44  z80_ix_iy_cb_sla_indexed_memory_to_h

undefined8 z80_dispatch_02012a44(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012aa0  z80_ix_iy_cb_sla_indexed_memory_to_l

undefined8 z80_dispatch_02012aa0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012afc  z80_ix_iy_cb_sla_indexed_memory

undefined8 z80_dispatch_02012afc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012b50  z80_ix_iy_cb_sla_indexed_memory_to_a

undefined8 z80_dispatch_02012b50(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012ba4  z80_ix_iy_cb_sra_indexed_memory_to_b

undefined8 z80_dispatch_02012ba4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012bfc  z80_ix_iy_cb_sra_indexed_memory_to_c

undefined8 z80_dispatch_02012bfc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012c54  z80_ix_iy_cb_sra_indexed_memory_to_d

undefined8 z80_dispatch_02012c54(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012cac  z80_ix_iy_cb_sra_indexed_memory_to_e

undefined8 z80_dispatch_02012cac(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012d04  z80_ix_iy_cb_sra_indexed_memory_to_h

undefined8 z80_dispatch_02012d04(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012d64  z80_ix_iy_cb_sra_indexed_memory_to_l

undefined8 z80_dispatch_02012d64(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012dc4  z80_ix_iy_cb_sra_indexed_memory

undefined8 z80_dispatch_02012dc4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar10 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar10 = FUN_01002cdc();
  }
  bVar1 = *(byte *)(param_4 + (int)lVar10);
  uVar4 = (int)((uint)bVar1 << 0x18) >> 0x19;
  uVar11 = CONCAT44(uVar4,(int)((ulonglong)lVar10 >> 0x20)) & 0xffffffffff;
  bVar2 = (&DAT_0200de20)[uVar4 & 0xff];
  uVar4 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)(uVar11 >> 0x20);
  iVar5 = (uVar4 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar7 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar7 = SCARRY4(iVar5,iVar6 * 0x10000);
    iVar5 = iVar5 + iVar6 * 0x10000;
    iVar6 = iVar5;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar7) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar6 < in_stack_00000078) {
        in_stack_00000078 = iVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar9 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar7 = iVar3 < 0;
      bVar8 = iVar3 == 0;
      if (bVar8 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar8 || bVar7 != bVar9) {
          bVar9 = SCARRY4(iVar3,iVar6);
          iVar3 = iVar3 + iVar6;
          bVar7 = iVar3 < 0;
          bVar8 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar7 != bVar9);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar9 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar7 = iVar3 < 0;
      bVar8 = iVar3 == 0;
      if (bVar8 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar8 || bVar7 != bVar9) {
          bVar9 = SCARRY4(iVar3,iVar6);
          iVar3 = iVar3 + iVar6;
          bVar7 = iVar3 < 0;
          bVar8 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar7 != bVar9);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar7 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar6 - in_stack_00000088;
          bVar7 = iVar6 == in_stack_00000088;
        }
        if (!bVar7 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar7 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar7 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar7 && iVar5 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x02012e1c  z80_ix_iy_cb_sra_indexed_memory_to_a

undefined8 z80_dispatch_02012e1c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char extraout_r1;
  char cVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar2 = (&DAT_0200de20)[(int)((uint)bVar1 << 0x18) >> 0x19];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  cVar4 = (char)bVar1 >> 1;
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    cVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + iVar3) = cVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012e74  z80_ix_iy_cb_sll_indexed_memory_to_b

undefined8 z80_dispatch_02012e74(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar7 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar7 >> 0x18];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar7 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar3,iVar8 * 0x10000);
    iVar3 = iVar3 + iVar8 * 0x10000;
    iVar8 = iVar3;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012ecc  z80_ix_iy_cb_sll_indexed_memory_to_c

undefined8 z80_dispatch_02012ecc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar7 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar7 >> 0x18];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar7 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar3,iVar8 * 0x10000);
    iVar3 = iVar3 + iVar8 * 0x10000;
    iVar8 = iVar3;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012f24  z80_ix_iy_cb_sll_indexed_memory_to_d

undefined8 z80_dispatch_02012f24(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar7 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar7 >> 0x18];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar7 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar3,iVar8 * 0x10000);
    iVar3 = iVar3 + iVar8 * 0x10000;
    iVar8 = iVar3;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012f7c  z80_ix_iy_cb_sll_indexed_memory_to_e

undefined8 z80_dispatch_02012f7c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar7 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar7 >> 0x18];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar7 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar3,iVar8 * 0x10000);
    iVar3 = iVar3 + iVar8 * 0x10000;
    iVar8 = iVar3;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02012fd4  z80_ix_iy_cb_sll_indexed_memory_to_h

undefined8 z80_dispatch_02012fd4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 extraout_r1;
  undefined1 uVar5;
  int iVar6;
  uint unaff_r5;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar4 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar3 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar3 >> 0x18];
  uVar7 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar7 = uVar7 | 1;
  }
  uVar5 = (undefined1)(uVar3 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar4 = FUN_01002d10();
    uVar5 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar4) = uVar5;
  iVar4 = (uVar7 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201302c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar7 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar8 * 0x10000);
    iVar4 = iVar4 + iVar8 * 0x10000;
    iVar8 = iVar4;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar6 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar6 < 0;
      bVar10 = iVar6 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar6,iVar8);
          iVar6 = iVar6 + iVar8;
          bVar9 = iVar6 < 0;
          bVar10 = iVar6 == 0;
        }
        in_stack_00000088 = iVar6;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar6 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar6 < 0;
      bVar10 = iVar6 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar6,iVar8);
          iVar6 = iVar6 + iVar8;
          bVar9 = iVar6 < 0;
          bVar10 = iVar6 == 0;
        }
        in_stack_00000090 = iVar6;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar4 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar4 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar4 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x02013034  z80_ix_iy_cb_sll_indexed_memory_to_l

undefined8 z80_dispatch_02013034(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 extraout_r1;
  undefined1 uVar5;
  int iVar6;
  uint unaff_r5;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar4 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar3 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar3 >> 0x18];
  uVar7 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar7 = uVar7 | 1;
  }
  uVar5 = (undefined1)(uVar3 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar4 = FUN_01002d10();
    uVar5 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar4) = uVar5;
  iVar4 = (uVar7 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar7 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar8 * 0x10000);
    iVar4 = iVar4 + iVar8 * 0x10000;
    iVar8 = iVar4;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar6 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar6 < 0;
      bVar10 = iVar6 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar6,iVar8);
          iVar6 = iVar6 + iVar8;
          bVar9 = iVar6 < 0;
          bVar10 = iVar6 == 0;
        }
        in_stack_00000088 = iVar6;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar6 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar6 < 0;
      bVar10 = iVar6 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar6,iVar8);
          iVar6 = iVar6 + iVar8;
          bVar9 = iVar6 < 0;
          bVar10 = iVar6 == 0;
        }
        in_stack_00000090 = iVar6;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar4 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar4 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar4 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x02013094  z80_ix_iy_cb_sll_indexed_memory

undefined8 z80_dispatch_02013094(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 extraout_r1;
  undefined1 uVar5;
  int iVar6;
  uint unaff_r5;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar4 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar3 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar3 >> 0x18];
  uVar7 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar7 = uVar7 | 1;
  }
  uVar5 = (undefined1)(uVar3 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar4 = FUN_01002d10();
    uVar5 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar4) = uVar5;
  iVar4 = (uVar7 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020130e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar7 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar8 * 0x10000);
    iVar4 = iVar4 + iVar8 * 0x10000;
    iVar8 = iVar4;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar6 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar6 < 0;
      bVar10 = iVar6 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar6,iVar8);
          iVar6 = iVar6 + iVar8;
          bVar9 = iVar6 < 0;
          bVar10 = iVar6 == 0;
        }
        in_stack_00000088 = iVar6;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar6 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar6 < 0;
      bVar10 = iVar6 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar6,iVar8);
          iVar6 = iVar6 + iVar8;
          bVar9 = iVar6 < 0;
          bVar10 = iVar6 == 0;
        }
        in_stack_00000090 = iVar6;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar4 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar4 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar4 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x020130ec  z80_ix_iy_cb_sll_indexed_memory_to_a

undefined8 z80_dispatch_020130ec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint unaff_r5;
  uint uVar7;
  byte *unaff_r11;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  undefined8 uVar13;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar12 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar12 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar12 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar12);
  uVar6 = (uint)bVar1 << 0x19 | 0x1000000;
  bVar2 = (&DAT_0200de20)[uVar6 >> 0x18];
  uVar7 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar7 = uVar7 | 1;
  }
  uVar4 = (undefined1)(uVar6 >> 0x18);
  if (0x1fffffffffff < lVar12) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar8 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar7 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar7 | bVar2)) {
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar3,iVar8 * 0x10000);
    iVar3 = iVar3 + iVar8 * 0x10000;
    iVar8 = iVar3;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar8 < in_stack_00000078) {
        in_stack_00000078 = iVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar5 < 0;
      bVar10 = iVar5 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar5,iVar8);
          iVar5 = iVar5 + iVar8;
          bVar9 = iVar5 < 0;
          bVar10 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar8;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02013144  z80_ix_iy_cb_srl_indexed_memory_to_b

undefined8 z80_dispatch_02013144(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02013194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x0201319c  z80_ix_iy_cb_srl_indexed_memory_to_c

undefined8 z80_dispatch_0201319c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020131ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x020131f4  z80_ix_iy_cb_srl_indexed_memory_to_d

undefined8 z80_dispatch_020131f4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02013244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x0201324c  z80_ix_iy_cb_srl_indexed_memory_to_e

undefined8 z80_dispatch_0201324c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201329c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x020132a4  z80_ix_iy_cb_srl_indexed_memory_to_h

undefined8 z80_dispatch_020132a4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020132fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02013304  z80_ix_iy_cb_srl_indexed_memory_to_l

undefined8 z80_dispatch_02013304(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02013364  z80_ix_iy_cb_srl_indexed_memory

undefined8 z80_dispatch_02013364(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020133ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x020133b4  z80_ix_iy_cb_srl_indexed_memory_to_a

undefined8 z80_dispatch_020133b4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte extraout_r1;
  byte bVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined8 uVar12;
  int in_stack_00000028;
  uint in_stack_00000044;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  lVar11 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar11 = FUN_01002cdc();
  }
  iVar3 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  bVar4 = bVar1 >> 1;
  bVar2 = (&DAT_0200de20)[bVar4];
  uVar6 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 & 1)) {
    uVar6 = uVar6 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    bVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + iVar3) = bVar4;
  iVar3 = (uVar6 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02013404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar7 * 0x10000);
    iVar3 = iVar3 + iVar7 * 0x10000;
    iVar7 = iVar3;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*unaff_r11 == 0x76) {
        unaff_r11 = unaff_r11 + 1;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
        unaff_r11 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar7 < in_stack_00000078) {
        in_stack_00000078 = iVar7;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar7 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar5 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000088 = iVar5;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar5 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar5 < 0;
      bVar9 = iVar5 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar5,iVar7);
          iVar5 = iVar5 + iVar7;
          bVar8 = iVar5 < 0;
          bVar9 = iVar5 == 0;
        }
        in_stack_00000090 = iVar5;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


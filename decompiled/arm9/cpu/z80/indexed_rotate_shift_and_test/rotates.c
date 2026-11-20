/* ARM9 rotates — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02011d3c  z80_ix_iy_cb_rlc_indexed_memory_to_b

undefined8 z80_dispatch_02011d3c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar6 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar6 = uVar6 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar6 >> 0x18];
  if (bVar8) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)(uVar6 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02011d94  z80_ix_iy_cb_rlc_indexed_memory_to_c

undefined8 z80_dispatch_02011d94(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar6 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar6 = uVar6 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar6 >> 0x18];
  if (bVar8) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)(uVar6 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02011dec  z80_ix_iy_cb_rlc_indexed_memory_to_d

undefined8 z80_dispatch_02011dec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar6 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar6 = uVar6 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar6 >> 0x18];
  if (bVar8) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)(uVar6 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02011e44  z80_ix_iy_cb_rlc_indexed_memory_to_e

undefined8 z80_dispatch_02011e44(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar6 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar6 = uVar6 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar6 >> 0x18];
  if (bVar8) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)(uVar6 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02011e9c  z80_ix_iy_cb_rlc_indexed_memory_to_h

undefined8 z80_dispatch_02011e9c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  uVar6 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar2 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar2 = uVar2 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar2 >> 0x18];
  if (bVar8) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar2 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
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


// 0x02011efc  z80_ix_iy_cb_rlc_indexed_memory_to_l

undefined8 z80_dispatch_02011efc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  uVar6 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar2 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar2 = uVar2 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar2 >> 0x18];
  if (bVar8) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar2 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
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


// 0x02011f5c  z80_ix_iy_cb_rlc_indexed_memory

undefined8 z80_dispatch_02011f5c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  bVar8 = (bool)(bVar1 >> 7);
  uVar2 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar2 = uVar2 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar2 >> 0x18];
  uVar6 = unaff_r5 & 0xffffff28;
  if (bVar8) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)(uVar2 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02011fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
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


// 0x02011fb4  z80_ix_iy_cb_rlc_indexed_memory_to_a

undefined8 z80_dispatch_02011fb4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar6 = unaff_r5 & 0xffffff28;
  bVar8 = (bool)(bVar1 >> 7);
  uVar5 = (uint)bVar1 << 0x19;
  if (bVar8) {
    uVar5 = uVar5 | 0x1000000;
  }
  bVar1 = (&DAT_0200de20)[uVar5 >> 0x18];
  if (bVar8) {
    uVar6 = uVar6 | 1;
  }
  uVar3 = (undefined1)(uVar5 >> 0x18);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x0201200c  z80_ix_iy_cb_rrc_indexed_memory_to_b

undefined8 z80_dispatch_0201200c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
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
  uVar3 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar5 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar5 = uVar5 | 0x80;
  }
  uVar11 = CONCAT44(uVar5,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar5];
  if (bVar9) {
    uVar3 = uVar3 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar4 = (uVar3 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar3 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar6 * 0x10000);
    iVar4 = iVar4 + iVar6 * 0x10000;
    iVar6 = iVar4;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
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
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x02012068  z80_ix_iy_cb_rrc_indexed_memory_to_c

undefined8 z80_dispatch_02012068(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
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
  uVar3 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar5 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar5 = uVar5 | 0x80;
  }
  uVar11 = CONCAT44(uVar5,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar5];
  if (bVar9) {
    uVar3 = uVar3 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar4 = (uVar3 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar3 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar6 * 0x10000);
    iVar4 = iVar4 + iVar6 * 0x10000;
    iVar6 = iVar4;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
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
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x020120c4  z80_ix_iy_cb_rrc_indexed_memory_to_d

undefined8 z80_dispatch_020120c4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
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
  uVar3 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar5 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar5 = uVar5 | 0x80;
  }
  uVar11 = CONCAT44(uVar5,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar5];
  if (bVar9) {
    uVar3 = uVar3 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar4 = (uVar3 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar3 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar6 * 0x10000);
    iVar4 = iVar4 + iVar6 * 0x10000;
    iVar6 = iVar4;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
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
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x02012120  z80_ix_iy_cb_rrc_indexed_memory_to_e

undefined8 z80_dispatch_02012120(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
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
  uVar3 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar5 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar5 = uVar5 | 0x80;
  }
  uVar11 = CONCAT44(uVar5,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar5];
  if (bVar9) {
    uVar3 = uVar3 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar4 = (uVar3 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar3 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar4,iVar6 * 0x10000);
    iVar4 = iVar4 + iVar6 * 0x10000;
    iVar6 = iVar4;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
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
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x0201217c  z80_ix_iy_cb_rrc_indexed_memory_to_h

undefined8 z80_dispatch_0201217c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  undefined8 uVar11;
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
  uVar4 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar2 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar2 = uVar2 | 0x80;
  }
  uVar11 = CONCAT44(uVar2,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar2];
  if (bVar9) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar5 = (uVar4 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020121d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar5,iVar6 * 0x10000);
    iVar5 = iVar5 + iVar6 * 0x10000;
    iVar6 = iVar5;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar3 < 0;
      bVar7 = iVar3 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar3,iVar6);
          iVar3 = iVar3 + iVar6;
          bVar9 = iVar3 < 0;
          bVar7 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar3 < 0;
      bVar7 = iVar3 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar3,iVar6);
          iVar3 = iVar3 + iVar6;
          bVar9 = iVar3 < 0;
          bVar7 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar5 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x020121e0  z80_ix_iy_cb_rrc_indexed_memory_to_l

undefined8 z80_dispatch_020121e0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  undefined8 uVar11;
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
  uVar4 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar2 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar2 = uVar2 | 0x80;
  }
  uVar11 = CONCAT44(uVar2,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar2];
  if (bVar9) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar5 = (uVar4 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar5,iVar6 * 0x10000);
    iVar5 = iVar5 + iVar6 * 0x10000;
    iVar6 = iVar5;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar3 < 0;
      bVar7 = iVar3 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar3,iVar6);
          iVar3 = iVar3 + iVar6;
          bVar9 = iVar3 < 0;
          bVar7 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar3 < 0;
      bVar7 = iVar3 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar3,iVar6);
          iVar3 = iVar3 + iVar6;
          bVar9 = iVar3 < 0;
          bVar7 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar5 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x02012244  z80_ix_iy_cb_rrc_indexed_memory

undefined8 z80_dispatch_02012244(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r5;
  int iVar4;
  byte *unaff_r11;
  int in_r12;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 uVar10;
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
  
  lVar9 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar9 = FUN_01002cdc();
  }
  bVar1 = *(byte *)(param_4 + (int)lVar9);
  bVar8 = (bool)(bVar1 & 1);
  uVar2 = (uint)(bVar1 >> 1);
  if (bVar8) {
    uVar2 = uVar2 | 0x80;
  }
  uVar10 = CONCAT44(uVar2,(int)((ulonglong)lVar9 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar2];
  uVar2 = unaff_r5 & 0xffffff28;
  if (bVar8) {
    uVar2 = uVar2 | 0x81;
  }
  if (0x1fffffffffff < lVar9) {
    uVar10 = FUN_01002d10();
  }
  iVar5 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar10) = (char)((ulonglong)uVar10 >> 0x20);
  iVar4 = (uVar2 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x16ffff < (int)(uVar2 | bVar1)) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar4,iVar5 * 0x10000);
    iVar4 = iVar4 + iVar5 * 0x10000;
    iVar5 = iVar4;
  }
  if (iVar5 != 0 && iVar5 < 0 == bVar8) {
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
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar5 = in_stack_00000074 - in_stack_00000078;
    if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar5 < in_stack_00000078) {
        in_stack_00000078 = iVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar5;
      uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar5 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar5 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar8 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar5);
          iVar3 = iVar3 + iVar5;
          bVar8 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar8 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar5 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar5 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar8 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar5);
          iVar3 = iVar3 + iVar5;
          bVar8 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar8 != bVar7);
    }
    iVar5 = in_stack_00000074 - in_stack_00000078;
    if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar5;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar5 - in_stack_00000088;
          bVar8 = iVar5 == in_stack_00000088;
        }
        if (!bVar8 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar5,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar4 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar4 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar4 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar5;
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x02012298  z80_ix_iy_cb_rrc_indexed_memory_to_a

undefined8 z80_dispatch_02012298(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
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
  undefined8 uVar11;
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
  uVar4 = unaff_r5 & 0xffffff28;
  bVar9 = (bool)(bVar1 & 1);
  uVar3 = (uint)(bVar1 >> 1);
  if (bVar9) {
    uVar3 = uVar3 | 0x80;
  }
  uVar11 = CONCAT44(uVar3,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar3];
  if (bVar9) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar5 = (uVar4 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020122ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar5,iVar6 * 0x10000);
    iVar5 = iVar5 + iVar6 * 0x10000;
    iVar6 = iVar5;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar9) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar9 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar9 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar9 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar9 != bVar8);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar6 - in_stack_00000088;
          bVar9 = iVar6 == in_stack_00000088;
        }
        if (!bVar9 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar9 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar9 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar9 && iVar5 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x020122f4  z80_ix_iy_cb_rl_indexed_memory_to_b

undefined8 z80_dispatch_020122f4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  uVar6 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar5 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar6 = uVar6 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar6 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar6 >> 0x1f,0)) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)((uVar6 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02012350  z80_ix_iy_cb_rl_indexed_memory_to_c

undefined8 z80_dispatch_02012350(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  uVar6 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar5 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar6 = uVar6 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar6 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar6 >> 0x1f,0)) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)((uVar6 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020123a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x020123ac  z80_ix_iy_cb_rl_indexed_memory_to_d

undefined8 z80_dispatch_020123ac(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  uVar6 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar5 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar6 = uVar6 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar6 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar6 >> 0x1f,0)) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)((uVar6 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02012408  z80_ix_iy_cb_rl_indexed_memory_to_e

undefined8 z80_dispatch_02012408(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  uVar6 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar5 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar6 = uVar6 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar6 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar6 >> 0x1f,0)) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)((uVar6 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar5 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201245c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar5 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x02012468  z80_ix_iy_cb_rl_indexed_memory_to_h

undefined8 z80_dispatch_02012468(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  uVar2 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar6 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar2 = uVar2 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar2 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar2 >> 0x1f,0)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((uVar2 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020124c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
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


// 0x020124cc  z80_ix_iy_cb_rl_indexed_memory_to_l

undefined8 z80_dispatch_020124cc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  uVar2 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar6 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar2 = uVar2 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar2 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar2 >> 0x1f,0)) {
    uVar6 = uVar6 | 1;
  }
  uVar4 = (undefined1)((uVar2 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar3 = FUN_01002d10();
    uVar4 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar3) = uVar4;
  iVar3 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
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


// 0x02012530  z80_ix_iy_cb_rl_indexed_memory

undefined8 z80_dispatch_02012530(int param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar3 = (uint)bVar1 << 0x19 | (unaff_r5 & 1) << 0x18;
  uVar7 = unaff_r5 & 0xffffff28;
  bVar2 = (&DAT_0200de20)[uVar3 >> 0x18];
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
                    /* WARNING: Could not recover jumptable at 0x02012584. Too many branches */
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


// 0x02012590  z80_ix_iy_cb_rl_indexed_memory_to_a

undefined8 z80_dispatch_02012590(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
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
  iVar2 = (int)((ulonglong)lVar11 >> 0x20);
  uVar5 = (uint)*(byte *)(param_4 + (int)lVar11) << 0x18;
  uVar6 = unaff_r5 & 0xffffff28;
  if ((unaff_r5 & 1) != 0) {
    uVar5 = uVar5 | 0x800000;
  }
  bVar1 = (&DAT_0200de20)[(uVar5 & 0x7fffffff) >> 0x17];
  if (SUB41(uVar5 >> 0x1f,0)) {
    uVar6 = uVar6 | 1;
  }
  uVar3 = (undefined1)((uVar5 & 0x7fffffff) >> 0x17);
  if (0x1fffffffffff < lVar11) {
    iVar2 = FUN_01002d10();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + iVar2) = uVar3;
  iVar2 = (uVar6 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020125e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x16ffff < (int)(uVar6 | bVar1)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar2,iVar7 * 0x10000);
    iVar2 = iVar2 + iVar7 * 0x10000;
    iVar7 = iVar2;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x020125ec  z80_ix_iy_cb_rr_indexed_memory_to_b

undefined8 z80_dispatch_020125ec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar4 = unaff_r5 & 0xffffff28;
  uVar6 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar6,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar6];
  if ((bool)(bVar1 & 1)) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar5 = (uVar4 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar5,iVar7 * 0x10000);
    iVar5 = iVar5 + iVar7 * 0x10000;
    iVar7 = iVar5;
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
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar5 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x0201264c  z80_ix_iy_cb_rr_indexed_memory_to_c

undefined8 z80_dispatch_0201264c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar4 = unaff_r5 & 0xffffff28;
  uVar6 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar6,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar6];
  if ((bool)(bVar1 & 1)) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar5 = (uVar4 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020126a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar5,iVar7 * 0x10000);
    iVar5 = iVar5 + iVar7 * 0x10000;
    iVar7 = iVar5;
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
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar5 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x020126ac  z80_ix_iy_cb_rr_indexed_memory_to_d

undefined8 z80_dispatch_020126ac(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar4 = unaff_r5 & 0xffffff28;
  uVar6 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar6,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar6];
  if ((bool)(bVar1 & 1)) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar5 = (uVar4 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar5,iVar7 * 0x10000);
    iVar5 = iVar5 + iVar7 * 0x10000;
    iVar7 = iVar5;
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
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar5 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x0201270c  z80_ix_iy_cb_rr_indexed_memory_to_e

undefined8 z80_dispatch_0201270c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar4 = unaff_r5 & 0xffffff28;
  uVar6 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar6,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar6];
  if ((bool)(bVar1 & 1)) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar5 = (uVar4 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar5,iVar7 * 0x10000);
    iVar5 = iVar5 + iVar7 * 0x10000;
    iVar7 = iVar5;
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
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar5 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar5 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar5 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x0201276c  z80_ix_iy_cb_rr_indexed_memory_to_h

undefined8 z80_dispatch_0201276c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  uVar3 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar3,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar3];
  if ((bool)(bVar1 & 1)) {
    uVar5 = uVar5 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar6 = (uVar5 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020127cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x16ffff < (int)(uVar5 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar6,iVar7 * 0x10000);
    iVar6 = iVar6 + iVar7 * 0x10000;
    iVar7 = iVar6;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar6 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar6 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar6 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar6 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar6 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar6 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


// 0x020127d4  z80_ix_iy_cb_rr_indexed_memory_to_l

undefined8 z80_dispatch_020127d4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  uVar3 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar3,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar3];
  if ((bool)(bVar1 & 1)) {
    uVar5 = uVar5 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar6 = (uVar5 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x02012834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x16ffff < (int)(uVar5 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar6,iVar7 * 0x10000);
    iVar6 = iVar6 + iVar7 * 0x10000;
    iVar7 = iVar6;
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar6 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar6 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar6 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar6 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar6 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar6 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


// 0x0201283c  z80_ix_iy_cb_rr_indexed_memory

undefined8 z80_dispatch_0201283c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
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
  undefined8 uVar11;
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
  uVar2 = (uint)*(byte *)(param_4 + (int)lVar10);
  if ((unaff_r5 & 1) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  uVar11 = CONCAT44(uVar2 >> 1,(int)((ulonglong)lVar10 >> 0x20));
  bVar1 = (&DAT_0200de20)[uVar2 >> 1];
  uVar4 = unaff_r5 & 0xffffff28;
  if ((bool)((byte)uVar2 & 1)) {
    uVar4 = uVar4 | 1;
  }
  if (0x1fffffffffff < lVar10) {
    uVar11 = FUN_01002d10();
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar11) = (char)((ulonglong)uVar11 >> 0x20);
  iVar5 = (uVar4 | bVar1) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201288c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x16ffff < (int)(uVar4 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x02012894  z80_ix_iy_cb_rr_indexed_memory_to_a

undefined8 z80_dispatch_02012894(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
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
  bVar1 = *(byte *)(param_4 + (int)lVar11);
  uVar5 = unaff_r5 & 0xffffff28;
  uVar4 = (uint)(bVar1 >> 1) | (unaff_r5 & 1) << 7;
  uVar12 = CONCAT44(uVar4,(int)((ulonglong)lVar11 >> 0x20));
  bVar2 = (&DAT_0200de20)[uVar4];
  if ((bool)(bVar1 & 1)) {
    uVar5 = uVar5 | 1;
  }
  if (0x1fffffffffff < lVar11) {
    uVar12 = FUN_01002d10();
  }
  iVar7 = in_stack_00000028;
  *(char *)(param_4 + (int)uVar12) = (char)((ulonglong)uVar12 >> 0x20);
  iVar6 = (uVar5 | bVar2) - 0x170000;
                    /* WARNING: Could not recover jumptable at 0x020128ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x16ffff < (int)(uVar5 | bVar2)) {
    uVar12 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar12;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar6,iVar7 * 0x10000);
    iVar6 = iVar6 + iVar7 * 0x10000;
    iVar7 = iVar6;
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
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar3 < 0;
      bVar9 = iVar3 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar3,iVar7);
          iVar3 = iVar3 + iVar7;
          bVar8 = iVar3 < 0;
          bVar9 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar6 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar6 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar6 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar6 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar6 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar6 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


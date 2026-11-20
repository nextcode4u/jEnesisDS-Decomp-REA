/* ARM9 set bits 4 to 7 — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02014c60  z80_ix_iy_cb_set_bit_4_indexed_memory_to_b

undefined8 z80_dispatch_02014c60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014c9c  z80_ix_iy_cb_set_bit_4_indexed_memory_to_c

undefined8 z80_dispatch_02014c9c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014cd8  z80_ix_iy_cb_set_bit_4_indexed_memory_to_d

undefined8 z80_dispatch_02014cd8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014d14  z80_ix_iy_cb_set_bit_4_indexed_memory_to_e

undefined8 z80_dispatch_02014d14(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014d50  z80_ix_iy_cb_set_bit_4_indexed_memory_to_h

undefined8 z80_dispatch_02014d50(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014d90  z80_ix_iy_cb_set_bit_4_indexed_memory_to_l

undefined8 z80_dispatch_02014d90(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014dd0  z80_ix_iy_cb_set_bit_4_indexed_memory

undefined8 z80_dispatch_02014dd0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014e08  z80_ix_iy_cb_set_bit_4_indexed_memory_to_a

undefined8 z80_dispatch_02014e08(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x10;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014e44  z80_ix_iy_cb_set_bit_5_indexed_memory_to_b

undefined8 z80_dispatch_02014e44(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014e80  z80_ix_iy_cb_set_bit_5_indexed_memory_to_c

undefined8 z80_dispatch_02014e80(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014ebc  z80_ix_iy_cb_set_bit_5_indexed_memory_to_d

undefined8 z80_dispatch_02014ebc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014ef8  z80_ix_iy_cb_set_bit_5_indexed_memory_to_e

undefined8 z80_dispatch_02014ef8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014f34  z80_ix_iy_cb_set_bit_5_indexed_memory_to_h

undefined8 z80_dispatch_02014f34(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014f74  z80_ix_iy_cb_set_bit_5_indexed_memory_to_l

undefined8 z80_dispatch_02014f74(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014fb4  z80_ix_iy_cb_set_bit_5_indexed_memory

undefined8 z80_dispatch_02014fb4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02014fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02014fec  z80_ix_iy_cb_set_bit_5_indexed_memory_to_a

undefined8 z80_dispatch_02014fec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x20;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015028  z80_ix_iy_cb_set_bit_6_indexed_memory_to_b

undefined8 z80_dispatch_02015028(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015064  z80_ix_iy_cb_set_bit_6_indexed_memory_to_c

undefined8 z80_dispatch_02015064(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x020150a0  z80_ix_iy_cb_set_bit_6_indexed_memory_to_d

undefined8 z80_dispatch_020150a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x020150d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x020150dc  z80_ix_iy_cb_set_bit_6_indexed_memory_to_e

undefined8 z80_dispatch_020150dc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015118  z80_ix_iy_cb_set_bit_6_indexed_memory_to_h

undefined8 z80_dispatch_02015118(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015158  z80_ix_iy_cb_set_bit_6_indexed_memory_to_l

undefined8 z80_dispatch_02015158(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015198  z80_ix_iy_cb_set_bit_6_indexed_memory

undefined8 z80_dispatch_02015198(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x020151c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x020151d0  z80_ix_iy_cb_set_bit_6_indexed_memory_to_a

undefined8 z80_dispatch_020151d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x40;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x0201520c  z80_ix_iy_cb_set_bit_7_indexed_memory_to_b

undefined8 z80_dispatch_0201520c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015248  z80_ix_iy_cb_set_bit_7_indexed_memory_to_c

undefined8 z80_dispatch_02015248(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x0201527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x02015284  z80_ix_iy_cb_set_bit_7_indexed_memory_to_d

undefined8 z80_dispatch_02015284(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x020152b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x020152c0  z80_ix_iy_cb_set_bit_7_indexed_memory_to_e

undefined8 z80_dispatch_020152c0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x020152f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x020152fc  z80_ix_iy_cb_set_bit_7_indexed_memory_to_h

undefined8 z80_dispatch_020152fc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x0201533c  z80_ix_iy_cb_set_bit_7_indexed_memory_to_l

undefined8 z80_dispatch_0201533c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x02015374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x0201537c  z80_ix_iy_cb_set_bit_7_indexed_memory

undefined8 z80_dispatch_0201537c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x020153ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


// 0x020153b4  z80_ix_iy_cb_set_bit_7_indexed_memory_to_a

undefined8 z80_dispatch_020153b4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  int unaff_r5;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
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
  
  lVar8 = CONCAT44(param_1,param_1);
  if (0x1fff < param_1) {
    lVar8 = FUN_01002cdc();
  }
  iVar1 = (int)((ulonglong)lVar8 >> 0x20);
  bVar2 = *(byte *)(param_4 + (int)lVar8) | 0x80;
  if (0x1fffffffffff < lVar8) {
    iVar1 = FUN_01002d10();
    bVar2 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + iVar1) = bVar2;
  iVar1 = unaff_r5 + -0x170000;
                    /* WARNING: Could not recover jumptable at 0x020153e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x16ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
  }
  if (iVar4 != 0 && iVar4 < 0 == bVar5) {
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar4 < in_stack_00000078) {
        in_stack_00000078 = iVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar3 < 0;
      bVar6 = iVar3 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar3,iVar4);
          iVar3 = iVar3 + iVar4;
          bVar5 = iVar3 < 0;
          bVar6 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar1 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar1 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar1 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar1 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar1 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
}


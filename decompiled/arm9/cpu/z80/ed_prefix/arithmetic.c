/* ARM9 arithmetic — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0201029c  z80_ed_sbc_hl_bc

undefined8 z80_dispatch_0201029c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r10;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
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
  
  iVar7 = in_stack_00000028;
  uVar2 = unaff_r6 | unaff_r7 >> 8;
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x10000;
  uVar6 = unaff_r10 + (unaff_r5 & 1) * -0x10000;
  if (unaff_r10 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r10,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar6 - uVar2) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar6 == uVar2) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar6 < uVar2) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar6,uVar2)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x020102d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0xeffff < (int)uVar4) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x02010310  z80_ed_negate_accumulator

undefined8 z80_dispatch_02010310(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  byte *unaff_r11;
  int in_r12;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
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
  
  iVar4 = in_stack_00000028;
  uVar2 = unaff_r5 & 0xffffff28 | 2;
  if (-unaff_r4 < 0) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (-unaff_r4 == 0) {
    uVar2 = uVar2 | 0x40;
  }
  if (unaff_r4 != 0) {
    uVar2 = uVar2 | 1;
  }
  if (SBORROW4(0,unaff_r4)) {
    uVar2 = uVar2 | 4;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0201033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x7ffff < (int)uVar2) {
    uVar8 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar8;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar3,iVar4 * 0x10000);
    iVar3 = iVar3 + iVar4 * 0x10000;
    iVar4 = iVar3;
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
    uVar8 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar8;
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
      uVar8 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar8;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar4 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar1 = in_stack_00000088 - in_stack_00000078;
      bVar5 = iVar1 < 0;
      bVar6 = iVar1 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar1,iVar4);
          iVar1 = iVar1 + iVar4;
          bVar5 = iVar1 < 0;
          bVar6 = iVar1 == 0;
        }
        in_stack_00000088 = iVar1;
      } while (bVar5 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar4 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar4 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar1 = in_stack_00000090 - in_stack_00000078;
      bVar5 = iVar1 < 0;
      bVar6 = iVar1 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar5 != bVar7) {
          bVar7 = SCARRY4(iVar1,iVar4);
          iVar1 = iVar1 + iVar4;
          bVar5 = iVar1 < 0;
          bVar6 = iVar1 == 0;
        }
        in_stack_00000090 = iVar1;
      } while (bVar5 != bVar7);
    }
    iVar4 = in_stack_00000074 - in_stack_00000078;
    if (iVar4 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar4;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar5 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar4;
      uVar8 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar8;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x020103dc  z80_ed_adc_hl_bc

undefined8 z80_dispatch_020103dc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r10;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  undefined1 in_OV;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  
  iVar6 = in_stack_00000028;
  uVar1 = unaff_r6 | unaff_r7 >> 8;
  bVar9 = (bool)((byte)unaff_r5 & 1);
  uVar3 = unaff_r5 & 0xffffff28;
  uVar5 = unaff_r10;
  if (bVar9) {
    in_OV = SCARRY4(unaff_r10,0x10000);
    uVar5 = unaff_r10 + 0x10000;
  }
  if (bVar9 && 0xfffeffff < unaff_r10) {
    uVar3 = uVar3 | 1;
  }
  if ((bool)in_OV) {
    uVar3 = uVar3 | 4;
  }
  if ((int)(uVar5 + uVar1) < 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (uVar5 + uVar1 == 0) {
    uVar3 = uVar3 | 0x40;
  }
  if (CARRY4(uVar5,uVar1)) {
    uVar3 = uVar3 | 1;
  }
  if (SCARRY4(uVar5,uVar1)) {
    uVar3 = uVar3 ^ 4;
  }
  iVar4 = uVar3 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0xeffff < (int)uVar3) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))((uint)*unaff_r11,unaff_r5 >> 1);
    return uVar10;
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
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x020104c8  z80_ed_sbc_hl_de

undefined8 z80_dispatch_020104c8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint uVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
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
  
  iVar7 = in_stack_00000028;
  uVar2 = unaff_r8 | unaff_r9 >> 8;
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x10000;
  uVar6 = unaff_r10 + (unaff_r5 & 1) * -0x10000;
  if (unaff_r10 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r10,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar6 - uVar2) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar6 == uVar2) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar6 < uVar2) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar6,uVar2)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0xeffff < (int)uVar4) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x020105c8  z80_ed_adc_hl_de

undefined8 z80_dispatch_020105c8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint unaff_r8;
  uint unaff_r9;
  uint unaff_r10;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  undefined1 in_OV;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  
  iVar6 = in_stack_00000028;
  uVar1 = unaff_r8 | unaff_r9 >> 8;
  bVar9 = (bool)((byte)unaff_r5 & 1);
  uVar3 = unaff_r5 & 0xffffff28;
  uVar5 = unaff_r10;
  if (bVar9) {
    in_OV = SCARRY4(unaff_r10,0x10000);
    uVar5 = unaff_r10 + 0x10000;
  }
  if (bVar9 && 0xfffeffff < unaff_r10) {
    uVar3 = uVar3 | 1;
  }
  if ((bool)in_OV) {
    uVar3 = uVar3 | 4;
  }
  if ((int)(uVar5 + uVar1) < 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (uVar5 + uVar1 == 0) {
    uVar3 = uVar3 | 0x40;
  }
  if (CARRY4(uVar5,uVar1)) {
    uVar3 = uVar3 | 1;
  }
  if (SCARRY4(uVar5,uVar1)) {
    uVar3 = uVar3 ^ 4;
  }
  iVar4 = uVar3 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x020105fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0xeffff < (int)uVar3) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))((uint)*unaff_r11,unaff_r5 >> 1);
    return uVar10;
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
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x020106dc  z80_ed_sbc_hl_hl

undefined8 z80_dispatch_020106dc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint unaff_r10;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  
  iVar6 = in_stack_00000028;
  uVar3 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x10000;
  uVar5 = unaff_r10 + (unaff_r5 & 1) * -0x10000;
  if (unaff_r10 < uVar1) {
    uVar3 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r10,uVar1)) {
    uVar3 = uVar3 | 4;
  }
  if ((int)(uVar5 - unaff_r10) < 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (uVar5 == unaff_r10) {
    uVar3 = uVar3 | 0x40;
  }
  if (uVar5 < unaff_r10) {
    uVar3 = uVar3 | 1;
  }
  if (SBORROW4(uVar5,unaff_r10)) {
    uVar3 = uVar3 ^ 4;
  }
  iVar4 = uVar3 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0xeffff < (int)uVar3) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
  }
  bVar7 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar7 = SCARRY4(iVar4,iVar6 * 0x10000);
    iVar4 = iVar4 + iVar6 * 0x10000;
    iVar6 = iVar4;
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
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar6 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar9 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar7 = iVar2 < 0;
      bVar8 = iVar2 == 0;
      if (bVar8 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar8 || bVar7 != bVar9) {
          bVar9 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar7 = iVar2 < 0;
          bVar8 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar7 != bVar9);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar6 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar6 = in_stack_00000078;
      }
      bVar9 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar7 = iVar2 < 0;
      bVar8 = iVar2 == 0;
      if (bVar8 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar8 || bVar7 != bVar9) {
          bVar9 = SCARRY4(iVar2,iVar6);
          iVar2 = iVar2 + iVar6;
          bVar7 = iVar2 < 0;
          bVar8 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar7 != bVar9);
    }
    iVar6 = in_stack_00000074 - in_stack_00000078;
    if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar6;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar7 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar6 - in_stack_00000088;
          bVar7 = iVar6 == in_stack_00000088;
        }
        if (!bVar7 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar7 = in_stack_00000090 == 0;
        iVar4 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar4 = in_stack_00000078 - in_stack_00000090;
          bVar7 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar7 && iVar4 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x0201074c  z80_ed_rrd

undefined8 z80_dispatch_0201074c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  byte extraout_r1;
  byte bVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
  uint unaff_r10;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  uVar2 = (uint)*(byte *)(param_4 + (unaff_r10 >> 0x10));
  bVar3 = (byte)((unaff_r4 << 4) >> 0x18) | (byte)((uVar2 << 0x14) >> 0x18);
  uVar2 = unaff_r4 & 0xf0000000 | (uVar2 & 0xf) << 0x18;
  uVar5 = unaff_r5 & 0xffffff29;
  bVar1 = (&DAT_0200dd20)[uVar2 >> 0x18];
  if ((int)uVar2 < 0) {
    uVar5 = uVar5 | 0x80;
  }
  if (uVar2 == 0) {
    uVar5 = uVar5 | 0x40;
  }
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar3;
  iVar6 = (uVar5 | bVar1) - 0x120000;
                    /* WARNING: Could not recover jumptable at 0x0201079c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x11ffff < (int)(uVar5 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


// 0x020107f0  z80_ed_adc_hl_hl

undefined8 z80_dispatch_020107f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
  uint uVar4;
  byte *unaff_r11;
  int in_r12;
  int iVar5;
  undefined1 in_OV;
  bool bVar6;
  bool bVar7;
  bool bVar8;
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
  
  iVar5 = in_stack_00000028;
  bVar8 = (bool)((byte)unaff_r5 & 1);
  uVar2 = unaff_r5 & 0xffffff28;
  uVar4 = unaff_r10;
  if (bVar8) {
    in_OV = SCARRY4(unaff_r10,0x10000);
    uVar4 = unaff_r10 + 0x10000;
  }
  if (bVar8 && 0xfffeffff < unaff_r10) {
    uVar2 = uVar2 | 1;
  }
  if ((bool)in_OV) {
    uVar2 = uVar2 | 4;
  }
  if ((int)(uVar4 + unaff_r10) < 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (uVar4 + unaff_r10 == 0) {
    uVar2 = uVar2 | 0x40;
  }
  if (CARRY4(uVar4,unaff_r10)) {
    uVar2 = uVar2 | 1;
  }
  if (SCARRY4(uVar4,unaff_r10)) {
    uVar2 = uVar2 ^ 4;
  }
  iVar3 = uVar2 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xeffff < (int)uVar2) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))((uint)*unaff_r11,unaff_r5 >> 1);
    return uVar9;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar3,iVar5 * 0x10000);
    iVar3 = iVar3 + iVar5 * 0x10000;
    iVar5 = iVar3;
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
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
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
      uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar5 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar5 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar1 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar1 < 0;
      bVar6 = iVar1 == 0;
      if (bVar6 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar6 || bVar8 != bVar7) {
          bVar7 = SCARRY4(iVar1,iVar5);
          iVar1 = iVar1 + iVar5;
          bVar8 = iVar1 < 0;
          bVar6 = iVar1 == 0;
        }
        in_stack_00000088 = iVar1;
      } while (bVar8 != bVar7);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar5 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar5 = in_stack_00000078;
      }
      bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar1 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar1 < 0;
      bVar6 = iVar1 == 0;
      if (bVar6 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar6 || bVar8 != bVar7) {
          bVar7 = SCARRY4(iVar1,iVar5);
          iVar1 = iVar1 + iVar5;
          bVar8 = iVar1 < 0;
          bVar6 = iVar1 == 0;
        }
        in_stack_00000090 = iVar1;
      } while (bVar8 != bVar7);
    }
    iVar5 = in_stack_00000074 - in_stack_00000078;
    if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar5;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar5 - in_stack_00000088;
          bVar8 = iVar5 == in_stack_00000088;
        }
        if (!bVar8 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar5,in_stack_00000088))) {
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
      in_stack_00000074 = iVar5;
      uVar9 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar9;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x02010864  z80_ed_rld

undefined8 z80_dispatch_02010864(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte extraout_r1;
  byte bVar2;
  int iVar3;
  uint unaff_r4;
  uint uVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
  uint unaff_r10;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10));
  bVar2 = (byte)(unaff_r4 >> 0x18) & 0xf | (byte)(((uint)bVar1 << 0x1c) >> 0x18);
  uVar4 = unaff_r4 & 0xf0000000 | (uint)(bVar1 >> 4) << 0x18;
  uVar5 = unaff_r5 & 0xffffff29;
  bVar1 = (&DAT_0200dd20)[uVar4 >> 0x18];
  if ((int)uVar4 < 0) {
    uVar5 = uVar5 | 0x80;
  }
  if (uVar4 == 0) {
    uVar5 = uVar5 | 0x40;
  }
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar2 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar2;
  iVar6 = (uVar5 | bVar1) - 0x120000;
                    /* WARNING: Could not recover jumptable at 0x020108b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x11ffff < (int)(uVar5 | bVar1)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


// 0x02010900  z80_ed_sbc_hl_sp

undefined8 z80_dispatch_02010900(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  uint unaff_r10;
  uint uVar5;
  int iVar6;
  byte *unaff_r11;
  int in_r12;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
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
  
  iVar7 = in_stack_00000028;
  uVar1 = (in_r12 - param_4) * 0x10000;
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar2 = (unaff_r5 & 1) * 0x10000;
  uVar5 = unaff_r10 + (unaff_r5 & 1) * -0x10000;
  if (unaff_r10 < uVar2) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r10,uVar2)) {
    uVar4 = uVar4 | 4;
  }
  iVar6 = uVar5 + (in_r12 - param_4) * -0x10000;
  if (iVar6 < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (iVar6 == 0) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar5 < uVar1) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar5,uVar1)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar6 = uVar4 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x0201093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0xeffff < (int)uVar4) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar11;
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


// 0x020109c0  z80_ed_adc_hl_sp

undefined8 z80_dispatch_020109c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint unaff_r10;
  uint uVar5;
  byte *unaff_r11;
  int in_r12;
  int iVar6;
  undefined1 in_OV;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  
  iVar6 = in_stack_00000028;
  uVar1 = (in_r12 - param_4) * 0x10000;
  bVar9 = (bool)((byte)unaff_r5 & 1);
  uVar3 = unaff_r5 & 0xffffff28;
  uVar5 = unaff_r10;
  if (bVar9) {
    in_OV = SCARRY4(unaff_r10,0x10000);
    uVar5 = unaff_r10 + 0x10000;
  }
  if (bVar9 && 0xfffeffff < unaff_r10) {
    uVar3 = uVar3 | 1;
  }
  if ((bool)in_OV) {
    uVar3 = uVar3 | 4;
  }
  if ((int)(uVar5 + uVar1) < 0) {
    uVar3 = uVar3 | 0x80;
  }
  if (uVar5 + uVar1 == 0) {
    uVar3 = uVar3 | 0x40;
  }
  if (CARRY4(uVar5,uVar1)) {
    uVar3 = uVar3 | 1;
  }
  if (SCARRY4(uVar5,uVar1)) {
    uVar3 = uVar3 ^ 4;
  }
  iVar4 = uVar3 - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x020109f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0xeffff < (int)uVar3) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))((uint)*unaff_r11,unaff_r5 >> 1);
    return uVar10;
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
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
      return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


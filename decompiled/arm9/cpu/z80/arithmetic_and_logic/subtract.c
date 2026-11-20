/* ARM9 subtract — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01001630  z80_sub_a_b

undefined8 z80_sub_a_b(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r6;
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
  if ((int)(unaff_r4 - unaff_r6) < 0) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == unaff_r6) {
    uVar2 = uVar2 | 0x40;
  }
  if (unaff_r4 < unaff_r6) {
    uVar2 = uVar2 | 1;
  }
  if (SBORROW4(unaff_r4,unaff_r6)) {
    uVar2 = uVar2 | 4;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
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


// 0x01001660  z80_sub_a_c

undefined8 z80_sub_a_c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r7;
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
  if ((int)(unaff_r4 - unaff_r7) < 0) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == unaff_r7) {
    uVar2 = uVar2 | 0x40;
  }
  if (unaff_r4 < unaff_r7) {
    uVar2 = uVar2 | 1;
  }
  if (SBORROW4(unaff_r4,unaff_r7)) {
    uVar2 = uVar2 | 4;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
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


// 0x01001690  z80_sub_a_d

undefined8 z80_sub_a_d(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r8;
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
  if ((int)(unaff_r4 - unaff_r8) < 0) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == unaff_r8) {
    uVar2 = uVar2 | 0x40;
  }
  if (unaff_r4 < unaff_r8) {
    uVar2 = uVar2 | 1;
  }
  if (SBORROW4(unaff_r4,unaff_r8)) {
    uVar2 = uVar2 | 4;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
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


// 0x010016c0  z80_sub_a_e

undefined8 z80_sub_a_e(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r9;
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
  if ((int)(unaff_r4 - unaff_r9) < 0) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == unaff_r9) {
    uVar2 = uVar2 | 0x40;
  }
  if (unaff_r4 < unaff_r9) {
    uVar2 = uVar2 | 1;
  }
  if (SBORROW4(unaff_r4,unaff_r9)) {
    uVar2 = uVar2 | 4;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
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


// 0x010016f0  z80_sub_a_h

undefined8 z80_sub_a_h(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
  uint unaff_r10;
  byte *unaff_r11;
  int in_r12;
  int iVar5;
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
  uVar1 = unaff_r10 & 0xff000000;
  uVar3 = unaff_r5 & 0xffffff28 | 2;
  if ((int)(unaff_r4 - uVar1) < 0) {
    uVar3 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == uVar1) {
    uVar3 = uVar3 | 0x40;
  }
  if (unaff_r4 < uVar1) {
    uVar3 = uVar3 | 1;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar3 = uVar3 | 4;
  }
  iVar4 = uVar3 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x3ffff < (int)uVar3) {
    uVar9 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar9;
  }
  bVar6 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar6 = SCARRY4(iVar4,iVar5 * 0x10000);
    iVar4 = iVar4 + iVar5 * 0x10000;
    iVar5 = iVar4;
  }
  if (iVar5 != 0 && iVar5 < 0 == bVar6) {
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
      bVar8 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar2 = in_stack_00000088 - in_stack_00000078;
      bVar6 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar7 || bVar6 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar5);
          iVar2 = iVar2 + iVar5;
          bVar6 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000088 = iVar2;
      } while (bVar6 != bVar8);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar5 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar5 = in_stack_00000078;
      }
      bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar2 = in_stack_00000090 - in_stack_00000078;
      bVar6 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (bVar7 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar7 || bVar6 != bVar8) {
          bVar8 = SCARRY4(iVar2,iVar5);
          iVar2 = iVar2 + iVar5;
          bVar6 = iVar2 < 0;
          bVar7 = iVar2 == 0;
        }
        in_stack_00000090 = iVar2;
      } while (bVar6 != bVar8);
    }
    iVar5 = in_stack_00000074 - in_stack_00000078;
    if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar5;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar6 = in_stack_00000088 == 0;
        iVar4 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar4 = iVar5 - in_stack_00000088;
          bVar6 = iVar5 == in_stack_00000088;
        }
        if (!bVar6 && iVar4 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar5,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar6 = in_stack_00000090 == 0;
        iVar4 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar4 = in_stack_00000078 - in_stack_00000090;
          bVar6 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar6 && iVar4 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
}


// 0x01001720  z80_sub_a_l

undefined8 z80_sub_a_l(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  int unaff_r10;
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
  uVar3 = unaff_r5 & 0xffffff28 | 2;
  iVar2 = unaff_r4 + unaff_r10 * -0x100;
  if (iVar2 < 0) {
    uVar3 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (iVar2 == 0) {
    uVar3 = uVar3 | 0x40;
  }
  if (unaff_r4 < (uint)(unaff_r10 * 0x100)) {
    uVar3 = uVar3 | 1;
  }
  if (SBORROW4(unaff_r4,unaff_r10 * 0x100)) {
    uVar3 = uVar3 | 4;
  }
  iVar2 = uVar3 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < (int)uVar3) {
    uVar8 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar8;
  }
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        iVar2 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar2 = iVar4 - in_stack_00000088;
          bVar5 = iVar4 == in_stack_00000088;
        }
        if (!bVar5 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar4,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar5 = in_stack_00000090 == 0;
        iVar2 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar2 = in_stack_00000078 - in_stack_00000090;
          bVar5 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar5 && iVar2 < 0 ==
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
  return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
}


// 0x01001750  z80_sub_a_via_hl

undefined8 z80_sub_a_via_hl(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    dispatch_z80_mapped_read_from_r10();
  }
  iVar6 = in_stack_00000028;
  uVar2 = (uint)*(byte *)(param_4 + (unaff_r10 >> 0x10));
  uVar5 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = uVar2 * 0x1000000;
  iVar4 = unaff_r4 + uVar2 * -0x1000000;
  if (iVar4 < 0) {
    uVar5 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (iVar4 == 0) {
    uVar5 = uVar5 | 0x40;
  }
  if (unaff_r4 < uVar1) {
    uVar5 = uVar5 | 1;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar5 = uVar5 | 4;
  }
  iVar4 = uVar5 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x6ffff < (int)uVar5) {
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


// 0x01001790  z80_sub_a_a

/* WARNING: Removing unreachable block (ram,0x0100179c) */
/* WARNING: Removing unreachable block (ram,0x010017a4) */

undefined8 z80_sub_a_a(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 | 0x42;
  if (SBORROW4(unaff_r4,unaff_r4)) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x46;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
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
  if (iVar4 == 0 || iVar4 < 0 != bVar5) {
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


// 0x010017c0  z80_sbc_a_b

undefined8 z80_sbc_a_b(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  uint unaff_r6;
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
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar3 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar3 - unaff_r6) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar3 == unaff_r6) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar3 < unaff_r6) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar3,unaff_r6)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x3ffff < (int)uVar4) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x01001800  z80_sbc_a_c

undefined8 z80_sbc_a_c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  uint unaff_r7;
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
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar3 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar3 - unaff_r7) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar3 == unaff_r7) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar3 < unaff_r7) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar3,unaff_r7)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x3ffff < (int)uVar4) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x01001840  z80_sbc_a_d

undefined8 z80_sbc_a_d(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  uint unaff_r8;
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
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar3 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar3 - unaff_r8) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar3 == unaff_r8) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar3 < unaff_r8) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar3,unaff_r8)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x3ffff < (int)uVar4) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x01001880  z80_sbc_a_e

undefined8 z80_sbc_a_e(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  uint unaff_r9;
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
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar3 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar3 - unaff_r9) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar3 == unaff_r9) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar3 < unaff_r9) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar3,unaff_r9)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x3ffff < (int)uVar4) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x010018c0  z80_sbc_a_h

undefined8 z80_sbc_a_h(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
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
  
  iVar7 = in_stack_00000028;
  uVar2 = unaff_r10 & 0xff000000;
  uVar5 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar4 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar5 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar5 = uVar5 | 4;
  }
  if ((int)(uVar4 - uVar2) < 0) {
    uVar5 = uVar5 | 0x80;
  }
  if (uVar4 == uVar2) {
    uVar5 = uVar5 | 0x40;
  }
  if (uVar4 < uVar2) {
    uVar5 = uVar5 | 1;
  }
  if (SBORROW4(uVar4,uVar2)) {
    uVar5 = uVar5 ^ 4;
  }
  iVar6 = uVar5 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x3ffff < (int)uVar5) {
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


// 0x01001900  z80_sbc_a_l

undefined8 z80_sbc_a_l(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
  int unaff_r10;
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
  uVar5 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar3 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar5 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar5 = uVar5 | 4;
  }
  iVar4 = uVar3 + unaff_r10 * -0x100;
  if (iVar4 < 0) {
    uVar5 = uVar5 | 0x80;
  }
  if (iVar4 == 0) {
    uVar5 = uVar5 | 0x40;
  }
  if (uVar3 < (uint)(unaff_r10 * 0x100)) {
    uVar5 = uVar5 | 1;
  }
  if (SBORROW4(uVar3,unaff_r10 * 0x100)) {
    uVar5 = uVar5 ^ 4;
  }
  iVar4 = uVar5 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x3ffff < (int)uVar5) {
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


// 0x01001940  z80_sbc_a_via_hl

undefined8 z80_sbc_a_via_hl(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  uint uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
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
    dispatch_z80_mapped_read_from_r10();
  }
  iVar7 = in_stack_00000028;
  uVar2 = (uint)*(byte *)(param_4 + (unaff_r10 >> 0x10));
  uVar6 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar4 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar6 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar6 = uVar6 | 4;
  }
  uVar1 = uVar2 * 0x1000000;
  iVar5 = uVar4 + uVar2 * -0x1000000;
  if (iVar5 < 0) {
    uVar6 = uVar6 | 0x80;
  }
  if (iVar5 == 0) {
    uVar6 = uVar6 | 0x40;
  }
  if (uVar4 < uVar1) {
    uVar6 = uVar6 | 1;
  }
  if (SBORROW4(uVar4,uVar1)) {
    uVar6 = uVar6 ^ 4;
  }
  iVar5 = uVar6 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x6ffff < (int)uVar6) {
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


// 0x01001990  z80_sbc_a_a

undefined8 z80_sbc_a_a(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
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
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  uVar1 = (unaff_r5 & 1) * 0x1000000;
  uVar3 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar1) {
    uVar4 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  if ((int)(uVar3 - unaff_r4) < 0) {
    uVar4 = uVar4 | 0x80;
  }
  if (uVar3 == unaff_r4) {
    uVar4 = uVar4 | 0x40;
  }
  if (uVar3 < unaff_r4) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(uVar3,unaff_r4)) {
    uVar4 = uVar4 ^ 4;
  }
  iVar5 = uVar4 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x3ffff < (int)uVar4) {
    uVar10 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar10;
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
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


// 0x01002410  z80_sub_a_imm8

undefined8 z80_sub_a_imm8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  int iVar3;
  uint unaff_r5;
  uint uVar4;
  byte *unaff_r11;
  byte *pbVar5;
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
  uVar1 = (uint)*unaff_r11 * 0x1000000;
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  iVar3 = unaff_r4 + (uint)*unaff_r11 * -0x1000000;
  if (iVar3 < 0) {
    uVar4 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (iVar3 == 0) {
    uVar4 = uVar4 | 0x40;
  }
  if (unaff_r4 < uVar1) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  iVar3 = uVar4 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < (int)uVar4) {
    uVar10 = (**(code **)(param_3 + (uint)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = unaff_r11 + 1;
  bVar7 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar7 = SCARRY4(iVar3,iVar6 * 0x10000);
    iVar3 = iVar3 + iVar6 * 0x10000;
    iVar6 = iVar3;
  }
  if (iVar6 != 0 && iVar6 < 0 == bVar7) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*pbVar5 == 0x76) {
        pbVar5 = unaff_r11 + 2;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar5 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar5 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar5 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar5 - param_4);
        pbVar5 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (**(code **)(param_3 + (uint)*pbVar5 * 4))();
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
      uVar10 = (**(code **)(param_3 + (uint)*pbVar5 * 4))();
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
        iVar3 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar3 = iVar6 - in_stack_00000088;
          bVar7 = iVar6 == in_stack_00000088;
        }
        if (!bVar7 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar6,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar7 = in_stack_00000090 == 0;
        iVar3 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar3 = in_stack_00000078 - in_stack_00000090;
          bVar7 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar7 && iVar3 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar6;
      uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
      return uVar10;
    }
  }
  return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
}


// 0x010025b0  z80_sbc_a_imm8

undefined8 z80_sbc_a_imm8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  uint uVar4;
  int iVar5;
  uint unaff_r5;
  uint uVar6;
  byte *unaff_r11;
  byte *pbVar7;
  int in_r12;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
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
  
  iVar8 = in_stack_00000028;
  uVar1 = (uint)*unaff_r11 * 0x1000000;
  uVar6 = unaff_r5 & 0xffffff28 | 2;
  uVar2 = (unaff_r5 & 1) * 0x1000000;
  uVar4 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar2) {
    uVar6 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar2)) {
    uVar6 = uVar6 | 4;
  }
  iVar5 = uVar4 + (uint)*unaff_r11 * -0x1000000;
  if (iVar5 < 0) {
    uVar6 = uVar6 | 0x80;
  }
  if (iVar5 == 0) {
    uVar6 = uVar6 | 0x40;
  }
  if (uVar4 < uVar1) {
    uVar6 = uVar6 | 1;
  }
  if (SBORROW4(uVar4,uVar1)) {
    uVar6 = uVar6 ^ 4;
  }
  iVar5 = uVar6 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010025ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x6ffff < (int)uVar6) {
    uVar12 = (**(code **)(param_3 + (uint)unaff_r11[1] * 4))();
    return uVar12;
  }
  pbVar7 = unaff_r11 + 1;
  bVar9 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar9 = SCARRY4(iVar5,iVar8 * 0x10000);
    iVar5 = iVar5 + iVar8 * 0x10000;
    iVar8 = iVar5;
  }
  if (iVar8 != 0 && iVar8 < 0 == bVar9) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*pbVar7 == 0x76) {
        pbVar7 = unaff_r11 + 2;
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar7 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar7 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar7 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar7 - param_4);
        pbVar7 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (**(code **)(param_3 + (uint)*pbVar7 * 4))();
    return uVar12;
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
      uVar12 = (**(code **)(param_3 + (uint)*pbVar7 * 4))();
      return uVar12;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar8 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar3 = in_stack_00000088 - in_stack_00000078;
      bVar9 = iVar3 < 0;
      bVar10 = iVar3 == 0;
      if (bVar10 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar3,iVar8);
          iVar3 = iVar3 + iVar8;
          bVar9 = iVar3 < 0;
          bVar10 = iVar3 == 0;
        }
        in_stack_00000088 = iVar3;
      } while (bVar9 != bVar11);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar8 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar8 = in_stack_00000078;
      }
      bVar11 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar3 = in_stack_00000090 - in_stack_00000078;
      bVar9 = iVar3 < 0;
      bVar10 = iVar3 == 0;
      if (bVar10 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar10 || bVar9 != bVar11) {
          bVar11 = SCARRY4(iVar3,iVar8);
          iVar3 = iVar3 + iVar8;
          bVar9 = iVar3 < 0;
          bVar10 = iVar3 == 0;
        }
        in_stack_00000090 = iVar3;
      } while (bVar9 != bVar11);
    }
    iVar8 = in_stack_00000074 - in_stack_00000078;
    if (iVar8 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar8;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar9 = in_stack_00000088 == 0;
        iVar5 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar5 = iVar8 - in_stack_00000088;
          bVar9 = iVar8 == in_stack_00000088;
        }
        if (!bVar9 && iVar5 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar8,in_stack_00000088))) {
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
      in_stack_00000074 = iVar8;
      uVar12 = (**(code **)(in_stack_00000094 + (uint)*pbVar7 * 4))();
      return uVar12;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


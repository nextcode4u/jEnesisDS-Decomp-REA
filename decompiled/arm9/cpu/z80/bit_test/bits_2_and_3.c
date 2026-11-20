/* ARM9 bits 2 and 3 — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0200f010  z80_cb_test_bit_2_b

/* WARNING: Removing unreachable block (ram,0x0200f01c) */

undefined8 z80_dispatch_0200f010(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r6 & 0x4000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f028. Too many branches */
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


// 0x0200f030  z80_cb_test_bit_2_c

/* WARNING: Removing unreachable block (ram,0x0200f03c) */

undefined8 z80_dispatch_0200f030(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r7 & 0x4000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f048. Too many branches */
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


// 0x0200f050  z80_cb_test_bit_2_d

/* WARNING: Removing unreachable block (ram,0x0200f05c) */

undefined8 z80_dispatch_0200f050(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r8 & 0x4000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f068. Too many branches */
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


// 0x0200f070  z80_cb_test_bit_2_e

/* WARNING: Removing unreachable block (ram,0x0200f07c) */

undefined8 z80_dispatch_0200f070(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r9 & 0x4000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f088. Too many branches */
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


// 0x0200f090  z80_cb_test_bit_2_h

/* WARNING: Removing unreachable block (ram,0x0200f0a0) */

undefined8 z80_dispatch_0200f090(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r10 & 0x4000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f0ac. Too many branches */
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


// 0x0200f0b4  z80_cb_test_bit_2_l

/* WARNING: Removing unreachable block (ram,0x0200f0c4) */

undefined8 z80_dispatch_0200f0b4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r10 & 0x40000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f0d0. Too many branches */
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


// 0x0200f0d8  z80_cb_test_bit_2_via_hl

/* WARNING: Removing unreachable block (ram,0x0200f0f4) */

undefined8 z80_dispatch_0200f0d8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar4 = in_stack_00000028;
  uVar2 = unaff_r5 & 0xffffff29;
  if ((*(byte *)(param_4 + (unaff_r10 >> 0x10)) & 4) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0xc0000;
                    /* WARNING: Could not recover jumptable at 0x0200f100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xbffff < (int)uVar2) {
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


// 0x0200f108  z80_cb_test_bit_2_a

/* WARNING: Removing unreachable block (ram,0x0200f114) */

undefined8 z80_dispatch_0200f108(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r4 & 0x4000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f120. Too many branches */
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


// 0x0200f128  z80_cb_test_bit_3_b

/* WARNING: Removing unreachable block (ram,0x0200f134) */

undefined8 z80_dispatch_0200f128(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r6 & 0x8000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f140. Too many branches */
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


// 0x0200f148  z80_cb_test_bit_3_c

/* WARNING: Removing unreachable block (ram,0x0200f154) */

undefined8 z80_dispatch_0200f148(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r7 & 0x8000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f160. Too many branches */
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


// 0x0200f168  z80_cb_test_bit_3_d

/* WARNING: Removing unreachable block (ram,0x0200f174) */

undefined8 z80_dispatch_0200f168(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r8 & 0x8000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f180. Too many branches */
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


// 0x0200f188  z80_cb_test_bit_3_e

/* WARNING: Removing unreachable block (ram,0x0200f194) */

undefined8 z80_dispatch_0200f188(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r9 & 0x8000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f1a0. Too many branches */
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


// 0x0200f1a8  z80_cb_test_bit_3_h

/* WARNING: Removing unreachable block (ram,0x0200f1b8) */

undefined8 z80_dispatch_0200f1a8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r10 & 0x8000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f1c4. Too many branches */
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


// 0x0200f1cc  z80_cb_test_bit_3_l

/* WARNING: Removing unreachable block (ram,0x0200f1dc) */

undefined8 z80_dispatch_0200f1cc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r10 & 0x80000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f1e8. Too many branches */
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


// 0x0200f1f0  z80_cb_test_bit_3_via_hl

/* WARNING: Removing unreachable block (ram,0x0200f20c) */

undefined8 z80_dispatch_0200f1f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar4 = in_stack_00000028;
  uVar2 = unaff_r5 & 0xffffff29;
  if ((*(byte *)(param_4 + (unaff_r10 >> 0x10)) & 8) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0xc0000;
                    /* WARNING: Could not recover jumptable at 0x0200f218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xbffff < (int)uVar2) {
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


// 0x0200f220  z80_cb_test_bit_3_a

/* WARNING: Removing unreachable block (ram,0x0200f22c) */

undefined8 z80_dispatch_0200f220(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
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
  uVar2 = unaff_r5 & 0xffffff29;
  if ((unaff_r4 & 0x8000000) == 0) {
    uVar2 = uVar2 | 0x44;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0200f238. Too many branches */
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


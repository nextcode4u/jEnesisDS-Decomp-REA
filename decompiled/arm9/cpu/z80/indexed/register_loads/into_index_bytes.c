/* ARM9 into index bytes — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020113bc  z80_ix_iy_ld_index_high_from_b

undefined8 z80_ix_iy_ld_index_high_from_b(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r6;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff0000 | unaff_r6;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x020113d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x020113d8  z80_ix_iy_ld_index_high_from_c

undefined8 z80_ix_iy_ld_index_high_from_c(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r7;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff0000 | unaff_r7;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x020113ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x020113f4  z80_ix_iy_ld_index_high_from_d

undefined8 z80_ix_iy_ld_index_high_from_d(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r8;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff0000 | unaff_r8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x02011410  z80_ix_iy_ld_index_high_from_e

undefined8 z80_ix_iy_ld_index_high_from_e(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r9;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff0000 | unaff_r9;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x0201142c  z80_ix_iy_ld_index_high_from_index_high

undefined8 z80_ix_iy_ld_index_high_from_index_high(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x0201143c  z80_ix_iy_ld_index_high_from_index_low

undefined8 z80_ix_iy_ld_index_high_from_index_low(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff0000 | (param_1 & 0xff0000) << 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x02011488  z80_ix_iy_ld_index_high_from_a

undefined8 z80_ix_iy_ld_index_high_from_a(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff0000 | unaff_r4;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x0201149c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x020114a4  z80_ix_iy_ld_index_low_from_b

undefined8 z80_ix_iy_ld_index_low_from_b(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r6;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff000000 | unaff_r6 >> 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x020114b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x020114c0  z80_ix_iy_ld_index_low_from_c

undefined8 z80_ix_iy_ld_index_low_from_c(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r7;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff000000 | unaff_r7 >> 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x020114d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x020114dc  z80_ix_iy_ld_index_low_from_d

undefined8 z80_ix_iy_ld_index_low_from_d(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r8;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff000000 | unaff_r8 >> 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x020114f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x020114f8  z80_ix_iy_ld_index_low_from_e

undefined8 z80_ix_iy_ld_index_low_from_e(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r9;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff000000 | unaff_r9 >> 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x0201150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x02011514  z80_ix_iy_ld_index_low_from_index_high

undefined8 z80_ix_iy_ld_index_low_from_index_high(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff000000 | (param_1 & 0xff000000) >> 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x02011530  z80_ix_iy_ld_index_low_from_index_low

undefined8 z80_ix_iy_ld_index_low_from_index_low(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x02011570  z80_ix_iy_ld_index_low_from_a

undefined8 z80_ix_iy_ld_index_low_from_a(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r4;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  int iVar3;
  uint *in_lr;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  iVar3 = in_stack_00000028;
  *in_lr = param_1 & 0xff000000 | unaff_r4 >> 8;
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar2,iVar3 * 0x10000);
    iVar2 = iVar2 + iVar3 * 0x10000;
    iVar3 = iVar2;
  }
  if (iVar3 == 0 || iVar3 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar3 < in_stack_00000078) {
          in_stack_00000078 = iVar3;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        iVar3 = in_stack_00000084;
        if (in_stack_00000084 < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        iVar1 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000088 = iVar1;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar1 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar1 < 0;
        bVar5 = iVar1 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar1,iVar3);
            iVar1 = iVar1 + iVar3;
            bVar4 = iVar1 < 0;
            bVar5 = iVar1 == 0;
          }
          in_stack_00000090 = iVar1;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar2 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar2 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar2 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar2 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar2 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar2 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar3;
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
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
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


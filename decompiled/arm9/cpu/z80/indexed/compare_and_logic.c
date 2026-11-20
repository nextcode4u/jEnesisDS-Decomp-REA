/* ARM9 compare and logic — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020119f8  z80_ix_iy_and_a_index_high

undefined8 z80_dispatch_020119f8(uint param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 |
          (uint)(byte)(&DAT_0200de20)[(unaff_r4 & param_1 & 0xff000000) >> 0x18];
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011a18. Too many branches */
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


// 0x02011a20  z80_ix_iy_and_a_index_low

undefined8 z80_dispatch_02011a20(int param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 | (uint)(byte)(&DAT_0200de20)[(unaff_r4 & param_1 << 8) >> 0x18];
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011a40. Too many branches */
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


// 0x02011a48  z80_ix_iy_and_a_indexed_memory

undefined8 z80_dispatch_02011a48(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  int iVar3;
  byte *pbVar4;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002cd0();
  }
  iVar5 = in_stack_00000028;
  uVar1 = unaff_r5 & 0xffffff28 |
          (uint)(byte)(&DAT_0200de20)[(unaff_r4 & (uint)*(byte *)(param_4 + uVar1) << 0x18) >> 0x18]
  ;
  iVar3 = uVar1 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x12ffff < (int)uVar1) {
    uVar9 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar9;
  }
  pbVar4 = (byte *)(unaff_r11 + 1);
  bVar6 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar6 = SCARRY4(iVar3,iVar5 * 0x10000);
    iVar3 = iVar3 + iVar5 * 0x10000;
    iVar5 = iVar3;
  }
  if (iVar5 == 0 || iVar5 < 0 != bVar6) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar5 = in_stack_00000074 - in_stack_00000078;
      if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar5 < in_stack_00000078) {
          in_stack_00000078 = iVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar5;
        uVar9 = (**(code **)(param_3 + (uint)*pbVar4 * 4))();
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
          iVar3 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar3 = iVar5 - in_stack_00000088;
            bVar6 = iVar5 == in_stack_00000088;
          }
          if (!bVar6 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar5,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar6 = in_stack_00000090 == 0;
          iVar3 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar3 = in_stack_00000078 - in_stack_00000090;
            bVar6 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar6 && iVar3 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar5;
        uVar9 = (**(code **)(in_stack_00000094 + (uint)*pbVar4 * 4))();
        return uVar9;
      }
    }
    return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar4 == 0x76) {
      pbVar4 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar4 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar4 - param_4);
      pbVar4 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(param_3 + (uint)*pbVar4 * 4))();
  return uVar9;
}


// 0x02011a84  z80_ix_iy_xor_a_index_high

undefined8 z80_dispatch_02011a84(uint param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 |
          (uint)(byte)(&DAT_0200de20)[(unaff_r4 ^ param_1 & 0xff000000) >> 0x18];
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011aa4. Too many branches */
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


// 0x02011aac  z80_ix_iy_xor_a_index_low

undefined8 z80_dispatch_02011aac(int param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 | (uint)(byte)(&DAT_0200de20)[(unaff_r4 ^ param_1 << 8) >> 0x18];
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011acc. Too many branches */
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


// 0x02011ad4  z80_ix_iy_xor_a_indexed_memory

undefined8 z80_dispatch_02011ad4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  int iVar3;
  byte *pbVar4;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002cd0();
  }
  iVar5 = in_stack_00000028;
  uVar1 = unaff_r5 & 0xffffff28 |
          (uint)(byte)(&DAT_0200de20)[(unaff_r4 ^ (uint)*(byte *)(param_4 + uVar1) << 0x18) >> 0x18]
  ;
  iVar3 = uVar1 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x12ffff < (int)uVar1) {
    uVar9 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar9;
  }
  pbVar4 = (byte *)(unaff_r11 + 1);
  bVar6 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar6 = SCARRY4(iVar3,iVar5 * 0x10000);
    iVar3 = iVar3 + iVar5 * 0x10000;
    iVar5 = iVar3;
  }
  if (iVar5 == 0 || iVar5 < 0 != bVar6) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar5 = in_stack_00000074 - in_stack_00000078;
      if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar5 < in_stack_00000078) {
          in_stack_00000078 = iVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar5;
        uVar9 = (**(code **)(param_3 + (uint)*pbVar4 * 4))();
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
          iVar3 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar3 = iVar5 - in_stack_00000088;
            bVar6 = iVar5 == in_stack_00000088;
          }
          if (!bVar6 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar5,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar6 = in_stack_00000090 == 0;
          iVar3 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar3 = in_stack_00000078 - in_stack_00000090;
            bVar6 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar6 && iVar3 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar5;
        uVar9 = (**(code **)(in_stack_00000094 + (uint)*pbVar4 * 4))();
        return uVar9;
      }
    }
    return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar4 == 0x76) {
      pbVar4 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar4 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar4 - param_4);
      pbVar4 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(param_3 + (uint)*pbVar4 * 4))();
  return uVar9;
}


// 0x02011b10  z80_ix_iy_or_a_index_high

undefined8 z80_dispatch_02011b10(uint param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 |
          (uint)(byte)(&DAT_0200de20)[(unaff_r4 | param_1 & 0xff000000) >> 0x18];
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011b30. Too many branches */
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


// 0x02011b38  z80_ix_iy_or_a_index_low

undefined8 z80_dispatch_02011b38(int param_1,undefined4 param_2,int param_3,int param_4)

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
  uVar2 = unaff_r5 & 0xffffff28 | (uint)(byte)(&DAT_0200de20)[(unaff_r4 | param_1 << 8) >> 0x18];
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011b58. Too many branches */
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


// 0x02011b60  z80_ix_iy_or_a_indexed_memory

undefined8 z80_dispatch_02011b60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  int iVar3;
  byte *pbVar4;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002cd0();
  }
  iVar5 = in_stack_00000028;
  uVar1 = unaff_r5 & 0xffffff28 |
          (uint)(byte)(&DAT_0200de20)[(unaff_r4 | (uint)*(byte *)(param_4 + uVar1) << 0x18) >> 0x18]
  ;
  iVar3 = uVar1 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x12ffff < (int)uVar1) {
    uVar9 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar9;
  }
  pbVar4 = (byte *)(unaff_r11 + 1);
  bVar6 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar6 = SCARRY4(iVar3,iVar5 * 0x10000);
    iVar3 = iVar3 + iVar5 * 0x10000;
    iVar5 = iVar3;
  }
  if (iVar5 == 0 || iVar5 < 0 != bVar6) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar5 = in_stack_00000074 - in_stack_00000078;
      if (iVar5 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar5 < in_stack_00000078) {
          in_stack_00000078 = iVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar5;
        uVar9 = (**(code **)(param_3 + (uint)*pbVar4 * 4))();
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
          iVar3 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar3 = iVar5 - in_stack_00000088;
            bVar6 = iVar5 == in_stack_00000088;
          }
          if (!bVar6 && iVar3 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar5,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar6 = in_stack_00000090 == 0;
          iVar3 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar3 = in_stack_00000078 - in_stack_00000090;
            bVar6 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar6 && iVar3 < 0 ==
                        (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
            in_stack_00000078 = in_stack_00000090;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar5;
        uVar9 = (**(code **)(in_stack_00000094 + (uint)*pbVar4 * 4))();
        return uVar9;
      }
    }
    return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar4 == 0x76) {
      pbVar4 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar4 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar4 - param_4);
      pbVar4 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(param_3 + (uint)*pbVar4 * 4))();
  return uVar9;
}


// 0x02011ba0  z80_ix_iy_cp_a_index_high

undefined8 z80_dispatch_02011ba0(uint param_1,undefined4 param_2,int param_3,int param_4)

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
  param_1 = param_1 & 0xff000000;
  uVar2 = unaff_r5 & 0xffffff28 | 2;
  if ((int)(unaff_r4 - param_1) < 0) {
    uVar2 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == param_1) {
    uVar2 = uVar2 | 0x40;
  }
  if (unaff_r4 < param_1) {
    uVar2 = uVar2 | 1;
  }
  if (SBORROW4(unaff_r4,param_1)) {
    uVar2 = uVar2 | 4;
  }
  iVar3 = uVar2 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011bc8. Too many branches */
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


// 0x02011bd0  z80_ix_iy_cp_a_index_low

undefined8 z80_dispatch_02011bd0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  int iVar4;
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
  uVar1 = param_1 * 0x100;
  uVar3 = unaff_r5 & 0xffffff28 | 2;
  if ((int)(unaff_r4 + param_1 * -0x100) < 0) {
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
  iVar4 = uVar3 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x02011bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x7ffff < (int)uVar3) {
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


// 0x02011c00  z80_ix_iy_cp_a_indexed_memory

undefined8 z80_dispatch_02011c00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *unaff_r11;
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
  
  uVar2 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  if (0x1fff < uVar2) {
    uVar2 = FUN_01002cd0();
  }
  iVar7 = in_stack_00000028;
  uVar1 = (uint)*(byte *)(param_4 + uVar2) * 0x1000000;
  uVar4 = unaff_r5 & 0xffffff28 | 2;
  if ((int)(unaff_r4 + (uint)*(byte *)(param_4 + uVar2) * -0x1000000) < 0) {
    uVar4 = unaff_r5 & 0xffffff28 | 0x82;
  }
  if (unaff_r4 == uVar1) {
    uVar4 = uVar4 | 0x40;
  }
  if (unaff_r4 < uVar1) {
    uVar4 = uVar4 | 1;
  }
  if (SBORROW4(unaff_r4,uVar1)) {
    uVar4 = uVar4 | 4;
  }
  iVar5 = uVar4 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 != 0 && 0x12ffff < (int)uVar4) {
    uVar11 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar11;
  }
  pbVar6 = (byte *)(unaff_r11 + 1);
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
      if (*pbVar6 == 0x76) {
        pbVar6 = (byte *)(unaff_r11 + 2);
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar6 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar6 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar6 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar6 - param_4);
        pbVar6 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (**(code **)(param_3 + (uint)*pbVar6 * 4))();
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
      uVar11 = (**(code **)(param_3 + (uint)*pbVar6 * 4))();
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
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*pbVar6 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar5 >> 0x10);
}


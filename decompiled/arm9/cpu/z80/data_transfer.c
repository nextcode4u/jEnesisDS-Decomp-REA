/* ARM9 data transfer — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x01000030  z80_ld_bc_imm16

undefined8 z80_dispatch_01000030(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x9ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 2) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 2);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000060  z80_store_a_via_bc

undefined8 z80_dispatch_01000060(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
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
  
  uVar1 = (unaff_r6 | unaff_r7 >> 8) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r4 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar5 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x6ffff < unaff_r5) {
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
        iVar3 = in_stack_00000088 - in_stack_00000078;
        bVar6 = iVar3 < 0;
        bVar7 = iVar3 == 0;
        if (bVar7 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar7 || bVar6 != bVar8) {
            bVar8 = SCARRY4(iVar3,iVar5);
            iVar3 = iVar3 + iVar5;
            bVar6 = iVar3 < 0;
            bVar7 = iVar3 == 0;
          }
          in_stack_00000088 = iVar3;
        } while (bVar6 != bVar8);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar5 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar5 = in_stack_00000078;
        }
        bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar3 = in_stack_00000090 - in_stack_00000078;
        bVar6 = iVar3 < 0;
        bVar7 = iVar3 == 0;
        if (bVar7 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar7 || bVar6 != bVar8) {
            bVar8 = SCARRY4(iVar3,iVar5);
            iVar3 = iVar3 + iVar5;
            bVar6 = iVar3 < 0;
            bVar7 = iVar3 == 0;
          }
          in_stack_00000090 = iVar3;
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


// 0x01000110  z80_ld_b_imm8

undefined8 z80_dispatch_01000110(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000150  z80_exchange_af

/* WARNING: Type propagation algorithm not settling */

undefined8 z80_dispatch_01000150(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  byte *unaff_r11;
  int in_r12;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  int in_stack_00000028;
  uint in_stack_00000044;
  uint in_stack_0000004c;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  iVar1 = in_stack_00000028;
  uVar2 = unaff_r5 & 0xffffff28 | in_stack_0000004c & 0xff;
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar3,iVar1 * 0x10000);
    iVar3 = iVar3 + iVar1 * 0x10000;
    iVar1 = iVar3;
  }
  if (iVar1 == 0 || iVar1 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        if (in_stack_00000084 < 1) {
          in_stack_00000084 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        in_stack_00000088 = in_stack_00000088 - in_stack_00000078;
        bVar4 = in_stack_00000088 < 0;
        bVar5 = in_stack_00000088 == 0;
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(in_stack_00000088,in_stack_00000084);
            in_stack_00000088 = in_stack_00000088 + in_stack_00000084;
            bVar4 = in_stack_00000088 < 0;
            bVar5 = in_stack_00000088 == 0;
          }
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        if (in_stack_0000008c < 1) {
          in_stack_0000008c = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        in_stack_00000090 = in_stack_00000090 - in_stack_00000078;
        bVar4 = in_stack_00000090 < 0;
        bVar5 = in_stack_00000090 == 0;
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(in_stack_00000090,in_stack_0000008c);
            in_stack_00000090 = in_stack_00000090 + in_stack_0000008c;
            bVar4 = in_stack_00000090 < 0;
            bVar5 = in_stack_00000090 == 0;
          }
        } while (bVar4 != bVar6);
      }
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
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


// 0x010001a0  z80_load_a_via_bc

undefined8 z80_dispatch_010001a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r6;
  uint unaff_r7;
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
  
  if (0x1fff < (unaff_r6 | unaff_r7 >> 8) >> 0x10) {
    FUN_01002cd0();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x010001c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000250  z80_ld_c_imm8

undefined8 z80_dispatch_01000250(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x010002e0  z80_ld_de_imm16

undefined8 z80_dispatch_010002e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x9ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 2) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 2);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000310  z80_store_a_via_de

undefined8 z80_dispatch_01000310(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int iVar4;
  uint unaff_r8;
  uint unaff_r9;
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
  
  uVar2 = (undefined1)((uint)unaff_r4 >> 0x18);
  uVar1 = (unaff_r8 | unaff_r9 >> 8) >> 0x10;
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar5 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x6ffff < unaff_r5) {
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
        iVar3 = in_stack_00000088 - in_stack_00000078;
        bVar6 = iVar3 < 0;
        bVar7 = iVar3 == 0;
        if (bVar7 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar7 || bVar6 != bVar8) {
            bVar8 = SCARRY4(iVar3,iVar5);
            iVar3 = iVar3 + iVar5;
            bVar6 = iVar3 < 0;
            bVar7 = iVar3 == 0;
          }
          in_stack_00000088 = iVar3;
        } while (bVar6 != bVar8);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar5 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar5 = in_stack_00000078;
        }
        bVar8 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar3 = in_stack_00000090 - in_stack_00000078;
        bVar6 = iVar3 < 0;
        bVar7 = iVar3 == 0;
        if (bVar7 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar7 || bVar6 != bVar8) {
            bVar8 = SCARRY4(iVar3,iVar5);
            iVar3 = iVar3 + iVar5;
            bVar6 = iVar3 < 0;
            bVar7 = iVar3 == 0;
          }
          in_stack_00000090 = iVar3;
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


// 0x010003c0  z80_ld_d_imm8

undefined8 z80_dispatch_010003c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x010003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000450  z80_load_a_via_de

undefined8 z80_dispatch_01000450(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r8;
  uint unaff_r9;
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
  
  if (0x1fff < (unaff_r8 | unaff_r9 >> 8) >> 0x10) {
    FUN_01002cd0();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000500  z80_ld_e_imm8

undefined8 z80_dispatch_01000500(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000580  z80_ld_hl_imm16

undefined8 z80_dispatch_01000580(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x9ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 2) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 2);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x010005a0  z80_store_hl_absolute

undefined8 z80_dispatch_010005a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 unaff_r10;
  ushort *unaff_r11;
  ushort *puVar4;
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
  uVar1 = *unaff_r11;
  *(char *)(param_4 + (uint)uVar1) = (char)((uint)unaff_r10 >> 0x10);
  *(char *)(param_4 + uVar1 + 1) = (char)((uint)unaff_r10 >> 0x18);
  iVar3 = unaff_r5 + -0x100000;
                    /* WARNING: Could not recover jumptable at 0x010005c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xfffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar9;
  }
  puVar4 = unaff_r11 + 1;
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
        uVar9 = (**(code **)(param_3 + (uint)(byte)*puVar4 * 4))();
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
        uVar9 = (**(code **)(in_stack_00000094 + (uint)(byte)*puVar4 * 4))();
        return uVar9;
      }
    }
    return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if ((byte)*puVar4 == 0x76) {
      puVar4 = (ushort *)((int)unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar4 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar4 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar4 - param_4);
      puVar4 = (ushort *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar9 = (**(code **)(param_3 + (uint)(byte)*puVar4 * 4))();
  return uVar9;
}


// 0x01000650  z80_ld_h_imm8

undefined8 z80_dispatch_01000650(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x010006f0  z80_load_hl_absolute

undefined8 z80_dispatch_010006f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  ushort *unaff_r11;
  ushort *puVar3;
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
  
  if (0x1fff < *unaff_r11) {
    FUN_01002cfc();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x100000;
                    /* WARNING: Could not recover jumptable at 0x01000720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xfffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar8;
  }
  puVar3 = unaff_r11 + 1;
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)(byte)*puVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)(byte)*puVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if ((byte)*puVar3 == 0x76) {
      puVar3 = (ushort *)((int)unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar3 - param_4);
      puVar3 = (ushort *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)(byte)*puVar3 * 4))();
  return uVar8;
}


// 0x010007c0  z80_ld_l_imm8

undefined8 z80_dispatch_010007c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x010007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000830  z80_ld_sp_imm16

undefined8 z80_dispatch_01000830(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int unaff_r5;
  int iVar1;
  ushort *unaff_r11;
  ushort *puVar2;
  int iVar3;
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
  iVar3 = param_4 + (uint)*unaff_r11;
  iVar1 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x9ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar8;
  }
  puVar2 = unaff_r11 + 1;
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar1,iVar4 * 0x10000);
    iVar1 = iVar1 + iVar4 * 0x10000;
    iVar4 = iVar1;
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
        uVar8 = (**(code **)(param_3 + (uint)(byte)*puVar2 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)(byte)*puVar2 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if ((byte)*puVar2 == 0x76) {
      puVar2 = (ushort *)((int)unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(iVar3 + -1) = (char)((uint)((int)puVar2 - param_4) >> 8);
      *(char *)(iVar3 + -2) = (char)((int)puVar2 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(iVar3 + -1) = (char)((uint)((int)puVar2 - param_4) >> 8);
      *(char *)(iVar3 + -2) = (char)((int)puVar2 - param_4);
      puVar2 = (ushort *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)(byte)*puVar2 * 4))();
  return uVar8;
}


// 0x01000850  z80_store_a_absolute

undefined8 z80_dispatch_01000850(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int iVar4;
  ushort *unaff_r11;
  ushort *puVar5;
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
  
  uVar1 = (uint)*unaff_r11;
  uVar2 = (undefined1)((uint)unaff_r4 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0xd0000;
                    /* WARNING: Could not recover jumptable at 0x01000874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0xcffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  puVar5 = unaff_r11 + 1;
  bVar7 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar7 = SCARRY4(iVar4,iVar6 * 0x10000);
    iVar4 = iVar4 + iVar6 * 0x10000;
    iVar6 = iVar4;
  }
  if (iVar6 == 0 || iVar6 < 0 != bVar7) {
    if ((in_stack_00000080 & 0x300) == 0) {
      iVar6 = in_stack_00000074 - in_stack_00000078;
      if (iVar6 != 0 && in_stack_00000078 <= in_stack_00000074) {
        if (iVar6 < in_stack_00000078) {
          in_stack_00000078 = iVar6;
        }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        in_stack_00000074 = iVar6;
        uVar10 = (**(code **)(param_3 + (uint)(byte)*puVar5 * 4))();
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)(byte)*puVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if ((byte)*puVar5 == 0x76) {
      puVar5 = (ushort *)((int)unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar5 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar5 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar5 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar5 - param_4);
      puVar5 = (ushort *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (**(code **)(param_3 + (uint)(byte)*puVar5 * 4))();
  return uVar10;
}


// 0x01000940  z80_ld_via_hl_imm8

undefined8 z80_dispatch_01000940(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  uint unaff_r10;
  undefined1 *unaff_r11;
  byte *pbVar4;
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
  
  uVar1 = *unaff_r11;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar5 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x9ffff < unaff_r5) {
    uVar9 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar9;
  }
  pbVar4 = unaff_r11 + 1;
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
      pbVar4 = unaff_r11 + 2;
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


// 0x010009d0  z80_load_a_absolute

undefined8 z80_dispatch_010009d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  ushort *unaff_r11;
  ushort *puVar3;
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
  
  if (0x1fff < *unaff_r11) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0xd0000;
                    /* WARNING: Could not recover jumptable at 0x010009f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xcffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar8;
  }
  puVar3 = unaff_r11 + 1;
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)(byte)*puVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)(byte)*puVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if ((byte)*puVar3 == 0x76) {
      puVar3 = (ushort *)((int)unaff_r11 + 3);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)puVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)puVar3 - param_4);
      puVar3 = (ushort *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)(byte)*puVar3 * 4))();
  return uVar8;
}


// 0x01000a80  z80_ld_a_imm8

undefined8 z80_dispatch_01000a80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r11;
  byte *pbVar3;
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
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*(byte *)(unaff_r11 + 1) * 4))();
    return uVar8;
  }
  pbVar3 = (byte *)(unaff_r11 + 1);
  bVar5 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar5 = SCARRY4(iVar2,iVar4 * 0x10000);
    iVar2 = iVar2 + iVar4 * 0x10000;
    iVar4 = iVar2;
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
        uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
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
        uVar8 = (**(code **)(in_stack_00000094 + (uint)*pbVar3 * 4))();
        return uVar8;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar3 == 0x76) {
      pbVar3 = (byte *)(unaff_r11 + 2);
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar3 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)pbVar3 - param_4);
      pbVar3 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
  return uVar8;
}


// 0x01000ad0  z80_ld_b_from_b

undefined8 z80_dispatch_01000ad0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000ae0  z80_ld_b_from_c

undefined8 z80_dispatch_01000ae0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000b00  z80_ld_b_from_d

undefined8 z80_dispatch_01000b00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000b20  z80_ld_b_from_e

undefined8 z80_dispatch_01000b20(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000b40  z80_ld_b_from_h

undefined8 z80_dispatch_01000b40(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000b60  z80_ld_b_from_l

undefined8 z80_dispatch_01000b60(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000b80  z80_ld_b_from_via_hl

undefined8 z80_dispatch_01000b80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000ba0  z80_ld_b_from_a

undefined8 z80_dispatch_01000ba0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000bc0  z80_ld_c_from_b

undefined8 z80_dispatch_01000bc0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000be0  z80_ld_c_from_c

undefined8 z80_dispatch_01000be0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000bf0  z80_ld_c_from_d

undefined8 z80_dispatch_01000bf0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000c10  z80_ld_c_from_e

undefined8 z80_dispatch_01000c10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000c30  z80_ld_c_from_h

undefined8 z80_dispatch_01000c30(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000c50  z80_ld_c_from_l

undefined8 z80_dispatch_01000c50(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000c70  z80_ld_c_from_via_hl

undefined8 z80_dispatch_01000c70(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000c90  z80_ld_c_from_a

undefined8 z80_dispatch_01000c90(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000cb0  z80_ld_d_from_b

undefined8 z80_dispatch_01000cb0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000cd0  z80_ld_d_from_c

undefined8 z80_dispatch_01000cd0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000cf0  z80_ld_d_from_d

undefined8 z80_dispatch_01000cf0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000d00  z80_ld_d_from_e

undefined8 z80_dispatch_01000d00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000d20  z80_ld_d_from_h

undefined8 z80_dispatch_01000d20(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000d40  z80_ld_d_from_l

undefined8 z80_dispatch_01000d40(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000d60  z80_ld_d_from_via_hl

undefined8 z80_dispatch_01000d60(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000d80  z80_ld_d_from_a

undefined8 z80_dispatch_01000d80(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000da0  z80_ld_e_from_b

undefined8 z80_dispatch_01000da0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000dc0  z80_ld_e_from_c

undefined8 z80_dispatch_01000dc0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000de0  z80_ld_e_from_d

undefined8 z80_dispatch_01000de0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000e00  z80_ld_e_from_e

undefined8 z80_dispatch_01000e00(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000e10  z80_ld_e_from_h

undefined8 z80_dispatch_01000e10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000e30  z80_ld_e_from_l

undefined8 z80_dispatch_01000e30(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000e50  z80_ld_e_from_via_hl

undefined8 z80_dispatch_01000e50(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000e70  z80_ld_e_from_a

undefined8 z80_dispatch_01000e70(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000e90  z80_ld_h_from_b

undefined8 z80_dispatch_01000e90(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000eb0  z80_ld_h_from_c

undefined8 z80_dispatch_01000eb0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000ed0  z80_ld_h_from_d

undefined8 z80_dispatch_01000ed0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000ef0  z80_ld_h_from_e

undefined8 z80_dispatch_01000ef0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000f10  z80_ld_h_from_h

undefined8 z80_dispatch_01000f10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000f20  z80_ld_h_from_l

undefined8 z80_dispatch_01000f20(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000f40  z80_ld_h_from_via_hl

undefined8 z80_dispatch_01000f40(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01000f70  z80_ld_h_from_a

undefined8 z80_dispatch_01000f70(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000f90  z80_ld_l_from_b

undefined8 z80_dispatch_01000f90(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000fb0  z80_ld_l_from_c

undefined8 z80_dispatch_01000fb0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000fd0  z80_ld_l_from_d

undefined8 z80_dispatch_01000fd0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01000ff0  z80_ld_l_from_e

undefined8 z80_dispatch_01000ff0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001010  z80_ld_l_from_h

undefined8 z80_dispatch_01001010(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001030  z80_ld_l_from_l

undefined8 z80_dispatch_01001030(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001040  z80_ld_l_from_via_hl

undefined8 z80_dispatch_01001040(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01001070  z80_ld_l_from_a

undefined8 z80_dispatch_01001070(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001090  z80_ld_via_hl_from_b

undefined8 z80_dispatch_01001090(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 unaff_r6;
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
  
  uVar1 = (undefined1)((uint)unaff_r6 >> 0x18);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x010010b0  z80_ld_via_hl_from_c

undefined8 z80_dispatch_010010b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 unaff_r7;
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
  
  uVar1 = (undefined1)((uint)unaff_r7 >> 0x18);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x010010d0  z80_ld_via_hl_from_d

undefined8 z80_dispatch_010010d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 unaff_r8;
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
  
  uVar1 = (undefined1)((uint)unaff_r8 >> 0x18);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x010010f0  z80_ld_via_hl_from_e

undefined8 z80_dispatch_010010f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  undefined4 unaff_r9;
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
  
  uVar1 = (undefined1)((uint)unaff_r9 >> 0x18);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x01001110  z80_ld_via_hl_from_h

undefined8 z80_dispatch_01001110(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
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
  
  uVar1 = (undefined1)(unaff_r10 >> 0x18);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x01001130  z80_ld_via_hl_from_l

undefined8 z80_dispatch_01001130(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  int unaff_r5;
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
  
  uVar1 = (undefined1)(unaff_r10 >> 0x10);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x01001180  z80_ld_via_hl_from_a

undefined8 z80_dispatch_01001180(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 extraout_r1;
  undefined1 uVar1;
  int iVar2;
  undefined4 unaff_r4;
  int unaff_r5;
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
  
  uVar1 = (undefined1)((uint)unaff_r4 >> 0x18);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar1;
  iVar3 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x6ffff < unaff_r5) {
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar5 != bVar7);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar4 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar4 = in_stack_00000078;
        }
        bVar7 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar5 = iVar2 < 0;
        bVar6 = iVar2 == 0;
        if (bVar6 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar6 || bVar5 != bVar7) {
            bVar7 = SCARRY4(iVar2,iVar4);
            iVar2 = iVar2 + iVar4;
            bVar5 = iVar2 < 0;
            bVar6 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
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


// 0x010011a0  z80_ld_a_from_b

undefined8 z80_dispatch_010011a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x010011c0  z80_ld_a_from_c

undefined8 z80_dispatch_010011c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x010011e0  z80_ld_a_from_d

undefined8 z80_dispatch_010011e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001200  z80_ld_a_from_e

undefined8 z80_dispatch_01001200(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001220  z80_ld_a_from_h

undefined8 z80_dispatch_01001220(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001240  z80_ld_a_from_l

undefined8 z80_dispatch_01001240(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01001260  z80_ld_a_from_via_hl

undefined8 z80_dispatch_01001260(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r10;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  iVar3 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x6ffff < unaff_r5) {
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


// 0x01001280  z80_ld_a_from_a

undefined8 z80_dispatch_01001280(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01002010  z80_pop_bc

undefined8 z80_dispatch_01002010(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  undefined1 *in_r12;
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
  iVar2 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x9ffff < unaff_r5) {
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
      in_r12[1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *in_r12 = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      in_r12[1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *in_r12 = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x010020d0  z80_push_bc

undefined8 z80_dispatch_010020d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
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
  *(char *)(in_r12 + -1) = (char)((uint)unaff_r6 >> 0x18);
  *(byte *)(in_r12 + -2) = (byte)((uint)unaff_r6 >> 0x10) | (byte)((uint)unaff_r7 >> 0x18);
  iVar2 = unaff_r5 + -0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xaffff < unaff_r5) {
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
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x01002310  z80_pop_de

undefined8 z80_dispatch_01002310(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  undefined1 *in_r12;
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
  iVar2 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x9ffff < unaff_r5) {
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
      in_r12[1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *in_r12 = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      in_r12[1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *in_r12 = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x010023e0  z80_push_de

undefined8 z80_dispatch_010023e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
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
  *(char *)(in_r12 + -1) = (char)((uint)unaff_r8 >> 0x18);
  *(byte *)(in_r12 + -2) = (byte)((uint)unaff_r8 >> 0x10) | (byte)((uint)unaff_r9 >> 0x18);
  iVar2 = unaff_r5 + -0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010023fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xaffff < unaff_r5) {
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
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x010024b0  z80_exx

/* WARNING: Type propagation algorithm not settling */

undefined8 z80_dispatch_010024b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  uint unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r9;
  byte *unaff_r11;
  int in_r12;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  int in_stack_00000028;
  uint in_stack_00000044;
  uint uStack00000050;
  uint uStack00000054;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  iVar1 = in_stack_00000028;
  uStack00000050 = unaff_r6 | unaff_r7 >> 8;
  uStack00000054 = unaff_r8 | unaff_r9 >> 8;
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x010024ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
    uVar6 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar6;
  }
  bVar3 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar3 = SCARRY4(iVar2,iVar1 * 0x10000);
    iVar2 = iVar2 + iVar1 * 0x10000;
    iVar1 = iVar2;
  }
  if (iVar1 == 0 || iVar1 < 0 != bVar3) {
    if ((in_stack_00000080 & 0x300) == 0) {
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar6;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        if (in_stack_00000084 < 1) {
          in_stack_00000084 = in_stack_00000078;
        }
        bVar5 = SBORROW4(in_stack_00000088,in_stack_00000078);
        in_stack_00000088 = in_stack_00000088 - in_stack_00000078;
        bVar3 = in_stack_00000088 < 0;
        bVar4 = in_stack_00000088 == 0;
        do {
          if (bVar4 || bVar3 != bVar5) {
            bVar5 = SCARRY4(in_stack_00000088,in_stack_00000084);
            in_stack_00000088 = in_stack_00000088 + in_stack_00000084;
            bVar3 = in_stack_00000088 < 0;
            bVar4 = in_stack_00000088 == 0;
          }
        } while (bVar3 != bVar5);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        if (in_stack_0000008c < 1) {
          in_stack_0000008c = in_stack_00000078;
        }
        bVar5 = SBORROW4(in_stack_00000090,in_stack_00000078);
        in_stack_00000090 = in_stack_00000090 - in_stack_00000078;
        bVar3 = in_stack_00000090 < 0;
        bVar4 = in_stack_00000090 == 0;
        do {
          if (bVar4 || bVar3 != bVar5) {
            bVar5 = SCARRY4(in_stack_00000090,in_stack_0000008c);
            in_stack_00000090 = in_stack_00000090 + in_stack_0000008c;
            bVar3 = in_stack_00000090 < 0;
            bVar4 = in_stack_00000090 == 0;
          }
        } while (bVar3 != bVar5);
      }
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar6;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
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
  uVar6 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar6;
}


// 0x01002660  z80_pop_hl

undefined8 z80_dispatch_01002660(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  undefined1 *in_r12;
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
  iVar2 = unaff_r5 + -0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x9ffff < unaff_r5) {
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
      in_r12[1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *in_r12 = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      in_r12[1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *in_r12 = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x010026b0  z80_exchange_stack_hl

undefined8 z80_dispatch_010026b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  undefined4 unaff_r10;
  byte *unaff_r11;
  undefined1 *in_r12;
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
  *in_r12 = (char)((uint)unaff_r10 >> 0x10);
  in_r12[1] = (char)((uint)unaff_r10 >> 0x18);
  iVar2 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x010026d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x12ffff < unaff_r5) {
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
      in_r12[-1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      in_r12[-2] = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      in_r12[-1] = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      in_r12[-2] = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x01002720  z80_push_hl

undefined8 z80_dispatch_01002720(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  undefined4 unaff_r10;
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
  *(char *)(in_r12 + -1) = (char)((uint)unaff_r10 >> 0x18);
  *(char *)(in_r12 + -2) = (char)((uint)unaff_r10 >> 0x10);
  iVar2 = unaff_r5 + -0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xaffff < unaff_r5) {
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
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x01002820  z80_exchange_de_hl

undefined8 z80_dispatch_01002820(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < unaff_r5) {
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


// 0x01002930  z80_pop_af

undefined8 z80_dispatch_01002930(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  byte *unaff_r11;
  ushort *in_r12;
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
  uVar2 = unaff_r5 & 0xffffff28 | *in_r12 & 0xff;
  iVar3 = uVar2 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x9ffff < (int)uVar2) {
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
      *(char *)((int)in_r12 + 1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)in_r12 = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)((int)in_r12 + 1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)in_r12 = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar8;
}


// 0x010029f0  z80_push_af

undefined8 z80_dispatch_010029f0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_r4;
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
  *(char *)(in_r12 + -1) = (char)((uint)unaff_r4 >> 0x18);
  *(byte *)(in_r12 + -2) = (byte)unaff_r5 | (byte)((uint)unaff_r4 >> 0x10);
  iVar2 = unaff_r5 + -0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xaffff < unaff_r5) {
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
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -3) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -4) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x01002ab0  z80_ld_sp_hl

undefined8 z80_dispatch_01002ab0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int unaff_r5;
  int iVar1;
  uint unaff_r10;
  byte *unaff_r11;
  int iVar2;
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
  iVar2 = param_4 + (unaff_r10 >> 0x10);
  iVar1 = unaff_r5 + -0x60000;
                    /* WARNING: Could not recover jumptable at 0x01002abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar1 != 0 && 0x5ffff < unaff_r5) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar1,iVar3 * 0x10000);
    iVar1 = iVar1 + iVar3 * 0x10000;
    iVar3 = iVar1;
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
        iVar2 = in_stack_00000088 - in_stack_00000078;
        bVar4 = iVar2 < 0;
        bVar5 = iVar2 == 0;
        if (bVar5 || in_stack_00000088 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 1;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar2,iVar3);
            iVar2 = iVar2 + iVar3;
            bVar4 = iVar2 < 0;
            bVar5 = iVar2 == 0;
          }
          in_stack_00000088 = iVar2;
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        iVar3 = in_stack_0000008c;
        if (in_stack_0000008c < 1) {
          iVar3 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        iVar2 = in_stack_00000090 - in_stack_00000078;
        bVar4 = iVar2 < 0;
        bVar5 = iVar2 == 0;
        if (bVar5 || in_stack_00000090 < in_stack_00000078) {
          in_stack_00000080 = in_stack_00000080 | 2;
        }
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(iVar2,iVar3);
            iVar2 = iVar2 + iVar3;
            bVar4 = iVar2 < 0;
            bVar5 = iVar2 == 0;
          }
          in_stack_00000090 = iVar2;
        } while (bVar4 != bVar6);
      }
      iVar3 = in_stack_00000074 - in_stack_00000078;
      if (iVar3 != 0 && in_stack_00000078 <= in_stack_00000074) {
        in_stack_00000078 = iVar3;
        if ((in_stack_00000080 & 0x100) != 0) {
          bVar4 = in_stack_00000088 == 0;
          iVar1 = in_stack_00000088;
          if (0 < in_stack_00000088) {
            iVar1 = iVar3 - in_stack_00000088;
            bVar4 = iVar3 == in_stack_00000088;
          }
          if (!bVar4 && iVar1 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar3,in_stack_00000088))) {
            in_stack_00000078 = in_stack_00000088;
          }
        }
        if ((in_stack_00000080 & 0x200) != 0) {
          bVar4 = in_stack_00000090 == 0;
          iVar1 = in_stack_00000090;
          if (0 < in_stack_00000090) {
            iVar1 = in_stack_00000078 - in_stack_00000090;
            bVar4 = in_stack_00000078 == in_stack_00000090;
          }
          if (!bVar4 && iVar1 < 0 ==
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
    return CONCAT44(&stack0x00000028,iVar1 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*unaff_r11 == 0x76) {
      unaff_r11 = unaff_r11 + 1;
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(iVar2 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(iVar2 + -2) = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(iVar2 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(iVar2 + -2) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


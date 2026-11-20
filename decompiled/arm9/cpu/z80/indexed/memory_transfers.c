/* ARM9 memory transfers — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02010f7c  z80_ix_iy_store_ix_or_iy_absolute

undefined8 z80_dispatch_02010f7c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  ushort *puVar4;
  ushort *unaff_r11;
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
  *(char *)(param_4 + (uint)uVar1) = (char)((uint)param_1 >> 0x10);
  *(char *)(param_4 + uVar1 + 1) = (char)((uint)param_1 >> 0x18);
  iVar3 = unaff_r5 + -0x140000;
                    /* WARNING: Could not recover jumptable at 0x02010fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x13ffff < unaff_r5) {
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


// 0x02011074  z80_ix_iy_load_ix_or_iy_absolute

undefined8 z80_dispatch_02011074(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int unaff_r5;
  int iVar3;
  ushort *puVar4;
  ushort *unaff_r11;
  int in_r12;
  int iVar5;
  int *in_lr;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  int in_stack_00000028;
  uint in_stack_00000044;
  int *piStack00000064;
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
  piStack00000064 = in_lr;
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002cfc();
  }
  iVar5 = in_stack_00000028;
  *piStack00000064 = (uint)*(ushort *)(param_4 + uVar1) << 0x10;
  iVar3 = unaff_r5 + -0x140000;
                    /* WARNING: Could not recover jumptable at 0x020110b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x13ffff < unaff_r5) {
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


// 0x02011218  z80_ix_iy_ld_indexed_memory_imm8

undefined8 z80_dispatch_02011218(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  char extraout_r1;
  char cVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  cVar2 = unaff_r11[1];
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    cVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(char *)(param_4 + uVar1) = cVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x0201123c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[2] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 2);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 3);
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


// 0x02011294  z80_ix_iy_ld_b_from_indexed_memory

undefined8 z80_dispatch_02011294(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x020112b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xeffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


// 0x020112e8  z80_ix_iy_ld_c_from_indexed_memory

undefined8 z80_dispatch_020112e8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x0201130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xeffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


// 0x0201133c  z80_ix_iy_ld_d_from_indexed_memory

undefined8 z80_dispatch_0201133c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x12ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


// 0x02011390  z80_ix_iy_ld_e_from_indexed_memory

undefined8 z80_dispatch_02011390(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x020113b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x12ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


// 0x02011458  z80_ix_iy_ld_h_from_indexed_memory

undefined8 z80_dispatch_02011458(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x12ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


// 0x02011540  z80_ix_iy_ld_l_from_indexed_memory

undefined8 z80_dispatch_02011540(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x12ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


// 0x0201158c  z80_ix_iy_ld_indexed_memory_from_b

undefined8 z80_dispatch_0201158c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r6 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x020115b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x020115b8  z80_ix_iy_ld_indexed_memory_from_c

undefined8 z80_dispatch_020115b8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  undefined4 unaff_r7;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r7 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x020115dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x020115e4  z80_ix_iy_ld_indexed_memory_from_d

undefined8 z80_dispatch_020115e4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  undefined4 unaff_r8;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r8 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x02011610  z80_ix_iy_ld_indexed_memory_from_e

undefined8 z80_dispatch_02011610(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  undefined4 unaff_r9;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r9 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x0201163c  z80_ix_iy_ld_indexed_memory_from_h

undefined8 z80_dispatch_0201163c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  undefined4 unaff_r10;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r10 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x02011668  z80_ix_iy_ld_indexed_memory_from_l

undefined8 z80_dispatch_02011668(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r5;
  int iVar4;
  undefined4 unaff_r10;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r10 >> 0x10);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x02011698  z80_ix_iy_ld_indexed_memory_from_a

undefined8 z80_dispatch_02011698(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int iVar4;
  byte *pbVar5;
  char *unaff_r11;
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
  
  uVar1 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  uVar2 = (undefined1)((uint)unaff_r4 >> 0x18);
  if (0x1fff < uVar1) {
    uVar1 = FUN_01002d10();
    uVar2 = extraout_r1;
  }
  iVar6 = in_stack_00000028;
  *(undefined1 *)(param_4 + uVar1) = uVar2;
  iVar4 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x020116bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x12ffff < unaff_r5) {
    uVar10 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar10;
  }
  pbVar5 = (byte *)(unaff_r11 + 1);
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
        uVar10 = (**(code **)(in_stack_00000094 + (uint)*pbVar5 * 4))();
        return uVar10;
      }
    }
    return CONCAT44(&stack0x00000028,iVar4 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    in_stack_000000a4 = 0;
    if (*pbVar5 == 0x76) {
      pbVar5 = (byte *)(unaff_r11 + 2);
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


// 0x020116ec  z80_ix_iy_ld_a_from_indexed_memory

undefined8 z80_dispatch_020116ec(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *pbVar3;
  char *unaff_r11;
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
  
  if (0x1fff < (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10) {
    FUN_01002cd0();
  }
  iVar4 = in_stack_00000028;
  iVar2 = unaff_r5 + -0x130000;
                    /* WARNING: Could not recover jumptable at 0x02011710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x12ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
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


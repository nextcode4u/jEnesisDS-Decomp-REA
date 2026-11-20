/* ARM9 flags io and cpu control — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x01000020  z80_nop

undefined8 z80_nop(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x01000028. Too many branches */
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


// 0x01000130  z80_rlca

undefined8 z80_rlca(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_r4;
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
  uVar2 = unaff_r5 & 0xffffffec;
  if (SUB41((uint)unaff_r4 >> 0x1f,0)) {
    uVar2 = uVar2 | 1;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000148. Too many branches */
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


// 0x01000270  z80_rrca

undefined8 z80_rrca(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_r4;
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
  uVar2 = unaff_r5 & 0xffffffec;
  if ((bool)((byte)((uint)unaff_r4 >> 0x18) & 1)) {
    uVar2 = uVar2 | 1;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100028c. Too many branches */
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


// 0x010003e0  z80_rla

undefined8 z80_rla(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_r4;
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
  uVar2 = unaff_r5 & 0xffffffec;
  if (SUB41((uint)unaff_r4 >> 0x1f,0)) {
    uVar2 = uVar2 | 1;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000400. Too many branches */
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


// 0x01000520  z80_rra

undefined8 z80_rra(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 unaff_r4;
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
  uVar2 = unaff_r5 & 0xffffffec;
  if ((bool)((byte)((uint)unaff_r4 >> 0x18) & 1)) {
    uVar2 = uVar2 | 1;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100053c. Too many branches */
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


// 0x01000960  z80_scf

undefined8 z80_scf(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  uVar2 = unaff_r5 & 0xffffffed | 1;
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000970. Too many branches */
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


// 0x01000aa0  z80_ccf

undefined8 z80_ccf(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
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
  if ((unaff_r5 & 1) == 0) {
    uVar2 = unaff_r5 & 0xffffffed | 1;
  }
  else {
    uVar2 = unaff_r5 & 0xfffffffc | 0x10;
  }
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000abc. Too many branches */
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


// 0x01001160  z80_halt

undefined8 z80_halt(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  int iVar2;
  byte *unaff_r11;
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
  iVar2 = (unaff_r5 & 0xff) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x3ffff < (unaff_r5 & 0xff)) {
    uVar8 = (**(code **)(param_3 + (uint)unaff_r11[-1] * 4))();
    return uVar8;
  }
  pbVar3 = unaff_r11 + -1;
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
      pbVar3 = unaff_r11;
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


// 0x01002370  z80_out_port_imm_a

undefined8 z80_out_port_imm_a(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  int unaff_r6;
  char *unaff_r11;
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
  if (unaff_r6 == 0x1000000) {
    pbVar3 = (byte *)(unaff_r11 + 1);
  }
  else {
    unaff_r5 = unaff_r5 + -0x50000;
    pbVar3 = (byte *)(unaff_r11 + *unaff_r11 + 1);
  }
  iVar2 = unaff_r5 + -0x80000;
                    /* WARNING: Could not recover jumptable at 0x0100238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x7ffff < unaff_r5) {
    uVar8 = (**(code **)(param_3 + (uint)*pbVar3 * 4))();
    return uVar8;
  }
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
      pbVar3 = pbVar3 + 1;
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


// 0x01002530  z80_in_a_port_imm

undefined8 z80_in_a_port_imm(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar2 = unaff_r5 + -0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0xaffff < unaff_r5) {
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


// 0x01002990  z80_disable_interrupts

/* WARNING: Removing unreachable block (ram,0x0200dfc0) */
/* WARNING: Removing unreachable block (ram,0x0200dfd0) */
/* WARNING: Removing unreachable block (ram,0x0200dfd4) */
/* WARNING: Removing unreachable block (ram,0x0200e004) */
/* WARNING: Removing unreachable block (ram,0x0200dfe8) */

undefined8 z80_disable_interrupts(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
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
  undefined4 in_stack_000000a4;
  
  iVar3 = in_stack_00000028;
  in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
  iVar2 = unaff_r5 + -0x40000;
                    /* WARNING: Could not recover jumptable at 0x010029a4. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}


// 0x01002b00  z80_enable_interrupts

void z80_enable_interrupts(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_r5;
  byte *unaff_r11;
  int iStack00000028;
  
  iStack00000028 = unaff_r5 >> 0x10;
                    /* WARNING: Could not recover jumptable at 0x01002b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return;
}


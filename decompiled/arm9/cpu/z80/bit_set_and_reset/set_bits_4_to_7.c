/* ARM9 set bits 4 to 7 — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x0200ff70  z80_cb_set_bit_4_b

undefined8 z80_dispatch_0200ff70(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200ff7c. Too many branches */
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


// 0x0200ff84  z80_cb_set_bit_4_c

undefined8 z80_dispatch_0200ff84(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200ff90. Too many branches */
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


// 0x0200ff98  z80_cb_set_bit_4_d

undefined8 z80_dispatch_0200ff98(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200ffa4. Too many branches */
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


// 0x0200ffac  z80_cb_set_bit_4_e

undefined8 z80_dispatch_0200ffac(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200ffb8. Too many branches */
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


// 0x0200ffc0  z80_cb_set_bit_4_h

undefined8 z80_dispatch_0200ffc0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200ffcc. Too many branches */
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


// 0x0200ffd4  z80_cb_set_bit_4_l

undefined8 z80_dispatch_0200ffd4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200ffe0. Too many branches */
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


// 0x0200ffe8  z80_cb_set_bit_4_via_hl

undefined8 z80_dispatch_0200ffe8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte extraout_r1;
  byte bVar1;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10)) | 0x10;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar1;
  iVar3 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xeffff < unaff_r5) {
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


// 0x02010018  z80_cb_set_bit_4_a

undefined8 z80_dispatch_02010018(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010024. Too many branches */
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


// 0x0201002c  z80_cb_set_bit_5_b

undefined8 z80_dispatch_0201002c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010038. Too many branches */
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


// 0x02010040  z80_cb_set_bit_5_c

undefined8 z80_dispatch_02010040(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0201004c. Too many branches */
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


// 0x02010054  z80_cb_set_bit_5_d

undefined8 z80_dispatch_02010054(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010060. Too many branches */
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


// 0x02010068  z80_cb_set_bit_5_e

undefined8 z80_dispatch_02010068(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010074. Too many branches */
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


// 0x0201007c  z80_cb_set_bit_5_h

undefined8 z80_dispatch_0201007c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010088. Too many branches */
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


// 0x02010090  z80_cb_set_bit_5_l

undefined8 z80_dispatch_02010090(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0201009c. Too many branches */
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


// 0x020100a4  z80_cb_set_bit_5_via_hl

undefined8 z80_dispatch_020100a4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte extraout_r1;
  byte bVar1;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10)) | 0x20;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar1;
  iVar3 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x020100cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xeffff < unaff_r5) {
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


// 0x020100d4  z80_cb_set_bit_5_a

undefined8 z80_dispatch_020100d4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x020100e0. Too many branches */
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


// 0x020100e8  z80_cb_set_bit_6_b

undefined8 z80_dispatch_020100e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x020100f4. Too many branches */
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


// 0x020100fc  z80_cb_set_bit_6_c

undefined8 z80_dispatch_020100fc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010108. Too many branches */
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


// 0x02010110  z80_cb_set_bit_6_d

undefined8 z80_dispatch_02010110(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0201011c. Too many branches */
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


// 0x02010124  z80_cb_set_bit_6_e

undefined8 z80_dispatch_02010124(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010130. Too many branches */
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


// 0x02010138  z80_cb_set_bit_6_h

undefined8 z80_dispatch_02010138(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010144. Too many branches */
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


// 0x0201014c  z80_cb_set_bit_6_l

undefined8 z80_dispatch_0201014c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010158. Too many branches */
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


// 0x02010160  z80_cb_set_bit_6_via_hl

undefined8 z80_dispatch_02010160(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte extraout_r1;
  byte bVar1;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10)) | 0x40;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar1;
  iVar3 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xeffff < unaff_r5) {
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


// 0x02010190  z80_cb_set_bit_6_a

undefined8 z80_dispatch_02010190(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0201019c. Too many branches */
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


// 0x020101a4  z80_cb_set_bit_7_b

undefined8 z80_dispatch_020101a4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x020101b0. Too many branches */
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


// 0x020101b8  z80_cb_set_bit_7_c

undefined8 z80_dispatch_020101b8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x020101c4. Too many branches */
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


// 0x020101cc  z80_cb_set_bit_7_d

undefined8 z80_dispatch_020101cc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x020101d8. Too many branches */
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


// 0x020101e0  z80_cb_set_bit_7_e

undefined8 z80_dispatch_020101e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x020101ec. Too many branches */
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


// 0x020101f4  z80_cb_set_bit_7_h

undefined8 z80_dispatch_020101f4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010200. Too many branches */
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


// 0x02010208  z80_cb_set_bit_7_l

undefined8 z80_dispatch_02010208(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010214. Too many branches */
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


// 0x0201021c  z80_cb_set_bit_7_via_hl

undefined8 z80_dispatch_0201021c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte extraout_r1;
  byte bVar1;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10)) | 0x80;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar1;
  iVar3 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x02010244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0xeffff < unaff_r5) {
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


// 0x0201024c  z80_cb_set_bit_7_a

undefined8 z80_dispatch_0201024c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x02010258. Too many branches */
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


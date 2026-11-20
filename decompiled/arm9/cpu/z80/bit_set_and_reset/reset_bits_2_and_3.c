/* ARM9 reset bits 2 and 3 — grouped REA pseudocode.
 * The entry changes one bit, writes back memory when applicable, and dispatches the next opcode.
 */

// 0x0200f818  z80_cb_reset_bit_2_b

undefined8 z80_dispatch_0200f818(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f824. Too many branches */
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


// 0x0200f82c  z80_cb_reset_bit_2_c

undefined8 z80_dispatch_0200f82c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f838. Too many branches */
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


// 0x0200f840  z80_cb_reset_bit_2_d

undefined8 z80_dispatch_0200f840(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f84c. Too many branches */
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


// 0x0200f854  z80_cb_reset_bit_2_e

undefined8 z80_dispatch_0200f854(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f860. Too many branches */
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


// 0x0200f868  z80_cb_reset_bit_2_h

undefined8 z80_dispatch_0200f868(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f874. Too many branches */
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


// 0x0200f87c  z80_cb_reset_bit_2_l

undefined8 z80_dispatch_0200f87c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f888. Too many branches */
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


// 0x0200f890  z80_cb_reset_bit_2_via_hl

undefined8 z80_dispatch_0200f890(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10)) & 0xfb;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar1;
  iVar3 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x0200f8b8. Too many branches */
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


// 0x0200f8c0  z80_cb_reset_bit_2_a

undefined8 z80_dispatch_0200f8c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f8cc. Too many branches */
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


// 0x0200f8d4  z80_cb_reset_bit_3_b

undefined8 z80_dispatch_0200f8d4(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f8e0. Too many branches */
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


// 0x0200f8e8  z80_cb_reset_bit_3_c

undefined8 z80_dispatch_0200f8e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f8f4. Too many branches */
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


// 0x0200f8fc  z80_cb_reset_bit_3_d

undefined8 z80_dispatch_0200f8fc(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f908. Too many branches */
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


// 0x0200f910  z80_cb_reset_bit_3_e

undefined8 z80_dispatch_0200f910(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f91c. Too many branches */
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


// 0x0200f924  z80_cb_reset_bit_3_h

undefined8 z80_dispatch_0200f924(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f930. Too many branches */
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


// 0x0200f938  z80_cb_reset_bit_3_l

undefined8 z80_dispatch_0200f938(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f944. Too many branches */
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


// 0x0200f94c  z80_cb_reset_bit_3_via_hl

undefined8 z80_dispatch_0200f94c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10)) & 0xf7;
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    bVar1 = extraout_r1;
  }
  iVar4 = in_stack_00000028;
  *(byte *)(param_4 + (unaff_r10 >> 0x10)) = bVar1;
  iVar3 = unaff_r5 + -0xf0000;
                    /* WARNING: Could not recover jumptable at 0x0200f974. Too many branches */
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


// 0x0200f97c  z80_cb_reset_bit_3_a

undefined8 z80_dispatch_0200f97c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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
                    /* WARNING: Could not recover jumptable at 0x0200f988. Too many branches */
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


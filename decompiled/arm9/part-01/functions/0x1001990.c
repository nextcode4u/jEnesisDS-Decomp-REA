// rea decompile_all
// name: z80_dispatch_01001990
// address: 0x1001990
// body: available
// range: 0x1001990-0x10019cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 z80_dispatch_01001990(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

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


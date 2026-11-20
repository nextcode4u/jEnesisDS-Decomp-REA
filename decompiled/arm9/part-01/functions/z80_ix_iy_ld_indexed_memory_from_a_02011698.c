// Analysis annotation
// Role — z80 ix iy ld indexed memory from a
// Basis — dispatch table
// Z80 table entries include DD/FD 0x77 (ld indexed memory from a).

// rea decompile_all
// name: z80_dispatch_02011698
// address: 0x2011698
// body: available
// range: 0x2011698-0x20116c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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


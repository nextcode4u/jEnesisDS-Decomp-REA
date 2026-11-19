// rea decompile_all
// name: z80_dispatch_020119a0
// address: 0x20119a0
// body: available
// range: 0x20119a0-0x20119f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 z80_dispatch_020119a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint uVar5;
  int iVar6;
  uint unaff_r5;
  uint uVar7;
  byte *pbVar8;
  char *unaff_r11;
  int in_r12;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
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
  
  uVar3 = (uint)(param_1 + *unaff_r11 * 0x10000) >> 0x10;
  if (0x1fff < uVar3) {
    uVar3 = FUN_01002cd0();
  }
  iVar9 = in_stack_00000028;
  uVar1 = (uint)*(byte *)(param_4 + uVar3) * 0x1000000;
  uVar7 = unaff_r5 & 0xffffff28 | 2;
  uVar2 = (unaff_r5 & 1) * 0x1000000;
  uVar5 = unaff_r4 + (unaff_r5 & 1) * -0x1000000;
  if (unaff_r4 < uVar2) {
    uVar7 = unaff_r5 & 0xffffff28 | 3;
  }
  if (SBORROW4(unaff_r4,uVar2)) {
    uVar7 = uVar7 | 4;
  }
  iVar6 = uVar5 + (uint)*(byte *)(param_4 + uVar3) * -0x1000000;
  if (iVar6 < 0) {
    uVar7 = uVar7 | 0x80;
  }
  if (iVar6 == 0) {
    uVar7 = uVar7 | 0x40;
  }
  if (uVar5 < uVar1) {
    uVar7 = uVar7 | 1;
  }
  if (SBORROW4(uVar5,uVar1)) {
    uVar7 = uVar7 ^ 4;
  }
  iVar6 = uVar7 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x020119f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0x12ffff < (int)uVar7) {
    uVar13 = (**(code **)(param_3 + (uint)(byte)unaff_r11[1] * 4))();
    return uVar13;
  }
  pbVar8 = (byte *)(unaff_r11 + 1);
  bVar10 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar10 = SCARRY4(iVar6,iVar9 * 0x10000);
    iVar6 = iVar6 + iVar9 * 0x10000;
    iVar9 = iVar6;
  }
  if (iVar9 != 0 && iVar9 < 0 == bVar10) {
    if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
      in_stack_000000a4 = 0;
      if (*pbVar8 == 0x76) {
        pbVar8 = (byte *)(unaff_r11 + 2);
      }
      if ((in_stack_00000044 & 3) == 2) {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar8 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar8 - param_4);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
      else {
        *(char *)(in_r12 + -1) = (char)((uint)((int)pbVar8 - param_4) >> 8);
        *(char *)(in_r12 + -2) = (char)((int)pbVar8 - param_4);
        pbVar8 = (byte *)(param_4 + 0x38);
        in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (**(code **)(param_3 + (uint)*pbVar8 * 4))();
    return uVar13;
  }
  if ((in_stack_00000080 & 0x300) == 0) {
    iVar9 = in_stack_00000074 - in_stack_00000078;
    if (iVar9 != 0 && in_stack_00000078 <= in_stack_00000074) {
      if (iVar9 < in_stack_00000078) {
        in_stack_00000078 = iVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar9;
      uVar13 = (**(code **)(param_3 + (uint)*pbVar8 * 4))();
      return uVar13;
    }
  }
  else {
    if ((in_stack_00000080 & 0x100) != 0) {
      iVar9 = in_stack_00000084;
      if (in_stack_00000084 < 1) {
        iVar9 = in_stack_00000078;
      }
      bVar12 = SBORROW4(in_stack_00000088,in_stack_00000078);
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar10 = iVar4 < 0;
      bVar11 = iVar4 == 0;
      if (bVar11 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar11 || bVar10 != bVar12) {
          bVar12 = SCARRY4(iVar4,iVar9);
          iVar4 = iVar4 + iVar9;
          bVar10 = iVar4 < 0;
          bVar11 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar10 != bVar12);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar9 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar9 = in_stack_00000078;
      }
      bVar12 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar10 = iVar4 < 0;
      bVar11 = iVar4 == 0;
      if (bVar11 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar11 || bVar10 != bVar12) {
          bVar12 = SCARRY4(iVar4,iVar9);
          iVar4 = iVar4 + iVar9;
          bVar10 = iVar4 < 0;
          bVar11 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar10 != bVar12);
    }
    iVar9 = in_stack_00000074 - in_stack_00000078;
    if (iVar9 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar9;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar10 = in_stack_00000088 == 0;
        iVar6 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar6 = iVar9 - in_stack_00000088;
          bVar10 = iVar9 == in_stack_00000088;
        }
        if (!bVar10 && iVar6 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar9,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar10 = in_stack_00000090 == 0;
        iVar6 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar6 = in_stack_00000078 - in_stack_00000090;
          bVar10 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar10 &&
            iVar6 < 0 == (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar9;
      uVar13 = (**(code **)(in_stack_00000094 + (uint)*pbVar8 * 4))();
      return uVar13;
    }
  }
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


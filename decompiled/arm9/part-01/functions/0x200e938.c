// rea decompile_all
// name: z80_dispatch_0200e938
// address: 0x200e938
// body: available
// range: 0x200e938-0x200e97f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 z80_dispatch_0200e938(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 extraout_r1;
  undefined1 uVar3;
  int iVar4;
  uint unaff_r5;
  uint uVar5;
  int iVar6;
  uint unaff_r10;
  byte *unaff_r11;
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
  
  if (0x1fffffff < unaff_r10) {
    FUN_01002cec();
  }
  bVar1 = *(byte *)(param_4 + (unaff_r10 >> 0x10));
  bVar2 = (&DAT_0200de20)[(bVar1 & 0x7f) * 2];
  uVar5 = unaff_r5 & 0xffffff28;
  if ((bool)(bVar1 >> 7)) {
    uVar5 = uVar5 | 1;
  }
  uVar3 = (undefined1)((bVar1 & 0x7f) << 1);
  if (0x1fffffff < unaff_r10) {
    FUN_01002d2c();
    uVar3 = extraout_r1;
  }
  iVar7 = in_stack_00000028;
  *(undefined1 *)(param_4 + (unaff_r10 >> 0x10)) = uVar3;
  iVar6 = (uVar5 | bVar2) - 0xf0000;
                    /* WARNING: Could not recover jumptable at 0x0200e978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar6 != 0 && 0xeffff < (int)(uVar5 | bVar2)) {
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar11;
  }
  bVar8 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar8 = SCARRY4(iVar6,iVar7 * 0x10000);
    iVar6 = iVar6 + iVar7 * 0x10000;
    iVar7 = iVar6;
  }
  if (iVar7 != 0 && iVar7 < 0 == bVar8) {
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
    uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
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
      uVar11 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
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
      iVar4 = in_stack_00000088 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000088 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 1;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000088 = iVar4;
      } while (bVar8 != bVar10);
    }
    if ((in_stack_00000080 & 0x200) != 0) {
      iVar7 = in_stack_0000008c;
      if (in_stack_0000008c < 1) {
        iVar7 = in_stack_00000078;
      }
      bVar10 = SBORROW4(in_stack_00000090,in_stack_00000078);
      iVar4 = in_stack_00000090 - in_stack_00000078;
      bVar8 = iVar4 < 0;
      bVar9 = iVar4 == 0;
      if (bVar9 || in_stack_00000090 < in_stack_00000078) {
        in_stack_00000080 = in_stack_00000080 | 2;
      }
      do {
        if (bVar9 || bVar8 != bVar10) {
          bVar10 = SCARRY4(iVar4,iVar7);
          iVar4 = iVar4 + iVar7;
          bVar8 = iVar4 < 0;
          bVar9 = iVar4 == 0;
        }
        in_stack_00000090 = iVar4;
      } while (bVar8 != bVar10);
    }
    iVar7 = in_stack_00000074 - in_stack_00000078;
    if (iVar7 != 0 && in_stack_00000078 <= in_stack_00000074) {
      in_stack_00000078 = iVar7;
      if ((in_stack_00000080 & 0x100) != 0) {
        bVar8 = in_stack_00000088 == 0;
        iVar6 = in_stack_00000088;
        if (0 < in_stack_00000088) {
          iVar6 = iVar7 - in_stack_00000088;
          bVar8 = iVar7 == in_stack_00000088;
        }
        if (!bVar8 && iVar6 < 0 == (0 < in_stack_00000088 && SBORROW4(iVar7,in_stack_00000088))) {
          in_stack_00000078 = in_stack_00000088;
        }
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        bVar8 = in_stack_00000090 == 0;
        iVar6 = in_stack_00000090;
        if (0 < in_stack_00000090) {
          iVar6 = in_stack_00000078 - in_stack_00000090;
          bVar8 = in_stack_00000078 == in_stack_00000090;
        }
        if (!bVar8 && iVar6 < 0 ==
                      (0 < in_stack_00000090 && SBORROW4(in_stack_00000078,in_stack_00000090))) {
          in_stack_00000078 = in_stack_00000090;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      in_stack_00000074 = iVar7;
      uVar11 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
      return uVar11;
    }
  }
  return CONCAT44(&stack0x00000028,iVar6 >> 0x10);
}


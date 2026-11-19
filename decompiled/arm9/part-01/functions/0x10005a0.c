// rea decompile_all
// name: z80_dispatch_010005a0
// address: 0x10005a0
// body: available
// range: 0x10005a0-0x10005cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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


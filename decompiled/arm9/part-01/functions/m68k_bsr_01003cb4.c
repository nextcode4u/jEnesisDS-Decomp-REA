// Analysis annotation
// Role — m68k bsr
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include bsr (1). Example opcode
// words are 0x6100.

// rea decompile_all
// name: m68k_dispatch_01003cb4
// address: 0x1003cb4
// body: available
// range: 0x1003cb4-0x1003cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_01003cb4(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r7;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar5;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar1 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  uVar2 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar2;
  puVar5 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  iVar4 = unaff_r7 + -0x120000;
  puVar6 = puVar5;
  if (iVar4 != 0 && 0x11ffff < unaff_r7) {
    puVar6 = puVar5 + 1;
    unaff_r11 = (uint)*puVar5;
  }
  puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x01003cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x11ffff < unaff_r7) {
    iVar4 = (**(code **)(unaff_r9 + unaff_r11 * 4))();
    return iVar4;
  }
  *(int *)(unaff_r6 + 0x4c) = iVar4;
  *(ushort **)(unaff_r6 + 0x44) = puVar6;
  return iVar4 >> 0x10;
}


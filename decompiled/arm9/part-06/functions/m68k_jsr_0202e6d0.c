// Analysis annotation
// Role — m68k jsr
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include jsr (8). Example opcode
// words are 0x4EA8, 0x4EA9, 0x4EAA, 0x4EAB, 0x4EAC.

// rea decompile_all
// name: m68k_dispatch_0202e6d0
// address: 0x202e6d0
// body: available
// range: 0x202e6d0-0x202e753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202e6d0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  uVar2 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar4 = (short)(uVar2 >> 0x10);
  puVar4[1] = (short)uVar2;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar6 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar5 = unaff_r7 + -0x120000;
  if (iVar5 == 0 || unaff_r7 < 0x120000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar5 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar5;
}


// Analysis annotation
// Role — m68k jmp
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include jmp (8). Example opcode
// words are 0x4EE8, 0x4EE9, 0x4EEA, 0x4EEB, 0x4EEC.

// rea decompile_all
// name: m68k_dispatch_0202e420
// address: 0x202e420
// body: available
// range: 0x202e420-0x202e473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202e420(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xa0000;
  if (iVar3 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar4;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
  return iVar3;
}


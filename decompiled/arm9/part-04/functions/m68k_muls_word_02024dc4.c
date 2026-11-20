// Analysis annotation
// Role — m68k muls word
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include muls word (64). Example
// opcode words are 0xC1E0, 0xC1E1, 0xC1E2, 0xC1E3, 0xC1E4.

// rea decompile_all
// name: m68k_dispatch_02024dc4
// address: 0x2024dc4
// body: available
// range: 0x2024dc4-0x2024e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02024dc4(void)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + -2;
  sVar2 = FUN_010040c4();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


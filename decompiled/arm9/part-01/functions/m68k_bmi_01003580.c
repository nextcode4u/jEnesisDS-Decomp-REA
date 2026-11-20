// Analysis annotation
// Role — m68k bmi
// Basis — dispatch table
// Reached by 127 M68000 opcode-table slots. Decoded forms include bmi (127). Example
// opcode words are 0x6B01, 0x6B02, 0x6B03, 0x6B04, 0x6B05.

// rea decompile_all
// name: m68k_dispatch_01003580
// address: 0x1003580
// body: available
// range: 0x1003580-0x100359f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_01003580(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 8) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


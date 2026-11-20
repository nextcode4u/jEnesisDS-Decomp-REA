// Analysis annotation
// Role — m68k move word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include move word (8). Example
// opcode words are 0x40C0, 0x40C1, 0x40C2, 0x40C3, 0x40C4.

// rea decompile_all
// name: m68k_dispatch_0202df00
// address: 0x202df00
// body: available
// range: 0x202df00-0x202df27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0202df00(void)

{
  int unaff_r6;
  ushort unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (ushort)*(undefined4 *)(unaff_r6 + 0x50) & 0xa700 | unaff_r7 & 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0202df24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


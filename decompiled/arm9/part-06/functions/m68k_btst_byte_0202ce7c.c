// Analysis annotation
// Role — m68k btst byte
// Basis — dispatch table
// Reached by 16 M68000 opcode-table slots. Decoded forms include btst byte (8),
// unrecognized opcode (8). Example opcode words are 0x0828, 0x0829, 0x082A, 0x082B,
// 0x082C.

// rea decompile_all
// name: m68k_dispatch_0202ce7c
// address: 0x202ce7c
// body: available
// range: 0x202ce7c-0x202ceb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0202ce7c(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x0202ceb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


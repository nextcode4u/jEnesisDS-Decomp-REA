// Analysis annotation
// Role — m68k add byte
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include add byte (8). Example
// opcode words are 0xD03C, 0xD23C, 0xD43C, 0xD63C, 0xD83C.

// rea decompile_all
// name: m68k_dispatch_0201d4cc
// address: 0x201d4cc
// body: available
// range: 0x201d4cc-0x201d507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201d4cc(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*unaff_r10 * 0x1000000 +
              (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


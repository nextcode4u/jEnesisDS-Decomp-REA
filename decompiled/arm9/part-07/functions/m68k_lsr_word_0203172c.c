// Analysis annotation
// Role — m68k lsr word
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include lsr word (64). Example
// opcode words are 0xE068, 0xE069, 0xE06A, 0xE06B, 0xE06C.

// rea decompile_all
// name: m68k_dispatch_0203172c
// address: 0x203172c
// body: available
// range: 0x203172c-0x203178f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0203172c(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  if ((bVar2 & 0x3f) != 0) {
    *(ushort *)(unaff_r6 + iVar1) = *(ushort *)(unaff_r6 + iVar1) >> (bVar2 & 0x3f);
                    /* WARNING: Could not recover jumptable at 0x02031770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0203178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


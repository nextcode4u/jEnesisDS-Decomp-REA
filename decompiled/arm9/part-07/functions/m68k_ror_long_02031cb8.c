// Analysis annotation
// Role — m68k ror long
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include ror long (64). Example
// opcode words are 0xE0B8, 0xE0B9, 0xE0BA, 0xE0BB, 0xE0BC.

// rea decompile_all
// name: m68k_dispatch_02031cb8
// address: 0x2031cb8
// body: available
// range: 0x2031cb8-0x2031d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02031cb8(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar1 & 0x1f) != 0) {
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         uVar2 >> (bVar1 & 0x1f) | uVar2 << 0x20 - (bVar1 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x02031cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


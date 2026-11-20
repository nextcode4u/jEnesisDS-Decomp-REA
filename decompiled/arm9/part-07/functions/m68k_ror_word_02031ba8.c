// Analysis annotation
// Role — m68k ror word
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include ror word (64). Example
// opcode words are 0xE058, 0xE059, 0xE05A, 0xE05B, 0xE05C.

// rea decompile_all
// name: m68k_dispatch_02031ba8
// address: 0x2031ba8
// body: available
// range: 0x2031ba8-0x2031bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02031ba8(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  uVar2 = *(ushort *)(unaff_r6 + iVar1);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  *(ushort *)(unaff_r6 + iVar1) = uVar2 >> uVar3 | uVar2 << (0x10 - uVar3 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


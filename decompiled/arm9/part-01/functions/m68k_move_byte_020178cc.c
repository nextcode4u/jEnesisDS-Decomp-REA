// Analysis annotation
// Role — m68k move byte
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include move byte (64). Example
// opcode words are 0x1090, 0x1091, 0x1092, 0x1093, 0x1094.

// rea decompile_all
// name: m68k_dispatch_020178cc
// address: 0x20178cc
// body: available
// range: 0x20178cc-0x2017907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_020178cc(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


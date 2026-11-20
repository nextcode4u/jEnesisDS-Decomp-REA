// Analysis annotation
// Role — m68k unrecognized opcode
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include unrecognized opcode (8).
// Example opcode words are 0x13C8, 0x13C9, 0x13CA, 0x13CB, 0x13CC.

// rea decompile_all
// name: m68k_dispatch_0201777c
// address: 0x201777c
// body: available
// range: 0x201777c-0x20177b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201777c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdf < (*unaff_r10 & 0xf0)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar1 >> 0x10])(uVar1);
  return;
}


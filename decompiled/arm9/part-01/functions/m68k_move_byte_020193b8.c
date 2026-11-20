// Analysis annotation
// Role — m68k move byte
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include move byte (8). Example
// opcode words are 0x13E8, 0x13E9, 0x13EA, 0x13EB, 0x13EC.

// rea decompile_all
// name: m68k_dispatch_020193b8
// address: 0x20193b8
// body: available
// range: 0x20193b8-0x20193fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_020193b8(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if (0xdf < (unaff_r10[1] & 0xf0U)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar2 >> 0x10])(uVar2);
  return;
}


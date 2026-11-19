// rea decompile_all
// name: m68k_dispatch_0201bd98
// address: 0x201bd98
// body: available
// range: 0x201bd98-0x201bdc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201bd98(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = *unaff_r10;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


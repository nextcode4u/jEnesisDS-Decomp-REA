// rea decompile_all
// name: FUN_01004144
// address: 0x1004144
// body: available
// range: 0x1004144-0x100415f inclusive
// range: 0x2003cf8-0x2003d1f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_01004144(uint param_1,undefined1 param_2)

{
  int unaff_r8;
  
  if (0xdfffff < (param_1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((param_1 ^ 1) & 0xffff)) = param_2;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(param_1 & 0xffffff) >> 0x10])(param_1 & 0xffffff);
  return;
}


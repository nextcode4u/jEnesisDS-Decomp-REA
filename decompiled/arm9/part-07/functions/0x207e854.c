// rea decompile_all
// name: FUN_0207e854
// address: 0x207e854
// body: available
// range: 0x207e854-0x207e893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0207e854(void)

{
  uint uVar1;
  
  if (((DAT_027ff017 - 6 < 0x5e) && (DAT_027ff018 - 1 < 0xc)) && (DAT_027ff019 - 1 < 0x1f)) {
    uVar1 = (DAT_027ff017 + 0x14 & 0x7f) * 0x200 | (DAT_027ff018 & 0xf) << 5 | DAT_027ff019 & 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


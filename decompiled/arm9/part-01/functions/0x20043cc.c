// rea decompile_all
// name: FUN_020043cc
// address: 0x20043cc
// body: available
// range: 0x20043cc-0x20043ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_020043cc(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = DAT_02099004;
  DAT_02099004 = DAT_02099004 + 1;
  bVar2 = DAT_0208f349 & 1;
  if (10 < uVar1) {
    bVar2 = bVar2 ^ 1;
  }
  DAT_0b0000a8 = 1;
  return bVar2;
}


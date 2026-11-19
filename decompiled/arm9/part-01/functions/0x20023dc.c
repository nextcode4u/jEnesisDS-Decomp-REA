// rea decompile_all
// name: thunk_FUN_02006908
// address: 0x20023dc
// body: available
// range: 0x20023dc-0x20023df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_02006908(uint param_1)

{
  _DAT_06201542 = (short)(((param_1 / 100) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201544 = (short)(((param_1 / 10) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201546 = (short)((param_1 % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201586 = _DAT_06201546 + 10;
  _DAT_06201582 = _DAT_06201542 + 10;
  _DAT_06201584 = _DAT_06201544 + 10;
  return;
}


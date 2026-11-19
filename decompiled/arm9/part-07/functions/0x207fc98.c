// rea decompile_all
// name: FUN_0207fc98
// address: 0x207fc98
// body: available
// range: 0x207fc98-0x207fccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0207fc98(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_04000240;
  _DAT_04000240 = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,param_1))) | 0x80808080;
  return uVar1;
}


// Analysis annotation
// Role — write interrupt master enable and interrupt enable
// Basis — pseudocode clue
// Pseudocode writes 0x04000208 (interrupt master enable), 0x04000210 (interrupt enable),
// 0x04000214 (interrupt flags).

// rea decompile_all
// name: FUN_020801cc
// address: 0x20801cc
// body: available
// range: 0x20801cc-0x20801e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020801cc(undefined4 param_1)

{
  _DAT_04000214 = 0xffffffff;
  _DAT_04000210 = 0;
  _DAT_0b003ffc = param_1;
  _DAT_04000208 = 1;
  return;
}


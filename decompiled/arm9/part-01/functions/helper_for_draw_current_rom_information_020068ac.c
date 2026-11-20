// Analysis annotation
// Role — helper for draw current rom information
// Basis — call context
// Referenced by draw current rom information at 0x020027D0. The filename describes that
// caller relationship.

// rea decompile_all
// name: FUN_020068ac
// address: 0x20068ac
// body: available
// range: 0x20068ac-0x2006903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020068ac(int param_1)

{
  if (param_1 != 0) {
    _DAT_0620158c = 0x69;
    _DAT_0620154a = 0x5a;
    _DAT_0620154c = 0x5b;
    _DAT_0620158a = 0x68;
    return;
  }
  _DAT_0620158c = 0x67;
  _DAT_0620154a = 0x58;
  _DAT_0620154c = 0x59;
  _DAT_0620158a = 0x66;
  return;
}


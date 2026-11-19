// rea decompile_all
// name: FUN_020072a8
// address: 0x20072a8
// body: available
// range: 0x20072a8-0x2007327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020072a8(int param_1)

{
  if (DAT_0208f34c != param_1) {
    if (param_1 != 0) {
      DAT_023dc5b0 = 0x5430;
      DAT_023dc5a8 = FUN_02007aac;
      DAT_023dc5b8 = FUN_02008320;
      DAT_023dc5ac = 0x5032;
      DAT_0208f34c = param_1;
      return;
    }
    DAT_023dc5b0 = 0x1430;
    DAT_023dc5a8 = FUN_02007a2c;
    DAT_023dc5b8 = FUN_02008270;
    DAT_023dc5ac = 0x1032;
  }
  DAT_0208f34c = param_1;
  return;
}


// Analysis annotation
// Role — transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators.

// rea decompile_all
// name: FUN_020004e0
// address: 0x20004e0
// body: available
// range: 0x20004e0-0x20004eb inclusive
// range: 0x20050cc-0x2005127 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020004e0(int param_1)

{
  int iVar1;
  
  DAT_0b00014c = (undefined1)param_1;
  if (param_1 == 0) {
    DAT_0b00014c = 0;
  }
  DAT_0b00014d = param_1 != 0;
  iVar1 = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
  DAT_0b000143 = (char)((uint)iVar1 >> 0x18);
  DAT_0b000141 = (char)((uint)iVar1 >> 8);
  DAT_0b000142 = (char)((uint)iVar1 >> 0x10);
  DAT_0b000140 = (char)iVar1;
  return;
}


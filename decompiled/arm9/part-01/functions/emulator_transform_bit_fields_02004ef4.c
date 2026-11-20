// Analysis annotation
// Role — emulator transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02004ef4
// address: 0x2004ef4
// body: available
// range: 0x2004ef4-0x2004f6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02004ef4(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(uint *)(param_1 + 0x4a4) & ~param_2;
  }
  else {
    param_2 = param_2 | *(uint *)(param_1 + 0x4a4);
  }
  *(char *)(param_1 + 0x4a7) = (char)(param_2 >> 0x18);
  *(char *)(param_1 + 0x4a5) = (char)(param_2 >> 8);
  *(char *)(param_1 + 0x4a6) = (char)(param_2 >> 0x10);
  *(char *)(param_1 + 0x4a4) = (char)param_2;
  return;
}


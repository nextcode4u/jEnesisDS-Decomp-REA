// Analysis annotation
// Role — emulator transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02004adc
// address: 0x2004adc
// body: available
// range: 0x2004adc-0x2004b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_02004adc(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xa10020) {
    uVar1 = FUN_020003f4(param_1 & 0xff);
    uVar1 = uVar1 & 0xff;
  }
  else if (param_1 == 0xa11100) {
    uVar1 = FUN_020043cc();
  }
  else if (param_1 == 0xa130f1) {
    uVar1 = DAT_0208f34a & 1;
  }
  else if (param_1 - 0xa130f3 < 0xd) {
    uVar1 = (uint)(byte)(&DAT_02099014)[((param_1 & 0xf) >> 1) * 4];
  }
  else {
    uVar1 = FUN_02004368();
  }
  return uVar1;
}


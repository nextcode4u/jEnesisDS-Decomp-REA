// Analysis annotation
// Role — emulator transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02004a1c
// address: 0x2004a1c
// body: available
// range: 0x2004a1c-0x2004aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_02004a1c(uint param_1)

{
  uint uVar1;
  
  if (DAT_0208f349 != '\x01') {
    uVar1 = param_1 & 0x6000;
    if (uVar1 == 0x2000) {
LAB_02004a70:
      uVar1 = FUN_02004c24(param_1 & 0x1fff);
      return uVar1;
    }
    if (uVar1 < 0x2001) {
      if (uVar1 == 0) goto LAB_02004a70;
    }
    else {
      if (uVar1 == 0x4000) {
        uVar1 = FUN_02005b7c();
        return uVar1 & 0xff;
      }
      if (uVar1 == 0x6000) {
        if ((param_1 & 0xff00) == 0x7f00) {
          uVar1 = FUN_020043bc(param_1);
          return uVar1;
        }
        return 0xff;
      }
    }
  }
  uVar1 = FUN_02004368(param_1);
  return uVar1;
}


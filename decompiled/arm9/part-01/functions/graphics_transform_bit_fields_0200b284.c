// Analysis annotation
// Role — graphics transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_0200b284
// address: 0x200b284
// body: available
// range: 0x200b284-0x200b33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x020050e0) */
/* WARNING: Removing unreachable block (ram,0x020050e4) */

void FUN_0200b284(uint param_1)

{
  int iVar1;
  
  DAT_0b003624 = param_1;
  if ((((DAT_0b003644 != '\0') && (DAT_0b00362d != '\0')) && (DAT_0b003628 == 0)) &&
     (0x22 < param_1)) {
    FUN_020004e0(4);
    DAT_0b003628 = 1;
  }
  if (((DAT_0b00362c != '\0') && (DAT_0b00362e != '\0')) &&
     ((0x8e < DAT_0b003624 || ((DAT_0b00362d == '\0' && (0xc < DAT_0b003624)))))) {
    DAT_0b00014d = 1;
    DAT_0b00014c = 6;
    iVar1 = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
    DAT_0b000143 = (char)((uint)iVar1 >> 0x18);
    DAT_0b000141 = (char)((uint)iVar1 >> 8);
    DAT_0b000142 = (char)((uint)iVar1 >> 0x10);
    DAT_0b000140 = (char)iVar1;
    return;
  }
  return;
}


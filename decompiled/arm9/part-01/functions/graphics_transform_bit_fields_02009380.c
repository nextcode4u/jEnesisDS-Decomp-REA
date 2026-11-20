// Analysis annotation
// Role — graphics transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_02009380
// address: 0x2009380
// body: available
// range: 0x2009380-0x200942b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_02009380(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = DAT_0b00363c & 0xf;
  DAT_020b4bf5 = 0;
  if (uVar2 == 4) {
    uVar2 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return *(undefined2 *)((int)&DAT_0b00364c + uVar2);
  }
  if (uVar2 == 8) {
    uVar2 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return *(undefined2 *)((int)&DAT_023dc6b0 + uVar2);
  }
  if (uVar2 == 0) {
    uVar1 = *(undefined2 *)(&DAT_0209cbec + (DAT_0b003638 & 0xfffe));
  }
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return uVar1;
}


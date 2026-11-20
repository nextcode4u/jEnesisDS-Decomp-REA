// Analysis annotation
// Role — graphics transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_0200b438
// address: 0x200b438
// body: available
// range: 0x200b438-0x200b64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200b438(void)

{
  int iVar1;
  
  DAT_0b003620 = (int)DAT_020b4bf8;
  DAT_0b000098 = DAT_0b000098 ^ 0x10;
  DAT_0b003624 = 0;
  DAT_0b00361c = 0;
  DAT_0b00007c = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  if ((DAT_023dc8b0 != DAT_023dc8c8) || (iVar1 = FUN_020075ac(2), iVar1 != 0)) {
    if (DAT_023ddb05 == '\0') {
      FUN_020072a8();
      FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x800,2);
    }
    else {
      FUN_020072a8(1);
      FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x1000,2);
    }
  }
  DAT_023dceac = DAT_023ddeb2;
  DAT_023dc8b2 = DAT_023dc8ae;
  DAT_023dc8ac = DAT_023dd370;
  DAT_023dc8b0 = DAT_023dc8c8;
  if (DAT_0208f358 == 0) {
    iVar1 = FUN_020075ac(0);
    if ((iVar1 != 0) || (DAT_023dc8a4 != 0)) {
      FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
      DAT_023dc8a4 = 0;
    }
    iVar1 = FUN_020075ac(1);
    if ((iVar1 != 0) || (DAT_023dc8a8 != 0)) {
      FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
      DAT_023dc8a8 = 0;
    }
  }
  else {
    DAT_0208f358 = 0;
    FUN_02006f2c(DAT_023dcfa4);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
  }
  DAT_020b4c15 = 1;
  FUN_02008984(&DAT_0209cbec,(int)DAT_020b4c0a);
  DAT_020b4c15 = 0;
  return;
}


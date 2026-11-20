// Analysis annotation
// Role — helper calls run z80 cycle budget
// Basis — call context
// Calls run z80 cycle budget at 0x0200DF50. This file's full role is still open.

// rea decompile_all
// name: FUN_02000588
// address: 0x2000588
// body: available
// range: 0x2000588-0x2000693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02000588(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_02098f90 - DAT_02098f98;
  if (0x3fff < uVar1) {
    uVar2 = (uVar1 + ((uVar1 - 0x4000) / 0x3fff) * -0x3fff) - 0x3fff;
    do {
      while (((uVar1 = uVar1 - 0x3fff, (DAT_023cb610 & 2) == 0 && (DAT_02099001 == '\x01')) &&
             (DAT_02099000 == '\0'))) {
        FUN_0200df50(&DAT_0b000158,0x3fff);
        if (uVar1 == uVar2) goto LAB_02000634;
      }
    } while (uVar1 != uVar2);
  }
LAB_02000634:
  if (((uVar1 != 0) && ((DAT_023cb610 & 2) == 0)) &&
     ((DAT_02099001 == '\x01' && (DAT_02099000 == '\0')))) {
    FUN_0200df50(&DAT_0b000158,uVar1);
  }
  DAT_02098f98 = DAT_02098f90;
  DAT_02098f9c = DAT_02098f94;
  DAT_0b0000a8 = 0;
  return;
}


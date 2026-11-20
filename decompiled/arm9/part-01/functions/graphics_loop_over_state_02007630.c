// Analysis annotation
// Role — graphics loop over state
// Basis — pseudocode clue
// The pseudocode contains a processing loop. Location suggests the graphics region.

// rea decompile_all
// name: FUN_02007630
// address: 0x2007630
// body: available
// range: 0x2007630-0x200769f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02007630(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  (&DAT_0209c3cc)[param_3] = 0x3fe;
  FUN_020075d0(param_3);
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 2;
      (*DAT_023dc69c)(param_3,uVar1,*param_1);
      uVar1 = uVar2;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  if ((DAT_023cb610 & 8) == 0) {
    (&DAT_0209c3d4)[param_3] = 0;
  }
  return;
}


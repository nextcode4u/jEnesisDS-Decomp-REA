// Analysis annotation
// Role — helper for enumerate rom browser directory
// Basis — call context
// Referenced by enumerate rom browser directory at 0x020032A8. The filename describes that
// caller relationship.

// rea decompile_all
// name: FUN_020857d4
// address: 0x20857d4
// body: available
// range: 0x20857d4-0x208588f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_020857d4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_02084ee0();
  if ((iVar1 == -1) || (*(int *)((&DAT_0208fbc0)[iVar1] + 0x3c) == 0)) {
    piVar2 = (int *)0x0;
    DAT_0208f3a0 = 0x58;
  }
  else {
    piVar2 = (int *)FUN_02082724(*(int *)((&DAT_0208fbc0)[iVar1] + 0x38) + 8);
    if (piVar2 == (int *)0x0) {
      DAT_0208f3a0 = 0x3f;
    }
    else {
      piVar2[1] = (int)(piVar2 + 2);
      *piVar2 = iVar1;
      iVar1 = (**(code **)((&DAT_0208fbc0)[iVar1] + 0x3c))(&DAT_0208f3a0,piVar2,param_1);
      if (iVar1 == 0) {
        FUN_020826fc(piVar2);
        piVar2 = (int *)0x0;
      }
    }
  }
  return piVar2;
}


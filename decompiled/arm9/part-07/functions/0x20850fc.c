// rea decompile_all
// name: FUN_020850fc
// address: 0x20850fc
// body: available
// range: 0x20850fc-0x20851c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_020850fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_02084ee0();
  if ((iVar2 == -1) || (*(int *)((&DAT_0208fbc0)[iVar2] + 8) == 0)) {
    DAT_0208f3a0 = 0x58;
    piVar4 = (int *)0xffffffff;
    uVar1 = DAT_0208f3a0;
  }
  else {
    piVar3 = (int *)FUN_02082724(*(int *)((&DAT_0208fbc0)[iVar2] + 4) + 8);
    if (piVar3 == (int *)0x0) {
      param_2 = 0x3f;
    }
    piVar4 = (int *)0xffffffff;
    uVar1 = param_2;
    if (piVar3 != (int *)0x0) {
      iVar5 = (&DAT_0208fbc0)[iVar2];
      *piVar3 = iVar2;
      piVar3[1] = (int)(piVar3 + 2);
      iVar2 = (**(code **)(iVar5 + 8))(&DAT_0208f3a0,piVar3 + 2,param_1,param_2,param_3);
      piVar4 = piVar3;
      uVar1 = DAT_0208f3a0;
      if (iVar2 == -1) {
        FUN_020826fc(piVar3);
        piVar4 = (int *)0xffffffff;
        uVar1 = DAT_0208f3a0;
      }
    }
  }
  DAT_0208f3a0 = uVar1;
  return piVar4;
}


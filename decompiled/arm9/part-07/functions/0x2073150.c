// rea decompile_all
// name: FUN_02073150
// address: 0x2073150
// body: available
// range: 0x2073150-0x20731b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_02073150(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((&DAT_020b4c5c)[param_1] == 0) {
    if (param_1 == 1) {
      iVar1 = FUN_020731f8();
    }
    else {
      if (param_1 != 2) {
        return false;
      }
      iVar1 = FUN_020731bc();
    }
    if (iVar1 != 0) {
      piVar2 = &DAT_020b4c5c;
      while ((piVar3 = piVar2, piVar2 = (int *)*piVar3, piVar2 == (int *)0x0 || (iVar1 != *piVar2)))
      {
        piVar2 = piVar3 + 1;
        if (piVar3 + 1 == &DAT_020b4c6c) {
          iVar1 = FUN_02072e70(iVar1,param_2);
          piVar3[param_1 + -3] = iVar1;
          return iVar1 != 0;
        }
      }
      (&DAT_020b4c5c)[param_1] = piVar2;
      return true;
    }
  }
  return false;
}


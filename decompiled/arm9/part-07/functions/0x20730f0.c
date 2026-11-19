// rea decompile_all
// name: FUN_020730f0
// address: 0x20730f0
// body: available
// range: 0x20730f0-0x2073149 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_020730f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_020b4c68 == (int *)0x0) && (param_1 != 0)) {
    piVar3 = &DAT_020b4c5c;
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      if ((piVar3 != (int *)0x0) && (param_1 == *piVar3)) {
        DAT_020b4c68 = piVar3;
        return 1;
      }
      piVar3 = piVar4 + 1;
    } while (piVar4 + 1 != &DAT_020b4c6c);
    iVar2 = FUN_02072e70(param_1,param_2);
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// rea decompile_all
// name: FUN_020821cc
// address: 0x20821cc
// body: available
// range: 0x20821cc-0x208225b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_020821cc(int param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_02081248();
  piVar5 = (int *)(param_1 + 0x2e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = piVar5[1];
      iVar2 = piVar5[2];
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if ((*(short *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 0x10) != -1)) {
            uVar1 = (*param_2)(iVar2);
            uVar6 = uVar6 | uVar1;
          }
          iVar2 = iVar2 + 0x60;
        } while (iVar4 != iVar3);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  FUN_0208124c();
  return uVar6;
}


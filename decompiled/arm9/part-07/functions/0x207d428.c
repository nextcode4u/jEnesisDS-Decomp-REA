// rea decompile_all
// name: FUN_0207d428
// address: 0x207d428
// body: available
// range: 0x207d428-0x207d4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0207d428(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_150 [11];
  byte local_145;
  
  piVar4 = *(int **)(param_2 + 4);
  iVar2 = FUN_02072d38(param_3);
  *piVar4 = iVar2;
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
    *param_1 = 0x13;
  }
  else {
    iVar3 = thunk_FUN_020836d4(param_3,0x3a);
    if (iVar3 != 0) {
      param_3 = iVar3 + 1;
      iVar3 = thunk_FUN_020836d4(param_3,0x3a);
      if (iVar3 != 0) {
        *param_1 = 0x16;
        return (int *)0x0;
      }
    }
    iVar2 = FUN_0207f07c(iVar2,auStack_150,param_3,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      piVar4 = (int *)0x0;
    }
    else if ((int)((uint)local_145 << 0x1b) < 0) {
      iVar2 = FUN_0207ed1c(auStack_150);
      piVar4[0x4f] = iVar2;
      uVar1 = FUN_0207efc4(*piVar4,piVar4 + 1,iVar2);
      *(undefined1 *)((int)piVar4 + 0x141) = uVar1;
      *(undefined1 *)(piVar4 + 0x50) = 1;
    }
    else {
      piVar4 = (int *)0x0;
      *param_1 = 0x14;
    }
  }
  return piVar4;
}


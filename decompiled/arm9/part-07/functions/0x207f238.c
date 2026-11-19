// rea decompile_all
// name: FUN_0207f238
// address: 0x207f238
// body: available
// range: 0x207f238-0x207f2cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0207f238(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_02083ed0(param_1,0xd);
  if ((0xc < uVar1) || (iVar2 = thunk_FUN_02083f18(param_1,"\\/:;*?\"<>|&+,=[]"), iVar2 != 0)) {
    return 0;
  }
  iVar2 = thunk_FUN_02083ed0(param_1,0xd);
  if (iVar2 != 0) {
    if (*param_1 < 0x20) {
      return 0;
    }
    iVar3 = 0;
    while (iVar3 = iVar3 + 1, iVar2 != iVar3) {
      if (param_1[iVar3] < 0x20) {
        return 0;
      }
    }
  }
  iVar3 = thunk_FUN_020836d4(param_1,0x2e);
  if (iVar3 == 0) {
    uVar1 = 0;
    if (iVar2 - 1U < 8) goto LAB_0207f2b8;
  }
  else {
    iVar2 = thunk_FUN_02083f68(param_1,0x2e);
    if (iVar3 != iVar2) {
      return 0;
    }
    if (7 < (iVar3 - (int)param_1) - 2U) {
      return 0;
    }
    uVar1 = thunk_FUN_02083ed0(iVar3 + 1,0xd);
    if (3 < uVar1) {
      return 0;
    }
    iVar2 = thunk_FUN_02083ed0(iVar3 + 1,0xd);
    uVar1 = 0;
    if (iVar2 != 0) goto LAB_0207f2b8;
  }
  uVar1 = 1;
LAB_0207f2b8:
  return uVar1 ^ 1;
}


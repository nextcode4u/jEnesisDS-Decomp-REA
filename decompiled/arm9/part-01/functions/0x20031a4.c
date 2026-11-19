// rea decompile_all
// name: FUN_020031a4
// address: 0x20031a4
// body: available
// range: 0x20031a4-0x200328f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020031a4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = FUN_02083a6c();
  if (param_2 != 2) {
    iVar5 = param_1 + iVar2 + -4;
    iVar2 = FUN_02083638(&DAT_0208f20c,iVar5);
    if (((iVar2 != 0) && (iVar2 = FUN_02083638(&DAT_0208f214,iVar5), iVar2 != 0)) &&
       (iVar2 = FUN_02083638(&DAT_0208f21c,iVar5), iVar2 != 0)) {
      return;
    }
  }
  puVar4 = DAT_02098ff4;
  if (DAT_02098ff4 == (undefined4 *)0x0) {
    DAT_02098ff4 = (undefined4 *)FUN_02082724(0x10c);
    DAT_02098ff4[1] = 0;
  }
  else {
    uVar3 = FUN_02082724(0x10c);
    *puVar4 = uVar3;
    puVar4 = (undefined4 *)*DAT_02098ff4;
    puVar4[1] = DAT_02098ff4;
    DAT_02098ff4 = puVar4;
  }
  FUN_020838bc(DAT_02098ff4 + 3,param_1);
  puVar1 = DAT_02098ff4;
  puVar4 = DAT_02098ff0;
  DAT_02098ff4[2] = param_2;
  *puVar1 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_02098ff0 = puVar1;
  }
  DAT_02098fd4 = DAT_02098fd4 + 1;
  return;
}


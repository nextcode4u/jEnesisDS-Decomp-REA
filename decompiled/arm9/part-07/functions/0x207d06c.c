// rea decompile_all
// name: FUN_0207d06c
// address: 0x207d06c
// body: available
// range: 0x207d06c-0x207d0a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207d06c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((uint)(param_4 + param_5) < 0x201) && (iVar2 = FUN_0207ce80(param_1,param_3), iVar2 != -1)) {
    thunk_FUN_02082ec0(param_2,iVar2 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_5);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


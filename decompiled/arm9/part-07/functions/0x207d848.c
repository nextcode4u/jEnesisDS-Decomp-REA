// rea decompile_all
// name: FUN_0207d848
// address: 0x207d848
// body: available
// range: 0x207d848-0x207d8b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207d848(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [260];
  
  if ((param_2 == (undefined4 *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) {
    *param_1 = 9;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_2[10];
    local_138 = param_2[0xb];
    uStack_134 = param_2[0xc];
    uStack_130 = param_2[0xd];
    local_12c = param_2[0xe];
    uStack_128 = param_2[0xf];
    uStack_124 = param_2[0x10];
    iVar2 = FUN_0207f320(uVar1,auStack_158,auStack_120,param_2 + 0x11);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
      *param_1 = 5;
    }
    else {
      FUN_0207f4f0(uVar1,auStack_158,param_3);
      uVar1 = 0;
      *(undefined4 *)(param_3 + 4) = param_2[1];
      *(undefined4 *)(param_3 + 0x18) = *param_2;
    }
  }
  return uVar1;
}


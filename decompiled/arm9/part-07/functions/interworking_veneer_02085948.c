// Analysis annotation
// Role — interworking veneer
// Basis — control flow
// Ghidra identifies a thunk to 0x0208553C. The target's purpose is still open.

// rea decompile_all
// name: thunk_FUN_0208553c
// address: 0x2085948
// body: available
// range: 0x2085948-0x2085949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 thunk_FUN_0208553c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_410 [1024];
  
  uVar1 = FUN_02083ed0(param_1,0x401);
  if (uVar1 < 0x400) {
    iVar2 = FUN_020836d4(param_1,0x3a);
    if (iVar2 == 0) {
      FUN_02083dbc(auStack_410,&DAT_0208fc04,0x400);
    }
    else {
      FUN_02083dbc(auStack_410,param_1,0x400);
      param_1 = FUN_020836d4(param_1,0x3a);
      param_1 = param_1 + 1;
    }
    iVar2 = FUN_020836d4(auStack_410,0x3a);
    if (*(char *)(iVar2 + 1) == '/') {
      iVar2 = FUN_02085394(&DAT_0208f3a0,auStack_410,param_1,0x400);
      if (iVar2 != -1) {
        iVar2 = FUN_02084ee0(auStack_410);
        if ((iVar2 < 0) || (*(code **)((&DAT_0208fbc0)[iVar2] + 0x2c) == (code *)0x0)) {
          DAT_0208f3a0 = 0x13;
          return 0xffffffff;
        }
        iVar3 = (**(code **)((&DAT_0208fbc0)[iVar2] + 0x2c))(&DAT_0208f3a0,auStack_410);
        if (iVar3 != -1) {
          FUN_02084e34(iVar2);
          FUN_02083dbc(&DAT_0208fc04,auStack_410,0x400);
          return 0;
        }
      }
    }
    else {
      DAT_0208f3a0 = 2;
    }
  }
  else {
    DAT_0208f3a0 = 0x5b;
  }
  return 0xffffffff;
}


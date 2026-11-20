// Analysis annotation
// Role — fat fat stat r
// Basis — library match
// Matches symbol _FAT_stat_r in libfat-nds 20070127 (fatdir.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_0207d1f8
// address: 0x207d1f8
// body: available
// range: 0x207d1f8-0x207d26d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207d1f8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_150 [312];
  
  iVar1 = FUN_02072d38(param_2);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    *param_1 = 0x13;
  }
  else {
    iVar2 = thunk_FUN_020836d4(param_2,0x3a);
    if (iVar2 != 0) {
      param_2 = iVar2 + 1;
      iVar2 = thunk_FUN_020836d4(param_2,0x3a);
      if (iVar2 != 0) {
        *param_1 = 0x16;
        return 0xffffffff;
      }
    }
    iVar2 = FUN_0207f07c(iVar1,auStack_150,param_2,0);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      *param_1 = 2;
    }
    else {
      FUN_0207f4f0(iVar1,auStack_150,param_3);
      uVar3 = 0;
    }
  }
  return uVar3;
}


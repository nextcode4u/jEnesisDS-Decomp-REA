// rea decompile_all
// name: FUN_02072e14
// address: 0x2072e14
// body: available
// range: 0x2072e14-0x2072e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02072e14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_020b4c5c)[param_1];
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 0)) {
    uVar2 = 0;
  }
  else {
    if (iVar1 == DAT_020b4c5c) {
      DAT_020b4c5c = 0;
    }
    if (iVar1 == DAT_020b4c60) {
      DAT_020b4c60 = 0;
    }
    if (iVar1 == DAT_020b4c64) {
      DAT_020b4c64 = 0;
    }
    if (iVar1 == DAT_020b4c68) {
      DAT_020b4c68 = 0;
    }
    FUN_02072d9c();
    uVar2 = 1;
  }
  return uVar2;
}


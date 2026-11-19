// rea decompile_all
// name: FUN_02072db4
// address: 0x2072db4
// body: available
// range: 0x2072db4-0x2072e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02072db4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (&DAT_020b4c5c)[param_1];
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 == DAT_020b4c5c) {
      DAT_020b4c5c = 0;
    }
    if (iVar2 == DAT_020b4c60) {
      DAT_020b4c60 = 0;
    }
    if (iVar2 == DAT_020b4c64) {
      DAT_020b4c64 = 0;
    }
    if (iVar2 == DAT_020b4c68) {
      DAT_020b4c68 = 0;
    }
    FUN_0207cf90(*(undefined4 *)(iVar2 + 4));
    FUN_02072d9c(iVar2);
    uVar1 = 1;
  }
  return uVar1;
}


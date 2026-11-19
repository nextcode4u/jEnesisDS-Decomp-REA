// rea decompile_all
// name: FUN_02072c8c
// address: 0x2072c8c
// body: available
// range: 0x2072c8c-0x2072cd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02072c8c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02073150(1,param_1);
  iVar2 = FUN_02073150(2,param_1);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    FUN_02072cec(2);
  }
  else {
    FUN_02072cec(1);
  }
  thunk_FUN_02084e4c("");
  if (param_2 != 0) {
    thunk_FUN_0208553c(&DAT_0208f2f8);
  }
  return 1;
}


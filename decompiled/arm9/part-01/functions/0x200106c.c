// rea decompile_all
// name: FUN_0200106c
// address: 0x200106c
// body: available
// range: 0x200106c-0x2001103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200106c(void)

{
  if (DAT_02098fc4 == 0) {
    thunk_FUN_02080100();
  }
  else if (DAT_02098fc4 == 1) {
    thunk_FUN_0208024c(1);
    thunk_FUN_0208014c(1);
  }
  DAT_02098fc4 = 2;
  thunk_FUN_02080098(2,&LAB_02000f1c);
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0xc000;
  DAT_020b4ce8 = 0;
  thunk_FUN_02080098(4,FUN_02000f3c);
  thunk_FUN_02080098(1,&LAB_02000fdc);
  _DAT_04000004 = _DAT_04000004 | 0x38;
  _DAT_04000210 = _DAT_04000210 | 7;
  _DAT_04000208 = 1;
  return;
}


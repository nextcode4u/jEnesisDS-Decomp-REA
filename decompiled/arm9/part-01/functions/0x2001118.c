// rea decompile_all
// name: FUN_02001118
// address: 0x2001118
// body: available
// range: 0x2001118-0x2001177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02080216) */
/* WARNING: Removing unreachable block (ram,0x02080228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02001118(void)

{
  if (DAT_02098fc4 == 0) {
    thunk_FUN_02080100();
  }
  else if (DAT_02098fc4 == 2) {
    thunk_FUN_0208024c(2);
    thunk_FUN_0208014c(2);
  }
  DAT_02098fc4 = 1;
  thunk_FUN_02080098(1,&DAT_02000f18);
  _DAT_04000004 = _DAT_04000004 | 8;
  _DAT_04000210 = _DAT_04000210 | 1;
  _DAT_04000208 = 1;
  return;
}


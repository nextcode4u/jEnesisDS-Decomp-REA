// rea decompile_all
// name: FUN_0200311c
// address: 0x200311c
// body: available
// range: 0x200311c-0x2003193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200311c(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_02098ff0 != (int *)0x0) {
    piVar2 = (int *)DAT_02098ff0[1];
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      DAT_02098ff0 = piVar1;
      piVar2 = (int *)piVar1[1];
    }
    do {
      piVar2 = (int *)*DAT_02098ff0;
      FUN_020826fc();
      DAT_02098ff0 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  DAT_02098fd8 = 0;
  DAT_02098ff0 = (int *)0x0;
  DAT_02098ff4 = 0;
  DAT_02098fd4 = 0;
  return;
}


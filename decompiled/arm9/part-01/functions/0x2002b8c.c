// rea decompile_all
// name: FUN_02002b8c
// address: 0x2002b8c
// body: available
// range: 0x2002b8c-0x2002bd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02002b8c(void)

{
  undefined4 extraout_r1;
  int iVar1;
  int iVar2;
  
  FUN_02006b90(DAT_0208f344);
  DAT_02098fe4 = 0;
  DAT_0208f344 = 4;
  FUN_0208047c(DAT_02098fe0 + 1,DAT_02098fd8);
  uRam06201100 = 0x4b;
  uRam0620113e = 1099;
  iVar1 = 0;
  DAT_02098fe0 = extraout_r1;
  do {
    iVar2 = iVar1 + 2;
    *(undefined2 *)(iVar1 + 0x6201102) = 0x4c;
    iVar1 = iVar2;
  } while (iVar2 != 0x3c);
  return;
}


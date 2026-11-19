// rea decompile_all
// name: FUN_020032a8
// address: 0x20032a8
// body: available
// range: 0x20032a8-0x2003383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020032a8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [8];
  uint local_4c;
  
  FUN_0200311c();
  DAT_023cb614 = FUN_020857d4(&DAT_0208f224);
  while (iVar1 = FUN_020856f0(DAT_023cb614,&DAT_023cb510,auStack_54), iVar1 == 0) {
    while (iVar1 = FUN_020837ec(&DAT_023cb510,&DAT_0208f224), iVar1 != 0) {
      if ((local_4c & 0x4000) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      FUN_020031a4(&DAT_023cb510,uVar2);
      iVar1 = FUN_020856f0(DAT_023cb614,&DAT_023cb510,auStack_54);
      if (iVar1 != 0) goto LAB_02003330;
    }
  }
LAB_02003330:
  DAT_02098fd8 = (DAT_02098fd4 - 1U >> 4) + 1;
  DAT_02098fe0 = 0;
  DAT_02098fe4 = 0;
  FUN_02006b90(DAT_0208f344);
  DAT_0208f344 = 4;
  FUN_02085760(DAT_023cb614);
  return;
}


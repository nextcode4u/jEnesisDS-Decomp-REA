// rea decompile_all
// name: FUN_020033a4
// address: 0x20033a4
// body: available
// range: 0x20033a4-0x200349b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_020033a4(uint param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 < DAT_02098fd4) {
    piVar2 = DAT_02098ff0;
    if (param_1 != 0 && DAT_02098ff0 != (int *)0x0) {
      uVar4 = 0;
      do {
        piVar2 = (int *)*piVar2;
        uVar4 = uVar4 + 1;
      } while ((piVar2 == (int *)0x0 || uVar4 <= param_1) &&
               (piVar2 != (int *)0x0 && param_1 != uVar4));
    }
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (piVar2[2] != 2) {
      piVar2 = piVar2 + 3;
      thunk_FUN_0208031c();
      FUN_0200276c(piVar2);
      uVar3 = FUN_02081588(piVar2,&DAT_0208f074);
      uVar1 = FUN_02001d40(uVar3,piVar2);
      FUN_02081020(uVar3);
      if (*(char *)(DAT_02098fc8 + 0x265) != '\0') {
        FUN_02001948(DAT_02098fc8,*(undefined4 *)(DAT_02098fc8 + 0x248),
                     *(undefined4 *)(DAT_02098fc8 + 0x244));
      }
      DAT_02098ff8 = 0;
      return uVar1;
    }
    FUN_0208553c(piVar2 + 3);
    FUN_020032a8();
  }
  return 0;
}


// rea decompile_all
// name: FUN_0207cf44
// address: 0x207cf44
// body: available
// range: 0x207cf44-0x207cf8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207cf44(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    iVar2 = param_1[2];
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (*(char *)((undefined4 *)(iVar3 + iVar2) + 2) != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x14))
                          (*(undefined4 *)(iVar3 + iVar2),1,uVar4 * 0x200 + param_1[3]);
        if (cVar1 == '\0') {
          return 0xff;
        }
        iVar2 = param_1[2];
      }
      *(undefined4 *)(iVar3 + iVar2 + 4) = 0;
      *(undefined1 *)(iVar3 + iVar2 + 8) = 0;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < (uint)param_1[1]);
  }
  return 1;
}


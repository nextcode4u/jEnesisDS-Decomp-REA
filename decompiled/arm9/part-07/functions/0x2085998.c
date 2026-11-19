// rea decompile_all
// name: thunk_FUN_02083dbc
// address: 0x2085998
// body: available
// range: 0x2085998-0x2085999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * thunk_FUN_02083dbc(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar7 = param_1;
  if ((3 < param_3 && (((uint)param_2 | (uint)param_1) & 3) == 0) && (3 < param_3)) {
    uVar4 = *param_2;
    puVar3 = param_1;
    while (puVar7 = puVar3, (uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
      param_3 = param_3 - 4;
      puVar7 = puVar3 + 1;
      *puVar3 = uVar4;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      puVar3 = puVar7;
      uVar4 = *param_2;
    }
  }
  if (param_3 != 0) {
    uVar4 = *param_2;
    iVar5 = param_3 - 1;
    pcVar8 = (char *)((int)puVar7 + 1);
    *(char *)puVar7 = (char)uVar4;
    if ((char)uVar4 != '\0') {
      pcVar2 = (char *)((int)puVar7 + 2);
      do {
        pcVar8 = pcVar2;
        bVar9 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar9) {
          return param_1;
        }
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        pcVar8[-1] = cVar1;
        pcVar2 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    if (iVar5 != 0) {
      iVar6 = 0;
      do {
        pcVar8[iVar6] = '\0';
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  return param_1;
}


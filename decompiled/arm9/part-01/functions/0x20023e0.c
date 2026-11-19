// rea decompile_all
// name: FUN_020023e0
// address: 0x20023e0
// body: available
// range: 0x20023e0-0x20023eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020023e0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_020b4c54;
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar4 = DAT_020b4c58 + 0x182;
  uVar3 = 0;
  do {
    *(ushort *)(uVar3 * 2 + iVar4) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    uVar3 = uVar3 + 1;
    cVar1 = param_1[uVar3];
  } while (uVar3 < 0xff && cVar1 != '\0');
  return;
}


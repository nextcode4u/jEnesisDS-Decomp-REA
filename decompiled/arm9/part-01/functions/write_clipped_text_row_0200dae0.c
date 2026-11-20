// Analysis annotation
// Role — write clipped text row
// Basis — reviewed
// Writes a string at the requested tile position and stops at the right edge.

// rea decompile_all
// name: FUN_0200dae0
// address: 0x200dae0
// body: available
// range: 0x200dae0-0x200db7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200dae0(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  ushort *puVar3;
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
  if (0x1f < param_3) {
    return;
  }
  iVar4 = 0;
  puVar3 = (ushort *)(DAT_020b4c58 + param_2 * 0x40 + param_3 * 2);
  do {
    *puVar3 = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    iVar4 = iVar4 + 1;
    cVar1 = param_1[iVar4];
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  } while (param_3 < 0x20 && cVar1 != '\0');
  return;
}


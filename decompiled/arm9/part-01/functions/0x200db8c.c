// rea decompile_all
// name: FUN_0200db8c
// address: 0x200db8c
// body: available
// range: 0x200db8c-0x200dc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200db8c(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  uVar1 = DAT_020b4c54;
  if (DAT_020b4c50 == 0) {
    return;
  }
  uVar2 = param_1 / 10;
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar2 = uVar2 / 10;
      iVar3 = iVar3 + 1;
    } while (uVar2 != 0);
    if (iVar3 < 0) {
      return;
    }
  }
  puVar4 = (ushort *)(DAT_020b4c58 + (param_3 + param_2 * 0x20) * 2 + iVar3 * 2);
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = (ushort)uVar1 | (byte)"0123456789ABCDEF"[param_1 % 10] - 0x20 & 0xff;
    param_1 = param_1 / 10;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar3);
  return;
}


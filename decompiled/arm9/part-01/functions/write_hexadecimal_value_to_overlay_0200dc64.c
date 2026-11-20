// Analysis annotation
// Role — write hexadecimal value to overlay
// Basis — reviewed
// Splits a numeric value into hexadecimal digits and writes its glyphs to the overlay.

// rea decompile_all
// name: FUN_0200dc64
// address: 0x200dc64
// body: available
// range: 0x200dc64-0x200dcff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200dc64(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = DAT_020b4c54;
  if (DAT_020b4c50 == 0) {
    return;
  }
  uVar2 = param_1 >> 4;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      uVar2 = uVar2 >> 4;
      iVar4 = iVar4 + 1;
    } while (uVar2 != 0);
    if (iVar4 < 0) {
      return;
    }
  }
  puVar3 = (ushort *)(DAT_020b4c58 + (param_3 + param_2 * 0x20) * 2 + iVar4 * 2);
  do {
    iVar4 = iVar4 + -1;
    *puVar3 = (ushort)uVar1 | (byte)"0123456789ABCDEF"[param_1 & 0xf] - 0x20 & 0xff;
    param_1 = param_1 >> 4;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar4);
  return;
}


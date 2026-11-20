// Analysis annotation
// Role — helper calls restore overlay tilemap row
// Basis — call context
// Calls restore overlay tilemap row at 0x02006B90. This file's full role is still open.

// rea decompile_all
// name: FUN_02002be8
// address: 0x2002be8
// body: available
// range: 0x2002be8-0x2002c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02002be8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_02006b90(DAT_0208f344);
  DAT_0208f344 = DAT_0208f344 + 1;
  DAT_02098fe4 = DAT_0208f344 - 4;
  iVar1 = (uint)DAT_0208f344 * 0x40;
  *(undefined2 *)(iVar1 + 0x6201000) = 0x4b;
  *(undefined2 *)(iVar1 + 0x620103e) = 1099;
  iVar2 = 0;
  do {
    iVar3 = iVar1 + iVar2;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(iVar3 + 0x6201002) = 0x4c;
  } while (iVar2 != 0x3c);
  return;
}


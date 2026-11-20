// Analysis annotation
// Role — graphics transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_020077b8
// address: 0x20077b8
// body: available
// range: 0x20077b8-0x200782b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020077b8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  
  uVar4 = FUN_020074b8(param_3 & 0x7ff,param_1);
  iVar5 = *(int *)(&DAT_0208e578 + param_1 * 8);
  uVar3 = (param_2 & 0x1ffff) >> 1;
  uVar4 = (uVar4 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  iVar1 = uVar3 * 2;
  iVar2 = uVar3 * 2;
  if ((param_3 & 0x8000) == 0) {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + iVar2) = 0x3ff;
    *(ushort *)(iVar5 + iVar2) = uVar4;
  }
  else {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + iVar1) = uVar4;
    *(undefined2 *)(iVar5 + iVar1) = 0x3ff;
  }
  return;
}


// Analysis annotation
// Role — graphics transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_020076d0
// address: 0x20076d0
// body: available
// range: 0x20076d0-0x20077a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020076d0(uint param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  uVar2 = param_1 >> 5;
  uVar3 = (&DAT_020993cc)[uVar2];
  puVar4 = &DAT_0209c3e0;
  bVar5 = (uVar3 & 0x8000) != 0;
  (&DAT_0209c3e0)[uVar2] = 1;
  if (bVar5) {
    puVar4 = &DAT_06020000;
  }
  if (bVar5) {
    *(undefined2 *)(puVar4 + ((param_1 & 0x1f | (uVar3 & 0x3ff) << 5) >> 1 ^ 1) * 2) = param_2;
  }
  else {
    (&DAT_020993cc)[uVar2] = uVar3 | 0x4000;
  }
  uVar3 = (&DAT_0209a3cc)[uVar2];
  puVar4 = (undefined1 *)(uVar3 & 0x3ff);
  uVar1 = (int)puVar4 << 5;
  bVar5 = (uVar3 & 0x8000) != 0;
  if (bVar5) {
    puVar4 = &DAT_06028000;
  }
  if (bVar5) {
    *(undefined2 *)(puVar4 + ((param_1 & 0x1f | uVar1) >> 1 ^ 1) * 2) = param_2;
  }
  if (!bVar5) {
    (&DAT_0209a3cc)[uVar2] = uVar3 | 0x4000;
  }
  uVar3 = (&DAT_0209b3cc)[uVar2];
  bVar5 = (uVar3 & 0x8000) != 0;
  puVar4 = (undefined1 *)(uVar3 | 0x4000);
  if (bVar5) {
    puVar4 = &DAT_06030000;
  }
  if (bVar5) {
    *(undefined2 *)(puVar4 + ((param_1 & 0x1f | (uVar3 & 0x3ff) << 5) >> 1 ^ 1) * 2) = param_2;
  }
  else {
    (&DAT_0209b3cc)[uVar2] = (ushort)puVar4;
  }
  return;
}


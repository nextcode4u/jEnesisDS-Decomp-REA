// Analysis annotation
// Role — make savestate slot path
// Basis — reviewed
// Derives the numbered .jst savestate filename from the current ROM path.

// rea decompile_all
// name: FUN_0200d0b8
// address: 0x200d0b8
// body: available
// range: 0x200d0b8-0x200d137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0200d0b8(byte param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02083a6c(DAT_02098fc8);
  iVar2 = FUN_02082724(iVar1 + 3);
  FUN_02083dbc(iVar2,DAT_02098fc8,iVar1);
  iVar3 = iVar2 + iVar1;
  *(undefined1 *)(iVar3 + -4) = 0x5f;
  *(undefined1 *)(iVar3 + -2) = 0x2e;
  *(undefined1 *)(iVar3 + -1) = 0x6a;
  *(byte *)(iVar3 + -3) = (param_1 & 3) + 0x30;
  *(undefined1 *)(iVar2 + iVar1) = 0x73;
  *(undefined1 *)(iVar3 + 2) = 0;
  *(undefined1 *)(iVar3 + 1) = 0x74;
  return iVar2;
}


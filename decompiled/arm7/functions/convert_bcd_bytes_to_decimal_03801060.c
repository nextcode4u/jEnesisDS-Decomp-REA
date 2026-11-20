// Analysis annotation
// Role — convert bcd bytes to decimal
// Basis — reviewed
// Replaces each packed BCD byte with its decimal value.

// rea decompile_all
// name: FUN_03801060
// address: 0x3801060
// body: available
// range: 0x3801060-0x380108b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03801060(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      *(byte *)(iVar1 + param_1) =
           (*(byte *)(iVar1 + param_1) & 0xf) + (*(byte *)(iVar1 + param_1) >> 4) * '\n';
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  return in_lr;
}


// Analysis annotation
// Role — draw rom browser row highlight
// Basis — reviewed
// Writes the selection bar and edge tiles into the chosen row.

// rea decompile_all
// name: FUN_02006784
// address: 0x2006784
// body: available
// range: 0x2006784-0x20067c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02006784(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 * 0x40;
  *(undefined2 *)(param_1 + 0x6201000) = 0x4b;
  *(undefined2 *)(param_1 + 0x620103e) = 1099;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(iVar2 + 0x6201002) = 0x4c;
  } while (iVar1 != 0x3c);
  return;
}


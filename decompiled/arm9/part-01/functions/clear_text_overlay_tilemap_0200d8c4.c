// Analysis annotation
// Role — clear text overlay tilemap
// Basis — reviewed
// Clears the screen text tilemap when the overlay is initialized.

// rea decompile_all
// name: FUN_0200d8c4
// address: 0x200d8c4
// body: available
// range: 0x200d8c4-0x200d8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200d8c4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_020b4c58;
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    *(undefined2 *)(iVar2 + iVar1) = 0;
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x600);
  return;
}


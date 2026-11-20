// Analysis annotation
// Role — enable fifo receive interrupt
// Basis — reviewed
// Enables the IPC FIFO and installs the receive interrupt routine.

// rea decompile_all
// name: FUN_037fc544
// address: 0x37fc544
// body: available
// range: 0x37fc544-0x37fc58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc544(void)

{
  _DAT_04000184 = 0x8008;
  thunk_FUN_03801564(0x40000,FUN_037fc468);
  thunk_FUN_038016d8(0x40000);
  _DAT_04000184 = 0x8408;
  _DAT_04000180 = 0;
  return;
}


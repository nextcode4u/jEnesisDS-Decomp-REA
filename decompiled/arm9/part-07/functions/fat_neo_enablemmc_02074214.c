// Analysis annotation
// Role — fat neo enablemmc
// Basis — library match
// Matches symbol _Neo_EnableMMC in libfat-nds 20070127 (io_nmmc.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02074214
// address: 0x2074214
// body: available
// range: 0x2074214-0x207424b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02074214(int param_1)

{
  if (param_1 == 0) {
    _DAT_040001a0 = 0;
    FUN_020741e8();
    FUN_020741e8(0);
  }
  else {
    FUN_020741e8(1);
    FUN_020741e8(1);
    _DAT_040001a0 = (byte)DAT_0208f384 | 0xa040;
  }
  return;
}


// Analysis annotation
// Role — fat scsd initcard
// Basis — library match
// Matches symbol _SCSD_initCard in libfat-nds 20070127 (io_scsd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_020749d8
// address: 0x20749d8
// body: available
// range: 0x20749d8-0x2074a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020749d8(void)

{
  int iVar1;
  
  _DAT_09440000 = 0;
  FUN_02074808(100);
  iVar1 = FUN_020748bc(0,0);
  if (iVar1 != 0) {
    FUN_02074808(100);
    DAT_020b4c78 = 0;
    FUN_02074c84(0x2074a51,0x2074a39,1);
  }
  return;
}


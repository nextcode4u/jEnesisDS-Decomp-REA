// Analysis annotation
// Role — fat m3sd sendcommand
// Basis — library match
// Matches symbol _M3SD_sendCommand in libfat-nds 20070127 (io_m3sd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02073290
// address: 0x2073290
// body: available
// range: 0x2073290-0x20732eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x020732d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073290(short param_1,undefined4 param_2)

{
  int iVar1;
  
  _DAT_09800000 = 8;
  _DAT_09200000 = param_1 + 0x40;
  _DAT_09400000 = (short)((uint)param_2 >> 0x10);
  _DAT_09600000 = (short)param_2;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 20000);
  _DAT_08800000 = 9;
  return 0;
}


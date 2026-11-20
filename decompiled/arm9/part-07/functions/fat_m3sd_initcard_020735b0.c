// Analysis annotation
// Role — fat m3sd initcard
// Basis — library match
// Matches symbol _M3SD_initCard in libfat-nds 20070127 (io_m3sd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_020735b0
// address: 0x20735b0
// body: available
// range: 0x20735b0-0x2073627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020735b0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 99;
  do {
    _DAT_09000000 = 0xff;
    _DAT_08800000 = 3;
    iVar1 = 0;
    _DAT_09800000 = 1;
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 != 20000);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  iVar2 = FUN_02073290(0,0);
  if (iVar2 != 0) {
    iVar2 = 99;
    do {
      FUN_020732f0();
      bVar3 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar3);
    DAT_020b4c6c = 0;
    FUN_02074c84(&LAB_020733f4_1,0x207340d,1);
  }
  return;
}


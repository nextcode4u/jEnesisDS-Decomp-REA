// Analysis annotation
// Role — fat nmmc isinserted
// Basis — library match
// Matches symbol _NMMC_isInserted in libfat-nds 20070127 (io_nmmc.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_020742e0
// address: 0x20742e0
// body: available
// range: 0x20742e0-0x2074333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020742e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02074214(1);
  FUN_020740f8(9,0);
  iVar1 = FUN_020741ac(0,0xff);
  if ((iVar1 == 0) || (iVar1 = FUN_020741ac(0xfe,0xff), iVar1 == 0)) {
    FUN_02074214();
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    do {
      DAT_040001a2 = 0xff;
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x1c);
    uVar2 = 1;
  }
  return uVar2;
}


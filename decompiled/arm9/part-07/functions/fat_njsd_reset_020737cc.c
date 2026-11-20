// Analysis annotation
// Role — fat njsd reset
// Basis — library match
// Matches symbol _NJSD_reset in libfat-nds 20070127 (io_njsd.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_020737cc
// address: 0x20737cc
// body: available
// range: 0x20737cc-0x2073827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02073810) */
/* WARNING: Removing unreachable block (ram,0x02073820) */
/* WARNING: Removing unreachable block (ram,0x02073816) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_020737cc(void)

{
  int iVar1;
  
  DAT_040001a1 = 0x80;
  DAT_040001a8 = 0x20;
  DAT_040001a9 = 0;
  DAT_040001aa = 0;
  DAT_040001ab = 0;
  DAT_040001ac = 0;
  DAT_040001ad = 0;
  DAT_040001ae = 0;
  DAT_040001af = 0;
  iVar1 = 10000;
  _DAT_040001a4 = 0xa0406000;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


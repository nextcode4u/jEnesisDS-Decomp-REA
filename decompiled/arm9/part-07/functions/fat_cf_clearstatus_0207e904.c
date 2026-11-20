// Analysis annotation
// Role — fat cf clearstatus
// Basis — library match
// Matches symbol _CF_clearStatus in libfat-nds 20070127 (io_cf_common.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207e904
// address: 0x207e904
// body: available
// range: 0x207e904-0x207e95d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0207e904(void)

{
  bool bVar1;
  int iVar2;
  
  if ((int)((uint)*DAT_020b4c84 << 0x18) < 0) {
    iVar2 = 0;
    do {
      if (-1 < (int)((uint)*DAT_020b4c84 << 0x18)) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10000000);
  }
  if ((*DAT_020b4c80 & 0x50) == 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      if ((*DAT_020b4c80 & 0x50) != 0) {
        return iVar2 < 10000000;
      }
    } while (iVar2 != 10000000);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


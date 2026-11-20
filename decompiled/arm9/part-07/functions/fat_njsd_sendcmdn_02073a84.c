// Analysis annotation
// Role — fat njsd sendcmdn
// Basis — library match
// Matches symbol _NJSD_sendCMDN in libfat-nds 20070127 (io_njsd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02073a84
// address: 0x2073a84
// body: available
// range: 0x2073a84-0x2073b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02073b16) */
/* WARNING: Removing unreachable block (ram,0x02073b32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073a84(byte param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_040001a1 = 0x80;
  DAT_040001a8 = (param_1 & 3) << 2 | 0xf0;
  DAT_040001a9 = 0;
  DAT_040001aa = param_2 | 0x40;
  DAT_040001ab = (undefined1)((uint)param_3 >> 0x18);
  DAT_040001ac = (undefined1)((uint)param_3 >> 0x10);
  DAT_040001ad = (undefined1)((uint)param_3 >> 8);
  DAT_040001ae = (undefined1)param_3;
  DAT_040001af = 0;
  iVar1 = 100000;
  _DAT_040001a4 = DAT_020b4c74;
  do {
    if (-1 < DAT_020b4c74) {
      if (iVar1 < 1) {
        DAT_040001a1 = 0x80;
        _DAT_040001a4 = DAT_020b4c74;
        DAT_040001a9 = 0;
        DAT_040001af = 0;
        _DAT_04000214 = 0x100000;
        return 0;
      }
      DAT_040001a1 = 0x80;
      _DAT_040001a4 = DAT_020b4c74;
      DAT_040001a9 = 0;
      DAT_040001af = 0;
      _DAT_04000214 = 0x100000;
      return 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _DAT_04000214 = 0x100000;
  return 0;
}


// Analysis annotation
// Role — fat njsd writesectors
// Basis — library match
// Matches symbol _NJSD_writeSectors in libfat-nds 20070127 (io_njsd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02073bd8
// address: 0x2073bd8
// body: available
// range: 0x2073bd8-0x2073e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02073d5c) */
/* WARNING: Removing unreachable block (ram,0x02073dee) */
/* WARNING: Removing unreachable block (ram,0x02073d62) */
/* WARNING: Removing unreachable block (ram,0x02073dc8) */
/* WARNING: Removing unreachable block (ram,0x02073d66) */
/* WARNING: Removing unreachable block (ram,0x02073c56) */
/* WARNING: Removing unreachable block (ram,0x02073c5a) */
/* WARNING: Removing unreachable block (ram,0x02073c5c) */
/* WARNING: Removing unreachable block (ram,0x02073cce) */
/* WARNING: Removing unreachable block (ram,0x02073cd0) */
/* WARNING: Removing unreachable block (ram,0x02073cd6) */
/* WARNING: Removing unreachable block (ram,0x02073c6a) */
/* WARNING: Removing unreachable block (ram,0x02073c7a) */
/* WARNING: Removing unreachable block (ram,0x02073c78) */
/* WARNING: Removing unreachable block (ram,0x02073c8e) */
/* WARNING: Removing unreachable block (ram,0x02073cc8) */
/* WARNING: Removing unreachable block (ram,0x02073ce2) */
/* WARNING: Removing unreachable block (ram,0x02073d3c) */
/* WARNING: Removing unreachable block (ram,0x02073d36) */
/* WARNING: Removing unreachable block (ram,0x02073dfe) */
/* WARNING: Removing unreachable block (ram,0x02073d42) */
/* WARNING: Removing unreachable block (ram,0x02073d48) */
/* WARNING: Removing unreachable block (ram,0x02073d56) */
/* WARNING: Removing unreachable block (ram,0x02073d68) */
/* WARNING: Removing unreachable block (ram,0x02073d6e) */
/* WARNING: Removing unreachable block (ram,0x02073da0) */
/* WARNING: Removing unreachable block (ram,0x02073d8a) */
/* WARNING: Removing unreachable block (ram,0x02073da8) */
/* WARNING: Removing unreachable block (ram,0x02073db6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073bd8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_36 [18];
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    FUN_02074b88(param_3,0x200,local_36);
    iVar2 = 100000;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_040001af = 0;
    DAT_040001ae = 0;
    DAT_040001ad = 0;
    DAT_040001ac = 0;
    DAT_040001ab = 0;
    DAT_040001aa = 0;
    DAT_040001a9 = 0;
    DAT_040001a8 = 0x80;
    _DAT_040001a4 = 0xa0406000;
    DAT_040001a1 = 0x80;
    uVar1 = 0;
  }
  return uVar1;
}


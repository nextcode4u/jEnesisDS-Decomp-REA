// Analysis annotation
// Role — fat fat partition getpartitionfrompath
// Basis — library match
// Matches symbol _FAT_partition_getPartitionFromPath in libfat-nds 20070127 (partition.o)
// after masking relocation fields.

// rea decompile_all
// name: FUN_02072d38
// address: 0x2072d38
// body: available
// range: 0x2072d38-0x2072d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02072d38(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = thunk_FUN_02083a6c(&DAT_0208f300);
  iVar2 = thunk_FUN_020836d4(param_1,0x3a);
  if (iVar2 != 0) {
    iVar2 = thunk_FUN_02083c80(&DAT_0208f300,param_1,iVar1);
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = (uint)*(byte *)(param_1 + iVar1);
    if (uVar3 != 0x3a) {
      if (-1 < (int)((uint)(byte)(&DAT_0208ee85)[uVar3] << 0x1d)) {
        return 0;
      }
      if (*(char *)(param_1 + iVar1 + 1) != ':') {
        return 0;
      }
      uVar3 = uVar3 - 0x30;
      if (3 < uVar3) {
        return 0;
      }
      goto LAB_02072d56;
    }
  }
  uVar3 = 0;
LAB_02072d56:
  return (&DAT_020b4c5c)[uVar3];
}


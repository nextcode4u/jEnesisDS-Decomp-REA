// Analysis annotation
// Role — fat fat cache invalidate
// Basis — library match
// Matches symbol _FAT_cache_invalidate in libfat-nds 20070127 (cache.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207cf90
// address: 0x207cf90
// body: available
// range: 0x207cf90-0x207cfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0207cf90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = 0;
    do {
      puVar2 = (undefined4 *)(iVar3 + iVar1 * 0xc);
      iVar1 = iVar1 + 1;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
    } while (iVar4 != iVar1);
  }
  return;
}


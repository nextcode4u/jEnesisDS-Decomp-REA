// Analysis annotation
// Role — fat fat fat clearlinks
// Basis — library match
// Matches symbol _FAT_fat_clearLinks in libfat-nds 20070127 (file_allocation_table.o)
// after masking relocation fields.

// rea decompile_all
// name: FUN_0207e6cc
// address: 0x207e6cc
// body: available
// range: 0x207e6cc-0x207e715 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207e6cc(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 < 2) || (*(uint *)(param_1 + 0x34) < param_2)) {
    uVar2 = 0;
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x38)) {
      *(uint *)(param_1 + 0x38) = param_2;
    }
    if (param_2 != 0xfffffff) {
      do {
        uVar1 = FUN_0207e470(param_1,param_2);
        FUN_0207e590(param_1,param_2,0);
        if (uVar1 == 0xfffffff) break;
        param_2 = uVar1;
      } while (uVar1 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}


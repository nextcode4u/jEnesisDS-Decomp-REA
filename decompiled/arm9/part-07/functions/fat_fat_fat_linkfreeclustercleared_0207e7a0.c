// Analysis annotation
// Role — fat fat fat linkfreeclustercleared
// Basis — library match
// Matches symbol _FAT_fat_linkFreeClusterCleared in libfat-nds 20070127
// (file_allocation_table.o) after masking relocation fields.

// rea decompile_all
// name: FUN_0207e7a0
// address: 0x207e7a0
// body: available
// range: 0x207e7a0-0x207e803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0207e7a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_218 [512];
  
  uVar1 = FUN_0207e71c();
  if (uVar1 != 0) {
    thunk_FUN_02083058(auStack_218,0,0x200);
    uVar3 = param_1[9];
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 < 2) {
          iVar2 = param_1[4];
        }
        else {
          iVar2 = (uVar1 - 2) * uVar3 + param_1[7];
        }
        (**(code **)(*param_1 + 0x14))(iVar2 + uVar4,1,auStack_218);
        uVar3 = param_1[9];
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return uVar1;
}


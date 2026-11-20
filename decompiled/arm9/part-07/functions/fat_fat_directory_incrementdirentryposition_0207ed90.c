// Analysis annotation
// Role — fat fat directory incrementdirentryposition
// Basis — library match
// Matches symbol _FAT_directory_incrementDirEntryPosition in libfat-nds 20070127
// (directory.o) after masking relocation fields.

// rea decompile_all
// name: FUN_0207ed90
// address: 0x207ed90
// body: available
// range: 0x207ed90-0x207edfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207ed90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2;
  iVar3 = param_2[2] + 1;
  iVar2 = param_2[1];
  iVar1 = iVar4;
  if (iVar3 != 0x10) goto LAB_0207eda6;
  iVar2 = iVar2 + 1;
  if (iVar2 == *(int *)(param_1 + 0x24)) {
    if (iVar4 != 0) {
      iVar1 = FUN_0207e470(param_1,iVar4);
      if (iVar1 == 0xfffffff) {
        if (param_3 == 0) {
          return 0;
        }
        iVar1 = FUN_0207e7a0(param_1,iVar4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar2 = 0;
      iVar3 = 0;
      goto LAB_0207eda6;
    }
LAB_0207edc6:
    if (iVar2 == *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x10)) {
      return 0;
    }
  }
  else if (iVar4 == 0) goto LAB_0207edc6;
  iVar3 = 0;
LAB_0207eda6:
  *param_2 = iVar1;
  param_2[1] = iVar2;
  param_2[2] = iVar3;
  return 1;
}


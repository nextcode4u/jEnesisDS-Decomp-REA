// Analysis annotation
// Role — fat fat directory entrygetalias
// Basis — library match
// Matches symbol _FAT_directory_entryGetAlias in libfat-nds 20070127 (directory.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207eca8
// address: 0x207eca8
// body: available
// range: 0x207eca8-0x207ed1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0207eca8(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_2 = '\0';
  if (*param_1 != -0x1b) {
    if (*param_1 == '.') {
      *param_2 = '.';
      if (param_1[1] == '.') {
        param_2[1] = '.';
        param_2[2] = '\0';
      }
      else {
        param_2[1] = '\0';
      }
    }
    else {
      iVar2 = 0;
      do {
        iVar1 = iVar2;
        if (param_1[iVar2] == ' ') goto LAB_0207ecce;
        iVar1 = iVar2 + 1;
        param_2[iVar2] = param_1[iVar2];
        iVar2 = iVar1;
      } while (iVar1 != 8);
      iVar2 = 8;
LAB_0207ecce:
      pcVar4 = param_1 + 8;
      if (param_1[8] != ' ') {
        param_2[iVar2] = '.';
        pcVar3 = param_2 + iVar1;
        iVar2 = iVar1 + 1;
        do {
          pcVar3 = pcVar3 + 1;
          if (*pcVar4 == ' ') break;
          iVar2 = iVar2 + 1;
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (iVar2 != iVar1 + 4);
      }
      param_2[iVar2] = '\0';
    }
  }
  return *param_2 != '\0';
}


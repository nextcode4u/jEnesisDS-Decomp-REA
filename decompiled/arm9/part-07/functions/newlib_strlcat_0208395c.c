// Analysis annotation
// Role — newlib strlcat
// Basis — library match
// Matches symbol strlcat in devkitARM r20 libc.a (lib_a-strlcat.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0208395c
// address: 0x208395c
// body: available
// range: 0x208395c-0x2083a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0208395c(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_3 == 0) || (*param_1 == '\0')) {
    iVar3 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == param_1 + param_3) break;
    } while (*pcVar4 != '\0');
    iVar3 = (int)pcVar4 - (int)param_1;
    param_1 = pcVar4;
  }
  param_3 = param_3 - iVar3;
  if (param_3 == 0) {
    iVar1 = FUN_02083a6c(param_2);
  }
  else {
    cVar2 = *param_2;
    pcVar4 = param_2;
    pcVar5 = param_1;
    if (cVar2 == '\0') {
      iVar1 = 0;
    }
    else {
      do {
        param_1 = pcVar5;
        if (param_3 != 1) {
          param_1 = pcVar5 + 1;
          *pcVar5 = cVar2;
        }
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
        if (param_3 != 1) {
          param_3 = param_3 + -1;
        }
        pcVar5 = param_1;
      } while (cVar2 != '\0');
      iVar1 = (int)pcVar4 - (int)param_2;
    }
    *param_1 = '\0';
  }
  return iVar1 + iVar3;
}


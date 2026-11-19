// rea decompile_all
// name: FUN_02083a04
// address: 0x2083a04
// body: available
// range: 0x2083a04-0x2083a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_02083a04(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      pcVar2 = pcVar3;
      pcVar4 = param_1;
      if (param_3 == 0) goto LAB_02083a40;
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar4 = param_1 + 1;
      *param_1 = cVar1;
      param_1 = pcVar4;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
    if (param_3 != 0) goto LAB_02083a54;
LAB_02083a40:
    *pcVar4 = '\0';
    pcVar3 = pcVar2;
  }
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
LAB_02083a54:
  return pcVar2 + (-1 - (int)param_2);
}


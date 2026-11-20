// Analysis annotation
// Role — newlib strpbrk
// Basis — library match
// Matches symbol strpbrk in devkitARM r20 libc.a (lib_a-strpbrk.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02083f18
// address: 0x2083f18
// body: available
// range: 0x2083f18-0x2083f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_02083f18(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_2;
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == cVar2) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    pcVar3 = param_2;
  } while (cVar2 != '\0');
  return (char *)0x0;
}


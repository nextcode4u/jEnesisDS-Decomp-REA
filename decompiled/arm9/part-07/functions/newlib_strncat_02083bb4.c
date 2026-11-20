// Analysis annotation
// Role — newlib strncat
// Basis — library match
// Matches symbol strncat in devkitARM r20 libc.a (lib_a-strncat.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02083bb4
// address: 0x2083bb4
// body: available
// range: 0x2083bb4-0x2083c7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02083bb4(uint *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  
  if (((uint)param_1 & 3) == 0) {
    uVar2 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar2 == 0) {
      param_1 = param_1 + 1;
      uVar2 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    }
  }
  cVar1 = (char)*param_1;
  while (cVar1 != '\0') {
    param_1 = (uint *)((int)param_1 + 1);
    cVar1 = *(char *)param_1;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    param_3 = param_3 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *(char *)param_1 = cVar1;
    if (cVar1 == '\0') break;
    if (param_3 == 0) {
      *(char *)((int)param_1 + 1) = '\0';
    }
    param_1 = (uint *)((int)param_1 + 1);
  }
  return;
}


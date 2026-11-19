// rea decompile_all
// name: FUN_0208408c
// address: 0x208408c
// body: available
// range: 0x208408c-0x208412f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0208408c(undefined4 *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  cVar1 = *param_2;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar4 = 4;
    uVar2 = 0;
  }
  else if (cVar1 == 'w') {
    uVar4 = 8;
    uVar3 = 1;
    uVar2 = 0x600;
  }
  else {
    if (cVar1 != 'a') {
      *param_1 = 0x16;
      return 0;
    }
    uVar4 = 0x108;
    uVar3 = 1;
    uVar2 = 0x208;
  }
  if ((param_2[1] == '\0') || ((param_2[1] != '+' && (param_2[2] != '+')))) {
    *param_3 = uVar3 | uVar2;
  }
  else {
    uVar4 = 0x10;
    *param_3 = uVar2 | 2;
  }
  return uVar4;
}


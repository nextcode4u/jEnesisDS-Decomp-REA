// rea decompile_all
// name: FUN_0200402c
// address: 0x200402c
// body: available
// range: 0x200402c-0x2004043 inclusive
// range: 0x2004084-0x2004107 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_0200402c(uint param_1)

{
  code *pcVar1;
  
  switch((param_1 & 0xffffff) >> 4 & 0xf) {
  case 0:
  case 1:
  case 3:
    pcVar1 = (code *)&LAB_02003e20;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003e08;
    }
    return pcVar1;
  case 2:
    pcVar1 = (code *)&LAB_02003e20;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003e00;
    }
    break;
  default:
    return FUN_020043a4;
  case 10:
    pcVar1 = (code *)&LAB_0200497c;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = (code *)&UNK_02004908;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = FUN_020043a4;
      }
    }
    break;
  case 0xc:
  case 0xd:
    return (code *)&LAB_020048d4;
  case 0xe:
  case 0xf:
    return (code *)&LAB_02003e28;
  }
  return pcVar1;
}


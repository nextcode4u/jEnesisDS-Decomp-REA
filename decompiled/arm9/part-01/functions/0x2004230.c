// rea decompile_all
// name: FUN_02004230
// address: 0x2004230
// body: available
// range: 0x2004230-0x2004243 inclusive
// range: 0x2004284-0x20042d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_02004230(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  switch(param_1 >> 4 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar1 = &LAB_02003ed4;
    break;
  default:
    return &DAT_02003e34;
  case 10:
    puVar1 = &DAT_02004714;
    if ((param_1 & 0xf) != 0) {
      puVar2 = &DAT_020046c0;
      if ((param_1 & 0xf) != 1) {
        puVar2 = &DAT_02003e34;
      }
      return puVar2;
    }
    break;
  case 0xc:
  case 0xd:
    return &DAT_02004484;
  case 0xe:
  case 0xf:
    return (undefined *)0x1000000;
  }
  return puVar1;
}


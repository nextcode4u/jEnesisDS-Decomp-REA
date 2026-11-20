// Analysis annotation
// Role — emulator dispatch selector cases
// Basis — pseudocode clue
// The pseudocode branches across selector cases. Location suggests the emulator region.

// rea decompile_all
// name: FUN_0200416c
// address: 0x200416c
// body: available
// range: 0x200416c-0x2004183 inclusive
// range: 0x20041c4-0x2004217 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_0200416c(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  switch((param_1 & 0xffffff) >> 4 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar1 = &LAB_02003e38;
    break;
  default:
    return &DAT_02003e30;
  case 10:
    puVar1 = &DAT_02004784;
    if ((param_1 & 0xf) != 0) {
      puVar2 = &DAT_020047f0;
      if ((param_1 & 0xf) != 1) {
        puVar2 = &DAT_02003e30;
      }
      return puVar2;
    }
    break;
  case 0xc:
  case 0xd:
    return &DAT_020044a4;
  case 0xe:
  case 0xf:
    return &LAB_02003eb8;
  }
  return puVar1;
}


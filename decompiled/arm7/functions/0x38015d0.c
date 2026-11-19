// rea decompile_all
// name: FUN_038015d0
// address: 0x38015d0
// body: available
// range: 0x38015d0-0x3801601 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_038015d0(void)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = &DAT_0380be04;
  do {
    *puVar1 = &DAT_03801561;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)0x380becc);
  _DAT_0380fffc = &DAT_03801800;
  _DAT_04000210 = 0;
  _DAT_04000214 = 0xffffffff;
  _DAT_04000208 = 1;
  return in_lr;
}


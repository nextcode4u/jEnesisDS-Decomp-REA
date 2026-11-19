// rea decompile_all
// name: FUN_03801620
// address: 0x3801620
// body: available
// range: 0x3801620-0x3801681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03801620(uint param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = &DAT_0380be08;
  iVar2 = 0;
  do {
    if (param_1 == *puVar1) {
      (&DAT_0380be04)[iVar2 * 2] = &DAT_03801561;
      if ((int)(param_1 << 0x1f) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xfff7;
      }
      if ((int)(param_1 << 0x1e) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xffef;
      }
      if ((int)(param_1 << 0x1d) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xffdf;
      }
      _DAT_04000210 = _DAT_04000210 & ~param_1;
      return in_lr;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x19);
  return in_lr;
}


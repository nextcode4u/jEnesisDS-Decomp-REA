// rea decompile_all
// name: FUN_037f89bc
// address: 0x37f89bc
// body: available
// range: 0x37f89bc-0x37f8a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037f89bc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_03806dbc;
  puVar2 = puVar1;
  do {
    puVar1[7] = 1;
    puVar1[8] = 0xf;
    puVar1 = puVar1 + 2;
    puVar2[0xf] = 0;
    puVar2[0x13] = 1;
    puVar2[0x1b] = 0x20;
    puVar2[0x17] = 0;
    puVar2 = puVar2 + 1;
  } while (puVar1 != &DAT_03806ddc);
  DAT_03806dd4 = 0x10;
  DAT_03806dc0 = 0;
  DAT_03806dd0 = 0x8000;
  DAT_03806dcc = 0;
  return;
}


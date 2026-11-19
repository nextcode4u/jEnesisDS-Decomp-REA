// rea decompile_all
// name: arm7_main
// address: 0x37f81f4
// body: available
// range: 0x37f81f4-0x37f8313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm7_main(void)

{
  thunk_FUN_03801200();
  _DAT_04000304 = _DAT_04000304 | 1;
  _DAT_04000500 = 0x807f;
  _DAT_027ff028 = 0;
  thunk_FUN_038015d0();
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0x5000;
  thunk_FUN_03801564(4,&LAB_037f831c);
  thunk_FUN_038016d8(4);
  FUN_037fbf5c();
  FUN_037fc0cc();
  FUN_037fc14c(1);
  thunk_FUN_03801564(1,0);
  thunk_FUN_038016d8(1);
  _DAT_04000180 = 0x100;
  while (DAT_0380bdf4 == 0) {
    if (DAT_0380bdf8 != 0) {
      FUN_037fc14c();
    }
    thunk_FUN_0380178c();
  }
  if (DAT_0380bdf4 != 0) goto LAB_037f82f4;
LAB_037f82d4:
  if (DAT_0380bdf8 != 0) goto LAB_037f8308;
  do {
    thunk_FUN_0380178c();
    while( true ) {
      if (DAT_0380bdf4 == 0) goto LAB_037f82d4;
LAB_037f82f4:
      FUN_037fbeb8();
      if (DAT_0380bdf8 == 0) break;
LAB_037f8308:
      FUN_037fc14c();
      thunk_FUN_0380178c();
    }
  } while( true );
}


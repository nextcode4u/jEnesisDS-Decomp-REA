// rea decompile_all
// name: FUN_02006308
// address: 0x2006308
// body: available
// range: 0x2006308-0x20063b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x020063a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02006308(int param_1)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  
  DAT_02099048 = 0;
  DAT_02099054 = 0;
  DAT_02099050 = 0;
  DAT_0209939c = 0;
  DAT_02099058 = 0;
  DAT_02099064 = 0;
  DAT_023db794 = 0;
  DAT_02099068 = 0;
  DAT_02099060 = 0;
  DAT_0209906c = 0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_023db788 = 0;
  if (param_1 == 0) {
    bVar3 = (_DAT_04000184 & 2) != 0;
    uVar1 = _DAT_04000184;
    if (bVar3) {
      uVar1 = 0x8408;
    }
    if (!bVar3) {
      _DAT_04000188 = 0x6000000;
      uVar1 = _DAT_04000184;
    }
    _DAT_04000184 = uVar1;
    return (uint)!bVar3;
  }
  uVar2 = FUN_0200c55c(1,0);
  do {
  } while (DAT_0209906c == 0);
  return uVar2;
}


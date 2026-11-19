// rea decompile_all
// name: FUN_02073e68
// address: 0x2073e68
// body: available
// range: 0x2073e68-0x2073eeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02073e68(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  DAT_020b4c74 = 0xa0406000;
  _DAT_04000214 = 0x100000;
  FUN_0208024c();
  iVar2 = FUN_020737cc();
  if (((iVar2 == 0) || (iVar2 = FUN_020739cc(0,0x100), iVar2 == 0)) ||
     (iVar2 = FUN_02073a84(0,0,0), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    FUN_020739cc(0,8);
    FUN_020739cc(0,0x100);
    FUN_02073a84(0,0,0);
    FUN_020739cc(0,8);
    cVar1 = FUN_02074c84(0x2073b65,0x2073b7d,1,&DAT_020b4c70);
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}


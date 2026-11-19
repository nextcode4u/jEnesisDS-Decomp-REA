// rea decompile_all
// name: FUN_0207433c
// address: 0x207433c
// body: available
// range: 0x207433c-0x2074409 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0207433c(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  FUN_02074214(1);
  if (param_2 == 0) {
LAB_02074400:
    FUN_02074214(0);
    uVar3 = 1;
  }
  else {
    param_1 = param_1 << 9;
    while( true ) {
      param_2 = param_2 + -1;
      FUN_020740f8(0x11,param_1);
      iVar1 = FUN_020741ac(0,0xff);
      if ((iVar1 == 0) || (iVar1 = FUN_020741ac(0xfe,0xff), iVar1 == 0)) break;
      iVar1 = 0;
      puVar2 = param_3;
      do {
        do {
        } while ((_DAT_040001a0 & 0x80) != 0);
        iVar1 = iVar1 + 1;
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0x200);
      param_3 = param_3 + 0x200;
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      DAT_040001a2 = 0xff;
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      if (param_2 == 0) goto LAB_02074400;
      param_1 = param_1 + 0x200;
    }
    FUN_02074214();
    uVar3 = 0;
  }
  return uVar3;
}


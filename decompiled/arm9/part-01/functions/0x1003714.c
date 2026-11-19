// rea decompile_all
// name: m68k_dispatch_01003714
// address: 0x1003714
// body: available
// range: 0x1003714-0x1003733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_01003714(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  bool bVar2;
  
  bVar2 = (unaff_r7 & 4) == 0;
  if (bVar2) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar2 && (unaff_r5 & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


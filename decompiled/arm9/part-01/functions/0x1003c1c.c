// rea decompile_all
// name: m68k_dispatch_01003c1c
// address: 0x1003c1c
// body: available
// range: 0x1003c1c-0x1003c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_01003c1c(void)

{
  int unaff_r6;
  int unaff_r7;
  int iVar1;
  int unaff_r9;
  int unaff_r10;
  ushort *puVar2;
  uint unaff_r11;
  
  puVar2 = (ushort *)(unaff_r10 + (unaff_r11 & 0xff));
  iVar1 = unaff_r7 + -0xa0000;
  if (iVar1 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


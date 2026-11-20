// Analysis annotation
// Role — m68k dbvc
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include dbvc (8). Example opcode
// words are 0x58C8, 0x58C9, 0x58CA, 0x58CB, 0x58CC.

// rea decompile_all
// name: m68k_dispatch_02032594
// address: 0x2032594
// body: available
// range: 0x2032594-0x20325d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_02032594(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 2) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020325d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


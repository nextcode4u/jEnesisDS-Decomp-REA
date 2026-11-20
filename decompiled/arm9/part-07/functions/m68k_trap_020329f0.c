// Analysis annotation
// Role — m68k trap
// Basis — dispatch table
// Reached by 16 M68000 opcode-table slots. Decoded forms include trap (16). Example opcode
// words are 0x4E40, 0x4E41, 0x4E42, 0x4E43, 0x4E44.

// rea decompile_all
// name: m68k_dispatch_020329f0
// address: 0x20329f0
// body: available
// range: 0x20329f0-0x20329ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_020329f0(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int iVar8;
  
  iVar3 = (unaff_r11 & 0xf) + 0x20;
  iVar7 = unaff_r7 + -0x220000;
  uVar4 = *(uint *)(unaff_r6 + 0x50);
  iVar8 = *(int *)(unaff_r6 + 0x54);
  if ((uVar4 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar4 | (ushort)iVar7 & 0x1f;
  uVar4 = unaff_r10 - iVar8 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar4 >> 0x10);
  puVar6[2] = (ushort)uVar4;
  puVar6 = (ushort *)(*(int *)(unaff_r6 + 0x60) + iVar3 * 4);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  if ((uVar1 & 0xc0) == 0) {
    uVar4 = 0xffc00000;
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  if ((iVar3 == 9) && (*(char *)(unaff_r6 + 0xa2) != '\0')) {
    *(undefined1 *)(unaff_r6 + 0xa2) = 0;
  }
  iVar8 = iVar7 >> 0x10;
  if (iVar8 == 0 || iVar8 < 0 != SBORROW4(iVar3,9)) {
    *(int *)(unaff_r6 + 0x4c) = iVar7;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar3;
}


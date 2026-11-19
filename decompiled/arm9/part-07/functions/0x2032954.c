// rea decompile_all
// name: m68k_dispatch_02032954
// address: 0x2032954
// body: available
// range: 0x1003094-0x10030ab inclusive
// range: 0x2032954-0x203299f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_02032954(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int unaff_r6;
  int unaff_r7;
  uint uVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  int iVar10;
  
  uVar2 = *unaff_r10;
  uVar5 = *(uint *)(unaff_r6 + 0x50);
  uVar8 = uVar2 & 0xa700;
  *(uint *)(unaff_r6 + 0x50) = uVar8;
  uVar3 = uVar2 & 0x1f;
  uVar9 = unaff_r7 - 0x40000U & 0xffffffe0 | uVar3;
  if (((uVar5 ^ 0x2000 | uVar8) & 0x2000) == 0) {
    iVar4 = 8;
  }
  else {
    if ((uVar2 & 0x8000) == 0) {
      *(undefined1 *)(unaff_r6 + 0xa2) = 1;
      *(uint *)(unaff_r6 + 0x4c) = uVar3 | 0xfffa0000;
      *(ushort **)(unaff_r6 + 0x44) = unaff_r10 + 1;
      return -6;
    }
    iVar4 = 9;
  }
  uVar5 = *(uint *)(unaff_r6 + 0x50);
  iVar10 = *(int *)(unaff_r6 + 0x54);
  if ((uVar5 & 0x2000) == 0) {
    iVar6 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar5 & 0xff00 | 0x2000;
  puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
  *puVar7 = (ushort)uVar5 | (ushort)uVar3;
  uVar3 = (int)(unaff_r10 + 1) - iVar10 | *(uint *)(unaff_r6 + 0x9c);
  puVar7[1] = (ushort)(uVar3 >> 0x10);
  puVar7[2] = (ushort)uVar3;
  puVar7 = (ushort *)(*(int *)(unaff_r6 + 0x60) + iVar4 * 4);
  uVar2 = *puVar7;
  uVar1 = puVar7[1];
  if ((uVar2 & 0xc0) == 0) {
    uVar3 = 0xffc00000;
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
  }
  else {
    uVar3 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar3;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar3));
  if ((iVar4 == 9) && (*(char *)(unaff_r6 + 0xa2) != '\0')) {
    *(undefined1 *)(unaff_r6 + 0xa2) = 0;
  }
  iVar10 = (int)uVar9 >> 0x10;
  if (iVar10 == 0 || iVar10 < 0 != SBORROW4(iVar4,9)) {
    *(uint *)(unaff_r6 + 0x4c) = uVar9;
    *(ushort **)(unaff_r6 + 0x44) = puVar7;
    return iVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
  return iVar4;
}


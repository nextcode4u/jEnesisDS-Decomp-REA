// rea decompile_all
// name: m68k_dispatch_0202e754
// address: 0x202e754
// body: available
// range: 0x202e754-0x202e7fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202e754(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar7;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  uVar5 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar5;
  uVar4 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar6 = (undefined2 *)(unaff_r8 + (uVar5 & 0xffff));
  *puVar6 = (short)(uVar4 >> 0x10);
  puVar6[1] = (short)uVar4;
  if ((uVar2 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar2 & uVar4;
  puVar7 = (ushort *)(unaff_r8 + (uVar2 & ~uVar4));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0x160000;
  if (iVar3 == 0 || unaff_r7 < 0x160000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar7;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
  return iVar3;
}


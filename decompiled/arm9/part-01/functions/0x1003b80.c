// rea decompile_all
// name: m68k_dispatch_01003b80
// address: 0x1003b80
// body: available
// range: 0x1003b80-0x1003c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */

int m68k_dispatch_01003b80(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  uint uVar10;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  char in_OV;
  
  uVar10 = unaff_r7 - 0x140000;
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    uVar8 = *(uint *)(unaff_r6 + 0x50);
    iVar7 = *(int *)(unaff_r6 + 0x54);
    if ((uVar8 & 0x2000) == 0) {
      iVar9 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar9 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar9 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar8 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar9 - 6U & 0xffff));
    *puVar5 = (ushort)uVar8 | (ushort)uVar10 & 0x1f;
    uVar8 = unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar8 >> 0x10);
    puVar5[2] = (ushort)uVar8;
    iVar7 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar7 + 0x20);
    uVar4 = *(undefined2 *)(iVar7 + 0x22);
    if ((uVar1 & 0xc0) == 0) {
      uVar8 = 0xffc00000;
      unaff_r8 = iVar7;
    }
    else {
      uVar8 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar8;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar5 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar4) & ~uVar8));
    if (0 < (int)uVar10 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
      return iVar7;
    }
  }
  else {
    iVar7 = *(uint *)(unaff_r6 + 0x3c) + 6;
    puVar5 = (ushort *)(unaff_r8 + (*(uint *)(unaff_r6 + 0x3c) & 0xffff));
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar10 = uVar10 & 0xffffffe0 | uVar1 & 0x1f;
    uVar3 = puVar5[2];
    *(uint *)(unaff_r6 + 0x50) = uVar1 & 0xa700;
    if ((uVar1 & 0x2000) == 0) {
      uVar6 = *(undefined4 *)(unaff_r6 + 0x48);
      *(int *)(unaff_r6 + 0x48) = iVar7;
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar6;
    }
    else {
      *(int *)(unaff_r6 + 0x3c) = iVar7;
    }
    if ((uVar2 & 0xc0) == 0) {
      unaff_r8 = *(int *)(unaff_r6 + 0x60);
      uVar8 = 0xffc00000;
    }
    else {
      uVar8 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar8;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar5 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar3) & ~uVar8));
    if ((int)uVar10 >> 0x10 != 0 && (int)uVar10 >> 0x10 < 0 == (bool)in_OV) {
                    /* WARNING: Could not recover jumptable at 0x01003c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
      return iVar7;
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = uVar10;
  *(ushort **)(unaff_r6 + 0x44) = puVar5;
  return (int)uVar10 >> 0x10;
}


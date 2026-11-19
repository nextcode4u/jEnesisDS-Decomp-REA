// rea decompile_all
// name: m68k_dispatch_0202d778
// address: 0x202d778
// body: available
// range: 0x202d778-0x202d7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202d778(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar8 = (ushort *)(unaff_r10 + 1);
  iVar3 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x120000;
      if (iVar3 != 0 && 0x11ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x340000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar4 + 0x18);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


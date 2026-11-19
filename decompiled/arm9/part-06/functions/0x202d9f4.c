// rea decompile_all
// name: m68k_dispatch_0202d9f4
// address: 0x202d9f4
// body: available
// range: 0x202d9f4-0x202da3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202d9f4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar8;
  
  puVar7 = unaff_r10 + 1;
  iVar3 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar6 = unaff_r7 & 0xfffffff8;
  if (iVar3 == 0) {
    uVar6 = uVar6 | 4;
  }
  if (iVar3 < 0) {
    uVar6 = uVar6 | 8;
  }
  else {
    if (iVar3 <= (int)(uint)*unaff_r10) {
      iVar3 = uVar6 - 0xe0000;
      if (iVar3 != 0 && 0xdffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar6 = uVar6 & 0xfffffff7;
  }
  iVar3 = uVar6 - 0x300000;
  uVar6 = *(uint *)(unaff_r6 + 0x50);
  iVar8 = *(int *)(unaff_r6 + 0x54);
  if ((uVar6 & 0x2000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar4 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
  puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
  *puVar5 = (ushort)uVar6 | (ushort)iVar3 & 0x1f;
  uVar6 = (int)puVar7 - iVar8 | *(uint *)(unaff_r6 + 0x9c);
  puVar5[1] = (ushort)(uVar6 >> 0x10);
  puVar5[2] = (ushort)uVar6;
  iVar8 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar8 + 0x18);
  uVar2 = *(undefined2 *)(iVar8 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar6 = 0xffc00000;
    unaff_r8 = iVar8;
  }
  else {
    uVar6 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return iVar3 >> 0x10;
}


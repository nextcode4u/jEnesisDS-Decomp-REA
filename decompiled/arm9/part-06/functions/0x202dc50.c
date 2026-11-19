// rea decompile_all
// name: m68k_dispatch_0202dc50
// address: 0x202dc50
// body: available
// range: 0x202dc50-0x202dcdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202dc50(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar9;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    iVar4 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar9 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar6 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
    *puVar7 = (ushort)uVar3 | (ushort)iVar4 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar9 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar3 >> 0x10);
    puVar7[2] = (ushort)uVar3;
    iVar9 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar9 + 0x20);
    uVar1 = *(undefined2 *)(iVar9 + 0x22);
    if ((uVar2 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar9;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar3));
    if (0 < iVar4 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar4;
    }
  }
  else {
    puVar7 = unaff_r10 + 1;
    uVar2 = *unaff_r10;
    iVar4 = unaff_r6 + 0x20;
    if ((uVar2 & 0x8000) == 0) {
      iVar4 = unaff_r6;
    }
    uVar3 = (uVar2 & 0x7000) >> 10;
    if ((uVar2 & 0x800) == 0) {
      iVar4 = (int)*(short *)(iVar4 + uVar3);
    }
    else {
      iVar4 = *(int *)(iVar4 + uVar3);
    }
    uVar3 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4)
    ;
    uVar8 = unaff_r7 & 0xffffffe0 | uVar3 & 0x1f;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xa700;
    if ((uVar3 & 0x2000) == 0) {
      uVar5 = *(undefined4 *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar5;
    }
    iVar4 = uVar8 - 0x160000;
    if (iVar4 != 0 && 0x15ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0202dccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar4;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar4;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return iVar4 >> 0x10;
}


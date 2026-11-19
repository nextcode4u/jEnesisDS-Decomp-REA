// rea decompile_all
// name: m68k_dispatch_0202da40
// address: 0x202da40
// body: available
// range: 0x202da40-0x202da9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202da40(void)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar8;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    iVar7 = unaff_r7 - 0x220000;
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
    *puVar5 = (ushort)uVar6 | (ushort)iVar7 & 0x1f;
    uVar6 = (int)unaff_r10 - iVar8 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar8 + 0x20);
    uVar1 = *(undefined2 *)(iVar8 + 0x22);
    if ((uVar2 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar8;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar6));
    if (0 < iVar7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar7;
    }
  }
  else {
    uVar2 = *(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4);
    uVar6 = unaff_r7 & 0xffffffe0 | uVar2 & 0x1f;
    *(uint *)(unaff_r6 + 0x50) = uVar2 & 0xa700;
    if ((uVar2 & 0x2000) == 0) {
      uVar3 = *(undefined4 *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar3;
    }
    iVar7 = uVar6 - 0xc0000;
    if (iVar7 != 0 && 0xbffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202da8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar7 >> 0x10;
}


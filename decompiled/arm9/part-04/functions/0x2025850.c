// rea decompile_all
// name: m68k_dispatch_02025850
// address: 0x2025850
// body: available
// range: 0x2025850-0x2025927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_dispatch_02025850(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar3 = (int)*(short *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (iVar3 == 0) {
    uVar5 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar5 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar5 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar6 = (ushort)uVar5 | (ushort)unaff_r7 & 0x1f;
    uVar5 = (int)unaff_r10 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar5 >> 0x10);
    puVar6[2] = (ushort)uVar5;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar5 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar5 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar5;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar5));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar3;
    }
  }
  else {
    uVar5 = unaff_r11 & 0xe00;
    iVar4 = *(int *)(unaff_r6 + (uVar5 >> 7));
    if (iVar3 == -1 && iVar4 == -0x80000000) {
      uVar7 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar5 >> 7)) = 0;
      unaff_r7 = uVar7 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar4;
      _DAT_04000298 = iVar3;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar7 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar7 = uVar7 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar7 = uVar7 | 8;
        }
        *(uint *)(unaff_r6 + (uVar5 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar7 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x020258e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar3;
        }
      }
      else {
        uVar5 = unaff_r7 | 2;
        unaff_r7 = uVar5 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x020258fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar3;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


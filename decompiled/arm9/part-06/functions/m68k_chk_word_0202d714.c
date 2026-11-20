// Analysis annotation
// Role — m68k chk word
// Basis — dispatch table
// Reached by 128 M68000 opcode-table slots. Decoded forms include unrecognized opcode
// (64), chk word (64). Example opcode words are 0x4120, 0x4121, 0x4122, 0x4123, 0x4124.

// rea decompile_all
// name: m68k_dispatch_0202d714
// address: 0x202d714
// body: available
// range: 0x202d714-0x202d777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202d714(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar4 = *piVar4 + -2;
  iVar3 = FUN_010040c4();
  iVar5 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = unaff_r7 & 0xfffffff8;
  if (iVar5 == 0) {
    uVar8 = uVar8 | 4;
  }
  if (iVar5 < 0) {
    uVar8 = uVar8 | 8;
  }
  else {
    if (iVar5 <= iVar3) {
      iVar3 = uVar8 - 0x100000;
      if (iVar3 != 0 && 0xfffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0202d768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar8 = uVar8 & 0xfffffff7;
  }
  iVar3 = uVar8 - 0x320000;
  uVar8 = *(uint *)(unaff_r6 + 0x50);
  iVar5 = *(int *)(unaff_r6 + 0x54);
  if ((uVar8 & 0x2000) == 0) {
    iVar6 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar8 & 0xff00 | 0x2000;
  puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
  *puVar7 = (ushort)uVar8 | (ushort)iVar3 & 0x1f;
  uVar8 = (int)unaff_r10 - iVar5 | *(uint *)(unaff_r6 + 0x9c);
  puVar7[1] = (ushort)(uVar8 >> 0x10);
  puVar7[2] = (ushort)uVar8;
  iVar5 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar5 + 0x18);
  uVar2 = *(undefined2 *)(iVar5 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar8 = 0xffc00000;
    unaff_r8 = iVar5;
  }
  else {
    uVar8 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar8;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar8));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar3 >> 0x10;
}


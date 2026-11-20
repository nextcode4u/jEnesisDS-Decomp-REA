// Analysis annotation
// Role — m68k movem long
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include movem long (8). Example
// opcode words are 0x4CF0, 0x4CF1, 0x4CF2, 0x4CF3, 0x4CF4.

// rea decompile_all
// name: m68k_dispatch_0202fba4
// address: 0x202fba4
// body: available
// range: 0x202fba4-0x202fbeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202fba4(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar6 = unaff_r6 + 8;
  if ((uVar2 & 0x8000) == 0) {
    puVar6 = unaff_r6;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar3);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar3);
  }
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar5;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar7 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar7 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      puVar8 = puVar7 + 1;
      uVar4 = (uint)*puVar7;
      puVar7 = puVar7 + 2;
      unaff_r4 = (uint)*puVar8;
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 4) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 8) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar8);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar7,puVar7[1]);
  }
  uVar4 = unaff_r7 + -0x120000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x120000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


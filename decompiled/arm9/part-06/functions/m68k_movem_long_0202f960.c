// Analysis annotation
// Role — m68k movem long
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include movem long (8). Example
// opcode words are 0x4CD8, 0x4CD9, 0x4CDA, 0x4CDB, 0x4CDC.

// rea decompile_all
// name: m68k_dispatch_0202f960
// address: 0x202f960
// body: available
// range: 0x202f960-0x202fb6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202f960(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = unaff_r6 + 8;
  uVar6 = puVar3[unaff_r11 & 7];
  if ((uVar6 & 0xc00000) == 0) {
    puVar4 = (undefined2 *)(unaff_r6[0x18] + (uVar6 & 0x3fffff));
  }
  else {
    puVar4 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
  }
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      *unaff_r6 = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 2) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[1] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 4) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[2] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 8) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[3] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[4] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[5] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[6] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[7] = CONCAT22(uVar2,*puVar5);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    *puVar3 = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[9] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[10] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x8000) != 0) {
    unaff_r7 = unaff_r7 + -0x80000;
    uVar6 = uVar6 + 4;
    unaff_r6[0xf] = CONCAT22(*puVar4,puVar4[1]);
  }
  puVar3[unaff_r11 & 7] = uVar6;
  iVar7 = unaff_r7 + -0xc0000;
  if (iVar7 == 0 || unaff_r7 < 0xc0000) {
    unaff_r6[0x13] = iVar7;
    unaff_r6[0x11] = unaff_r10 + 1;
    return iVar7 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar7;
}


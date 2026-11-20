// Analysis annotation
// Role — m68k movem word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include movem word (8). Example
// opcode words are 0x48A0, 0x48A1, 0x48A2, 0x48A3, 0x48A4.

// rea decompile_all
// name: m68k_dispatch_0202e934
// address: 0x202e934
// body: available
// range: 0x202e934-0x202ea7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202e934(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  puVar4 = unaff_r6 + 0x10;
  uVar6 = *(uint *)(puVar4 + (unaff_r11 & 7) * 2);
  uVar2 = uVar6 << 0x10;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
  if (uVar2 == 0) {
    puVar5 = puVar5 + 0x8000;
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      uVar2 = (uint)(ushort)unaff_r6[0x1e];
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      puVar5 = puVar5 + -1;
      *puVar5 = (short)uVar2;
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x1c];
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x1a];
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x18];
    }
    if ((uVar1 & 0x10) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x16];
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x14];
    }
    if ((uVar1 & 0x40) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x12];
    }
    if ((uVar1 & 0x80) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar4;
    }
  }
  if ((uVar1 & 0x100) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[0xe];
  }
  if ((uVar1 & 0x200) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[0xc];
  }
  if ((uVar1 & 0x400) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[10];
  }
  if ((uVar1 & 0x800) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[8];
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[6];
  }
  if ((uVar1 & 0x2000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[4];
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[2];
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5[-1] = *unaff_r6;
  }
  *(uint *)(puVar4 + (unaff_r11 & 7) * 2) = uVar6 + uVar3 * -2;
  iVar7 = unaff_r7 + uVar3 * -0x40000;
  iVar8 = iVar7 + -0x80000;
  if (iVar8 == 0 || iVar7 < 0x80000) {
    *(int *)(unaff_r6 + 0x26) = iVar8;
    *(ushort **)(unaff_r6 + 0x22) = unaff_r10 + 1;
    return iVar8 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202ea78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar7;
}


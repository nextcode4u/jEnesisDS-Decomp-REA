// Analysis annotation
// Role — m68k movem word
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include movem word (1). Example
// opcode words are 0x4CBB.

// rea decompile_all
// name: m68k_dispatch_0202f058
// address: 0x202f058
// body: available
// range: 0x202f058-0x202f1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202f058(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  short *psVar7;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  piVar5 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    piVar5 = unaff_r6 + 8;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)((int)piVar5 + uVar3);
  }
  else {
    iVar4 = *(int *)((int)piVar5 + uVar3);
  }
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = uVar3 * 0x400;
    psVar6 = (short *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    iVar4 = uVar3 * 0x10000;
    psVar6 = (short *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    psVar7 = psVar6;
    if (bVar8) {
      psVar7 = psVar6 + 1;
      iVar4 = (int)*psVar6;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = iVar4;
    }
    psVar6 = psVar7;
    if ((uVar1 & 2) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 4) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 8) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x10) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x20) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x40) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x80) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = (int)*psVar7;
    }
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x100) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x200) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x400) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x800) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x1000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x2000) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x4000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = (int)*psVar6;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = (int)*psVar7;
  }
  iVar4 = unaff_r7 + -0x120000 + uVar3 * -0x40000;
  if (iVar4 != 0 && (int)(uVar3 * 0x40000) <= unaff_r7 + -0x120000) {
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
    return iVar4;
  }
  unaff_r6[0x13] = iVar4;
  unaff_r6[0x11] = (int)(unaff_r10 + 2);
  return iVar4 >> 0x10;
}


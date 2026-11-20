// Analysis annotation
// Role — m68k movem word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include movem word (8). Example
// opcode words are 0x4CA8, 0x4CA9, 0x4CAA, 0x4CAB, 0x4CAC.

// rea decompile_all
// name: m68k_dispatch_0202ef98
// address: 0x202ef98
// body: available
// range: 0x202ef98-0x202efb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202ef98(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 * 0x400;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 * 0x10000;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


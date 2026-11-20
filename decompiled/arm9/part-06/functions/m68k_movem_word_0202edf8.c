// Analysis annotation
// Role — m68k movem word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include movem word (8). Example
// opcode words are 0x4C98, 0x4C99, 0x4C9A, 0x4C9B, 0x4C9C.

// rea decompile_all
// name: m68k_dispatch_0202edf8
// address: 0x202edf8
// body: available
// range: 0x202edf8-0x202ef7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202edf8(void)

{
  ushort uVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int *unaff_r6;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  piVar2 = unaff_r6 + 8;
  uVar5 = piVar2[unaff_r11 & 7];
  if ((uVar5 & 0xc00000) == 0) {
    psVar3 = (short *)(unaff_r6[0x18] + (uVar5 & 0x3fffff));
  }
  else {
    psVar3 = (short *)(unaff_r8 + (uVar5 & 0xffff));
  }
  if ((uVar1 & 0xff) != 0) {
    psVar4 = psVar3;
    if ((uVar1 & 1) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      *unaff_r6 = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 2) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[1] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 4) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[2] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 8) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[3] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 0x10) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[4] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 0x20) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[5] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 0x40) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[6] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 0x80) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[7] = (int)*psVar4;
    }
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x100) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    *piVar2 = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x200) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[9] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x400) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[10] = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x800) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xb] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x1000) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xc] = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x2000) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xd] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x4000) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xe] = (int)*psVar3;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xf] = (int)*psVar4;
  }
  piVar2[unaff_r11 & 7] = uVar5;
  iVar6 = unaff_r7 + -0xc0000;
  if (iVar6 == 0 || unaff_r7 < 0xc0000) {
    unaff_r6[0x13] = iVar6;
    unaff_r6[0x11] = (int)(unaff_r10 + 1);
    return iVar6 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar6;
}


// Analysis annotation
// Role — graphics dispatch selector cases
// Basis — pseudocode clue
// The pseudocode branches across selector cases. Location suggests the graphics region.

// rea decompile_all
// name: FUN_02009614
// address: 0x2009614
// body: available
// range: 0x2009614-0x200964f inclusive
// range: 0x20096b0-0x2009bcb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009614(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 1 - (uint)DAT_020b4c06;
  if (1 < DAT_020b4c06) {
    iVar2 = 0;
  }
  if (param_1 < 0xc) {
    iVar2 = 0;
  }
  bVar1 = (byte)param_2;
  (&DAT_020b4c18)[param_1] = bVar1;
  if (iVar2 == 0) {
    switch(param_1) {
    case 0:
      DAT_0b003644 = (byte)(param_2 >> 4) & 1;
      DAT_020b4bf1 = ((byte)(param_2 >> 1) ^ 1) & 1;
      return;
    case 1:
      DAT_020b4c06 = bVar1 & 4;
      DAT_0b00362f = (byte)(param_2 >> 6) & 1;
      uVar3 = param_2 >> 3 & 1;
      DAT_0b00362c = (byte)(param_2 >> 5) & 1;
      DAT_020b4bf2 = (byte)(param_2 >> 4) & 1;
      DAT_023ddb06 = (char)uVar3;
      if (uVar3 == 0) {
        DAT_023dd370 = 0xe0;
        DAT_0b000004 = 0xe0;
      }
      else {
        DAT_023dd370 = 0xf0;
        DAT_0b000004 = 0xf0;
      }
      return;
    case 2:
      DAT_023ddea0 = (param_2 & 0x38) * 0x400;
      DAT_023dde8c = &DAT_020acbec + (param_2 & 0x38) * 0x200;
      if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
        DAT_023dc8a4 = 1;
      }
      ram0x023dd374 = DAT_023ddea0;
      DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
      return;
    case 3:
      DAT_023ddea8 = (param_2 & 0x3e) * 0x400;
      if (DAT_023ddb05 == '\0') {
        iVar2 = 0x800;
      }
      else {
        iVar2 = 0x1000;
      }
      DAT_023dc8bc = iVar2 + DAT_023ddea8;
      return;
    case 4:
      DAT_023ddea4 = (param_2 & 7) * 0x2000;
      DAT_023dde90 = &DAT_020acbec + (param_2 & 7) * 0x1000;
      if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
        DAT_023dc8a8 = 1;
      }
      DAT_023dd378 = DAT_023ddea4;
      DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
      return;
    case 5:
      iVar2 = (param_2 & 0x7f) * 0x200;
      DAT_0209cbe0 = DAT_023ddeac;
      DAT_023dcdac = &DAT_0209cbec + iVar2;
      DAT_023ddeac = iVar2;
      return;
    case 7:
      DAT_0b003640 = param_2 & 0x3f;
      DAT_020b4bf7 = (char)(param_2 & 0x3f);
      return;
    case 10:
      DAT_020b4bf8 = (short)param_2;
      return;
    case 0xb:
      DAT_020b4bf0 = (byte)(param_2 >> 3) & 1;
      DAT_023dcfac = (byte)(param_2 >> 2) & 1;
      DAT_023dcdb0 = bVar1 & 3;
      if ((DAT_023cb610 & 4) == 0) {
        DAT_023dcea8 = FUN_0200c280;
      }
      else {
        switch(bVar1 & 3) {
        case 0:
          DAT_023dcea8 = (code *)&LAB_0200bbd0;
          return;
        case 1:
          DAT_023dcea8 = (code *)&LAB_0200c0cc;
          return;
        case 2:
          DAT_023dcea8 = (code *)&LAB_0200bf18;
          return;
        case 3:
          DAT_023dcea8 = (code *)&LAB_0200bd6c;
          return;
        }
      }
      return;
    case 0xc:
      uVar3 = (uint)DAT_020b4bf4;
      DAT_023ddb05 = (param_2 & 0x81) != 0;
      if ((uVar3 != (param_2 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar3)) {
        DAT_020b4bf4 = 0;
      }
      if ((bool)DAT_023ddb05) {
        DAT_023dc8bc = DAT_023ddea8 + 0x1000;
        DAT_020b4c0c = 0xf000;
        DAT_020b4c0a = 0x50;
        DAT_023ddeb2 = 0x28;
        DAT_023dc8ae = 0x140;
        DAT_023dc8c8 = 0x40;
      }
      else {
        DAT_020b4c0c = 0xf800;
        DAT_023dc8bc = DAT_023ddea8 + 0x800;
        DAT_020b4c14 = 1;
        DAT_020b4c0a = 0x40;
        DAT_023ddeb2 = 0x20;
        DAT_023dc8ae = 0x100;
        DAT_023dc8c8 = 0x20;
      }
      if (DAT_023ddeb4 == '\0') {
        DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
      }
      else {
        DAT_023dcfa8 = 1 - DAT_023ddb04;
        if (1 < DAT_023ddb04) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0xd:
      DAT_023dcea4 = (short)((param_2 << 0x1a) >> 0x10);
      DAT_023dcdaa = DAT_023dcea4 + 0x380;
      return;
    case 0xf:
      DAT_0b003630 = param_2;
      return;
    case 0x10:
      uVar4 = param_2 >> 4 & 3;
      param_2 = param_2 & 3;
      uVar3 = uVar4 | param_2 << 4;
      if (uVar3 != (DAT_023dcfa4 & 0xff)) {
        DAT_0208f358 = 1;
      }
      DAT_023dcfa4 = uVar3;
      DAT_023dc8a0 = *(int *)(&DAT_0208e59c + (uVar4 + param_2 * 4) * 4);
      DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
      DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
      DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
      DAT_023dcea6 = (char)param_2;
      DAT_023dd372._0_1_ = (char)uVar4;
      return;
    case 0x11:
      uVar3 = (param_2 & 0x1f) * 2;
      DAT_023ddeb4 = (char)(param_2 >> 7);
      DAT_023ddb04 = (char)uVar3;
      if (param_2 >> 7 == 0) {
        DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar3);
      }
      else {
        DAT_023dcfa8 = (param_2 & 0x1f) * -2 + 1;
        if (1 < uVar3) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0x12:
      DAT_023dde94 = (char)(param_2 >> 7);
      DAT_020b4c10 = (param_2 & 0x1f) << 3;
      DAT_023ddeb0 = (char)(param_2 & 0x1f);
      return;
    case 0x13:
      DAT_020b4bfc = DAT_020b4bfc & 0xff00 | param_2;
      return;
    case 0x14:
      DAT_020b4bfc = DAT_020b4bfc & 0xff | param_2 << 8;
      return;
    case 0x15:
      DAT_0b003634 = DAT_0b003634 & 0xfffe00 | param_2 << 1;
      return;
    case 0x16:
      DAT_0b003634 = DAT_0b003634 & 0xfe01ff | param_2 << 9;
      return;
    case 0x17:
      DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_2 & 0x7f) << 0x11;
      DAT_020b4c05 = (undefined1)(param_2 >> 6);
    }
    return;
  }
  return;
}


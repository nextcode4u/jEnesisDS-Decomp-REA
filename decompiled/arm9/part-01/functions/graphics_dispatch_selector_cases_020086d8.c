// Analysis annotation
// Role — graphics dispatch selector cases
// Basis — pseudocode clue
// The pseudocode branches across selector cases. Location suggests the graphics region.

// rea decompile_all
// name: FUN_020086d8
// address: 0x20086d8
// body: available
// range: 0x20086d8-0x2008793 inclusive
// range: 0x20087d4-0x20088ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020086d8(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar4;
  uint uVar5;
  uint uVar3;
  
  uVar5 = ((param_1[3] & 0xffff01ff) - DAT_020993a4) - 0x80;
  uVar4 = (ushort)uVar5;
  uVar3 = ((*param_1 & 0xffff01ff) - DAT_020993a8) - 0x80 & 0xffff;
  if (((DAT_023cb610 & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&DAT_023dcdb4)[uVar3] & 0xffff;
  }
  uVar2 = (ushort)uVar3;
  switch(param_1[1] >> 8 & 0xc | (param_1[1] & 0x3ff) >> 8) {
  case 0:
    FUN_010042c0();
    break;
  case 1:
    FUN_010044d0();
    break;
  case 2:
    FUN_010048c0();
    if ((param_1[2] & 0x1000) == 0) break;
    goto LAB_02008824;
  case 3:
    FUN_01004f30();
    break;
  case 4:
    FUN_01004300();
    break;
  case 5:
    FUN_01004530();
    break;
  case 6:
    FUN_01004970();
    uVar1 = param_1[2];
    goto joined_r0x02008820;
  case 7:
    FUN_01004ff0();
    break;
  case 8:
    FUN_01004360();
    uVar1 = param_1[2];
    goto joined_r0x02008894;
  case 9:
    FUN_010045f0();
    uVar1 = param_1[2];
joined_r0x02008894:
    if ((uVar1 & 0x800) != 0) {
LAB_02008854:
      uVar4 = (ushort)(((uVar5 & 0xffff) - 8) * 0x10000 >> 0x10);
    }
    break;
  case 10:
    FUN_01004ab0();
    uVar1 = param_1[2];
    if ((uVar1 & 0x1000) != 0) {
      uVar2 = uVar2 - 8;
    }
    goto joined_r0x02008850;
  case 0xb:
    FUN_01005160();
    uVar1 = param_1[2];
joined_r0x02008850:
    if ((uVar1 & 0x800) == 0) break;
    goto LAB_02008854;
  case 0xc:
    FUN_01004410();
    break;
  case 0xd:
    FUN_01004750();
    break;
  case 0xe:
    FUN_01004ce0();
    uVar1 = param_1[2];
joined_r0x02008820:
    if ((uVar1 & 0x1000) != 0) {
LAB_02008824:
      uVar2 = uVar2 - 8;
    }
    break;
  case 0xf:
    FUN_01005410(param_2 + (param_1[2] & 0x7ff) * 0x20,&DAT_06400000 + param_3 * 0x200);
  }
  (&DAT_023dc1a8)[param_3 * 4] = (&DAT_023dc1a8)[param_3 * 4] | uVar2 & 0xff;
  (&DAT_023dc1aa)[param_3 * 4] = (&DAT_023dc1aa)[param_3 * 4] | uVar4 & 0x1ff;
  return;
}


// rea decompile_all
// name: FUN_02009cf0
// address: 0x2009cf0
// body: available
// range: 0x2008e5c-0x2008e8b inclusive
// range: 0x2009cf0-0x2009e13 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009cf0(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  uVar6 = 0;
  do {
    uVar3 = uVar6 & 0xff;
    puVar1 = &DAT_020b4c18 + uVar6;
    uVar6 = uVar6 + 1;
    FUN_02009614(uVar3,*puVar1);
  } while (uVar6 != 0x18);
  uVar3 = 0;
  uVar6 = (uint)DAT_020b4bf7;
  iVar4 = 0;
  do {
    uVar5 = (uint)*(ushort *)((int)&DAT_023dc6b0 + iVar4);
    uVar2 = (ushort)((uVar5 & 0xe0) << 2) | (ushort)((uVar5 & 0xe00) << 3) | 0x8000 |
            (ushort)((uVar5 & 0xe) << 1);
    *(ushort *)((int)&DAT_023dc730 + iVar4) = uVar2;
    if (uVar3 != 0) {
      *(ushort *)(&DAT_05000000 + iVar4) = uVar2;
    }
    bVar7 = uVar6 == uVar3;
    uVar3 = uVar3 + 1;
    *(ushort *)(&DAT_05000200 + iVar4) = uVar2;
    if (bVar7) {
      _DAT_05000200 = uVar2;
    }
    iVar4 = iVar4 + 2;
  } while (uVar3 != 0x40);
  if (DAT_023ddb05 == '\0') {
    FUN_020072a8();
    FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x800,2);
  }
  else {
    FUN_020072a8(1);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x1000,2);
  }
  FUN_02006f2c(DAT_023dcfa4);
  FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
  FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
  DAT_020993bc = 1;
  FUN_02008984(DAT_0b003648,DAT_020993c0,&DAT_020993c0,1,unaff_r4,in_lr);
  DAT_020993bc = 0;
  return;
}


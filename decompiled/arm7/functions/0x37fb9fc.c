// rea decompile_all
// name: FUN_037fb9fc
// address: 0x37fb9fc
// body: available
// range: 0x37fb9fc-0x37fbba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fb9fc(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_2c;
  
  local_2c = &DAT_0380b884;
  iVar4 = 0;
  do {
    uVar1 = FUN_038019ec(0xff000000,DAT_0380bde8);
    uVar3 = *local_2c;
    *(undefined2 *)(iVar4 * 0x10 + 0x4000408) = uVar1;
    *(undefined4 *)(iVar4 * 0x10 + 0x4000404) = uVar3;
    *(int *)(iVar4 * 0x10 + 0x400040c) = DAT_0380bdd8 >> 1;
    *(undefined4 *)(&DAT_04000400 + iVar4 * 0x10) = 0xa83f007f;
    uVar1 = FUN_038019ec(0xff000000,DAT_0380bde8);
    iVar2 = iVar4 + 6;
    *(undefined2 *)(iVar2 * 0x10 + 0x4000408) = uVar1;
    *(undefined4 *)(iVar2 * 0x10 + 0x4000404) = uVar3;
    iVar4 = iVar4 + 1;
    *(int *)(iVar2 * 0x10 + 0x400040c) = DAT_0380bdd8 >> 1;
    *(undefined4 *)(&DAT_04000400 + iVar2 * 0x10) = 0xa83f007f;
    local_2c = local_2c + 1;
  } while (iVar4 != 6);
  iVar4 = FUN_038019ec(0xff000000,DAT_0380bde8);
  _DAT_040004c8 = (short)iVar4;
  _DAT_040004c4 = DAT_0380b89c;
  _DAT_040004cc = DAT_0380bdd8 >> 1;
  _DAT_040004c0 = 0xa800007f;
  _DAT_040004d8 = (short)iVar4;
  _DAT_040004d4 = DAT_0380b89c;
  _DAT_040004dc = DAT_0380bdd8 >> 1;
  _DAT_040004d0 = 0xa87f007f;
  _DAT_040004e8 = 0xfdf4;
  _DAT_040004e4 = DAT_0380bdcc;
  _DAT_040004ec = 0x800;
  _DAT_040004e0 = 0xa800007f;
  _DAT_040004f8 = 0xfdf4;
  _DAT_040004f4 = DAT_0380bdcc;
  _DAT_040004fc = 0x800;
  _DAT_040004f0 = 0xa87f007f;
  _DAT_04000100 = (short)((uint)(iVar4 << 0x11) >> 0x10);
  _DAT_04000102 = 0x80;
  _DAT_04000104 = 0;
  _DAT_04000106 = 0x84;
  _DAT_04000108 = 0xfbe8;
  _DAT_0400010a = 0x80;
  _DAT_0400010c = 0;
  _DAT_0400010e = 0x84;
  return;
}


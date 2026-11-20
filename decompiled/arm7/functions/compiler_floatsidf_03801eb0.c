// Analysis annotation
// Role — compiler floatsidf
// Basis — library match
// Matches symbol __floatsidf in devkitARM r20 libgcc.a (_addsubdf3.o) after masking
// relocation fields. Aliases at this address include __aeabi_i2d.

// rea decompile_all
// name: FUN_03801eb0
// address: 0x3801eb0
// body: available
// range: 0x3801eb0-0x3801ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x03801cd0) */

ulonglong FUN_03801eb0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  iVar5 = 0x34;
  uVar1 = 0;
  uVar7 = uVar2;
  if (0xffff < uVar2) {
    uVar7 = uVar2 >> 0x10;
    iVar5 = 0x24;
  }
  if (0xff < uVar7) {
    uVar7 = uVar7 >> 8;
    iVar5 = iVar5 + -8;
  }
  if (0xf < uVar7) {
    uVar7 = uVar7 >> 4;
    iVar5 = iVar5 + -4;
  }
  if (uVar7 < 4) {
    iVar5 = iVar5 - (uVar7 >> 1);
  }
  else {
    iVar5 = iVar5 + -2;
  }
  uVar6 = iVar5 - (uVar7 >> 3);
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = uVar6 - 0x20;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if ((int)uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = uVar6 - 0x14;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << (uVar6 & 0xff);
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_03801d50;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_03801d50:
  if ((int)uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}


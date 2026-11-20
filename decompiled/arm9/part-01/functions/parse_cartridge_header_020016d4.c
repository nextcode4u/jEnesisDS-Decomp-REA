// Analysis annotation
// Role — parse cartridge header
// Basis — reviewed
// Clears cartridge metadata and parses identifying fields from the Genesis ROM header.

// rea decompile_all
// name: FUN_020016d4
// address: 0x20016d4
// body: available
// range: 0x20016d4-0x200193b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_020016d4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_02083058(DAT_02098fc8 + 0x200,0,0x20);
  FUN_02083058(DAT_02098fc8 + 0x220,0,0x20);
  iVar3 = DAT_02098fc8;
  iVar5 = 0x120;
  iVar2 = 0;
  *(undefined1 *)(DAT_02098fc8 + 0x262) = 0;
  *(undefined4 *)(iVar3 + 0x240) = 0;
  *(undefined4 *)(iVar3 + 0x244) = 0;
  *(undefined4 *)(iVar3 + 0x24c) = 0;
  *(undefined4 *)(iVar3 + 0x250) = 0;
  *(undefined4 *)(iVar3 + 0x248) = 0;
  *(undefined1 *)(iVar3 + 0x261) = 0;
  *(undefined4 *)(iVar3 + 0x25c) = 0;
  cVar8 = '\0';
  do {
    while( true ) {
      cVar1 = *(char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      if ((cVar8 != ' ') || (cVar1 != ' ')) break;
      cVar8 = cVar1;
      if (iVar5 == 0x150) goto LAB_02001784;
    }
    *(char *)(iVar2 + DAT_02098fc8 + 0x200) = cVar1;
    iVar2 = iVar2 + 1;
    cVar8 = cVar1;
  } while (iVar5 != 0x150);
LAB_02001784:
  iVar3 = 0;
  cVar8 = '\0';
  do {
    while( true ) {
      cVar1 = *(char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      if ((cVar8 != ' ') || (cVar1 != ' ')) break;
      cVar8 = cVar1;
      if (iVar5 == 0x180) goto LAB_020017cc;
    }
    *(char *)(iVar3 + DAT_02098fc8 + 0x220) = cVar1;
    iVar3 = iVar3 + 1;
    cVar8 = cVar1;
  } while (iVar5 != 0x180);
LAB_020017cc:
  iVar3 = DAT_02098fc8;
  *(uint *)(DAT_02098fc8 + 0x240) =
       (uint)CONCAT11(*(undefined1 *)(param_1 + 0x18e),*(undefined1 *)(param_1 + 399));
  iVar2 = DAT_02098fc8;
  if ((*(char *)(param_1 + 0x1b0) == 'R') && (*(char *)(param_1 + 0x1b1) == 'A')) {
    uVar6 = (uint)*(byte *)(param_1 + 0x1b5) << 0x10 | (uint)*(byte *)(param_1 + 0x1b4) << 0x18 |
            (uint)*(byte *)(param_1 + 0x1b7) | (uint)*(byte *)(param_1 + 0x1b6) << 8;
    uVar4 = (uint)*(byte *)(param_1 + 0x1b9) << 0x10 | (uint)*(byte *)(param_1 + 0x1b8) << 0x18 |
            (uint)*(byte *)(param_1 + 0x1bb) | (uint)*(byte *)(param_1 + 0x1ba) << 8;
    if (uVar6 < uVar4) {
      if ((*(byte *)(param_1 + 0x1b7) & 1) != 0) {
        uVar6 = uVar6 - 1;
      }
      if ((*(byte *)(param_1 + 0x1bb) & 1) == 0) {
        uVar4 = uVar4 + 1;
      }
      uVar7 = (uVar4 - uVar6) + 1;
      *(uint *)(iVar3 + 0x250) = uVar4;
      *(uint *)(iVar3 + 0x24c) = uVar6;
      *(undefined1 *)(iVar3 + 0x261) = 1;
      *(undefined1 *)(iVar3 + 0x262) = 0;
      *(uint *)(iVar3 + 0x248) = uVar7;
      *(undefined1 *)(iVar3 + 0x265) = 0;
      if (uVar7 == 0) {
        return 1;
      }
      if (0xffff < uVar7) {
        *(undefined1 *)(iVar3 + 0x262) = 0;
        *(undefined1 *)(iVar3 + 0x261) = 0;
        return 1;
      }
    }
    else {
      if (uVar6 != 0x200001 || uVar6 != uVar4) {
        *(undefined1 *)(iVar3 + 0x262) = 0;
        *(undefined1 *)(iVar3 + 0x261) = 0;
        goto LAB_02001804;
      }
      *(undefined1 *)(iVar3 + 0x265) = 0;
      *(undefined4 *)(iVar3 + 0x248) = 0x80;
      *(undefined1 *)(iVar3 + 0x262) = 1;
      *(undefined4 *)(iVar3 + 0x24c) = 0x200000;
      *(undefined4 *)(iVar3 + 0x250) = 0x2000ff;
      *(undefined1 *)(iVar3 + 0x261) = 1;
    }
    *(undefined1 *)(DAT_02098fc8 + 0x265) = 1;
    return 1;
  }
  uVar4 = 0;
  uVar6 = 0;
  *(undefined1 *)(DAT_02098fc8 + 0x262) = 0;
  *(undefined1 *)(iVar2 + 0x261) = 0;
LAB_02001804:
  iVar3 = DAT_02098fc8;
  *(uint *)(DAT_02098fc8 + 0x250) = uVar4;
  *(undefined1 *)(iVar3 + 0x265) = 0;
  *(uint *)(iVar3 + 0x24c) = uVar6;
  *(undefined4 *)(iVar3 + 0x248) = 0;
  return 1;
}


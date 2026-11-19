// rea decompile_all
// name: FUN_02001d40
// address: 0x2001d40
// body: available
// range: 0x2001d40-0x2001f03 inclusive
// range: 0x2001f98-0x2002057 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02001d40(int param_1,undefined4 param_2)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  char cVar12;
  
  FUN_02083058(&DAT_020b4cec,0,0x306800);
  if (DAT_02098fc8 == 0) {
    DAT_02098fc8 = FUN_02082724(0x268);
  }
  FUN_02083dbc(DAT_02098fc8,param_2,0x100);
  *(undefined4 *)(DAT_02098fc8 + 600) = 0;
  if (param_1 != 0) {
    FUN_02081ff0(param_1,0,2);
    uVar6 = FUN_0208212c(param_1);
    FUN_02081ff0(param_1,0,0);
    if (0x306800 < uVar6) {
      *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 6;
      return 0;
    }
    if (uVar6 != 0) {
      iVar7 = FUN_02001b08(param_1);
      if (iVar7 == 0) {
        FUN_02081788(&DAT_020b4cec,1,uVar6,param_1);
        *(undefined1 *)(DAT_02098fc8 + 0x260) = 0;
      }
      else {
        uVar6 = uVar6 - 0x200;
        FUN_02081ff0(param_1,0x200,0);
        FUN_02081788(&DAT_020b4cec,1,uVar6,param_1);
        FUN_02001c4c(&DAT_020b4cec,uVar6);
        *(undefined1 *)(DAT_02098fc8 + 0x260) = 1;
      }
      FUN_020016d4(&DAT_020b4cec,uVar6);
      if (((DAT_023cb610 & 0x20) != 0) &&
         (iVar8 = FUN_02001530(&DAT_020b4cec,uVar6), iVar7 = DAT_02098fc8,
         iVar8 != *(int *)(DAT_02098fc8 + 0x240))) {
        *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x10;
        *(int *)(iVar7 + 0x240) = iVar8;
        DAT_020b4e7b = (undefined1)iVar8;
        DAT_020b4e7a = (undefined1)((uint)iVar8 >> 8);
      }
      uVar10 = DAT_023cb610 >> 0x10 & 3;
      if (uVar10 == 1) {
        cVar12 = 'J';
      }
      else if (uVar10 == 2) {
        cVar12 = 'E';
      }
      else {
        cVar12 = 'U';
      }
      puVar9 = &DAT_020b4cec;
      cVar4 = 'U';
      bVar3 = 0;
      do {
        cVar5 = puVar9[0x1f0];
        bVar2 = (bool)(bVar3 ^ 1);
        puVar9 = puVar9 + 1;
        if (cVar12 == cVar5) break;
        if (cVar5 == ' ') {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = 1;
          cVar4 = cVar5;
        }
        cVar5 = cVar4;
      } while (puVar9 != (undefined *)0x20b4cef);
      switch(cVar5) {
      case '1':
      case 'J':
        *(undefined1 *)(DAT_02098fc8 + 0x254) = 0;
        FUN_020002e4();
        uVar11 = 1;
        break;
      default:
        *(undefined1 *)(DAT_02098fc8 + 0x254) = 2;
        FUN_020002e4(0xc0);
        uVar11 = 1;
        break;
      case '4':
      case '5':
      case 'F':
      case 'U':
        uVar11 = 1;
        *(undefined1 *)(DAT_02098fc8 + 0x254) = 1;
        FUN_020002e4(0x80);
      }
      goto LAB_02001dd4;
    }
  }
  uVar11 = 0;
  uVar6 = 0;
LAB_02001dd4:
  iVar7 = DAT_02098fc8;
  puVar1 = (uint *)(DAT_02098fc8 + 600);
  *(uint *)(DAT_02098fc8 + 0x244) = uVar6;
  *(uint *)(iVar7 + 600) = *puVar1 | 1;
  FUN_0200d82c();
  FUN_0200157c(&DAT_020b4cec,uVar6);
  return uVar11;
}


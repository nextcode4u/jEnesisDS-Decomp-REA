// rea decompile_all
// name: FUN_02000dac
// address: 0x2000dac
// body: available
// range: 0x2000dac-0x2000ee3 inclusive
// range: 0x200648c-0x20066df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000dac(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  
  FUN_02005780(&DAT_0b0000ac,0x2003b34,0x2003b60,0x2003b8c,0x2003cf8,&LAB_02003d24,0x2003d50,
               0x2003d98,&LAB_02009214,&LAB_02003c88);
  FUN_020050a8(&DAT_0b000158);
  uVar4 = FUN_02004c18();
  DAT_0b000559 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b00055a = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b00055b = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000558 = (undefined1)uVar4;
  uVar4 = FUN_02003ca4();
  DAT_0b000609 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b00060a = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b00060b = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000608 = (undefined1)uVar4;
  uVar4 = FUN_02003cbc();
  DAT_0b000600 = 0x78;
  DAT_0b000605 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b000606 = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b000601 = 0xb7;
  DAT_0b000602 = 0x3d;
  DAT_0b000604 = (undefined1)uVar4;
  DAT_0b000607 = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000603 = 2;
  FUN_02003af0();
  FUN_02004bf0();
  FUN_02004d94();
  if (DAT_0b000030 == 0) {
    DAT_0b000030 = FUN_02003ad4();
  }
  if (DAT_0b000034 == 0) {
    DAT_0b000034 = FUN_02003ad4();
  }
  DAT_0b00002c = &DAT_0b000158;
  DAT_0b000028 = &DAT_0b0000ac;
  FUN_02000d10();
  if (DAT_02099070 == 0) {
    FUN_0200c59c(1);
    FUN_0200c520(&LAB_020059a4);
    uVar5 = FUN_02082560(0x20,0x400);
    DAT_023db774 = uVar5 | 0x400000;
    uVar5 = FUN_02082560(0x20,0x400);
    DAT_023db644 = uVar5 | 0x400000;
    uVar5 = FUN_02082560(0x20,0x400);
    DAT_023db760 = uVar5 | 0x400000;
    uVar5 = FUN_02082560(0x20,0x100);
    DAT_023db648 = DAT_023db774 | 0x400000;
    DAT_023db66c = DAT_023db644 | 0x400000;
    DAT_023db634 = DAT_023db760 | 0x400000;
    DAT_023db658 = uVar5 | 0x400000;
    DAT_023db64c = 0;
    DAT_023db768 = 0;
    DAT_023db638 = 0;
    DAT_023dc19c = 0;
    DAT_023db660 = 0;
    DAT_023db664 = DAT_023db650;
    DAT_023db668 = DAT_023db654;
    DAT_023db670 = 0;
    DAT_023db674 = DAT_023db76c;
    DAT_023db678 = DAT_023db770;
    DAT_023db680 = 0;
    DAT_023db684 = DAT_023db63c;
    DAT_023db688 = DAT_023db640;
    DAT_023db690 = 0;
    DAT_023db694 = DAT_023dc1a0;
    DAT_023db698 = DAT_023dc1a4;
    _DAT_027ff028 = &DAT_023db65c;
    DAT_023db75c = 4;
    puVar1 = &DAT_0209927c;
    DAT_023db65c = DAT_023db648;
    DAT_023db67c = DAT_023db634;
    DAT_023db68c = DAT_023db658;
    DAT_023db764 = DAT_023db66c;
    DAT_023dc198 = DAT_023db658;
    do {
      puVar6 = puVar1;
      *puVar6 = 1;
      puVar1 = puVar6 + 1;
    } while (puVar6 + 1 != &DAT_0209937c);
    puVar8 = &DAT_023db778;
    DAT_02099070 = 1;
    puVar6[-0x56] = 0;
    puVar6[-0xdb] = 0;
    puVar6[-0xda] = 0;
    puVar6[-0xd9] = 0;
    puVar6[-0xd8] = 0;
    puVar6[-0xd5] = 0;
    puVar6[-0x5f] = 0;
    puVar6[-0x5e] = 0;
    puVar6[-0x5d] = 0;
    puVar6[-0x5c] = 0;
    puVar6[-0x5b] = 0;
    puVar6[-0x5a] = 0;
    puVar6[-0x59] = 0;
    puVar6[-0x58] = 0;
    puVar6[-0x57] = 0;
    iVar2 = 0;
    do {
      iVar7 = iVar2;
      uVar11 = FUN_02080958(iVar7);
      if (iVar7 < 0) {
        uVar11 = FUN_02080624((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x41f00000);
      }
      uVar11 = FUN_02080620(0,0x40900000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      FUN_02080a34((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc669057d,0x40401ba2);
      uVar3 = FUN_02080ed0();
      *(undefined2 *)(puVar8 + 8) = uVar3;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      iVar2 = iVar7 + 1;
    } while (iVar7 + 1 != 0x400);
    iVar7 = iVar7 + -0x3ff;
    puVar9 = &DAT_023dbf98;
    do {
      uVar11 = FUN_02080958(iVar7);
      bVar10 = iVar7 < 0;
      iVar7 = iVar7 + 1;
      if (bVar10) {
        uVar11 = FUN_02080624((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x41f00000);
      }
      uVar11 = FUN_02080620(0,0x40700000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      FUN_02080a34((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc669057d,0x40401ba2);
      uVar3 = FUN_02080ed0();
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    } while (iVar7 != 0x100);
  }
  return;
}


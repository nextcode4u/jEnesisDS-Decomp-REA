// rea decompile_all
// name: FUN_02006d20
// address: 0x2006d20
// body: available
// range: 0x2006d20-0x2006edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006d20(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  int iVar6;
  
  thunk_FUN_0208031c();
  _DAT_04000000 = 0x10801;
  thunk_FUN_0207fc98(1,9,4,2);
  _DAT_0400000e = 0x42c8;
  _DAT_04000030 = 0x100;
  _DAT_04000036 = 0x100;
  _DAT_04000038 = 0;
  _DAT_0400003c = 0;
  _DAT_04000050 = 200;
  _DAT_04001000 = 0x10100;
  puVar2 = &DAT_0208a1a8;
  puVar3 = (undefined2 *)&DAT_05000000;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined2 *)&DAT_05000200);
  thunk_FUN_0208033e(&DAT_0208a3a8,&DAT_06008000,16000);
  thunk_FUN_0208033e(&DAT_0208e228,&DAT_06001000,0x300);
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    thunk_FUN_0208031c();
  } while (iVar5 != 0x78);
  uVar7 = iVar6 - 0x77;
  uVar8 = uVar7;
  while( true ) {
    do {
      uVar1 = _DAT_04000006 & 0x1ff;
    } while ((_DAT_04000006 & 0x1ff) != 0);
    do {
      if ((uVar8 & 1) == 0) {
        _DAT_04000038 = 0;
      }
      else {
        iVar5 = uVar1 - 0x60;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = (iVar5 / 10) * (iVar5 / 10);
        if ((uVar1 & 1) == 0) {
          _DAT_04000038 = (-iVar5 - uVar7) * 0x80;
        }
        else {
          _DAT_04000038 = (iVar5 + uVar7) * 0x80;
        }
      }
      do {
      } while (uVar1 == (_DAT_04000006 & 0x1ff));
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0xc0);
    _DAT_04000054 = (undefined2)uVar8;
    if (0x1f < uVar8 + 1) break;
    uVar7 = uVar7 + 3;
    uVar8 = uVar8 + 1;
  }
  thunk_FUN_0208031c();
  puVar2 = (undefined2 *)&DAT_05000000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)&DAT_05000200);
  puVar2 = (undefined2 *)&DAT_06008000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x600be80);
  puVar2 = (undefined2 *)&DAT_06001000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x6001300);
  _DAT_04000054 = 0;
  _DAT_04000050 = 0;
  return;
}


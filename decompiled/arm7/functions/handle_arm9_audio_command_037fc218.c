// Analysis annotation
// Role — handle arm9 audio command
// Basis — reviewed
// Processes messages from ARM9 and updates audio settings and shared sound state.

// rea decompile_all
// name: FUN_037fc218
// address: 0x37fc218
// body: available
// range: 0x37fbbb0-0x37fbc0f inclusive
// range: 0x37fc218-0x37fc22f inclusive
// range: 0x37fc274-0x37fc457 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc218(undefined4 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar3;
  
  puVar2 = _DAT_027ff028;
  switch(param_1) {
  case 0:
    puVar5 = (undefined2 *)&DAT_06000000;
    DAT_0380bde0 = 0x1cb;
    DAT_0380bdd8 = 0x800;
    DAT_0380bde8 = 0x6bab;
    DAT_0380bdf8 = 0;
    DAT_0380bdec = 0;
    DAT_0380bdf0 = 0;
    DAT_0380bdf4 = 0;
    DAT_0380bddc = 0x200;
    DAT_0380bde4 = 1;
    iVar4 = 0x7000;
    puVar1 = puVar5;
    do {
      iVar4 = iVar4 + -1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (iVar4 != 0);
    puVar2 = &DAT_0380b884;
    do {
      puVar3 = puVar2 + 1;
      *puVar2 = puVar5;
      puVar5 = puVar5 + 0x800;
      puVar2 = puVar3;
    } while (puVar3 != &DAT_0380b8a0);
    iVar4 = 0x1000;
    puVar1 = (undefined2 *)&DAT_06007000;
    do {
      iVar4 = iVar4 + -1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (iVar4 != 0);
    DAT_0380bdd4 = 0x6009000;
    DAT_0380bdbc = DAT_0380bdd8 * 2 + 0x6000000;
    DAT_0380bafc = 0x369e99;
    DAT_0380bdd0 = &DAT_06007000;
    DAT_0380bdc4 = 0x6000000;
    DAT_0380bb00 = 0x750ab5;
    DAT_0380bdb8 = 0x6000000;
    DAT_0380bdc0 = 0x6000000;
    DAT_0380bdcc = &DAT_06007000;
    DAT_0380bdc8 = DAT_0380bdbc;
    FUN_037f8a30(0x369e99,100,DAT_0380bde8,DAT_0380bdd8);
    FUN_037f93e8(DAT_0380bb00,DAT_0380bde8,DAT_0380bdd8);
    DAT_0380b8a0 = 0;
    DAT_0380b870 = DAT_0380bde0 << 1;
    DAT_0380b874 = 0x42a;
    return;
  case 1:
    DAT_0380bdf8 = 1;
    break;
  case 2:
    FUN_037f9238();
    break;
  case 5:
    _DAT_04000500 = 0x807f;
    FUN_037fb9fc();
    DAT_0380bdf4 = 1;
    break;
  case 6:
    _DAT_04000500 = 0x8000;
    DAT_0380bdf4 = 0;
    _DAT_04000400 = 0;
    _DAT_04000410 = 0;
    _DAT_04000420 = 0;
    _DAT_04000430 = 0;
    _DAT_04000440 = 0;
    _DAT_04000450 = 0;
    _DAT_04000460 = 0;
    _DAT_04000470 = 0;
    _DAT_04000480 = 0;
    _DAT_04000490 = 0;
    _DAT_040004a0 = 0;
    _DAT_040004b0 = 0;
    _DAT_040004c0 = 0;
    _DAT_040004d0 = 0;
    _DAT_040004e0 = 0;
    _DAT_040004f0 = 0;
    _DAT_04000102 = 0;
    _DAT_04000106 = 0;
    _DAT_0400010a = 0;
    _DAT_0400010e = 0;
    return;
  case 0xb:
    iVar4 = _DAT_027ff028[5];
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = iVar4 + 1 >> 1;
        puVar1 = &DAT_0380bb38;
        puVar5 = (undefined2 *)_DAT_027ff028[4];
        do {
          iVar4 = iVar4 + -1;
          *puVar1 = *puVar5;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
      FUN_037f9afc(&DAT_0380bb38);
    }
    iVar4 = _DAT_027ff028[9];
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = iVar4 + 1 >> 1;
        puVar1 = &DAT_0380bb38;
        puVar5 = (undefined2 *)_DAT_027ff028[8];
        do {
          iVar4 = iVar4 + -1;
          *puVar1 = *puVar5;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
      FUN_037f9394(&DAT_0380bb38);
    }
    iVar4 = _DAT_027ff028[0xd];
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = iVar4 + 1 >> 1;
        puVar1 = &DAT_0380bb38;
        puVar5 = (undefined2 *)_DAT_027ff028[0xc];
        do {
          iVar4 = iVar4 + -1;
          *puVar1 = *puVar5;
          puVar1 = puVar1 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 != 0);
      }
      FUN_037f8504(&DAT_0380bb38);
    }
    DAT_0380bdf4 = 1;
    break;
  case 0xc:
    thunk_FUN_0380178c(param_1,*param_2);
    break;
  case 0xe:
    _DAT_04000500 = 0x8000;
    break;
  case 0xf:
    _DAT_04000500 = 0x807f;
    break;
  case 0x10:
    DAT_0380b8a0 = _DAT_027ff028[1];
    if ((DAT_0380b8a0 != 0) && (0 < DAT_0380b8a0)) {
      iVar4 = DAT_0380b8a0 + 1 >> 1;
      puVar1 = &DAT_0380b8a4;
      puVar5 = (undefined2 *)*_DAT_027ff028;
      do {
        iVar4 = iVar4 + -1;
        *puVar1 = *puVar5;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar4 != 0);
    }
    puVar2[1] = 0;
  }
  return;
}


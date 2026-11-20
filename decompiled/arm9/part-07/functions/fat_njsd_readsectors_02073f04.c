// Analysis annotation
// Role — fat njsd readsectors
// Basis — library match
// Matches symbol _NJSD_readSectors in libfat-nds 20070127 (io_njsd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02073f04
// address: 0x2073f04
// body: available
// range: 0x2073f04-0x20740d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073f04(int param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_228 [516];
  
  uVar1 = _DAT_04000208;
  if (param_2 != 0) {
    _DAT_04000208 = 0;
    if (param_2 < 2) {
      FUN_0207383c(2,0,3,0x11,param_1 << 9);
      if ((param_3 & 3) == 0) {
        FUN_0207fdcc(0xa1406000,param_3,0x200,&DAT_0208edb4);
      }
      else {
        FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
        thunk_FUN_02082ec0(param_3,auStack_228,0x200);
      }
      _DAT_04000208 = uVar1;
      return 1;
    }
    FUN_0207383c(2,0,2,0x12,param_1 << 9);
    if (param_2 != 2) {
      iVar3 = 0;
      uVar4 = param_3;
      do {
        if ((param_3 & 3) == 0) {
          FUN_0207fdcc(0xa1406000,uVar4,0x200,&DAT_0208edb4);
        }
        else {
          FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
          thunk_FUN_02082ec0(uVar4,auStack_228,0x200);
        }
        iVar2 = 1000000;
        while ((_DAT_04000214 & 0x100000) == 0) {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            _DAT_04000208 = uVar1;
            _DAT_04000214 = 0x100000;
            return 0;
          }
        }
        _DAT_04000214 = 0x100000;
        if (iVar2 < 1) {
          _DAT_04000208 = uVar1;
          _DAT_04000214 = 0x100000;
          return 0;
        }
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x200;
      } while (param_2 - 2 != iVar3);
    }
    if ((param_3 & 3) == 0) {
      FUN_0207fdcc(0xa1406000,param_3 + param_2 * 0x200 + -0x400,0x200,&DAT_0208edbc);
    }
    else {
      FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edbc);
      thunk_FUN_02082ec0(param_3 + param_2 * 0x200 + -0x400,auStack_228,0x200);
    }
    iVar3 = 1000000;
    do {
      if ((_DAT_04000214 & 0x100000) != 0) {
        _DAT_04000214 = 0x100000;
        if (0 < iVar3) {
          if ((param_3 & 3) != 0) {
            FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
            thunk_FUN_02082ec0(param_3 + param_2 * 0x200 + -0x200,auStack_228,0x200);
            _DAT_04000208 = uVar1;
            return 1;
          }
          FUN_0207fdcc(0xa1406000,param_3 + param_2 * 0x200 + -0x200,0x200,&DAT_0208edb4);
          _DAT_04000208 = uVar1;
          return 1;
        }
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _DAT_04000214 = 0x100000;
  }
  _DAT_04000208 = uVar1;
  return 0;
}


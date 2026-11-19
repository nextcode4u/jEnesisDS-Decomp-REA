// rea decompile_all
// name: FUN_020034b0
// address: 0x20034b0
// body: available
// range: 0x20034b0-0x200378f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_020034b0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0208f346 != '\0') {
    iVar5 = thunk_FUN_02072cdc();
    if (iVar5 == 0) {
      if (DAT_0208f346 != '\0') {
        DAT_0208f344 = 4;
        return 1;
      }
    }
    else {
      DAT_0208f346 = '\0';
    }
  }
  DAT_0208f344 = 4;
  FUN_020032a8();
  FUN_02006784(DAT_0208f344);
  iVar4 = 0;
  FUN_02002990(DAT_02098fe0);
  iVar5 = 0;
  if (param_1 != 0) goto LAB_02003610;
LAB_02003504:
  thunk_FUN_0207fb90();
  uVar1 = thunk_FUN_0207fb70();
  if ((uVar1 & 0x80) == 0) goto LAB_02003644;
LAB_02003518:
  uVar3 = (uint)DAT_0208f344;
  if (uVar3 < 0x13) {
    if ((uVar3 < DAT_02098fdc + 3U) && (7 < iVar5 - 1U)) {
      FUN_02002be8();
    }
    iVar5 = iVar5 + 1;
  }
  else if (uVar3 == 0x13) {
    if ((DAT_02098fd0 & 0x80) != 0) goto LAB_02003644;
    FUN_02002b8c();
    iVar5 = 0;
  }
  if ((uVar1 & 0x40) == 0) goto LAB_02003650;
  do {
    if (DAT_0208f344 < 5) {
      if (DAT_0208f344 != 4) goto LAB_02003568;
      if ((DAT_02098fd0 & 0x40) != 0) goto LAB_02003650;
      FUN_02002088();
      iVar4 = 0;
    }
    else if (iVar4 - 1U < 8) {
LAB_02003568:
      iVar4 = iVar4 + 1;
    }
    else {
      FUN_02002c28();
      iVar4 = iVar4 + 1;
    }
    while( true ) {
      if (((uVar1 & 0x20) != 0) && ((DAT_02098fd0 & 0x20) == 0)) {
        FUN_02002088();
        thunk_FUN_0208031c();
      }
      if (((uVar1 & 0x10) != 0) && ((DAT_02098fd0 & 0x10) == 0)) {
        FUN_02002b8c();
        thunk_FUN_0208031c();
      }
      if (((uVar1 & 2) != 0) && ((DAT_02098fd0 & 2) == 0)) {
        FUN_0208553c(&DAT_0208f254);
        FUN_020032a8();
        FUN_02006b90(DAT_0208f344);
        DAT_0208f344 = 4;
        FUN_02006784(4);
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
      }
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (DAT_02098fd0 ^ 1) & 1;
      }
      if ((((uVar1 & 4) != 0) && ((DAT_02098fd0 & 4) == 0)) && (param_1 != 0)) {
        FUN_02006b90(DAT_0208f344);
        FUN_0200311c();
        DAT_02098fd0 = uVar1;
        return 2;
      }
      DAT_02098fe4 = DAT_0208f344 - 4;
      if (uVar3 != 0) {
        iVar2 = FUN_020033a4(DAT_02098fe4 + DAT_02098fe0 * 0x10);
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
        if (iVar2 != 0) {
          thunk_FUN_0208031c();
          thunk_FUN_0208031c();
          thunk_FUN_0208031c();
          DAT_02098fd0 = uVar1;
          FUN_0200311c();
          return 1;
        }
        FUN_02006784(DAT_0208f344);
      }
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      DAT_02098fd0 = uVar1;
      FUN_02002990(DAT_02098fe0);
      if (param_1 == 0) goto LAB_02003504;
LAB_02003610:
      FUN_0200da3c("[A]     : Start Game",0x15,1);
      FUN_0200da3c("[SELECT]: Continue",0x16,1);
      thunk_FUN_0207fb90();
      uVar1 = thunk_FUN_0207fb70();
      if ((uVar1 & 0x80) != 0) goto LAB_02003518;
LAB_02003644:
      iVar5 = 0;
      if ((uVar1 & 0x40) != 0) break;
LAB_02003650:
      iVar4 = 0;
    }
  } while( true );
}


// rea decompile_all
// name: FUN_02002c68
// address: 0x2002c68
// body: available
// range: 0x2002c68-0x2002e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02002c68(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar1 = DAT_023cb610;
  FUN_0200d8c4();
  thunk_FUN_02006bb0();
  FUN_0200da3c("Configuration",5,1);
  FUN_0200da3c("______________________________",6,1);
  if (param_1 == 0) {
    FUN_0200da3c("[A]:     Change Option",0x15,1);
    FUN_0200da3c("[SELECT]:Continue",0x16,1);
  }
  else {
    FUN_0200da3c("[A]:     Change Option",0x15,1);
    FUN_0200da3c("[SELECT]:Continue Game",0x16,1);
  }
  DAT_02098fd0 = 0;
  while( true ) {
    thunk_FUN_0207fb90();
    puVar5 = &DAT_02085a10;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      FUN_020023ec(puVar5,iVar3);
      puVar5 = puVar5 + 0xc;
      iVar3 = iVar4;
    } while (iVar4 != 10);
    FUN_02006784(DAT_02098fe8 + 8);
    uVar2 = thunk_FUN_0207fb70();
    if (((uVar2 & 0x40) == 0) || ((DAT_02098fd0 & 0x40) != 0)) {
      if (((uVar2 & 0x80) != 0) && (((DAT_02098fd0 & 0x80) == 0 && (DAT_02098fe8 < 9)))) {
        FUN_02002b2c();
      }
    }
    else if (DAT_02098fe8 != 0) {
      FUN_02002b5c();
    }
    if (((uVar2 & 1) != 0) && ((DAT_02098fd0 & 1) == 0)) {
      FUN_020020c4(&DAT_02085a10 + DAT_02098fe8 * 0xc);
    }
    DAT_02098fd0 = uVar2;
    if ((uVar2 & 4) != 0) break;
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
  }
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006b90(DAT_02098fe8 + 8);
  thunk_FUN_0208031c();
  if (iVar1 != DAT_023cb610) {
    FUN_02000d10();
  }
  thunk_FUN_0208031c();
  DAT_02098fd0 = 0;
  if (param_1 != 0) {
    FUN_0200d8c4();
    thunk_FUN_02006bb0();
    FUN_020027d0();
  }
  return 1;
}


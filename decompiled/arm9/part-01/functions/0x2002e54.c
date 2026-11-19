// rea decompile_all
// name: FUN_02002e54
// address: 0x2002e54
// body: available
// range: 0x2002e54-0x20030f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02002e54(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_02098fd0 = 0;
  if (param_1 == 1) {
    uVar3 = *(uint *)(DAT_02098fc8 + 600);
    thunk_FUN_0208031c();
    FUN_0200d9ec(0xe);
    FUN_0200da3c("Savestate Slot",0xe,8);
    uVar3 = uVar3 >> 5 & 1;
    FUN_0200db8c(1,0xe,0x17);
    uVar4 = uVar3 ^ 1;
    if (uVar3 == 0) goto LAB_02002eac;
  }
  else {
    if ((param_1 != 2) || ((*(uint *)(DAT_02098fc8 + 600) & 0x40) == 0)) {
      thunk_FUN_0208031c();
      FUN_0200d9ec(0xe);
      FUN_0200da3c("Savestate Slot",0xe,8);
      FUN_0200db8c(param_1,0xe,0x17);
      uVar4 = 1;
      goto LAB_02002eac;
    }
    thunk_FUN_0208031c();
    FUN_0200d9ec(0xe);
    FUN_0200da3c("Savestate Slot",0xe,8);
    FUN_0200db8c(2,0xe,0x17);
    uVar4 = 0;
  }
  FUN_0200da3c(&DAT_0208f1bc,0x11,0xe);
LAB_02002eac:
  FUN_0200da3c(&DAT_0208f1c4,0x12,0xe);
  FUN_0200da3c("CANCEL",0x13,0xd);
  FUN_02006784(0x13);
  thunk_FUN_0208031c();
  uVar3 = 2;
  while( true ) {
    thunk_FUN_0207fb90();
    FUN_02006784(uVar3 + 0x11);
    uVar1 = thunk_FUN_0207fb70();
    if ((((uVar1 & 0x40) != 0) && ((DAT_02098fd0 & 0x40) == 0)) && (uVar4 < uVar3)) {
      FUN_02006b90(uVar3 + 0x11);
      uVar3 = uVar3 - 1;
    }
    if ((((uVar1 & 0x80) != 0) && ((DAT_02098fd0 & 0x80) == 0)) && (uVar3 < 2)) {
      FUN_02006b90(uVar3 + 0x11);
      uVar3 = uVar3 + 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (DAT_02098fd0 ^ 1) & 1;
    }
    DAT_02098fd0 = uVar1;
    if ((uVar1 & 4) != 0) break;
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    if (uVar2 != 0) {
      FUN_02006b90(uVar3 + 0x11);
      if (uVar3 == 0) {
        FUN_0200da3c("Loading.. DONT switch off!",0xf,1);
        FUN_0200d13c(param_1);
        DAT_0b000024 = 0;
      }
      else if (uVar3 == 1) {
        FUN_0200da3c("Saving... DONT switch off!",0xf);
        if (param_1 == 1) {
          *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x20;
        }
        else if (param_1 == 2) {
          *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x40;
        }
        FUN_0200d4c8(param_1);
      }
LAB_02002fac:
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      thunk_FUN_02006bb0();
      thunk_FUN_0208031c();
      FUN_020027d0();
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      return 1;
    }
  }
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006b90(0x13);
  goto LAB_02002fac;
}


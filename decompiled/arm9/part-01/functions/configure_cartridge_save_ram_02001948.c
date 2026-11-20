// Analysis annotation
// Role — configure cartridge save ram
// Basis — reviewed
// Configures SRAM storage and derives the .srm path from the selected ROM filename.

// rea decompile_all
// name: FUN_02001948
// address: 0x2001948
// body: available
// range: 0x2001948-0x2001aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02001948(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_02083a6c();
  iVar2 = DAT_02098fc8;
  if (*(uint *)(DAT_02098fc8 + 0x250) < 0x306800) {
    FUN_02083058(&DAT_023bb4f0,0,0x10000);
    iVar2 = DAT_02098fc8;
    uVar4 = *(uint *)(DAT_02098fc8 + 0x24c);
    *(undefined4 *)(DAT_02098fc8 + 0x25c) = 0;
    *(undefined1 *)(iVar2 + 0x263) = 0;
    *(undefined1 *)(iVar2 + 0x264) = 1;
    if (uVar4 < param_3) {
      *(undefined4 *)(iVar2 + 0x25c) = 1;
      FUN_02082ec0(&DAT_023bb4f0,&DAT_020b4cec + uVar4,param_2);
      iVar2 = DAT_02098fc8;
    }
    FUN_02083dbc(iVar2 + 0x100,param_1,0x100);
    iVar5 = DAT_02098fc8 + 0x100;
    iVar1 = iVar5 + iVar1;
    *(undefined1 *)(iVar1 + -1) = 0x6d;
    *(undefined1 *)(iVar1 + -4) = 0x2e;
    *(undefined1 *)(iVar1 + -2) = 0x72;
    *(undefined1 *)(iVar1 + -3) = 0x73;
    iVar2 = FUN_02081588(iVar5,&DAT_0208f074);
    if (iVar2 != 0) {
      FUN_02081ff0(iVar2,0);
      uVar4 = FUN_0208212c(iVar2);
      FUN_02081ff0(iVar2,0,0);
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      FUN_02081788(&DAT_020b4cec + *(int *)(DAT_02098fc8 + 0x24c),1,uVar4,iVar2);
      FUN_0200157c(&DAT_020b4cec + *(int *)(DAT_02098fc8 + 0x24c),uVar4);
      FUN_02081020(iVar2);
      return 0;
    }
    uVar3 = FUN_02081588(iVar5,&DAT_0208f070,2);
    FUN_020822e0(&DAT_023bb4f0,1,param_2,uVar3);
    FUN_02081020(uVar3);
    FUN_02083058(&DAT_020b4cec + *(int *)(DAT_02098fc8 + 0x24c),0,param_2);
  }
  else {
    *(undefined4 *)(DAT_02098fc8 + 0x24c) = 0;
    *(undefined1 *)(iVar2 + 0x261) = 0;
    *(undefined4 *)(iVar2 + 0x250) = 0;
  }
  return 0;
}


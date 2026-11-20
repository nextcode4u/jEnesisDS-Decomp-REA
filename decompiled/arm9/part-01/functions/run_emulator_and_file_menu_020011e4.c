// Analysis annotation
// Role — run emulator and file menu
// Basis — reviewed
// Initializes ARM9, waits for ARM7 readiness, opens the ROM browser, and runs the emulator
// and pause/menu loop.

// rea decompile_all
// name: arm9_main
// address: 0x20011e4
// body: available
// range: 0x20011e4-0x20012f3 inclusive
// range: 0x200131c-0x20014eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm9_main(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02002068();
  FUN_020011b0();
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  thunk_FUN_02006bb0();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  iVar1 = FUN_020034b0((undefined1)DAT_02098fb0);
joined_r0x02001238:
  if (iVar1 == 1) {
    FUN_0200d8c4();
    FUN_020027d0();
  }
  else {
    if (iVar1 == 2) {
      FUN_020027d0();
      FUN_020062f0(0);
      goto LAB_0200126c;
    }
    FUN_020023e0("Error accessing file system...shutting down!\n");
    FUN_020027d0();
  }
  FUN_02000dac();
switchD_020012ec_caseD_3:
  FUN_02000c08();
  DAT_02098fa4 = 0;
  DAT_02098fa0 = 0;
  FUN_0200106c();
LAB_0200126c:
  DAT_02098fb0 = 1;
  DAT_02098fa8 = 0;
LAB_02001288:
  DAT_02098fac = DAT_02098fac + 1;
  if (DAT_02098fac == 8) {
    if ((*(char *)(DAT_02098fc8 + 0x261) != '\0') && (*(char *)(DAT_02098fc8 + 0x263) != '\0')) {
      if (0x78 < (uint)(DAT_0b000008 - DAT_02098fb4)) {
        FUN_0200163c();
      }
      DAT_02098fb4 = DAT_0b000008;
    }
    do {
      DAT_02098fac = 0;
      uVar2 = FUN_020025a8();
      switch(uVar2) {
      case 1:
        thunk_FUN_0208031c();
        thunk_FUN_02006bb0();
        FUN_020027d0();
        thunk_FUN_02006908(DAT_02098fc0);
        FUN_0200da3c("-= PAUSED =-",0xe,10);
        FUN_0200d9ec(0x10);
        FUN_0200da3c("Continue with [SELECT]",0x10,5);
        FUN_0200da3c("   or TOUCH BOTTOM",0x11,5);
        FUN_0200da3c("Use [D-Pad] to adjust screen",0x13,2);
        DAT_02098fa8 = 1;
        break;
      case 2:
        goto switchD_020012ec_caseD_2;
      case 3:
        goto switchD_020012ec_caseD_3;
      default:
        if (DAT_02098fa8 == 0) goto LAB_020013bc;
        break;
      case 6:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        thunk_FUN_02006bb0();
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
        iVar1 = FUN_020034b0((undefined1)DAT_02098fb0);
        goto joined_r0x02001238;
      case 8:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        FUN_02002c68((undefined1)DAT_02098fb0);
        FUN_020062f0(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      case 9:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        FUN_02002e54(1);
        FUN_020062f0(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      case 10:
        DAT_02098fa8 = 1;
        FUN_020062f0(1);
        FUN_02002e54(2);
        FUN_020062f0(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      }
      FUN_02002150();
      thunk_FUN_0208031c();
      FUN_020062f0(1);
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      (*DAT_0b00003c)();
    } while( true );
  }
  goto LAB_020013bc;
switchD_020012ec_caseD_2:
  FUN_0200d8c4();
  thunk_FUN_02006bb0();
  FUN_020027d0();
  FUN_020062f0(0);
  DAT_02098fa8 = 0;
LAB_020013bc:
  (*DAT_0b000038)();
  FUN_020021cc();
  if (((DAT_023cb610 & 0x40) != 0) && (DAT_02098fa4 < DAT_02098fa0)) {
    thunk_FUN_0208031c();
  }
  (*DAT_0b00003c)();
  DAT_02098fbc = DAT_02098fbc + 1;
  DAT_02098fa0 = DAT_02098fa0 + 1;
  goto LAB_02001288;
}


// Analysis annotation
// Role — draw current rom information
// Basis — reviewed
// Displays the playing ROM name, size, checksum, format and control hints.

// rea decompile_all
// name: FUN_020027d0
// address: 0x20027d0
// body: available
// range: 0x20027d0-0x2002963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020027d0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  cVar1 = *(char *)(DAT_02098fc8 + 0x254);
  thunk_FUN_02006bb0();
  FUN_0200d9ec(3);
  iVar2 = DAT_02098fc8;
  iVar3 = FUN_02083f68(DAT_02098fc8,0x2f);
  iVar5 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar5 = iVar2;
  }
  FUN_02083dbc(&DAT_023cb4f0,iVar5,0x1d);
  DAT_023cb50c = 0;
  FUN_0200da3c("Now Playing:",6,1);
  FUN_0200da3c(&DAT_023cb4f0,7,1);
  FUN_0200da3c("Rom Size:",9,1);
  FUN_0200db8c(*(undefined4 *)(DAT_02098fc8 + 0x244),9,0xf);
  FUN_0200da3c("Rom Checksum:",10,1);
  FUN_0200dc64(*(undefined4 *)(DAT_02098fc8 + 0x240),10,0xf);
  FUN_0200da3c("Rom Type:",0xb,1);
  puVar4 = &DAT_0208f0f0;
  if (*(char *)(DAT_02098fc8 + 0x260) == '\0') {
    puVar4 = &DAT_0208f0f4;
  }
  FUN_0200da3c(puVar4,0xb,0xf);
  FUN_0200da3c("______________________________",0xd,1);
  FUN_0200da3c("   [SELECT]:Open File Menu",0x10,1);
  FUN_0200da3c("    TOUCH screen to pause",0x11,1);
  FUN_02006784(7);
  FUN_02006b78();
  FUN_020067d4(cVar1);
  if (*(char *)(DAT_02098fc8 + 0x261) != '\0') {
    FUN_02006890();
  }
  FUN_020068ac(cVar1 == '\x02');
  FUN_020069a8();
  FUN_020069e4(0,*(uint *)(DAT_02098fc8 + 600) & 0x20);
  sRam0620156e = 0x84;
  if ((*(uint *)(DAT_02098fc8 + 600) & 0x40) == 0) {
    sRam0620156e = 0x87;
  }
  sRam062015b2 = sRam0620156e + 0x11;
  sRam06201570 = sRam0620156e + 1;
  sRam06201572 = sRam0620156e + 2;
  sRam062015ae = sRam0620156e + 0xf;
  sRam062015b0 = sRam0620156e + 0x10;
  return;
}


// Analysis annotation
// Role — helper calls run z80 cycle budget
// Basis — call context
// Calls run z80 cycle budget at 0x0200DF50. This file's full role is still open.

// rea decompile_all
// name: FUN_02000868
// address: 0x2000868
// body: available
// range: 0x2000868-0x2000a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02000868(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = DAT_0b000018;
  iVar2 = DAT_0b000014;
  uVar1 = DAT_0b000004;
  iVar5 = DAT_0b000000;
  FUN_0200b438();
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 0x10;
      FUN_0200b284(0x24);
      for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        DAT_0b00000c = uVar4;
        FUN_020090e8(uVar4);
        (*DAT_023dcea8)(uVar4);
      }
      (*DAT_0b000040)(iVar2 << 4);
      if ((((DAT_023cb610 & 2) == 0) && (DAT_02099001 == '\x01')) && (DAT_02099000 == '\0')) {
        FUN_0200df50(&DAT_0b000158,iVar3 << 4);
      }
      uVar4 = uVar6;
    } while (uVar6 < uVar1);
  }
  DAT_0b00000c = uVar6;
  FUN_02009144(uVar6);
  FUN_0200b284(0);
  DAT_0b000080 = 4;
  DAT_0b00007c = 8;
  (*DAT_0b000040)(0x4a);
  FUN_020004e0(6);
  FUN_02004ef4(&DAT_0b000158,1,1);
  DAT_0b000080 = 0;
  (*DAT_0b000040)(iVar2 + -0x4a);
  iVar5 = (iVar5 - uVar6) + -1;
  (*DAT_0b000040)(iVar5 * iVar2);
  if ((((DAT_023cb610 & 2) == 0) && (DAT_02099001 == '\x01')) && (DAT_02099000 == '\0')) {
    FUN_0200df50(&DAT_0b000158,iVar5 * iVar3);
  }
  FUN_020061a8();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


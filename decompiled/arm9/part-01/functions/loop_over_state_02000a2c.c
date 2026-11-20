// Analysis annotation
// Role — loop over state
// Basis — pseudocode clue
// The pseudocode contains a processing loop.

// rea decompile_all
// name: FUN_02000a2c
// address: 0x2000a2c
// body: available
// range: 0x2000a2c-0x2000baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02000a2c(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_0200b438();
  uVar2 = DAT_0b000010;
  uVar4 = DAT_0b000004;
  uVar1 = DAT_0b000000;
  FUN_020090e8();
  DAT_0b000080 = 4;
  FUN_02000568(0x22);
  DAT_0b000080 = 0;
  (*DAT_023dcea8)(0);
  FUN_02000538(uVar2);
  FUN_020006b8(0);
  FUN_02004ef4(&DAT_0b000158,1,0);
  if (uVar4 < 2) {
    uVar5 = 2;
    uVar4 = (uint)(uVar4 < 2);
  }
  else {
    uVar5 = 1;
    do {
      FUN_020090e8(uVar5);
      DAT_0b000080 = 4;
      FUN_02000568(0x22);
      DAT_0b000080 = 0;
      (*DAT_023dcea8)(uVar5);
      FUN_02000538(uVar2);
      uVar3 = uVar5 + 1;
      FUN_020006b8(uVar5);
      uVar5 = uVar3;
    } while (uVar4 != uVar3);
    uVar5 = uVar4 + 1;
  }
  FUN_02009144(uVar4);
  DAT_0b00007c = 8;
  DAT_0b000080 = 4;
  FUN_02000538(0x4a);
  FUN_02004ef4(&DAT_0b000158,1,1);
  DAT_0b000080 = 0;
  FUN_02000538(uVar2);
  FUN_020006b8(uVar4);
  if (uVar5 < uVar1) {
    do {
      FUN_020091ec(uVar5);
      DAT_0b000080 = 4;
      FUN_02000568(0x22);
      DAT_0b000080 = 0;
      FUN_02000538(uVar2);
      FUN_020006b8(uVar5);
      DAT_0b000080 = 4;
      uVar5 = uVar5 + 1;
      FUN_02000538(0x26);
      DAT_0b000080 = 0;
    } while (uVar1 != uVar5);
  }
  FUN_02000588();
  FUN_020061a8();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


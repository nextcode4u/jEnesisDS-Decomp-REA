// Analysis annotation
// Role — configure ds display windows
// Basis — reviewed
// Updates the DS display window registers and resets renderer backing buffers.

// rea decompile_all
// name: FUN_02008f7c
// address: 0x2008f7c
// body: available
// range: 0x2008f7c-0x200907b inclusive
// range: 0x2072c30-0x2072c3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02008f7c(void)

{
  undefined4 *puVar1;
  undefined2 *puVar3;
  undefined4 *puVar2;
  
  FUN_02006f2c(0);
  FUN_020072a8(0);
  puVar3 = &DAT_020993cc;
  FUN_02007420();
  DAT_04000041 = 0;
  DAT_04000040 = 0xff;
  DAT_04000045 = 0;
  DAT_04000044 = 0xc4;
  _DAT_04000048 = 0x1f;
  _DAT_0400004a = 0x1f;
  do {
    puVar3[1] = 0x2000;
    puVar3[0x801] = 0x2000;
    puVar3[0x1001] = 0x2000;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined2 *)0x209a3ca);
  puVar2 = (undefined4 *)&DAT_023dc5bc;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_023dc69c);
  DAT_0209b3cc = 0x8000;
  DAT_020993c0 = 0x50;
  DAT_0209a3cc = 0x8000;
  DAT_0209c3d0 = 1;
  DAT_0209c3cc = 1;
  DAT_0209c3ce = 1;
  DAT_0209c3dc = 0;
  DAT_020993cc = 0x8000;
  DAT_0209c3d4 = 0;
  DAT_0209c3d8 = 0;
  puVar2 = (undefined4 *)&DAT_0209c3e0;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 1;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_0209cbe0);
  DAT_023dc5b4 = 1;
  coproc_moveto_Domain_Access_Control(7);
  return 7;
}


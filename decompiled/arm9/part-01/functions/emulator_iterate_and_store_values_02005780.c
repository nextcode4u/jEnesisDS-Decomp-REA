// Analysis annotation
// Role — emulator iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02005780
// address: 0x2005780
// body: available
// range: 0x2005780-0x20059a3 inclusive
// range: 0x2016a70-0x2016bd7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02005780(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  uint uVar1;
  
  if (((param_3 != 0 && param_2 != 0) && (param_5 != 0 && param_4 != 0)) &&
     (param_7 != 0 && param_6 != 0)) {
    *(char *)(param_1 + 0x85) = (char)((uint)param_9 >> 8);
    *(char *)(param_1 + 0x87) = (char)((uint)param_9 >> 0x18);
    *(char *)(param_1 + 0x86) = (char)((uint)param_9 >> 0x10);
    *(char *)(param_1 + 0x8a) = (char)((uint)param_10 >> 0x10);
    *(char *)(param_1 + 0x89) = (char)((uint)param_10 >> 8);
    *(char *)(param_1 + 0x8b) = (char)((uint)param_10 >> 0x18);
    *(char *)(param_1 + 0x69) = (char)((uint)param_2 >> 8);
    *(char *)(param_1 + 0x6a) = (char)((uint)param_2 >> 0x10);
    *(char *)(param_1 + 0x6b) = (char)((uint)param_2 >> 0x18);
    *(char *)(param_1 + 0x6d) = (char)((uint)param_3 >> 8);
    *(char *)(param_1 + 0x6e) = (char)((uint)param_3 >> 0x10);
    *(char *)(param_1 + 0x6f) = (char)((uint)param_3 >> 0x18);
    *(char *)(param_1 + 0x71) = (char)((uint)param_4 >> 8);
    *(char *)(param_1 + 0x72) = (char)((uint)param_4 >> 0x10);
    *(char *)(param_1 + 0x73) = (char)((uint)param_4 >> 0x18);
    *(char *)(param_1 + 0x75) = (char)((uint)param_5 >> 8);
    *(char *)(param_1 + 0x76) = (char)((uint)param_5 >> 0x10);
    *(char *)(param_1 + 0x77) = (char)((uint)param_5 >> 0x18);
    *(char *)(param_1 + 0x79) = (char)((uint)param_6 >> 8);
    *(bool *)(param_1 + 0xa5) = param_9 != 0;
    *(char *)(param_1 + 0x83) = (char)((uint)param_8 >> 0x18);
    *(char *)(param_1 + 0x7a) = (char)((uint)param_6 >> 0x10);
    *(char *)(param_1 + 0x7d) = (char)((uint)param_7 >> 8);
    *(char *)(param_1 + 0x7b) = (char)((uint)param_6 >> 0x18);
    *(char *)(param_1 + 0x7f) = (char)((uint)param_7 >> 0x18);
    *(char *)(param_1 + 0x7e) = (char)((uint)param_7 >> 0x10);
    *(char *)(param_1 + 0x84) = (char)param_9;
    *(char *)(param_1 + 0x88) = (char)param_10;
    *(char *)(param_1 + 0x68) = (char)param_2;
    *(char *)(param_1 + 0x6c) = (char)param_3;
    *(char *)(param_1 + 0x70) = (char)param_4;
    *(char *)(param_1 + 0x74) = (char)param_5;
    *(char *)(param_1 + 0x78) = (char)param_6;
    *(char *)(param_1 + 0x81) = (char)((uint)param_8 >> 8);
    *(char *)(param_1 + 0x82) = (char)((uint)param_8 >> 0x10);
    *(char *)(param_1 + 0x7c) = (char)param_7;
    *(char *)(param_1 + 0x80) = (char)param_8;
                    /* WARNING: Read-only address (ram,0x0204b020) is written */
    m68k_dispatch[0x60fe] = (dword)&DAT_01003c4c;
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa600] = (dword)&DAT_01003364;
      m68k_dispatch[uVar1 | 0xf600] = (dword)&DAT_0100334c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa700] = (dword)&DAT_010033f8;
      m68k_dispatch[uVar1 | 0xf700] = (dword)&DAT_010033e0;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa500] = (dword)&DAT_010032d0;
      m68k_dispatch[uVar1 | 0xf500] = (dword)&DAT_010032b8;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa300] = (dword)&DAT_010031a8;
      m68k_dispatch[uVar1 | 0xf300] = (dword)&DAT_01003190;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa400] = (dword)&DAT_0100323c;
      m68k_dispatch[uVar1 | 0xf400] = (dword)&DAT_01003224;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xaa00] = (dword)&DAT_01003544;
      m68k_dispatch[uVar1 | 64000] = (dword)&DAT_0100352c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xac00] = (dword)&DAT_01003640;
      m68k_dispatch[uVar1 | 0xfc00] = (dword)&DAT_01003624;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    return;
  }
  m68k_dispatch[0x60fe] = 0x1003c34;
  return;
}


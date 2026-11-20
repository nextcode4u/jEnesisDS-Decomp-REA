// Analysis annotation
// Role — helper for initialize ds display and overlay
// Basis — call context
// Referenced by initialize ds display and overlay at 0x020011B0. The filename describes
// that caller relationship.

// rea decompile_all
// name: FUN_02008edc
// address: 0x2008edc
// body: available
// range: 0x2008e98-0x2008ed3 inclusive
// range: 0x2008edc-0x2008f6f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02008ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02008edc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&DAT_023dc1a8;
  do {
    puVar2 = puVar1;
    *(undefined2 *)puVar2 = 0x200;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0;
    puVar1 = puVar2 + 2;
  } while (puVar2 + 2 != &DAT_023dc5a8);
  *(undefined2 *)((int)puVar2 + -0x3f2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x3ba) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ea) = 0;
  *(undefined2 *)((int)puVar2 + -0x3e2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3da) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ca) = 0;
  *(undefined2 *)((int)puVar2 + -0x3c2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3d2) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x3b2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x37a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x3aa) = 0;
  *(undefined2 *)((int)puVar2 + -0x3a2) = 0;
  *(undefined2 *)((int)puVar2 + -0x39a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x392) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x38a) = 0;
  *(undefined2 *)((int)puVar2 + -0x382) = 0;
  FUN_020802c4(&DAT_023dc1a8,0x400);
  do {
  } while( true );
}


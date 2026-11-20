// Analysis annotation
// Role — emulator iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02004d94
// address: 0x2004d94
// body: available
// range: 0x2004d94-0x2004dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02083074) */
/* WARNING: Removing unreachable block (ram,0x02083070) */

void FUN_02004d94(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)&DAT_0b00161c;
  uVar2 = 0x2000;
  DAT_02099034 = 0;
  DAT_02099038 = 0;
  do {
    uVar2 = uVar2 - 0x10;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  } while (0xf < uVar2);
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar3 = 0;
  do {
    *(undefined1 *)(uVar3 + (int)puVar1) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 != uVar2);
  return;
}


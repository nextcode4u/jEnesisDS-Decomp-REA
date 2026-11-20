// Analysis annotation
// Role — read touch adc sample
// Basis — reviewed
// Performs a touchscreen ADC transfer over SPI with interrupts protected.

// rea decompile_all
// name: FUN_03801244
// address: 0x3801244
// body: available
// range: 0x3801244-0x38012f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x03801284) */
/* WARNING: Removing unreachable block (ram,0x03801288) */
/* WARNING: Removing unreachable block (ram,0x038012c8) */
/* WARNING: Removing unreachable block (ram,0x038012cc) */
/* WARNING: Removing unreachable block (ram,0x038012a2) */
/* WARNING: Removing unreachable block (ram,0x038012a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_03801244(void)

{
  undefined2 uVar1;
  uint in_lr;
  
  uVar1 = _DAT_04000208;
  _DAT_04000208 = 0;
  if ((int)((uint)_DAT_040001c0 << 0x18) < 0) {
    do {
      FUN_03801784(1);
    } while ((_DAT_040001c0 & 0x80) != 0);
  }
  _DAT_040001c2 = 0;
  _DAT_040001c0 = 0x8201;
  _DAT_04000208 = uVar1;
  return (ulonglong)in_lr << 0x20;
}


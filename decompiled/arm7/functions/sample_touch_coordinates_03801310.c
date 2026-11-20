// Analysis annotation
// Role — sample touch coordinates
// Basis — reviewed
// Obtains multiple touchscreen ADC samples for a requested coordinate.

// rea decompile_all
// name: FUN_03801310
// address: 0x3801310
// body: available
// range: 0x3801310-0x380135d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03801310(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = FUN_03801244(param_1 | 1);
  if (param_2 < 1) {
    iVar2 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar2 = FUN_03801244(param_1 | 1);
      iVar3 = iVar1 - iVar2;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
    } while ((param_3 < iVar3) && (iVar4 = iVar4 + 1, param_2 != iVar4));
  }
  if (iVar4 == param_3) {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


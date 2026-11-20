// Analysis annotation
// Role — update audio from hardware timers
// Basis — reviewed
// Reads elapsed timer ticks, clamps the update size, and advances the audio buffers.

// rea decompile_all
// name: FUN_037fbeb8
// address: 0x37fbeb8
// body: available
// range: 0x37fbd08-0x37fbda3 inclusive
// range: 0x37fbeb8-0x37fbf37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fbeb8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = _DAT_04000104 - DAT_0380bdec;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0x10000;
  }
  if (DAT_0380b870 <= uVar3) {
    uVar3 = DAT_0380b870;
  }
  uVar2 = _DAT_0400010c - DAT_0380bdf0;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0x10000;
  }
  if (DAT_0380b874 <= uVar2) {
    uVar2 = DAT_0380b874;
  }
  DAT_0380bdec = (uint)_DAT_04000104;
  DAT_0380bdf0 = (uint)_DAT_0400010c;
  FUN_037fbda8(uVar2);
  uVar2 = DAT_0380bdd8;
  if ((int)uVar3 <= (int)DAT_0380bdd8) {
    uVar2 = uVar3;
  }
  iVar4 = uVar2 * 2;
  iVar1 = (int)(DAT_0380bdbc - DAT_0380bdc0) >> 1;
  if (DAT_0380bdbc < (uint)(DAT_0380bdc0 + iVar4)) {
    FUN_037f86f4(DAT_0380bdc0 + DAT_0380bdd8 * 0xc,iVar1);
    FUN_037f9d9c(DAT_0380bdc0,iVar1);
    uVar2 = uVar2 - iVar1;
    DAT_0380bdc0 = DAT_0380bdb8;
    iVar4 = uVar2 * 2;
  }
  FUN_037f86f4(DAT_0380bdc0 + DAT_0380bdd8 * 0xc,uVar2);
  FUN_037f9d9c(DAT_0380bdc0,uVar2);
  DAT_0380bdc0 = DAT_0380bdc0 + iVar4;
  return;
}


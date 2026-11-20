// Analysis annotation
// Role — helper for run emulator and file menu
// Basis — call context
// Referenced by run emulator and file menu at 0x020011E4. The filename describes that
// caller relationship.

// rea decompile_all
// name: FUN_02002150
// address: 0x2002150
// body: available
// range: 0x2002150-0x20021cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02002150(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  thunk_FUN_0207fb90();
  uVar2 = thunk_FUN_0207fb70();
  if ((uVar2 & 1) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 4;
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_02007358(iVar3);
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_02007358(-iVar3);
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_020073a4(iVar3);
  }
  iVar1 = DAT_020993b4;
  if ((uVar2 & 0x80) != 0) {
    DAT_020993b4 = DAT_020993b4 - iVar3;
    if (DAT_020993b4 < -0x18) {
      DAT_020993b4 = -0x18;
    }
    else if (0x18 < DAT_020993b4) {
      DAT_020993b4 = 0x18;
    }
    DAT_020993ac = (uint)(iVar1 != DAT_020993b4);
    return;
  }
  return;
}


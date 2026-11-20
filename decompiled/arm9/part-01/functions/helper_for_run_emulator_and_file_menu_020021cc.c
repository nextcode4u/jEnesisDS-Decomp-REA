// Analysis annotation
// Role — helper for run emulator and file menu
// Basis — call context
// Referenced by run emulator and file menu at 0x020011E4. The filename describes that
// caller relationship.

// rea decompile_all
// name: FUN_020021cc
// address: 0x20021cc
// body: available
// range: 0x20021cc-0x20023cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020021cc(void)

{
  int iVar1;
  uint uVar2;
  
  thunk_FUN_0207fb90();
  uVar2 = thunk_FUN_0207fb70();
  *(byte *)(DAT_0b000030 + 0x20) = ((byte)(uVar2 >> 0xb) ^ 1) & 1;
  *(byte *)(DAT_0b000030 + 0x21) = ((byte)(uVar2 >> 1) ^ 1) & 1;
  *(byte *)(DAT_0b000030 + 0x22) = (byte)uVar2 & 1 ^ 1;
  *(byte *)(DAT_0b000030 + 0x24) = ((byte)(uVar2 >> 7) ^ 1) & 1;
  *(byte *)(DAT_0b000030 + 0x23) = ((byte)(uVar2 >> 6) ^ 1) & 1;
  *(bool *)(DAT_0b000030 + 0x25) = (uVar2 & 0x20) == 0;
  *(bool *)(DAT_0b000030 + 0x26) = (uVar2 & 0x10) == 0;
  if ((DAT_023cb610 & 1) == 0) {
    *(byte *)(DAT_0b000030 + 0x2a) = ((byte)(uVar2 >> 3) ^ 1) & 1;
    if ((uVar2 & 0x400) == 0) {
      if ((uVar2 & 0x200) == 0) {
        if ((uVar2 & 0x100) != 0) {
          FUN_02007358(0xfffffffc);
        }
      }
      else {
        FUN_02007358(4);
      }
    }
    else {
      FUN_020073f0();
    }
  }
  else {
    *(byte *)(DAT_0b000030 + 0x27) = ((byte)(uVar2 >> 10) ^ 1) & 1;
    if ((uVar2 & 0x308) == 0x308) {
      *(undefined1 *)(DAT_0b000030 + 0x2b) = 0;
      return;
    }
    *(undefined1 *)(DAT_0b000030 + 0x2b) = 1;
    *(byte *)(DAT_0b000030 + 0x2a) = ((byte)(uVar2 >> 3) ^ 1) & 1;
    *(byte *)(DAT_0b000030 + 0x29) = ((byte)(uVar2 >> 9) ^ 1) & 1;
    *(byte *)(DAT_0b000030 + 0x28) = ((byte)(uVar2 >> 8) ^ 1) & 1;
  }
  if ((DAT_023cb610 & 0x200) != 0) {
    if ((uVar2 & 0x400) != 0) {
      DAT_02098ff8 = 0;
      FUN_020073f0();
    }
    if ((uVar2 & 0x20) != 0) {
      if (-0x200 < DAT_02098ff8) {
        DAT_02098ff8 = DAT_02098ff8 + -0x40;
      }
      if (DAT_02098ff8 < 0) {
        FUN_02007358(DAT_02098ff8 >> 8);
      }
    }
    iVar1 = DAT_020993b0;
    if ((uVar2 & 0x10) != 0) {
      if (DAT_02098ff8 < 0x200) {
        DAT_02098ff8 = DAT_02098ff8 + 0x40;
      }
      if (0 < DAT_02098ff8) {
        DAT_020993b0 = DAT_020993b0 + (DAT_02098ff8 >> 8);
        if (DAT_020993b0 < -0x20) {
          DAT_020993b0 = -0x20;
        }
        else if (0x20 < DAT_020993b0) {
          DAT_020993b0 = 0x20;
        }
        DAT_020993ac = (uint)(iVar1 != DAT_020993b0);
        return;
      }
    }
  }
  return;
}


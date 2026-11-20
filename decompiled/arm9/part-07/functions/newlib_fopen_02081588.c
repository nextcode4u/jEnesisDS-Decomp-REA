// Analysis annotation
// Role — newlib fopen
// Basis — library match
// Matches symbol fopen in devkitARM r20 libc.a (lib_a-fopen.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_02081588
// address: 0x2081588
// body: available
// range: 0x20814a8-0x2081577 inclusive
// range: 0x2081588-0x208159f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_02081588(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  iVar1 = FUN_0208408c(&DAT_0208f3a0,param_2,local_1c);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = FUN_020813c0(&DAT_0208f3a0), iVar2 != 0)) {
    iVar3 = FUN_020830f8(&DAT_0208f3a0,param_1,local_1c[0],0x1b6);
    if (iVar3 < 0) {
      FUN_02081248();
      *(undefined2 *)(iVar2 + 0xc) = 0;
      FUN_0208124c();
      iVar2 = 0;
    }
    else {
      *(short *)(iVar2 + 0xc) = (short)iVar1;
      *(int *)(iVar2 + 0x10) = iVar3;
      *(undefined1 **)(iVar2 + 0x24) = &LAB_020835f0;
      *(code **)(iVar2 + 0x28) = FUN_02083584;
      *(undefined1 **)(iVar2 + 0x2c) = &LAB_02083538;
      *(undefined1 **)(iVar2 + 0x30) = &LAB_02083510;
      *(int *)(iVar2 + 0x20) = iVar2;
      if ((*(ushort *)(iVar2 + 0xc) & 0x100) != 0) {
        FUN_02081b8c(&DAT_0208f3a0,iVar2,0,2);
      }
    }
  }
  return iVar2;
}


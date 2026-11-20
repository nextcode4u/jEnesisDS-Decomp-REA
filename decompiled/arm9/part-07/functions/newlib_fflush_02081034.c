// Analysis annotation
// Role — newlib fflush
// Basis — library match
// Matches symbol fflush in devkitARM r20 libc.a (lib_a-fflush.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_02081034
// address: 0x2081034
// body: available
// range: 0x2081034-0x20811df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02081034(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_020821cc(&DAT_0208f3a0,FUN_02081034);
    return uVar2;
  }
  FUN_02081258();
  uVar1 = *(ushort *)(param_1 + 3);
  if ((uVar1 & 8) == 0) {
    *(ushort *)(param_1 + 3) = uVar1 | 0x800;
    if ((param_1[1] < 1) && (param_1[0x10] < 1)) {
      return 0;
    }
    pcVar6 = (code *)param_1[0xb];
    if (pcVar6 != (code *)0x0) {
      if ((uVar1 & 0x1000) == 0) {
        iVar5 = (*pcVar6)(param_1[8],uVar1 & 0x1000,1);
        if (iVar5 == -1) {
          return 0;
        }
      }
      else {
        iVar5 = param_1[0x15];
      }
      if ((*(ushort *)(param_1 + 3) & 4) != 0) {
        iVar4 = 0;
        if (param_1[0xd] != 0) {
          iVar4 = param_1[0x10];
        }
        iVar5 = iVar5 - param_1[1];
        if (param_1[0xd] != 0) {
          iVar5 = iVar5 - iVar4;
        }
      }
      iVar4 = (*pcVar6)(param_1[8],iVar5,0);
      if (iVar4 != -1) {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xf7ff;
        *param_1 = param_1[5];
        param_1[1] = 0;
        if ((*(ushort *)(param_1 + 3) & 0x1000) != 0) {
          param_1[0x15] = iVar5;
          return 0;
        }
      }
    }
  }
  else {
    iVar5 = param_1[5];
    if (iVar5 != 0) {
      iVar4 = *param_1 - iVar5;
      *param_1 = iVar5;
      if ((uVar1 & 3) == 0) {
        iVar3 = param_1[6];
      }
      else {
        iVar3 = 0;
      }
      param_1[2] = iVar3;
      while (0 < iVar4) {
        iVar3 = (*(code *)param_1[10])(param_1[8],iVar5,iVar4);
        iVar5 = iVar5 + iVar3;
        iVar4 = iVar4 - iVar3;
        if (iVar3 < 1) {
          *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x40;
          return 0xffffffff;
        }
      }
    }
  }
  return 0;
}


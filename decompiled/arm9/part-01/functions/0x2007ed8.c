// rea decompile_all
// name: FUN_02007ed8
// address: 0x2007ed8
// body: available
// range: 0x2007ed8-0x2007f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02007ed8(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = DAT_023dde90;
  do {
    while( true ) {
      uVar1 = (param_2 & 0x1ffff) >> 1;
      uVar2 = *param_1;
      if (*(char *)(iVar3 + uVar1) != '\0') break;
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar4 = FUN_020074b8(uVar2 & 0x7ff,1);
    bVar7 = (uVar2 & 0x8000) == 0;
    iVar5 = uVar1 << 1;
    iVar6 = uVar1 << 1;
    if (bVar7) {
      iVar5 = 0x6002000;
    }
    else {
      iVar6 = 0x6006000;
    }
    uVar2 = (uVar4 | (ushort)((uVar2 & 0x7800) >> 1)) ^ 0x400;
    if (bVar7) {
      *(ushort *)(iVar6 + iVar5) = uVar2;
      iVar5 = iVar5 + 0x4000;
    }
    else {
      *(ushort *)(iVar5 + iVar6) = uVar2;
      iVar6 = iVar6 + -0x4000;
    }
    param_2 = param_2 + param_3;
    if (bVar7) {
      *(undefined2 *)(iVar6 + iVar5) = 0x3ff;
    }
    else {
      *(undefined2 *)(iVar5 + iVar6) = 0x3ff;
    }
    param_1 = param_1 + 1;
  } while (param_2 < param_4);
  return;
}


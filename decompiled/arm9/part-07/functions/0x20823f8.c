// rea decompile_all
// name: FUN_020823f8
// address: 0x20823f8
// body: available
// range: 0x20823f8-0x2082553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020823f8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_5c [8];
  uint local_54;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if ((uVar1 & 2) != 0) {
    param_1[6] = 1;
    param_1[5] = (int)param_1 + 0x47;
    *param_1 = (int)param_1 + 0x47;
    return;
  }
  if (-1 < param_1[4]) {
    iVar2 = FUN_0208201c(&DAT_0208f3a0,param_1[4],auStack_5c);
    if (-1 < iVar2) {
      bVar4 = (local_54 & 0xf000) == 0x2000;
      if (((local_54 & 0xf000) == 0x8000) && ((undefined1 *)param_1[0xb] == &LAB_02083538)) {
        iVar2 = 0x400;
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
        param_1[0x14] = 0x400;
      }
      else {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x800;
        iVar2 = 0x400;
      }
      goto LAB_02082478;
    }
    uVar1 = *(ushort *)(param_1 + 3);
  }
  if ((uVar1 & 0x80) == 0) {
    iVar2 = 0x400;
  }
  else {
    iVar2 = 0x40;
  }
  bVar4 = false;
  *(ushort *)(param_1 + 3) = uVar1 | 0x800;
LAB_02082478:
  iVar3 = FUN_0208274c(&DAT_0208f3a0,iVar2);
  if (iVar3 == 0) {
    param_1[6] = 1;
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
    param_1[5] = (int)param_1 + 0x47;
    *param_1 = (int)param_1 + 0x47;
  }
  else {
    DAT_0208f3dc = FUN_02081340;
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x80;
    param_1[5] = iVar3;
    param_1[6] = iVar2;
    *param_1 = iVar3;
    if ((bVar4) && (iVar2 = FUN_020850a0(param_1[4]), iVar2 != 0)) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
    }
  }
  return;
}


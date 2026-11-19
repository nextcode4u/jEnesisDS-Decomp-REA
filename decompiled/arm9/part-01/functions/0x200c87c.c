// rea decompile_all
// name: FUN_0200c87c
// address: 0x200c87c
// body: available
// range: 0x200c87c-0x200cb4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200c87c(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte local_39 [21];
  
  FUN_0200c5d8();
  puVar8 = &DAT_023ddec0;
  do {
    puVar7 = puVar8 + 1;
    *puVar8 = 0x20;
    puVar8 = puVar7;
  } while (puVar7 != &DAT_023deeae);
  iVar13 = 0;
  do {
    iVar3 = FUN_0200c82c(DAT_023ddebc);
    if (iVar3 == -1) {
      if (iVar13 == 0) {
        DAT_020b4c40 = iVar13;
        return;
      }
      iVar3 = 0xfed;
      DAT_020b4c40 = iVar13;
      goto LAB_0200c8e0;
    }
    iVar12 = iVar13 + 1;
    (&DAT_023deeae)[iVar13] = (char)iVar3;
    iVar13 = iVar12;
  } while (iVar12 != 0x12);
  iVar3 = 0xfed;
  DAT_020b4c40 = 0x12;
LAB_0200c8e0:
  do {
    FUN_0200c610(iVar3);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0xfdb);
  iVar3 = 1;
  uVar11 = 0xfee;
  local_39[0] = 0;
  uVar9 = 0;
  FUN_0200c610(0xfee);
  bVar6 = 1;
  do {
    if (iVar13 < DAT_023eb310) {
      DAT_023eb310 = iVar13;
    }
    if (DAT_023eb310 < 3) {
      local_39[0] = bVar6 | local_39[0];
      local_39[iVar3] = (&DAT_023ddec0)[uVar11];
      DAT_023eb310 = 1;
      iVar12 = iVar3;
    }
    else {
      iVar12 = iVar3 + 1;
      local_39[iVar3] = (byte)DAT_023eb30c;
      local_39[iVar3 + 1] = (byte)(DAT_023eb30c >> 4) & 0xf0 | (char)DAT_023eb310 - 3U;
    }
    iVar3 = iVar12 + 1;
    bVar2 = bVar6 & 0x7f;
    bVar6 = bVar6 * '\x02';
    if (bVar2 == 0) {
      if (0 < iVar3) {
        iVar12 = 0;
        do {
          pbVar1 = local_39 + iVar12;
          iVar12 = iVar12 + 1;
          FUN_0200c858(*pbVar1,DAT_023eb2f8);
        } while (iVar3 != iVar12);
      }
      local_39[0] = 0;
      DAT_020b4c44 = DAT_020b4c44 + iVar3;
      iVar3 = 1;
      bVar6 = 1;
    }
    iVar12 = DAT_023eb310;
    if (DAT_023eb310 < 1) {
      iVar10 = 0;
      iVar5 = iVar10;
    }
    else {
      iVar10 = 0;
      do {
        iVar4 = FUN_0200c82c(DAT_023ddebc);
        iVar5 = iVar10;
        if (iVar4 == -1) break;
        FUN_0200c75c(uVar9);
        puVar8 = (undefined1 *)(uVar11 + 1);
        if (uVar9 < 0x11) {
          puVar8 = &DAT_023deec0 + uVar9;
        }
        uVar11 = uVar11 + 1 & 0xfff;
        (&DAT_023ddec0)[uVar9] = (char)iVar4;
        if (uVar9 < 0x11) {
          *puVar8 = (char)iVar4;
        }
        iVar10 = iVar10 + 1;
        FUN_0200c610(uVar11);
        uVar9 = uVar9 + 1 & 0xfff;
        iVar5 = iVar12;
      } while (iVar12 != iVar10);
    }
    DAT_020b4c40 = iVar5 + DAT_020b4c40;
    while (iVar10 < iVar12) {
      FUN_0200c75c(uVar9);
      uVar11 = uVar11 + 1 & 0xfff;
      iVar13 = iVar13 + -1;
      if (iVar13 != 0) {
        FUN_0200c610(uVar11);
      }
      uVar9 = uVar9 + 1 & 0xfff;
      iVar10 = iVar10 + 1;
    }
    if (iVar13 < 1) {
      if (1 < iVar3) {
        iVar13 = 0;
        do {
          pbVar1 = local_39 + iVar13;
          iVar13 = iVar13 + 1;
          FUN_0200c858(*pbVar1,DAT_023eb2f8);
        } while (iVar13 != iVar3);
        DAT_020b4c44 = DAT_020b4c44 + iVar3;
      }
      return;
    }
  } while( true );
}


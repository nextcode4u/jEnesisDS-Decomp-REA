// rea decompile_all
// name: FUN_02080620
// address: 0x2080620
// body: available
// range: 0x2080620-0x2080623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_02080620(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = param_4 ^ 0x80000000;
  uVar10 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar9 = (int)uVar10 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar10 == uVar5 && param_1 == param_3 || uVar10 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar9 == -1) || iVar1 == -1) {
    if (iVar9 == -1 || iVar1 == -1) {
      uVar10 = param_3;
      uVar5 = uVar7;
      if (iVar9 == -1) {
        uVar10 = param_1;
        uVar5 = param_2;
      }
      if (iVar9 != -1 || iVar1 != -1) {
        param_3 = uVar10;
        uVar7 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar10 == 0 && bVar14;
      if (uVar10 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar7 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != uVar7) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar10);
    }
    if (uVar10 != uVar5 || param_1 != param_3) {
      if (uVar10 == 0) {
        param_1 = param_3;
        param_2 = uVar7;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar7) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar10 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar10 = uVar10 | 0x80000000;
      }
      return CONCAT44(uVar10,param_1 << 1);
    }
    if (uVar10 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_020808f0:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar10 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar12 = uVar5 - uVar10;
  bVar14 = uVar12 != 0;
  if (uVar5 < uVar10) {
    uVar12 = -uVar12;
  }
  uVar11 = param_1;
  uVar8 = param_2;
  if (bVar14 && uVar10 <= uVar5) {
    uVar10 = uVar10 + uVar12;
    uVar11 = param_3;
    uVar8 = uVar7;
    param_3 = param_1;
    uVar7 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar8,uVar11);
  }
  uVar5 = uVar8 & 0xfffff | 0x100000;
  if ((uVar8 & 0x80000000) != 0) {
    bVar14 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar8 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar8 = -(uVar8 + bVar14);
  }
  if (uVar10 == uVar12) {
    uVar8 = uVar8 ^ 0x100000;
    if (uVar10 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar10 = 1;
    }
    else {
      uVar12 = uVar12 - 1;
    }
  }
  uVar7 = -uVar12 + 0x20;
  if ((int)uVar12 < 0x21) {
    uVar13 = param_3 << (uVar7 & 0xff);
    param_3 = param_3 >> (uVar12 & 0xff);
    uVar4 = uVar11 + param_3;
    uVar6 = uVar8 << (uVar7 & 0xff);
    uVar7 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar11,param_3) + ((int)uVar8 >> (uVar12 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar13 = uVar8 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar8 >> (uVar12 - 0x20 & 0xff);
    uVar7 = uVar11 + uVar12;
    uVar5 = uVar5 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar11,uVar12);
  }
  param_2 = uVar5 & 0x80000000;
  uVar12 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar12 = -uVar7;
    uVar7 = -(uVar7 + !bVar14);
    uVar12 = -(uVar5 + (bVar14 <= uVar12));
  }
  if (0xfffff < uVar12) {
    uVar11 = uVar10 - 1;
    if (0x1fffff < uVar12) {
      bVar2 = (byte)uVar12;
      uVar12 = uVar12 >> 1;
      bVar3 = (byte)uVar7;
      uVar7 = (uint)(bVar2 & 1) << 0x1f | uVar7 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar11 = uVar10;
      if (0xffbfffff < uVar10 * 0x200000) goto LAB_020808f0;
    }
LAB_02080740:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar7 & 1);
    }
    return CONCAT44(uVar12 + uVar11 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar14) | param_2,
                    uVar7 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar11 = uVar7 * 2;
  bVar14 = CARRY4(uVar7,uVar7);
  uVar7 = uVar7 * 2 + (uint)bVar2;
  uVar12 = uVar12 * 2 + (uint)(bVar14 || CARRY4(uVar11,(uint)bVar2));
  uVar11 = uVar10 - 2;
  if ((uVar12 & 0x100000) != 0) goto LAB_02080740;
  if (uVar12 == 0) {
    iVar9 = 0x34;
    uVar10 = 0;
  }
  else {
    iVar9 = 0x14;
    uVar10 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar7;
  if (0xffff < uVar7) {
    uVar12 = uVar7 >> 0x10;
    iVar9 = iVar9 + -0x10;
  }
  if (0xff < uVar12) {
    uVar12 = uVar12 >> 8;
    iVar9 = iVar9 + -8;
  }
  if (0xf < uVar12) {
    uVar12 = uVar12 >> 4;
    iVar9 = iVar9 + -4;
  }
  if (uVar12 < 4) {
    iVar9 = iVar9 - (uVar12 >> 1);
  }
  else {
    iVar9 = iVar9 + -2;
  }
  uVar4 = iVar9 - (uVar12 >> 3);
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = uVar4 - 0x20;
  bVar14 = uVar6 == 0;
  uVar12 = uVar6;
  uVar8 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar8 = uVar4 - 0x14;
    bVar14 = uVar8 == 0;
    uVar12 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar10 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar8 & 0xff);
      goto LAB_020807f8;
    }
  }
  if (bVar14 || (int)uVar8 < 0 != bVar15) {
    uVar13 = 0x20 - uVar12;
  }
  uVar7 = uVar7 << (uVar12 & 0xff);
  if (bVar14 || (int)uVar8 < 0 != bVar15) {
    uVar7 = uVar7 | uVar10 >> (uVar13 & 0xff);
    uVar10 = uVar10 << (uVar12 & 0xff);
  }
LAB_020807f8:
  if ((int)uVar4 <= (int)uVar11) {
    return CONCAT44(uVar7 + (uVar11 - uVar4) * 0x100000 | param_2,uVar10);
  }
  uVar12 = ~(uVar11 - uVar4);
  if ((int)uVar12 < 0x1f) {
    if (uVar12 - 0x13 != 0 && -0xd < (int)(uVar12 - 0x1f)) {
      uVar12 = 0xc - (uVar12 - 0x13);
      return CONCAT44(uVar5,uVar10 >> (0x20 - uVar12 & 0xff) | uVar7 << (uVar12 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar12 = uVar12 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar12 & 0xff),
                    uVar10 >> (uVar12 & 0xff) | uVar7 << (0x20 - uVar12 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar12 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


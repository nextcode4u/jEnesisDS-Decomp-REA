// rea decompile_all
// name: FUN_0200081c
// address: 0x200081c
// body: available
// range: 0x200081c-0x2000857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x01001fbc) */
/* WARNING: Removing unreachable block (ram,0x0100179c) */
/* WARNING: Removing unreachable block (ram,0x01001fc4) */
/* WARNING: Removing unreachable block (ram,0x010017a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0200081c(int param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  byte extraout_r1;
  byte bVar5;
  byte extraout_r1_00;
  byte extraout_r1_01;
  byte extraout_r1_02;
  byte extraout_r1_03;
  byte extraout_r1_04;
  byte extraout_r1_05;
  byte bVar6;
  byte extraout_r1_06;
  byte bVar7;
  byte extraout_r1_07;
  byte bVar8;
  byte extraout_r1_08;
  byte bVar9;
  byte extraout_r1_09;
  byte bVar10;
  byte extraout_r1_10;
  byte extraout_r1_11;
  int iVar11;
  undefined **ppuVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  ushort *puVar26;
  byte *pbVar27;
  ushort *puVar28;
  ushort *puVar29;
  int iVar30;
  bool bVar31;
  bool bVar32;
  undefined1 uVar33;
  bool bVar34;
  undefined8 uVar35;
  
  if ((DAT_023cb610 & 2) != 0) {
    return CONCAT44(param_2,param_1);
  }
  if (DAT_02099001 != '\x01') {
    return CONCAT44(param_2,param_1);
  }
  if (DAT_02099000 != '\0') {
    return CONCAT44(param_1,&DAT_0b000158);
  }
  puRam0b0005b8 = &stack0xffffffd8;
  bVar31 = false;
  iRam0b0005d0 = param_1;
  if ((uRam0b0005d8 & 0x100) != 0) {
    bVar32 = iRam0b0005e0 == 0;
    iVar30 = iRam0b0005e0;
    if (0 < iRam0b0005e0) {
      iVar30 = param_1 - iRam0b0005e0;
      bVar32 = param_1 == iRam0b0005e0;
    }
    bVar31 = 0 < iRam0b0005e0 && SBORROW4(param_1,iRam0b0005e0);
    if (!bVar32 && iVar30 < 0 == bVar31) {
      iRam0b0005d0 = iRam0b0005e0;
    }
  }
  if ((uRam0b0005d8 & 0x200) != 0) {
    bVar32 = iRam0b0005e8 == 0;
    iVar30 = iRam0b0005e8;
    if (0 < iRam0b0005e8) {
      iVar30 = iRam0b0005d0 - iRam0b0005e8;
      bVar32 = iRam0b0005d0 == iRam0b0005e8;
    }
    bVar31 = 0 < iRam0b0005e8 && SBORROW4(iRam0b0005d0,iRam0b0005e8);
    if (!bVar32 && iVar30 < 0 == bVar31) {
      iRam0b0005d0 = iRam0b0005e8;
    }
  }
  uVar18 = uRam0b000560 + iRam0b0005d0 * 0x10000;
  ppuVar12 = &switchD_0200e01c::switchdataD_020154b0;
  pbVar13 = _DAT_0b000558;
  uVar4 = uRam0b00055c;
  uVar20 = uRam0b000564;
  uVar21 = uRam0b000568;
  uVar22 = uRam0b00056c;
  uVar23 = uRam0b000570;
  uVar16 = uRam0b000574;
  pbVar27 = pbRam0b000578;
  puVar29 = puRam0b00057c;
  iRam0b0005cc = param_1;
  do {
    uVar19 = uVar18;
    if ((iRam0b0005fc != 0) && ((uRam0b00059c & 8) != 0)) {
      iRam0b0005fc = 0;
      if (*pbVar27 == 0x76) {
        pbVar27 = pbVar27 + 1;
      }
      bVar31 = SBORROW4(uRam0b00059c & 3,2);
      if ((uRam0b00059c & 3) == 2) {
        uRam0b00059c = uRam0b00059c & 0xfffffff3;
        *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)pbVar27 - (int)pbVar13) >> 8);
        puVar29 = puVar29 + -1;
        *(byte *)puVar29 = (byte)((int)pbVar27 - (int)pbVar13);
        uVar19 = uVar18 - 0x130000;
      }
      else {
        uRam0b00059c = uRam0b00059c & 0xfffffff3;
        *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)pbVar27 - (int)pbVar13) >> 8);
        puVar29 = puVar29 + -1;
        *(byte *)puVar29 = (byte)((int)pbVar27 - (int)pbVar13);
        uVar19 = uVar18 - 0xd0000;
        pbVar27 = pbVar13 + 0x38;
      }
    }
    puVar28 = (ushort *)(pbVar27 + 1);
    bVar3 = (byte)(uVar16 >> 0x10);
    bVar10 = (byte)(uVar16 >> 0x18);
    bVar5 = (byte)(uVar4 >> 0x18);
    bVar1 = (byte)uVar19;
    bVar6 = (byte)(uVar20 >> 0x18);
    bVar7 = (byte)(uVar21 >> 0x18);
    bVar8 = (byte)(uVar22 >> 0x18);
    bVar9 = (byte)(uVar23 >> 0x18);
    uVar14 = uVar4;
    uVar24 = uVar16;
    switch((uint)ppuVar12[*pbVar27] & 0xfffffffe) {
    case 0x1000020:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000030:
      uVar21 = (uint)*puVar28 << 0x18;
      uVar20 = (*puVar28 & 0xff00) << 0x10;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000060:
      uVar16 = (uVar20 | uVar21 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002d10();
        bVar5 = extraout_r1;
      }
      pbVar13[uVar16] = bVar5;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000090:
      bVar31 = 0xfeffffff < uVar21;
      uVar21 = uVar21 + 0x1000000;
      if (bVar31) {
        uVar20 = uVar20 + 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10000b0:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar20,0x1000000);
      uVar20 = uVar20 + 0x1000000;
      if ((int)uVar20 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar20 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010000cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10000e0:
      bVar31 = SBORROW4(uVar20,0x1000000);
      uVar20 = uVar20 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar20 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar20 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000110:
      uVar20 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000130:
      uVar14 = uVar4 << 1;
      if ((bool)(bVar5 >> 7)) {
        uVar14 = uVar14 | 0x1000000;
      }
      uVar19 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000150:
      uVar16 = uVar19 & 0xffffff28 | uRam0b0005a4 & 0xff;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uRam0b0005a0;
      uRam0b0005a0 = uVar4;
      uRam0b0005a4 = uVar19;
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000180:
      uVar4 = uVar20 | uVar21 >> 8;
      uVar19 = uVar19 & 0xffffffec;
      if (CARRY4(uVar16,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + uVar4;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10001a0:
      uVar16 = (uVar20 | uVar21 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cd0();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010001c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10001d0:
      bVar31 = uVar21 < 0x1000000;
      uVar21 = uVar21 - 0x1000000;
      if (bVar31) {
        uVar20 = uVar20 - 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010001e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10001f0:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar21,0x1000000);
      uVar21 = uVar21 + 0x1000000;
      if ((int)uVar21 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar21 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000220:
      bVar31 = SBORROW4(uVar21,0x1000000);
      uVar21 = uVar21 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar21 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar21 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000250:
      uVar21 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000270:
      uVar4 = uVar4 >> 0x19;
      if ((bool)(bVar5 & 1)) {
        uVar4 = uVar4 | 0x80;
      }
      uVar19 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 << 0x18;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10002a0:
      uVar20 = uVar20 - 0x1000000;
      if (uVar20 == 0) {
        iVar30 = 0;
        pbVar25 = pbVar27 + 2;
      }
      else {
        iVar30 = (int)(char)(byte)*puVar28;
        uVar19 = uVar19 - 0x50000;
        pbVar25 = pbVar27 + iVar30 + 2;
      }
      if (iVar30 == -2) {
        bVar3 = 0x27;
      }
      else {
        bVar3 = 0xd3;
      }
      *pbVar27 = bVar3;
      puVar26 = (ushort *)(pbVar25 + 1);
      uVar18 = uVar19 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x010002d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x7ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar25])();
        return uVar35;
      }
      break;
    case 0x10002e0:
      uVar23 = (uint)*puVar28 << 0x18;
      uVar22 = (*puVar28 & 0xff00) << 0x10;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000310:
      uVar16 = (uVar22 | uVar23 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002d10();
        bVar5 = extraout_r1_00;
      }
      pbVar13[uVar16] = bVar5;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000340:
      bVar31 = 0xfeffffff < uVar23;
      uVar23 = uVar23 + 0x1000000;
      if (bVar31) {
        uVar22 = uVar22 + 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000360:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar22,0x1000000);
      uVar22 = uVar22 + 0x1000000;
      if ((int)uVar22 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar22 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000390:
      bVar31 = SBORROW4(uVar22,0x1000000);
      uVar22 = uVar22 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar22 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar22 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010003b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10003c0:
      uVar22 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10003e0:
      uVar16 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar16 = uVar16 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 << 1 | (uVar19 & 1) << 0x18;
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000410:
      puVar26 = (ushort *)(pbVar27 + (char)(byte)*puVar28 + 2 + 1);
      uVar18 = uVar19 - 0xc0000;
                    /* WARNING: Could not recover jumptable at 0x01000420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xbffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[(char)(byte)*puVar28 + 2]])();
        return uVar35;
      }
      break;
    case 0x1000430:
      uVar4 = uVar22 | uVar23 >> 8;
      uVar19 = uVar19 & 0xffffffec;
      if (CARRY4(uVar16,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + uVar4;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000450:
      uVar16 = (uVar22 | uVar23 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cd0();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000480:
      bVar31 = uVar23 < 0x1000000;
      uVar23 = uVar23 - 0x1000000;
      if (bVar31) {
        uVar22 = uVar22 - 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10004a0:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar23,0x1000000);
      uVar23 = uVar23 + 0x1000000;
      if ((int)uVar23 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar23 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10004d0:
      bVar31 = SBORROW4(uVar23,0x1000000);
      uVar23 = uVar23 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar23 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar23 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000500:
      uVar23 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000520:
      uVar16 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar16 = uVar16 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar19 << 0x1f | (uVar4 >> 0x19) << 0x18;
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000550:
      if ((uVar19 & 0x40) == 0) {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      else {
        pbVar27 = pbVar27 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x1000580:
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)*puVar28 << 0x10;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x10005a0:
      uVar2 = *puVar28;
      pbVar13[uVar2] = bVar3;
      pbVar13[uVar2 + 1] = bVar10;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x010005c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xfffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x10005d0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010005dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + 0x10000;
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10005f0:
      uVar4 = uVar16 & 0xff000000;
      uVar19 = uVar19 & 0xffffff29;
      if ((int)(uVar4 + 0x1000000) < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4(uVar4,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (uVar4 == 0xff000000) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + 0x1000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000620:
      uVar4 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff29 | 2;
      if ((int)(uVar4 - 0x1000000) < 0) {
        uVar17 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar4 == 0x1000000) {
        uVar17 = uVar17 | 0x40;
      }
      if (SBORROW4(uVar4,0x1000000)) {
        uVar17 = uVar17 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 - 0x1000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000650:
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | (uint)(byte)*puVar28 << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000670:
      uVar20 = uVar20 - 0x1000000;
      iVar30 = ((uVar19 - (uVar20 >> 8)) - (uVar20 >> 6)) - (uVar20 >> 5);
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar20 = 0;
      uVar18 = iVar30 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x01000690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x7ffff < iVar30) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10006a0:
      if ((uVar19 & 0x40) == 0) {
        pbVar27 = pbVar27 + 2;
      }
      else {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010006bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x10006d0:
      uVar19 = uVar19 & 0xffffffec;
      if (CARRY4(uVar16,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010006e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 * 2;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10006f0:
      uVar16 = (uint)*puVar28;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cfc();
      }
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x01000720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)CONCAT11(pbVar13[uVar16 + 1],pbVar13[uVar16]) << 0x10;
      if (uVar18 != 0 && 0xfffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000730:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 - 0x10000;
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000750:
      uVar19 = uVar19 & 0xffffff29;
      uVar4 = uVar16 * 0x100 + 0x1000000;
      if ((int)uVar4 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4(uVar16 * 0x100,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (uVar4 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar4 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000780:
      uVar4 = uVar16 * 0x100 - 0x1000000;
      uVar17 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar4 < 0) {
        uVar17 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (SBORROW4(uVar16 * 0x100,0x1000000)) {
        uVar17 = uVar17 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar4 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10007c0:
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | (uint)(byte)*puVar28 << 0x10;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10007e0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = (uVar19 | 0x12) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)(uVar19 | 0x12)) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000800:
      if ((uVar19 & 1) == 0) {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      else {
        pbVar27 = pbVar27 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x1000830:
      puVar29 = (ushort *)(pbVar13 + *puVar28);
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000850:
      uVar16 = (uint)*puVar28;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002d10();
        bVar5 = extraout_r1_01;
      }
      pbVar13[uVar16] = bVar5;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x01000874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xcffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000880:
      puVar29 = (ushort *)((int)puVar29 + 1);
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10008a0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar19 = uVar19 & 0xffffff29;
      iVar30 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000 + 0x1000000;
      if (iVar30 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4((uint)pbVar13[uVar16 >> 0x10] * 0x1000000,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (iVar30 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      bVar3 = (byte)((uint)iVar30 >> 0x18);
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_02;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010008e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10008f0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      iVar30 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000 + -0x1000000;
      uVar4 = uVar19 & 0xffffff29 | 2;
      if (iVar30 == 0) {
        uVar4 = uVar19 & 0xffffff29 | 0x42;
      }
      if (iVar30 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (SBORROW4((uint)pbVar13[uVar16 >> 0x10] * 0x1000000,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      bVar3 = (byte)((uint)iVar30 >> 0x18);
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_03;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar4 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xaffff < (int)uVar4) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000940:
      bVar3 = (byte)*puVar28;
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_04;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000960:
      uVar16 = uVar19 & 0xffffffed | 1;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000980:
      if ((uVar19 & 1) == 0) {
        pbVar27 = pbVar27 + 2;
      }
      else {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x10009b0:
      uVar19 = uVar19 & 0xffffffec;
      uVar4 = ((int)puVar29 - (int)pbVar13) * 0x10000;
      if (CARRY4(uVar16,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010009c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + uVar4;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10009d0:
      uVar16 = (uint)*puVar28;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cd0();
      }
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x010009f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16] << 0x18;
      if (uVar18 != 0 && 0xcffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000a00:
      puVar29 = (ushort *)((int)puVar29 + -1);
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000a20:
      uVar19 = uVar19 & 0xffffff29;
      uVar14 = uVar4 + 0x1000000;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4(uVar4,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000a50:
      uVar14 = uVar4 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (SBORROW4(uVar4,0x1000000)) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000a80:
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)(byte)*puVar28 << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000aa0:
      if ((uVar19 & 1) == 0) {
        uVar16 = uVar19 & 0xffffffed | 1;
      }
      else {
        uVar16 = uVar19 & 0xfffffffc | 0x10;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ad0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ae0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b00:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b20:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b40:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b60:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b80:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ba0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000bc0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000be0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000bf0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c10:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c30:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c50:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c70:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c90:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000cb0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000cd0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000cf0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d00:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d20:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d40:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d60:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d80:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000da0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000dc0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000de0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e00:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e10:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e30:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e50:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e70:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e90:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000eb0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ed0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ef0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f10:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f20:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | (uVar16 & 0xff0000) << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f40:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f70:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f90:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar20 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000fb0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar21 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000fd0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar22 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ff0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar23 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001010:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | (uVar16 & 0xff000000) >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001030:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001040:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | (uint)pbVar13[uVar16 >> 0x10] << 0x10;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001070:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar4 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001090:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar6 = extraout_r1_05;
      }
      pbVar13[uVar16 >> 0x10] = bVar6;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10010b0:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar7 = extraout_r1_06;
      }
      pbVar13[uVar16 >> 0x10] = bVar7;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10010d0:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar8 = extraout_r1_07;
      }
      pbVar13[uVar16 >> 0x10] = bVar8;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10010f0:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar9 = extraout_r1_08;
      }
      pbVar13[uVar16 >> 0x10] = bVar9;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001110:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar10 = extraout_r1_09;
      }
      pbVar13[uVar16 >> 0x10] = bVar10;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001130:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_10;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001160:
      uVar18 = (uVar19 & 0xff) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = puVar28;
      if (uVar18 != 0 && 0x3ffff < (uVar19 & 0xff)) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x1001180:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar5 = extraout_r1_11;
      }
      pbVar13[uVar16 >> 0x10] = bVar5;
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10011a0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10011c0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10011e0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001200:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001220:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar16 & 0xff000000;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001240:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar16 << 8;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001260:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001280:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001290:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar20;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar20)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar20)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10012c0:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar21;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar21)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar21)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10012f0:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar22;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar22)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar22)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001320:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar23;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar23)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar23)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001350:
      uVar16 = uVar16 & 0xff000000;
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001380:
      uVar16 = uVar16 * 0x100;
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010013a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10013b0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar19 = uVar19 & 0xffffff28;
      uVar16 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10013f0:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 * 2;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar4)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001420:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar20;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar20)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001460:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar21;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar21)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar21)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10014a0:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar22;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar22)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar22)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10014e0:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar23;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar23)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar23)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001520:
      uVar16 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001560:
      uVar16 = uVar16 * 0x100;
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10015a0:
      uVar33 = SBORROW4(uVar16,0x20000000);
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        uVar33 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)uVar33) {
        uVar17 = uVar17 | 4;
      }
      uVar16 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010015dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10015f0:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar4;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar4)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar4)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001630:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar20;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar20) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar20)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001660:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar21;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar21) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar21)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001690:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar22;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar22) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar22)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10016c0:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar23;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar23) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar23)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10016f0:
      uVar16 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001720:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 + uVar16 * -0x100;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16 * 0x100) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16 * 0x100)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001750:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar4 + (uint)pbVar13[uVar16 >> 0x10] * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001790:
      uVar16 = uVar19 & 0xffffff28 | 0x42;
      if (SBORROW4(uVar4,uVar4)) {
        uVar16 = uVar19 & 0xffffff28 | 0x46;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = 0;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10017c0:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar20;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001800:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar21;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar21) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar21)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001840:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar22;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar22) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar22)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001880:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar23;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar23) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar23)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10018c0:
      uVar16 = uVar16 & 0xff000000;
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar14 = uVar17 - uVar16;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar16) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar16)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001900:
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar14 = uVar17 + uVar16 * -0x100;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar16 * 0x100) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar16 * 0x100)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001940:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar4 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar17 + (uint)pbVar13[uVar16 >> 0x10] * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar4) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar4)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001990:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar4;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar4)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10019d0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar20) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a00:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar21) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a30:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar22) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a60:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar23) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a90:
      uVar14 = uVar4 & uVar16 & 0xff000000;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001ac0:
      uVar14 = uVar4 & uVar16 << 8;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001af0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar14 = uVar4 & (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001b20:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar4 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001b50:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar20) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001b80:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar21) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001bb0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar22) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001be0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar23) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001c10:
      uVar14 = uVar4 ^ uVar16 & 0xff000000;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001c40:
      uVar14 = uVar4 ^ uVar16 << 8;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001c70:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar14 = uVar4 ^ (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001ca0:
      uVar16 = uVar19 & 0xffffff28 | (uint)*DAT_01001e44;
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = 0;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001cd0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar20) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d00:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar21) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d30:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar22) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d60:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar23) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d90:
      uVar14 = uVar4 | uVar16 & 0xff000000;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001dc0:
      uVar14 = uVar4 | uVar16 << 8;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001df0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar14 = uVar4 | (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001e20:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar4 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001e50:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar20) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar20) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar20) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar20)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001e80:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar21) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar21) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar21) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar21)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001eb0:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar22) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar22) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar22) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar22)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001ee0:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar23) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar23) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar23) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar23)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001f10:
      uVar16 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar16) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar16) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001f40:
      uVar18 = uVar16 * 0x100;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 + uVar16 * -0x100) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar18) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001f70:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar18 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 + (uint)pbVar13[uVar16 >> 0x10] * -0x1000000) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar18) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001fb0:
      uVar16 = uVar19 & 0xffffff28 | 0x42;
      if (SBORROW4(uVar4,uVar4)) {
        uVar16 = uVar19 & 0xffffff28 | 0x46;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001fe0:
      if ((uVar19 & 0x40) == 0) {
        pbVar27 = (byte *)((int)puVar29 + 1);
        uVar2 = *puVar29;
        puVar29 = puVar29 + 1;
        uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
        if (uVar18 != 0 && 0xaffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
          return uVar35;
        }
      }
      else {
LAB_01002c20:
        uVar18 = uVar19 - 0x50000;
                    /* WARNING: Could not recover jumptable at 0x01002c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar27 + 2);
        if (uVar18 != 0 && 0x4ffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
          return uVar35;
        }
      }
      break;
    case 0x1002010:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (*puVar29 & 0xff00) << 0x10;
      uVar21 = (uint)*puVar29 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002040:
      if ((uVar19 & 0x40) == 0) {
        uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
        if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
          return uVar35;
        }
      }
      else {
LAB_01002c00:
        uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar27 + 4);
        if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
          return uVar35;
        }
      }
      break;
    case 0x1002070:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002090:
      if ((uVar19 & 0x40) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010020c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10020d0:
      *(byte *)((int)puVar29 + -1) = bVar6;
      *(byte *)(puVar29 + -1) = (byte)(uVar20 >> 0x10) | bVar7;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002100:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002130:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar13])();
        return uVar35;
      }
      break;
    case 0x1002160:
      if ((uVar19 & 0x40) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002190:
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x10021b0:
      if ((uVar19 & 0x40) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10021e0:
                    /* WARNING: Could not recover jumptable at 0x010021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x100])();
      return uVar35;
    case 0x10021f0:
      if ((uVar19 & 0x40) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002230:
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x0100225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002270:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010022a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])((uint)pbVar27[2],uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10022b0:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010022d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 9);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[8]])();
        return uVar35;
      }
      break;
    case 0x10022e0:
      if ((uVar19 & 1) != 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002310:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = (*puVar29 & 0xff00) << 0x10;
      uVar23 = (uint)*puVar29 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002340:
      if ((uVar19 & 1) != 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002370:
      if (uVar20 - 0x1000000 == 0) {
        pbVar27 = pbVar27 + 2;
      }
      else {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      uVar18 = uVar19 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0100238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar20 - 0x1000000;
      puVar26 = (ushort *)(pbVar27 + 1);
      if (uVar18 != 0 && 0x7ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x10023a0:
      if ((uVar19 & 1) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010023d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10023e0:
      *(byte *)((int)puVar29 + -1) = bVar8;
      *(byte *)(puVar29 + -1) = (byte)(uVar22 >> 0x10) | bVar9;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010023fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002410:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 + (uint)(byte)*puVar28 * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002450:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x11);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x10]])();
        return uVar35;
      }
      break;
    case 0x1002480:
      if ((uVar19 & 1) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x10024b0:
      uVar4 = uVar20 | uVar21 >> 8;
      uVar17 = uVar22 | uVar23 >> 8;
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010024ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uRam0b0005a8 & 0xff000000;
      uVar21 = uRam0b0005a8 << 8;
      uVar22 = uRam0b0005ac & 0xff000000;
      uVar23 = uRam0b0005ac << 8;
      uVar24 = uRam0b0005b0;
      puVar26 = (ushort *)(pbVar27 + 2);
      uRam0b0005a8 = uVar4;
      uRam0b0005ac = uVar17;
      uRam0b0005b0 = uVar16;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002500:
      if ((uVar19 & 1) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002530:
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = 0xff000000;
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002550:
      if ((uVar19 & 1) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002590:
                    /* WARNING: Could not recover jumptable at 0x010025a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x300])(uRam0b000584);
      return uVar35;
    case 0x10025b0:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar14 = uVar17 + (uint)(byte)*puVar28 * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar16) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar16)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010025ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002600:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x19);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x18]])();
        return uVar35;
      }
      break;
    case 0x1002630:
      if ((uVar19 & 4) != 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002660:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)*puVar29 << 0x10;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002680:
      if ((uVar19 & 4) != 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010026a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10026b0:
      uVar2 = *puVar29;
      *(byte *)puVar29 = bVar3;
      bVar3 = *(byte *)((int)puVar29 + 1);
      *(byte *)((int)puVar29 + 1) = bVar10;
      uVar18 = uVar19 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x010026d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)CONCAT11(bVar3,(byte)uVar2) << 0x10;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x12ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10026e0:
      if ((uVar19 & 4) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002720:
      *(byte *)((int)puVar29 + -1) = bVar10;
      *(byte *)(puVar29 + -1) = bVar3;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002740:
      uVar14 = uVar4 & (uint)(byte)*puVar28 << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar14 >> 0x18));
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002770:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x21);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x20]])();
        return uVar35;
      }
      break;
    case 0x10027a0:
      if ((uVar19 & 4) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010027c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x10027d0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010027dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uVar16 >> 0x10) + 1);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[uVar16 >> 0x10]])();
        return uVar35;
      }
      break;
    case 0x10027f0:
      if ((uVar19 & 4) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002820:
      uVar24 = uVar22 | uVar23 >> 8;
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar16 & 0xff000000;
      uVar23 = uVar16 << 8;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002850:
      if ((uVar19 & 4) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002890:
                    /* WARNING: Could not recover jumptable at 0x01002898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x200])();
      return uVar35;
    case 0x10028a0:
      uVar14 = uVar4 ^ (uint)(byte)*puVar28 << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar14 >> 0x18));
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010028c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10028d0:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010028ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x29);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x28]])();
        return uVar35;
      }
      break;
    case 0x1002900:
      if ((uVar19 & 0x80) != 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002930:
      uVar16 = uVar19 & 0xffffff28 | *puVar29 & 0xff;
      uVar18 = uVar16 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)(*puVar29 >> 8) << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002960:
      if ((uVar19 & 0x80) != 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002990:
      uRam0b00059c = uRam0b00059c & 0xfffffff3;
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010029a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10029b0:
      if ((uVar19 & 0x80) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010029e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10029f0:
      *(byte *)((int)puVar29 + -1) = bVar5;
      *(byte *)(puVar29 + -1) = bVar1 | (byte)(uVar4 >> 0x10);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002a20:
      uVar14 = uVar4 | (uint)(byte)*puVar28 << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar14 >> 0x18));
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002a50:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x31);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x30]])();
        return uVar35;
      }
      break;
    case 0x1002a80:
      if ((uVar19 & 0x80) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002ab0:
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01002abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = (ushort *)(pbVar13 + (uVar16 >> 0x10));
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002ad0:
      if ((uVar19 & 0x80) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002b00:
      uRam0b00059c = uRam0b00059c | 0xc;
      uRam0b000580 = (int)uVar19 >> 0x10;
                    /* WARNING: Could not recover jumptable at 0x01002b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
      return uVar35;
    case 0x1002b30:
      if ((uVar19 & 0x80) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002b70:
                    /* WARNING: Could not recover jumptable at 0x01002b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x300])(uRam0b000588);
      return uVar35;
    case 0x1002b90:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 + (uint)(byte)*puVar28 * -0x1000000) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar16) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002bd0:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x39);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x38]])();
        return uVar35;
      }
    }
    uVar16 = uRam0b000580;
    pbVar27 = (byte *)((int)puVar26 + -1);
    bVar31 = false;
    uVar19 = uRam0b000580;
    if (0 < (int)uRam0b000580) {
      uRam0b000580 = 0;
      bVar31 = SCARRY4(uVar18,uVar16 * 0x10000);
      uVar18 = uVar18 + uVar16 * 0x10000;
      uVar19 = uVar18;
    }
    uVar4 = uVar14;
    uVar16 = uVar24;
    if (uVar19 == 0 || (int)uVar19 < 0 != bVar31) {
      if ((uRam0b0005d8 & 0x300) == 0) {
        iVar30 = iRam0b0005cc - iRam0b0005d0;
        if (iVar30 != 0 && iRam0b0005d0 <= iRam0b0005cc) {
          if (iVar30 < iRam0b0005d0) {
            iRam0b0005d0 = iVar30;
          }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iRam0b0005cc = iVar30;
          uVar35 = (*(code *)ppuVar12[*pbVar27])();
          return uVar35;
        }
      }
      else {
        if ((uRam0b0005d8 & 0x100) != 0) {
          iVar30 = iRam0b0005dc;
          if (iRam0b0005dc < 1) {
            iVar30 = iRam0b0005d0;
          }
          bVar34 = SBORROW4(iRam0b0005e0,iRam0b0005d0);
          iVar11 = iRam0b0005e0 - iRam0b0005d0;
          bVar31 = iVar11 < 0;
          bVar32 = iVar11 == 0;
          if (bVar32 || iRam0b0005e0 < iRam0b0005d0) {
            uRam0b0005d8 = uRam0b0005d8 | 1;
          }
          do {
            if (bVar32 || bVar31 != bVar34) {
              bVar34 = SCARRY4(iVar11,iVar30);
              iVar11 = iVar11 + iVar30;
              bVar31 = iVar11 < 0;
              bVar32 = iVar11 == 0;
            }
            iRam0b0005e0 = iVar11;
          } while (bVar31 != bVar34);
        }
        if ((uRam0b0005d8 & 0x200) != 0) {
          iVar30 = iRam0b0005e4;
          if (iRam0b0005e4 < 1) {
            iVar30 = iRam0b0005d0;
          }
          bVar34 = SBORROW4(iRam0b0005e8,iRam0b0005d0);
          iVar11 = iRam0b0005e8 - iRam0b0005d0;
          bVar31 = iVar11 < 0;
          bVar32 = iVar11 == 0;
          if (bVar32 || iRam0b0005e8 < iRam0b0005d0) {
            uRam0b0005d8 = uRam0b0005d8 | 2;
          }
          do {
            if (bVar32 || bVar31 != bVar34) {
              bVar34 = SCARRY4(iVar11,iVar30);
              iVar11 = iVar11 + iVar30;
              bVar31 = iVar11 < 0;
              bVar32 = iVar11 == 0;
            }
            iRam0b0005e8 = iVar11;
          } while (bVar31 != bVar34);
        }
        iVar30 = iRam0b0005cc - iRam0b0005d0;
        if (iVar30 != 0 && iRam0b0005d0 <= iRam0b0005cc) {
          iRam0b0005d0 = iVar30;
          if ((uRam0b0005d8 & 0x100) != 0) {
            bVar31 = iRam0b0005e0 == 0;
            iVar11 = iRam0b0005e0;
            if (0 < iRam0b0005e0) {
              iVar11 = iVar30 - iRam0b0005e0;
              bVar31 = iVar30 == iRam0b0005e0;
            }
            if (!bVar31 && iVar11 < 0 == (0 < iRam0b0005e0 && SBORROW4(iVar30,iRam0b0005e0))) {
              iRam0b0005d0 = iRam0b0005e0;
            }
          }
          if ((uRam0b0005d8 & 0x200) != 0) {
            bVar31 = iRam0b0005e8 == 0;
            iVar11 = iRam0b0005e8;
            if (0 < iRam0b0005e8) {
              iVar11 = iRam0b0005d0 - iRam0b0005e8;
              bVar31 = iRam0b0005d0 == iRam0b0005e8;
            }
            if (!bVar31 && iVar11 < 0 == (0 < iRam0b0005e8 && SBORROW4(iRam0b0005d0,iRam0b0005e8)))
            {
              iRam0b0005d0 = iRam0b0005e8;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iRam0b0005cc = iVar30;
          uVar35 = (**(code **)(iRam0b0005ec + (uint)*pbVar27 * 4))();
          return uVar35;
        }
      }
      _DAT_0b000558 = pbVar13;
      uRam0b00055c = uVar14;
      uRam0b000560 = uVar18;
      uRam0b000564 = uVar20;
      uRam0b000568 = uVar21;
      uRam0b00056c = uVar22;
      uRam0b000570 = uVar23;
      uRam0b000574 = uVar24;
      pbRam0b000578 = pbVar27;
      puRam0b00057c = puVar29;
      return CONCAT44(0xb000580,(int)uVar18 >> 0x10);
    }
  } while( true );
}

